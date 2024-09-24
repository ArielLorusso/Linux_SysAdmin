codered.eccouncil.org/courseVideo/hands-on-linux-for-devops-cloud-engineers
https://github.com/ec-council-learning/Hands-on-Linux-for-DevOps-Cloud-Engineers/tree/main

# Chapter 1  Introduction to Linux

## 1.1 What is Linux

Free Open Source Operating System by Linus Tovalsd in 1991 from Unix group post
As an alternative to MiniX a Unix based proprietary Non-free OS
Linus is Open Source so it can be personalized to ones need

    OS:
    Kernell -> System User Space -> Applications

Kernell : Resources & hardware, memory & files

System User : Administration layer for system level tasks, wich run in backround
     shell, deamons, Window managing Envirovment = Desktop

Applications : Software Text editors like vim & Languages like Python

## 1.2 Why use Linux  (6 reasons)

1 Strong security 
    permissions & separations of comcerns
    repositories from trusted sources avoids malicious code

2 Free & Open source
    Audit the source code for security reassons
    Change Source code & contribute


3 Stability
    Update without rebooting
    Open source has les buggs

4 Development Frienly
    Suports every language
    plenty of IDE & Debuggers
    easy to develop for the platfom you work from

5 Drivers included

6 Runs everywhre  IOT 


## 1.3 Where we use Linux

Cloud cumputing : AWS GCS
Interner host:  Websites host  (500 biggest) Google Amazon Instagram etc
Movile : 80% SmartPhones use Andriod
IOT : internet of things
Supercomputers
Virtualization : KVM, Zen & Containners <- Docker

# 2 Overview of DevOps & Cloud

## 2.1 Introduction to DevOps

Definition : Named in 2009 by Patric Dubois  
Methods, Guidelines & Philosofy implementation to ship software

In the past Software develop was 2 teams
Software Developers & Operations

Developers : design and create sodfware Aplication
Operations : deploy and monirot the Applicaion

Developers : lacked knowledge about deployment
Operations : lacked knowledge about how the app was designed

both sides diferent goals

Developers : ship the applications no matter the cost
Operations : keep software stable in all conditions


### PILARS the 3 ways

1) Systems and flow

Workship flow from left to roht & not back and forth
the proces of : 
Plan -> Code  -> Test -> Deploy
(Development) -> (Prodiction)

1) Feedback:

Pass info right to left fast
Early detenction of bugs
Fast bug report to plan solutions

1) Continuous Experimentation & lerning
   
Take risk and continously prooving your process & software

### Benefits

Technical benefits : reduce complexiti, cotinuous production, recovery time
Cultural  benefits : productive teams with colaboratio & shared goals
Business improvements : Heppyer employees and customers

## 2.2 5 DevOps Princibles

CALMS & carry on

1) Culture 
    Culture > strategy 
    example : shared ownership, safe work discussions

2) Automation
    do less manual & be more productive

3) Lean
    Aotonomy & desicions within team driven on data

4) Measurment
    cant make wchanges without knowing present state

5) Shearing
    openness & transparency of the work done

Aply principles where they mede sence and do not forcr them


## 2.3  10 Termonology concepts

1) Configuration Management : CM 
        config resources like servers with code & config files
        should be predivtable  & repitab;e
   
2) Infrastructure as Code : IaC
        Use Code to descrive & manage infrastructure as VM VNet & RDS (Relational DB)
   
3) Continuous Integration : CI
        Merge code on regular cadence built & tested on every commit

4) Continuous Delivery : CD
        All code changes staged to release gated by a manual last step

5) Continuous Deploy :
        All code changes staged to release without user intervention  

6) Continuous Monitoring : CM
        Process that collects data about our system providing feedback

7) Mean Time To Recovery MTTR :
        Average time it takes App or Sys to recover from a failure

8) Idempotent : (concistency)
        Executing a command or process geting the same resoult

9)  Imperative :
        Descrives steps needed to get and end state of a sys

10) Declarative :
        Describes the end state of the sys not how to get there



### Top 4 Abrebiated Terms
CI  & CD
IaC & CM



## 2.4 DevOps Pipeline in 6 Stages

Plan -> Develop -> Build  -> Test -> Release -> Monitor

Plan    : Project Roadmap , Architectur or Infrastructure
          TOOLS :  Jira & Picotal tracker

Develop : Write code using central code repository
          TOOLS : Vim, VsCode & Git

Build   : Pulling the code request and buil it for test
          TOOLS : Jernkis, Containers & AWS Code build

Test    : Built stage is passed trough test, if fail notify
          TOOLS : Jernkis, Cicle Ci & Testing Frameworks

Release : Performance & integration test, if ok pass to release
          TOOLS : Jerking X, AgroCD, AWS code deplay

Monitor : Metrics & data chack for errors or regression
          if something fails it is feedback to a new Plan stage
          TOOLS :



## 2.5 Containers & Orchertration 

how Containers work 
Why use orchestrator

Containers : Prefered way to deliver software in cloud
             Solves it worked on my pc problems
             Allows to Package App+Dependencies = Image (Dockerfile)

Fockerfile Example :

```dockerfile
FROM debian: buster-slim

ENV RUSTUP_HOME=/usr/local/rustup \
    CARGO_HOME=/usr/local/cargo \
    PATH=/usr/local/cargo/bin:$PATH

RUN set -eux; \
    apt-get update; \
    apt-get install -y --no-install-recommends \
        ca-certificates \
        gcc \
        libc6-dev \
        wget \
        ; \
    \

    url="https://static.rust-lang.org/rustup/dist/x86_64-unknown-linux-gnu/rustup-i"
    wget "$url"; \

    chmod +x rustup-init; \
    ./rustup-init -y --no-modify-path-default-toolchain nightly; \
    rm rustup-init; \
    chmod -R a+w $RUSTUP_HOME $CARGO_HOME; \
    rustup --version; \
    cargo --version; \
    rustc --version; \
    \

    apt-get remove -y--auto-remove \
        wget \
        ; \
    rm -rf /var/lib/apt/lists/*;
```

FROM : Base Image to build on top of (ej  Linux Devian) 
ENV : Send ENVIRONMENT variableas as PATH, RUST_HOME, etc
RUN : commands to execute during running

In this example we first donwload some tools lile
wget (software packages retriver)
gcc (GNU C Compuiler)
and others libaries needed to install rust

We download rust, change the permission & install
After verofying instalation with --Version we remove wget

We cam see the use of anidation to recicle commands & options :

    apt-get install -y --no-install-recommends \
        ca-certificates \
        gcc \
        libc6-dev \
        wget \
        ; \
    \

Once ececuted commands will be : 

    apt-get install -y --no-install-recommends  ca-certificates
    apt-get install -y --no-install-recommends  gcc 
    apt-get install -y --no-install-recommends  libc6-dev 
    apt-get install -y --no-install-recommends  wget 


Containers work by using a Linux tecnology called  OS Lvl Virtualization
made by 2 kernells features : Namespaces & Seegroups
This limits what the containner can see and use on a host
Namespaces : restricts global sys resources as CPU Networks & focets 
making it isolated from the Host OS
Seegroups : Manage & mesure limitations as CPU Memory

Namespaces : What Containner can see
Seegroup   : What Containner can use

Orchestration : Manage Many containers Running on diferesn Host woth diferent ports
(Kubernettes) Pods & Clusters managed by a service


## 2.6 Introduction to Cloud Computing

What is it ?
Product or secvice that provides on demand delivery of resources
Servers, DatabBases, Computing,  Artificial inteligence, Storage


3 Major players

AWS  <-- We will use
GCS
Azure

Benefits : 
    Different Technologies
    Scaling Resources (On demand)
    Cost Savings
    Global Reach


## 2.7 Cloud Computing Service Model

3 sercices modesls

1) Infrastructure as a Service IaaS :
        Virtual Machines, Containers , Serverless Computing
        Ej: AWS GCS Asure

2) Platorm  as a Service PaaS :
        Platform gatearround (Franeworks for high lvl app deploy easy ) 
        Ej : AWS Beanstalk , Google App banch

3) Software as a Service SaaS :
        Products like Gmail, GitHub, CircleCI

## 2.8 Cloud Computing Deployment Models

1) Public : All resourser aviable over internet

    easy & convenient but lacks control & security

2) Privated : All resourser owned by the client
   
    Secure & flexible but requires Costly inftastructure

3) Hibrid : A mix, sensitive info Private Serving troung Public via VPN

    Increased latency between Provate & Public cloud Dificult to scale & manage

4) Multi Cloud : uses 2 cloud proivuders to split the resources



# 3 Setting up a Lab

Create a lab envirommnt
    Create AWS Account
    Leatn about Cloud Resources EC2 & VPC
    Crealte a lab with Teraform


## 3.1 Create a AWS Cloud Account :

AWS Account Requirements :
    Email
    Phone
    Credit-Card

https://aws.amazon.com/console/ -> Create AWS Account  ->
https://signin.aws.amazon.com/signup?request_type=register
Root user email address :
AWS account name        :
    -> Verify email address 

Free tier does still require a CreditCard but can be empty


Sign IN -> Rooth user & IAM user
we created Rooth so we ise that one

Enter Email & password to log in

https://us-east-2.console.aws.amazon.com/console/home :

    Services   Search [Alt+S]   CloudShell  Notifications   Settings

### AWS Console Home :

        Recently visited 
            Explore one of these commonly visited AWS services.
            EC2     S3      RDS     Lambda
        Applications (0)
        Welcome to AWS
            Getting started with AWS Learn the fundamentals
            Training & certification Learn from AWS experts 
        AWS Health
            Open issues         (0)
            Scheduled changes   (0)
            Other notifications (0)
        Cost & usage
            Current month costs         Unable to load
            Forecasted month end costs  Unable to load
            Cost breakdown              Unable to load


we search EC2 :
https://us-east-2.console.aws.amazon.com/ec2/home?region=us-east-2#Home:

### EC2 Dashboard :

    Resources
    EC2 Global View

    Resources :
    using following Amazon EC2 resources in the US East (Ohio) Region :
    Instances (running)0    Auto Scaling Group 0   Capacity Reservations 0
    Dedicated Hosts    0    Elastic IPs        0   Instances        0
    Key pairs          0    Load balancers     0   Placement groups 0
    Security groups    1    Snapshots          0   Volumes          0

    Launch instance:
    Service health:

## 3.2 Overview Virtual Private Cloud VPC

https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html

### VPC Fratures

Subnets
Range of IP addresses inside your VPC

IP Addressing
You can assign IPv4 or IPv6 addresses to your VPC

Routing
Route traffic to and from subnets and gateways

Gateways
Connects your virtual network to other ones

VPC Flow Logs
Captures network traffic flowing to and from interfaces in your network


### The VCP Console

https://us-east-2.console.aws.amazon.com/vpcconsole/home

-> Your VPCs

there is allredy one created by default wen we created the account

Every VPC will show following data :


    Name         Owner ID           Tenancy     Default VPC
    -            ############       –           Yes
        
    VPC ID                  State       IPv4 CIDR       IPv6 CIDR   
    vpc-00##############    Available   1##.##.0.0/16   -

    DHCP option set         Main route table        Main network ACL    
    dopt-#################  rtb-#################   acl-#################

And tabs :
    Details      : Shows general info
    Resource map : Shows reltion between Network comonents & data trafic
    CIDRs        : Shows Classless Inter-Domain Routing (IP/Port asignation)
    Flow logs    : Shows captured Netwoek trafic
    Tags         : ADD a name to a group of  Amazon resources
    Integrations :

Tenancy : Default 
    means this VPC are ok running on shared Hardware 
    multiple customers can use same harware

DNS Hostname : Enabled
    multiple instances runing inside VPC 
    haveing their own full equalified domain name


### Terraform AWS configuration

Terraform use cases 
    Infrastructure as code,  Multi-cloud, Manage Virtual images & Kuberbetes

Terraform Documentation :
    https://www.terraform.io/
    https://developer.hashicorp.com/terraform/language
    https://developer.hashicorp.com/terraform/docs/glossary
    https://developer.hashicorp.com/terraform/tutorials
    https://www.geeksforgeeks.org/terraform-syntax-with-examples/

Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform/vpc.tf :
```tf
    resource "aws_vpc" "lab-vpc" {
        cidr_block           = "10.0.0.0/16"
        enable_dns_hostnames = "true"
        instance_tenancy     = "default"

        tags = {
            Name = "lab-vpc"
        }
    }
```
resource  : terraform key word
"aws_vpc" : resource we are using from amazon
"lab-vpc" : name we gave to the resource

cidr_block : IP = 10.0.0.0 / CIDR = 16
        we get 65,534 posible adress in the subnet mask

enable dns = true : find our Virtual Instances by fully qualified domain name
nstance_tenancy = default = we are ok with shared hardware 

TAGS : good practice A name easy to find inside AWS 


## 3.2 Overview of Subnets & Routing Tables

Subnet : Range of IP adresses we can use inside our VPC
    in our case CIDR was 16 wich allows 

    CIDR = 255.  0.  0.  0 = /8
    CIDR = 255.255.  0.  0 = /16
    CIDR = 255.255.255.  0 = /24

    CIDR 8  has 16777216 Hosts Adresses
    CIDR 16 has    65536 Hosts Adresses
    CIDR 24 has      256 Hosts Adresses

    each adress can be prtitioned into sub nets
    each subnet must live within an Aviability Zone AZ

Rout tables : contains rules to control where the network trafic goes
    Trafic can be from Subnets or from Gatewys
    A rule consist on a destination and a target 
    Destination is usually an IP, Target is where the trafic is being sent

### AWS VPC Subnets 

https://us-east-2.console.aws.amazon.com/vpcconsole/home?region=us-east-2#subnets

    Subnets (1/3)
    Last updated   : about 2 hours ago
    Actions : 
        View details
        Create flow log
        Edit subnet settings
        Edit IPv6 CIDRS
        Edit network ACL association
        Edit route table association
        Edit CIDR reservations
        Share subnet
        Manage tags
        Delete subnet
    Create subnet

Subnet 1 :

    Name  Subnet ID      State       VPC       IPv4 CIDR         Available IPv4 addresses
    –     subnet-#####   Available   vpc-###   172.31.16.0/20    4091
        
    Availability Zone   Availability Zone ID    Route table     Network ACL
    us-east-2b          use2-az2                -               acl-######

    Default subnet      Auto-assign public IPv4 address         Auto-assign customer-owned IPv4 address
    Yes                 Yes                                     No
        
    Customer-owned IPv4 pool    Auto-assign IPv6 address        Owner ID
    -                           No                              ############

Subnet 2 :  us-east-2c
Subnet 3 :  us-east-2a   

There are 3 Subnets made by default for my Ohio region, there are 4 in Arizona
Each one is in a diferent aviability zone to be more resiliant to power outages
The CIDR 20 indicates 16000 of the 65000 aviable for CIDR 16 are in use
The ammount of aviable ips for each subnet is 4091


after serlecting a subnet a menu appears :
Details     FlowLogs   RouteTable     Network-ACL   CIDR-reservations   Sharing     Tags

RouteTable :
https://us-east-2.console.aws.amazon.com/vpcconsole/home?region=us-east-2#RouteTables:

Details :

    Route table: rtb-############           Edit route table association
    Routes (2)                              Filter routes

    Destination             Target
    1##.##.0.0/16           local
    0.0.0.0/0               igw-############


0.0.0.0/0 : Anywhere, Any IP Adress
igw-##### : Will be sent to our Interner GateWay   ( IGW )  

1##.##.0.0/16 : Defaul IP adress of our default VPC 1st Subnet
local         : Keep it local in between this VPS instances & route table


Subnet Asociations :

rtb-####### :

        Tags
    Explicit subnet associations (0):                   Edit subnet associations
    Name    Subnet-ID   IPv4-CIDR   IPv6-CIDR 

    Subnets without explicit associations (3) :         Edit subnet associations


### subnet Terraform file

Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform/subnet.tf :

```tf
    resource "aws_subnet" "lab-subnet-public-1" {
        vpc_id                  = aws_vpc.lab-vpc.id
        cidr_block              = "10.0.1.0/24" // 255 hosts
        map_public_ip_on_launch = "true"
        availability_zone       = "${var.AWS_REGION}a"

        tags = {
            Name = "lab-subnet-public-1"
        }
    }
# you would add the other subnets for AZ(Arizona) B and C below 
```

255 hosts   are named  lab-subnet-public-1 
map_public_ip_on_launch : any EC2 instance asking for public IP will get one asigned

"${var.AWS_REGION}a" : first aviability zone 'a' for our region


### Route Terraform file

Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform/route.tf :

```tf
# create a custom REUT TABLE for public subnets
resource "aws_route_table" "lab-public-crt" {
  vpc_id = aws_vpc.lab-vpc.id
  route {
    cidr_block = "0.0.0.0/0" // subnets can connect everywhere
    gateway_id = aws_internet_gateway.lab-igw.id
  }

  tags = {
    Name = "lab-public-crt"  // Custom Route Table
  }
}


# route table association for the public SUBNETS
resource "aws_route_table_association" "lab-crta-public-subnet-1" {
  subnet_id      = aws_subnet.lab-subnet-public-1.id
  route_table_id = aws_route_table.lab-public-crt.id
}
```


## 3.3 Overview of Security Groups & Gateways

## 3.4 EC2 Overview





