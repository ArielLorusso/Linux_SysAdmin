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

FROM : Base Image to build on top of (eg : Linux Devian) 
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
        eg : AWS GCS Asure

2) Platorm  as a Service PaaS :
        Platform gatearround (Franeworks for high lvl app deploy easy ) 
        eg : AWS Beanstalk , Google App banch

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

https://console.aws.amazon.com/console/home :

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
https://console.aws.amazon.com/ec2/home?region=us-east-2#Home:

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

https://console.aws.amazon.com/vpcconsole/home

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
```t
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


## 3.3 Overview of Subnets & Routing Tables

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

https://console.aws.amazon.com/vpcconsole/home#subnets

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
https://console.aws.amazon.com/vpcconsole/home#RouteTables:

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

```t
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

```t
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


## 3.4 Overview of Security Groups & Gateways

Security Groups : rules control in/outbound trafic   
    eg: allow/denny SSH HTTP connections

    statefull : allow trafic only from allredy established connections

Intenet Gateways : Highly aviable AWS resource that enhables internet access for VPC
    we only need 1 for each VPC 
    it supports both TPv4 & IPv6

Our Plan :
1) Review Security Group   inside the AWS console
2) Review Internet Gateway inside the AWS console
3) Open the security_group.tf file that creates our Security Group
4) Open the igw.tf file that creates our Internet Gateway

### AWS VPS Security groups :

https://console.aws.amazon.com/vpcconsole/home#SecurityGroups:


    Actions :
        View details
        Edit Inbound rules
        Edit outbound rules
        Manage tags
        Manage stale rules
        Copy to new security group
        Delete security groups

after selecting a Security group we see a menu ...

    sg-################# - default : 
        Details     Inbound-rules   Outbound-rules   Tags


Inbound rules (1) :                       Manage tags     Edit inbound rules

    Name       Security-group-rule-ID      IP-version      Type            Protocol
	–          sgr-#################       –               All-traffic     All
    Port-range  Source                     Description   
    All        gr-#################        -


    Type -> All trafic  + Protocol -> All (TCP+UDP) + Port-range -> All
    If source of packet comes from this Security group 
    the conection can pass trafic freely back and forth


### inbound security rules

    Name    Security_group_rule_ID   IP_version  Type           Protocol    
	–       sgr-#################    IPv4        All traffic    All
    
    Port_range      Source                  Description
    All             sg-####### / default    –


Edit inbound security rules:
https://console.aws.amazon.com/vpcconsole/home#ModifyInboundSecurityGroupRules:securityGroupId=sg-#####

    Security_group_rule_ID  Type    Protocol    Port-range    Source    Description...
    
    -> Add rule <-

    Source :
        Custom
        Anywhere IPv4
        Anywhere IPv6
        My IP
    Type :
        TCP (SSH)       Port 22 
        TCP (HTTP)      Port 80
        TCP (HTTPS)     Port 443
        TCP	(MS SQL)    Port 1433 
        PosgreSQL
        Custom ICMP     
        TCP	Protocol 6	Port 53
        UDP	Protocol 17	Port 53
        SSH     SMHP        IMAP
        POP3    LADAP       SMTPS
        NFS     RDP         SMB
        Redshift    SQSLH/Cassandra
        INFO -> https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-rules-reference.html?icmpid=docs_ec2_console
        

### Outbound Security rules

    Name    Security_group_rule_ID   IP_version  Type           Protocol    
	–       sgr-#################    IPv4        All traffic    All
    
    Port_range      Destination      Description
    All             0.0.0.0/0        –

Edit Outbound rules :

https://console.aws.amazon.com/vpcconsole/home#ModifyOutboundSecurityGroupRules:securityGroupId=sg-0b9b6ae0b56799608

    Security_group_rule_ID  Type    Protocol    Port-range    Source    Description...
    
    -> Add rule <-      has same funtionality as imbound rules but this will aplly for internet

    rule is same as inboud EXCEPT :
        Destination : 0.0.0.0/0  (Any destination)
        IP-version : IPv4        (Any destination must be IPv4 )
        Type    : All trafic     (Any destination IPv4  is ALLOWED )

if we did not have an outbound security rule trafic would not be allowed
we couldnt update OS or packages couse VPS would have acces to internet

### Imternet Gatewat

https://console.aws.amazon.com/vpcconsole/home#igws:


Internet gateways (1/1):                Actions         Create internet gateway

Name    Internet gateway ID     State       VPC ID              Owner
–       igw-################    Attached    vpc-0###########    ###############

### Terraform Security groups 

```t
# security group
resource "aws_security_group" "allow_SSH_HTTP" {
  name        = "allow_SSH_HTTP"
  description = "Allow SSH and HTTP inbound traffic"
  vpc_id      = aws_vpc.lab-vpc.id

  egress {                              // OUT-BOUND
    from_port   = 0                         // Any PORT
    to_port     = 0
    protocol    = -1                        // Any Protocol
    cidr_blocks = ["0.0.0.0/0"]             // Any IP
  }

  ingress {                             // IN-BOUND SSH
    description = "SSH from VPC"
    from_port   = 22
    to_port     = 22
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  ingress {                             // IN-BOUND 
    description = "HTTP from VPC"
    from_port   = 80
    to_port     = 80
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  tags = {
    Name = "ssh and HTTP allowed"
  }
}

```
### Terraform Internet Gateway

```t
# IGW (Internet Gateway)
resource "aws_internet_gateway" "lab-igw" {
  vpc_id = aws_vpc.lab-vpc.id

  tags = {
    Name = "lab-igw"
  }
}
```


## 3.5 EC2 Overview

Elastic Cloud Computing = EC2

Elastic Scalable virtual servers on demand
Many different OSs to choose from Linux, Mac, Win..
Can choose different CPU, Memory, and Storage configurations
Offers Pay on Demand or Reserved pricing (significant descount)

### EC2 in AWS console

https://console.aws.amazon.com/ec2/home

EC2 Dashboard:

    Instances
    Images
    Elastic Block Store
    Network & Security
    Load Balancing
    Auto Scaling


    Resources :
        Instances (running)     0
        Instances               0
        Security groups         1
        Auto Scaling Groups     0
        Capacity Reservations   0
        Dedicated Hosts         0
        Elastic IPs             0
        Key pairs               0
        Load balancers          0
        Placement groups        0
        Snapshots               0
        Volumes                 0
    EC2 Free Tier Info   ->   EC2 free tier offers in use   https://console.aws.amazon.com/billing/home#/freetier
    Launch instance
    Service health
    Account attributes
    Scheduled events
    Migrate a server

https://console.aws.amazon.com/ec2/home#Instances

Connect         Instance state              Actions         Launch instances

No instances: 
        
    Instance-ID     Instance-state      Instance-type       Status-check
        
    Alarm-status    Availability-Zone   Public-IPv4-DNS     Public-IPv4-address
        
    Elastic-IP      IPv6-IPs            Monitoring          Security-group-name
        
    Key-name        Launch-time         Platform            Name


 -> Launch instances <-
https://console.aws.amazon.com/ec2/home#LaunchInstances:

Free tier: In your first year includes 
    750 hours of t2.micro,
    30 GiB of EBS storage,
    2 million IOs, 
    1 GB of snapshots
    100 GB of bandwidth

Name and tags :

    Name
    -

Application and OS Images :

    Search (1000+ OS Images)
    Amazon Linux,   MacOS,  Ubuntu, Windows,    Red Hat, SUSE,  Debian

    Architecture    Boot mode       AMI ID      Username
    64-bit (x86)    uefi-preferred  ami-####    ec2-user

Key pair (login):

    You can use a key pair to securely connect to your instance. 
    Ensure that you have access to the selected key pair before you launch.

    Key pair name - required            Create new key pair

Instance type :

    t2.micro        Free tier eligible
        1 vCPU      1 GiB Memory        Current generation: true
        On-Demand Linux base pricing:   0.0116 USD per Hour
        6 CPU Credits / hour = 6 min 100% (Burst) = 60 min 10% (regular)

    https://aws.amazon.com/ec2/instance-types/
    https://www.cloudzero.com/blog/aws-instance-types/

        General Porpouse :
            a1.medium, a1.large, a1.xlarge, a1.2xlarge, a1.4xlarge
            T4g, T3, T3a, T2  (Burstable Performance Instances )
            M7g, M6g, M6i, M6in, M6a, M5, M5n, M5zn, M5a, M4
        Computational :
            C7g, C7gn, C6i, C6in, C6a, C6g, C6gn, C5, C5n, C5a, C4
        Memory Oprimized:
            X1, X1e, X2gd, X2idn, X2iedn, X2iezn
            R5, R5a, R5b, R5n, R6g, R6i, R6in, R6a, R7g, R7iz
        Accelerated (GPU):
            Vt1, F1,       G3, G4ad, G4dn, G5, G5g, 
            Inf1, Inf2, Trn1, DL1,      P2, P3, P4

Network settings:

    Network         Subnet          Auto-assign public IP
    vpc-####        No preference   Enable

    Firewall                   Allow SSH traffic from   Allow HTTPS from the internet
    Create security group      Anywhere 0.0.0.0/0       no

            Network : vpc-#### (Has same value as our default VPC)
            The default VPC is the only one yet, will add more later

Configure storage:

    1x  8GiB  gp3 SSD              Root volume (Not encrypted)
    Add new volume

Advanced details:

    Domain directory    IAM instance profile    Hostname type
    Select              Select                  IP name

    Instance auto-recovery  Shutdown behavior   Elastic GPU     
    Select                  Select              Stop


 -> Cancel <-     Launch instance




### EC2 terraform file

Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform/ec2.tf :
```t
resource "aws_instance" "lab1" {
  ami           = var.AMI               
                # AMI variable we made inside VAR file
  instance_type = "t2.micro"
                # Free tier 
  # subnet
  subnet_id = aws_subnet.lab-subnet-public-1.id     
                # pulling id from name we gave the subnet

  # Security Group
  vpc_security_group_ids = ["${aws_security_group.allow_SSH_HTTP.id}"]
                # an array of security groups with string interpolation
  # the Public SSH key
  key_name = aws_key_pair.lab-region-key-pair.id
                # only uploads the public key, we keep the prvate
  # AZ us-west-2a
  availability_zone = "${var.AZ}"
                # hardcoded AZ in the VAR file
  # We want a public IP
  associate_public_ip_address = true
                # we want to have public IP

  root_block_device {
    delete_on_termination = true    # EC2 deleted -> no root decvice left  ( Money & Security reasons)
  #  iops                  = 100
    volume_size           = 10
    volume_type           = "gp2"
  }
  tags = {
    Name        = "lab1"        # Name of EC2 instance
    Environment = "LAB"         # Another tag for grouping pourposes
  }
}

#  KEY PAIR
resource "aws_key_pair" "lab-region-key-pair" {
  key_name   = "lab-region-key-pair"
  public_key = file(var.PUBLIC_KEY_PATH)    # harcoded in vars.tf
}

# 
output "ec2-lab-instance" {
  value = aws_instance.lab1.public_ip
}
```


### VARS Terraform file

Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform/vars.tf :

```t
# contains variables used in the other tf files.
variable "AWS_REGION"       {  default = "us-west-2" }
# AZ we will use for lab
# variable "AZ"               {  default = "us-west-2a"}
variable "AZ"               {  default = "us-east-2a"}
# Use current directory for private key file
variable "PRIVATE_KEY_PATH" {  default = "lab-key-pair"}
# Use current directory for public key file
variable "PUBLIC_KEY_PATH"  {  default = "lab-key-pair.pub"}
# Default Linux base image we will use (Amazon Linux 2)
variable "AMI"              {  default = "ami-094125af156557ca2"}
```

## 3.6 Create Your Lab

### INSTALL Terraform

https://developer.hashicorp.com/terraform/tutorials/aws-get-started/install-cli

Ensure that your system is up to date, nstalled the gnupg, software-properties-common, and curl
```sh
    $ sudo apt-get update && sudo apt-get install -y gnupg software-properties-common
```
Install the HashiCorp GPG key.
```sh
    $ wget -O- https://apt.releases.hashicorp.com/gpg | \
    gpg --dearmor | \
    sudo tee /usr/share/keyrings/hashicorp-archive-keyring.gpg > /dev/null
```

Verify the key's fingerprint.
```sh
$ gpg --no-default-keyring \
--keyring /usr/share/keyrings/hashicorp-archive-keyring.gpg \
--fingerprint
```

The gpg command will report the key fingerprint:
```sh
/usr/share/keyrings/hashicorp-archive-keyring.gpg
-------------------------------------------------
pub   rsa4096 XXXX-XX-XX [SC]
AAAA AAAA AAAA AAAA
uid           [ unknown] HashiCorp Security (HashiCorp Package Signing) <security+packaging@hashicorp.com>
sub   rsa4096 XXXX-XX-XX [E]
Tip

gpg: /home/ariel/.gnupg/trustdb.gpg: trustdb created
```

Refer to the Official Packaging Guide for the latest public signing key. You can also verify the key on Security at HashiCorp under Linux Package Checksum Verification.
Add the official HashiCorp repository to your system. The lsb_release -cs command finds the distribution release codename for your current system, such as buster, groovy, or sid.
```sh
$ echo "deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] \
https://apt.releases.hashicorp.com $(lsb_release -cs) main" | \
sudo tee /etc/apt/sources.list.d/hashicorp.list
```
$(lsb_release -cs)  migth need a change if Os is not Ubuntu
Download the package information from HashiCorp.

```sh
$ sudo apt update
```
Install Terraform from the new repository.
```sh
$ sudo apt-get install terraform
```

### Verify the installation
```sh
    $ terraform -help

    Usage: terraform [-version] [-help] <command> [args]

    The available commands for execution are listed below.
    The most common, useful commands are shown first, followed by
    less common or more advanced commands. If you're just getting
    started with Terraform, stick with the common commands. For the
    other commands, please read the help and docs before usage.
    ##...
```


### AWS CREDENTIAL

AWS Security & Crededntials:
https://us-east-1.console.aws.amazon.com/iam/home?region=us-east-1#/security_credentials

Identity and Access Management (IAM) :

Account details :                        Edit account name, email, and password
Account name        Email address       AWS account ID       Canonical user ID


Multi-factor authentication (MFA) (0) :      Remove,  Resync, Assign MFA device
Type        Identifier      Certifications      Created on


Access keys (0) :                                            Create access key
Use access keys to send programmatic calls from the AWS CLI,PowerShell, SDKs, API calls. 
You can have a maximum of two access keys (active or inactive) at a time.

Access key ID       Created on      Access key last used    Region last used    
Service last used   Status



https://console.aws.amazon.com/iam/home/security_credentials/access-key-wizard
https://docs.aws.amazon.com/IAM/latest/UserGuide/introduction.html

Retrieve access key             
    Access key
    If you lose or forget your secret access key, you cannot retrieve it. 
    Instead, create a new access key and make the old key inactive.

    Access key best practices
    Never store your access key in plain text, in a code repository, or in code.
    Disable or delete access key when no longer needed.
    Rotate access keys regularly.

    Download .csv file      Done

Access keys (1)
Access-key-ID   Created-on    Status   Access-key-last-used    Region last used
#############   1 hour ago    Active   None                    N/A



### INSTALL AWS CLI 

https://docs.aws.amazon.com/es_es/cli/latest/userguide/getting-started-install.html


```sh
curl "https://awscli.amazonaws.com/awscli-exe-linux-x86_64.zip" -o "awscliv2.zip"
unzip awscliv2.zip
sudo ./aws/install
sudo rm awscliv2.zip
```

```sh
aws configure
    AWS Access Key ID [None]: 
``` 
we put the rootkey.csv Key

```sh
aws configure
    AWS Access Key ID     [None]: ####################
    AWS Secret Access Key [None]: ########################################
    Default region name   [None]: us-east-2
    Default output format [None]: 

```
BEWARE :  put YOUR  region name !!

```sh
$ aws configure list
      Name                    Value             Type        Location
      ----                    -----             ----        --------
   profile                <not set>             None        None
access_key     ****************EKXN shared-credentials-file    
secret_key     ****************Z6/q shared-credentials-file    
    region                us-west-2      config-file        ~/.aws/config

```

## Create SSH KEY-PAIR (RSA key for EC2) :

we create public /private ket pair

```sh
~/.../Linux_SysAdmin/Hands-on-Linux-for-DevOps-Cloud-Engineers
cd lab-terraform
~/.../Linux_SysAdmin/Hands-on-Linux-for-DevOps-Cloud-Engineers/lab-terraform
./create_ssh_keys.sh
```
create_ssh_keys.sh:
```sh
ssh-keygen -f ./lab-key-pair -C "codered-demo"
```

### Terraform init 

FAIL (wrong directory)
 ~/Documents/Linux_SysAdmin/Hands-on-Linux-for-DevOps-Cloud-Engineers 

```sh
terraform init
Terraform initialized in an empty directory!

The directory has no Terraform configuration files. You may begin working
with Terraform immediately by creating Terraform configuration files.
```
we need to do the init in a directory wich allredy contains terraform files

```sh
cd lab-terraform/

terraform init
Initializing the backend...
Initializing provider plugins...
- Finding latest version of hashicorp/aws...
- Installing hashicorp/aws v5.69.0...
- Installed hashicorp/aws v5.69.0 (signed by HashiCorp)
Terraform has created a lock file .terraform.lock.hcl to record the provider
selections it made above. Include this file in your version control repository
so that Terraform can guarantee to make the same selections by default when
you run "terraform init" in the future.

Terraform has been successfully initialized!

You may now begin working with Terraform. Try running "terraform plan" to see
any changes that are required for your infrastructure. All Terraform commands
should now work.

If you ever set or change modules or backend configuration for Terraform,
rerun this command to reinitialize your working directory. If you forget, other
commands will detect it and remind you to do so if necessary.

```



terraform init 
    makes      file :  .terraform.lock.hcl  
    makes directory :  .terraform  
    makes      file :  .terraform/terraform-provider-aws_v5.69.0_x5
    makes      file :  .terraform/lisence



### Terraform plan

```sh
terraform plan

Terraform used the selected providers to generate the following execution plan.
Resource actions are indicated with the following symbols:
  + create

Terraform will perform the following actions:

  # aws_instance.lab1 will be created
  + resource "aws_instance" "lab1" {
      + ami                                  = "ami-################"
      + arn                                  = (known after apply)
      + associate_public_ip_address          = true
      + availability_zone                    = "us-east-2a"
      + cpu_core_count                       = (known after apply)
      + cpu_threads_per_core                 = (known after apply)
      + disable_api_stop                     = (known after apply)
      + disable_api_termination              = (known after apply)
      + ebs_optimized                        = (known after apply)
      + get_password_data                    = false
      + host_id                              = (known after apply)
      + host_resource_group_arn              = (known after apply)
      + iam_instance_profile                 = (known after apply)
      + id                                   = (known after apply)
      + instance_initiated_shutdown_behavior = (known after apply)
      + instance_lifecycle                   = (known after apply)
      + instance_state                       = (known after apply)
      + instance_type                        = "t2.micro"
      + ipv6_address_count                   = (known after apply)
      + ipv6_addresses                       = (known after apply)
      + key_name                             = (known after apply)
      + monitoring                           = (known after apply)
      + outpost_arn                          = (known after apply)
      + password_data                        = (known after apply)
      + placement_group                      = (known after apply)
      + placement_partition_number           = (known after apply)
      + primary_network_interface_id         = (known after apply)
      + private_dns                          = (known after apply)
      + private_ip                           = (known after apply)
      + public_dns                           = (known after apply)
      + public_ip                            = (known after apply)
      + secondary_private_ips                = (known after apply)
      + security_groups                      = (known after apply)
      + source_dest_check                    = true
      + spot_instance_request_id             = (known after apply)
      + subnet_id                            = (known after apply)
      + tags                                 = {
          + "Environment" = "LAB"
          + "Name"        = "lab1"
        }
      + tags_all                             = {
          + "Environment" = "LAB"
          + "Name"        = "lab1"
        }
      + tenancy                              = (known after apply)
      + user_data                            = (known after apply)
      + user_data_base64                     = (known after apply)
      + user_data_replace_on_change          = false
      + vpc_security_group_ids               = (known after apply)

      + capacity_reservation_specification (known after apply)

      + cpu_options              (known after apply)
      + ebs_block_device         (known after apply)
      + enclave_options          (known after apply)
      + ephemeral_block_device   (known after apply)
      + instance_market_options  (known after apply)
      + maintenance_options      (known after apply)
      + metadata_options         (known after apply)
      + network_interface        (known after apply)
      + private_dns_name_options (known after apply)

      + root_block_device {
          + delete_on_termination = true
          + device_name           = (known after apply)
          + encrypted             = (known after apply)
          + iops                  = (known after apply)
          + kms_key_id            = (known after apply)
          + tags_all              = (known after apply)
          + throughput            = (known after apply)
          + volume_id             = (known after apply)
          + volume_size           = 10
          + volume_type           = "gp2"
        }
    }

  # aws_internet_gateway.lab-igw will be created
  + resource "aws_internet_gateway" "lab-igw" {
      + arn      = (known after apply)
      + id       = (known after apply)
      + owner_id = (known after apply)
      + tags     = {
          + "Name" = "lab-igw"
        }
      + tags_all = {
          + "Name" = "lab-igw"
        }
      + vpc_id   = (known after apply)
    }

  # aws_key_pair.lab-region-key-pair will be created
  + resource "aws_key_pair" "lab-region-key-pair" {
      + arn             = (known after apply)
      + fingerprint     = (known after apply)
      + id              = (known after apply)
      + key_name        = "lab-region-key-pair"
      + key_name_prefix = (known after apply)
      + key_pair_id     = (known after apply)
      + key_type        = (known after apply)
      + public_key      = "ssh-rsa #######( 3000 # )##### = codered-demo"
      + tags_all        = (known after apply)
    }

  # aws_route_table.lab-public-crt will be created
  + resource "aws_route_table" "lab-public-crt" {
      + arn              = (known after apply)
      + id               = (known after apply)
      + owner_id         = (known after apply)
      + propagating_vgws = (known after apply)
      + route            = [
          + {
              + cidr_block                 = "0.0.0.0/0"
              + gateway_id                 = (known after apply)
                # (11 unchanged attributes hidden)
            },
        ]
      + tags             = {
          + "Name" = "lab-public-crt"
        }
      + tags_all         = {
          + "Name" = "lab-public-crt"
        }
      + vpc_id           = (known after apply)
    }

  # aws_route_table_association.lab-crta-public-subnet-1 will be created
  + resource "aws_route_table_association" "lab-crta-public-subnet-1" {
      + id             = (known after apply)
      + route_table_id = (known after apply)
      + subnet_id      = (known after apply)
    }

  # aws_security_group.allow_SSH_HTTP will be created
  + resource "aws_security_group" "allow_SSH_HTTP" {
      + arn                    = (known after apply)
      + description            = "Allow SSH and HTTP inbound traffic"
      + egress                 = [
          + {
              + cidr_blocks      = [
                  + "0.0.0.0/0",
                ]
              + from_port        = 0
              + ipv6_cidr_blocks = []
              + prefix_list_ids  = []
              + protocol         = "-1"
              + security_groups  = []
              + self             = false
              + to_port          = 0
                # (1 unchanged attribute hidden)
            },
        ]
      + id                     = (known after apply)
      + ingress                = [
          + {
              + cidr_blocks      = [
                  + "0.0.0.0/0",
                ]
              + description      = "HTTP from VPC"
              + from_port        = 80
              + ipv6_cidr_blocks = []
              + prefix_list_ids  = []
              + protocol         = "tcp"
              + security_groups  = []
              + self             = false
              + to_port          = 80
            },
          + {
              + cidr_blocks      = [
                  + "0.0.0.0/0",
                ]
              + description      = "SSH from VPC"
              + from_port        = 22
              + ipv6_cidr_blocks = []
              + prefix_list_ids  = []
              + protocol         = "tcp"
              + security_groups  = []
              + self             = false
              + to_port          = 22
            },
        ]
      + name                   = "allow_SSH_HTTP"
      + name_prefix            = (known after apply)
      + owner_id               = (known after apply)
      + revoke_rules_on_delete = false
      + tags                   = {
          + "Name" = "ssh and HTTP allowed"
        }
      + tags_all               = {
          + "Name" = "ssh and HTTP allowed"
        }
      + vpc_id                 = (known after apply)
    }

  # aws_subnet.lab-subnet-public-1 will be created
  + resource "aws_subnet" "lab-subnet-public-1" {
      + arn                                            = (known after apply)
      + assign_ipv6_address_on_creation                = false
      + availability_zone                              = "us-west-2a"
      + availability_zone_id                           = (known after apply)
      + cidr_block                                     = "10.0.1.0/24"
      + enable_dns64                                   = false
      + enable_resource_name_dns_a_record_on_launch    = false
      + enable_resource_name_dns_aaaa_record_on_launch = false
      + id                                             = (known after apply)
      + ipv6_cidr_block_association_id                 = (known after apply)
      + ipv6_native                                    = false
      + map_public_ip_on_launch                        = true
      + owner_id                                       = (known after apply)
      + private_dns_hostname_type_on_launch            = (known after apply)
      + tags                                           = {
          + "Name" = "lab-subnet-public-1"
        }
      + tags_all                                       = {
          + "Name" = "lab-subnet-public-1"
        }
      + vpc_id                                         = (known after apply)
    }

  # aws_vpc.lab-vpc will be created
  + resource "aws_vpc" "lab-vpc" {
      + arn                                  = (known after apply)
      + cidr_block                           = "10.0.0.0/16"
      + default_network_acl_id               = (known after apply)
      + default_route_table_id               = (known after apply)
      + default_security_group_id            = (known after apply)
      + dhcp_options_id                      = (known after apply)
      + enable_dns_hostnames                 = true
      + enable_dns_support                   = true
      + enable_network_address_usage_metrics = (known after apply)
      + id                                   = (known after apply)
      + instance_tenancy                     = "default"
      + ipv6_association_id                  = (known after apply)
      + ipv6_cidr_block                      = (known after apply)
      + ipv6_cidr_block_network_border_group = (known after apply)
      + main_route_table_id                  = (known after apply)
      + owner_id                             = (known after apply)
      + tags                                 = {
          + "Name" = "lab-vpc"
        }
      + tags_all                             = {
          + "Name" = "lab-vpc"
        }
    }

Plan: 8 to add, 0 to change, 0 to destroy.

Changes to Outputs:
  + ec2-lab-instance = (known after apply)

──────────────────────────────────────────────────────────────────────────────────────────────

Note: You didn't use the -out option to save this plan, 
so Terraform can't guarantee to take exactly these actions 
if you run "terraform apply" now.

```

at the end we see 
    Plan: 8 to add, 0 to change, 0 to destroy.

1) INSTANCE         aws_instance.lab1
2) GATEWAY          aws_internet_gateway.lab-igw 
3) KEY_PAIR         aws_key_pair.lab-region-key-pair 
4) ROUTE TABLE      aws_route_table.lab-public-crt
5) TABLE ASOCIATION aws_route_table_association.lab-crta-public-subnet-1
6) SECURITY RULES   aws_security_group.allow_SSH_HTTP
7) SUBNET           aws_subnet.lab-subnet-public-1
8) VPS              aws_vpc.lab-vpc 

things added     will be shown with a +
things destroyed will be shown with a -

Once we chack the plan we can apply it to AWS

terraform plan 
    makes      file :  terraform.tfstate


```sh
terraform apply

Terraform used the selected providers to generate the following execution plan.
Resource actions are indicated with the following symbols:
  + create

Terraform will perform the following actions:

  # aws_instance.lab1 will be created
  + resource "aws_instance" "lab1" {
       ......
        .....
        .....
          + "Name" = "lab-vpc"
        }
    }

Plan: 8 to add, 0 to change, 0 to destroy.

Changes to Outputs:
  + ec2-lab-instance = (known after apply)

Do you want to perform these actions?
  Terraform will perform the actions described above.
  Only 'yes' will be accepted to approve.

  Enter a value: 
```


```sh
ssh -i lab-key-pair ec2-user@44.243.225.56 

The authenticity of host IP'###.###.###.### ' can't be established.
ED25519 key fingerprint is SHA256:############################################.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '###.###.###.### ' (ED25519) to the list of known hosts.
Enter passphrase for key 'lab-key-pair': 

       __|  __|_  )
       _|  (     /   Amazon Linux 2 AMI
      ___|\___|___|

https://aws.amazon.com/amazon-linux-2/
54 package(s) needed for security, out of 92 available
Run "sudo yum update" to apply all updates.
```

# 4 Understanding Linux FileSystem  

Comand 
Man = Manual pages
hier = hierarchy
```sh
man hire        #   hier - description of the filesystem hierarchy
    NAME   DESCRIPTION
        
    /       This is the |ROOT   directory where the whole tree starts.

    /bin    Contains |binary |executable programs which are needed in single user mode
            , and to bring the system up or repair it.

    /sbin   Like /bin, this directory holds commands needed to boot the |system
            , but which are usually |not |executed by normal |users.


    /boot   Contains static files for the |boot |loader .  
            , holds only the files which are needed during the  boot  process.   
            , The  map  installer  and  configuration  files should go to 
            , /sbin and /etc.  The operating system kernel (initrd for example) 
            , must  be located in either / or /boot.

    /dev    Special  or  device files , which refer to |physical-devices.  See  mknod(1).

    /etc    Contains |configuration-files which are  local  to  the  machine.
            , Some larger |software-packages, like |X11, can have their own subdirectories 
            , below /etc.  Site-wide configuration  files may be placed here or in /usr/etc. 

    /home   On  machines  with |home directories for |users, these are usually
            , beneath this directory, directly or not.  The structure of  this
            , directory depends on local administration decisions (optional).

    /lib    Should hold those |shared-libraries that are necessary 
            ,  to |boot the system and to run the commands in the root filesystem.

    /media  Contains |mount |points for |removable-media such as |CD & DVD disks  or |USB sticks.
            , On systems where more than one device exists for mounting a certain type of media, 
            , mount directories  can be created by appending a digit to the name of those available above
            , starting with '0', but the unqualified name must also exist.


    /mnt   A |mount  point  for  a  temporarily  mounted filesystem. 
            , In some distributions, /mnt contains subdirectories intended 
            , to be  used  as  mount  points  for  several  temporary  filesystems.

    /opt   Should  contain  add-on  packages  that contain  static files.

    /proc  This is a |mount-point for the proc  filesystem,  which  provides
           , information  about  running  processes  and  the  kernel.   This
           , pseudo-filesystem is described in more detail in proc(5).

    /root  Usually the |home directory for the  |root-user (optional).

    /run   Contains |information which describes the system  since it was booted.
           , Once this purpose was served by /var/run and programs may continue to use it.

    /sys   This  is  a |mount point for the |sysfs filesystem, which provides
           , information about the kernel like /proc, but better  structured,
           , following the formalism of kobject infrastructure.

    /tmp   This  directory  contains  |temporary  files which may be deleted
           , with no notice, such as by a regular job or at system boot up.

    /usr   Usually mounted from a |separate-partition.  
           , It should  hold  only : shareable , |read-only data, 
           , so that it can be mounted by various machines running Linux. 

```

```sh
ariel @ ariel-All-Series $ ls /         # show the list of directories
        bin    data  home   lib64       media  proc  sbin  swapfile  usr
        boot   dev   lib    libx32      mnt    root  snap  sys       var
        cdrom  etc   lib32  lost+found  opt    run   srv   tmp
```
```sh
[ec2-user@ip-10-0-1-220 /]$ ls /
    bin  boot  dev   etc  home  lib  lib64  local  media  mnt  
    opt  proc  root  run  sbin  srv  sys    tmp    usr    var
```

we can see our EC2-Linux has less directories
    data, cdrom, lib32, libx32, snap,  swapfile ... are not there

The /proc directory is a virtual filesystem in Linux 
it dynamically stores information about currently running processes.

```sh
ariel @ ariel-All-Series $  ls /proc      # show the list of process  some are numbers some are words
1      152    18798  2338   28588  3363   49773  70     acpi                 
10     15250  18813  2340   286    3391   5      70068  asound
10278  15252  18986  2358   287    34     50     70069  bootconfig
10282  15254  18995  2365   288    3409   50131  70231  buddyinfo
1040   15256  18996  2375   289    3418   502    708    bus                  
1099   15257  19     2383   290    3469   50591  72     cgroups              
11     15264  190    2384   29620  347    51     73     cmdline              
1100   15265  1901   2385   29622  352    51034  74     consoles             
1106   154    1902   24     29637  358    51058  75     cpuinfo              
1110   155    1909   2420   298    359    51150  76     crypto               
1111   157    1910   2438   299    36     52     78     devices              
1118   159    1911   2439   3      360    536    79     diskstats            
1124   16     19125  2467   30     361    53657  8      dma         
1133   160    1914   2481   300    362    54     80     driver         
1134   16032  1918   2490   30920  36259  55     81     dynamic_debug         
1147   161    19395  2495   31     36260  56     82     execdomains         
1148   162    2      25     3102   363    57     84     fb         
1150   163    20     2525   3106   364    58     85     filesystems         
1157   16331  202    2529   3107   36561  58584  86     fs         
1162   1656   207    2556   3108   36562  58952  87     interrupts         
1164   1657   21     256    31082  37     6      89     iomem         
1166   1662   2142   2568   3110   3701   60     90     ioports         
1169   1665   2147   26     3112   3723   60435  91     irq         
1187   1671   2154   2620   3118   38     60444  92     kallsyms         
12     1674   2161   27     3119   3804   60448  93     kcore         
12269  173    2169   2735   3123   3830   60487  94     keys         
1292   175    2175   2744   31312  39     60492  946    key-users         
13     176    2183   2748   3138   4      60493  947    kmsg         
1304   177    2185   275    3142   40     60500  948    kpagecgroup         
1306   17889  22     2756   3143   4021   61     949    kpagecount         
1321   18     22248  2759   3153   4022   62     950    kpageflags         
1322   18079  2231   276    3163   4051   623    951    loadavg         
1339   18326  2266   27644  3165   4083   6239   952    locks         
1365   18345  2271   27645  3171   4097   624    953    mdstat         
1367   18523  2276   27653  3172   4174   629    954    meminfo         
14     18528  2280   27657  3174   42     63     955    misc         
141    18529  2283   27658  3189   43     630    956    modules         
142    18531  2284   2768   32     4306   631    957    mounts         
1428   18546  2285   277    32388  44     639    9932   mtrr2        
143    18561  2286   2776   3252   449    64            net
144    18568  2287   27779  3266   45     64027         pagetypeinfo
145    18579  2288   278    3278   450    64868         partitions
146    18582  22943  279    329    4526   66            pressure
147    18589  2304   28     33     4563   66086         schedstat
1476   18655  2305   280    331    4564   67            scsi
148    18665  231    281    332    46     68            self
149    18666  2321   282    333    4632   68640         slabinfo
14909  187    2322   283    334    4666   68732         softirqs
1495   18705  2331   284    3340   47978  69            spl
15     18720  2332   285    335    48     69569         stat
151    18797  2333   28570  336    49                   swaps
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ ls /proc
1     1685  2468  272   333   4354  8    964        driver         kmsg           net            sysvipc
10    1686  2556  274   334   4381  826  968        dynamic_debug  kpagecgroup    pagetypeinfo   thread-self
11    1687  2557  275   3352  6     856  acpi       execdomains    kpagecount     partitions     timer_list
12    1688  2560  276   4     687   857  buddyinfo  filesystems    kpageflags     sched_debug    tty
13    1689  2591  2849  4039  693   860  bus        fs             latency_stats  schedstat      uptime
14    1690  2592  2898  4040  699   871  cgroups    interrupts     loadavg        scsi           version
16    1749  2597  3     4047  702   872  cmdline    iomem          locks          self           vmallocinfo
1648  1778  2612  3136  4099  707   9    consoles   ioports        mdstat         slabinfo       vmstat
1661  1780  2624  3160  4107  7283  908  cpuinfo    irq            meminfo        softirqs       xen
1662  18    2625  3179  4122  7329  911  crypto     kallsyms       misc           stat           zoneinfo
1664  19    2627  3180  4211  7363  913  devices    kcore          modules        swaps
1667  2     270   3266  4239  7364  943  diskstats  keys           mounts         sys
1684  21    271   331   4352  7422  952  dma        key-users      mtrr           sysrq-trigger

```
 we can see thers less process runing 

```sh
[ec2-user@ip-10-0-1-220 ~]$ cat /proc/cpuinfo 
processor	: 0
vendor_id	: GenuineIntel
cpu family	: 6
model		: 79
model name	: Intel(R) Xeon(R) CPU E5-2686 v4 @ 2.30GHz
stepping	: 1
microcode	: 0xd0003e8
cpu MHz		: 2299.998
cache size	: 46080 KB
physical id	: 0
siblings	: 1
cpuid level	: 13
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual

```

```sh
ariel @ ariel-All-Series $ cat /proc/cpuinfo 
processor	    : 0
vendor_id	    : AuthenticAMD
cpu family      : 23
model		    : 8
model name      : AMD Ryzen 5 2600 Six-Core Processor
stepping	    : 2
microcode	    : 0x800820d
cpu MHz	        : 1550.000
cache size      : 512 KB
physical id	    : 0
siblings	    : 12
cpuid level	    : 13
TLB size	    : 2560 4K pages
clflush size	: 64
cache_alignment	: 64
address sizes	: 43 bits physical, 48 bits virtual

```

```sh
[ec2-user@ip-10-0-1-220 ~]$ ls /var/log
amazon    btmp            cloud-init-output.log  grubby_prune_debug  maillog   secure    wtmp
audit     chrony          cron                   journal             messages  spooler   yum.log
boot.log  cloud-init.log  dmesg                  lastlog             sa        tallylog
[ec2-user@ip-10-0-1-220 ~]$ ls /lib/
binfmt.d  firmware  kbd     modprobe.d      python2.7  sendmail          sysctl.d    udev
debug     games     kernel  modules         python3.7  sendmail.postfix  systemd     yum-plugins
dracut    grub      locale  modules-load.d  rpm        sse2              tmpfiles.d
[ec2-user@ip-10-0-1-220 ~]$ ls /lib/python3.7/site-packages/
aws_cfn_bootstrap-2.0-py3.7.egg-info  lockfile                        pystache
cfnbootstrap                          lockfile-0.11.0-py3.7.egg-info  pystache-0.5.4-py3.7.egg-info
daemon                                pip                             python_daemon-2.2.3-py3.7.egg-info
docutils                              pip-20.2.2.dist-info            setuptools
docutils-0.14-py3.7.egg-info          pkg_resources                   setuptools-49.1.3.dist-info
easy_install.py                       __pycache__
```

## 4.1 Creating Files and Directories

```sh
touch   # MAKE   file
mkdir   # MAKE   directory
mv      # MOVE   file/dir (2 args exist)     or RENAME (2 arg !_exist is_new )
rm      # REMOVE file/dir
cp      # COPY   file/dir
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ ls -la
total 12
PERMISIONS      USER     GROUP    SIZE      DATE             FILENAME
drwx------ 3    ec2-user ec2-user   74      Oct   1 20:59   .
drwxr-xr-x 3    root     root       22      Oct   1 19:49   ..
-rw-r--r-- 1    ec2-user ec2-user   18      Jul  15  2020   .bash_logout
-rw-r--r-- 1    ec2-user ec2-user  193      Jul  15  2020   .bash_profile
-rw-r--r-- 1    ec2-user ec2-user  231      Jul  15  2020   .bashrc
drwx------ 2    ec2-user ec2-user   29      Oct   1 19:49   .ssh
UGOA= User Group Others All
RWX = Read Write Execute
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ mkdir engineering               #  make new directory
[ec2-user@ip-10-0-1-220 ~]$ touch test                      #  make new file
[ec2-user@ip-10-0-1-220 ~]$ ls -l
drwxrwxr-x 2 ec2-user ec2-user 6 Oct  2 01:26 engineering
-rw-rw-r-- 1 ec2-user ec2-user 0 Oct  2 01:28 test
[ec2-user@ip-10-0-1-220 ~]$ mv test new_name                #  rename
[ec2-user@ip-10-0-1-220 ~]$ ls -l
drwxrwxr-x 2 ec2-user ec2-user 6 Oct  2 01:26 engineering
-rw-rw-r-- 1 ec2-user ec2-user 0 Oct  2 01:28 new_name

[ec2-user@ip-10-0-1-220 ~]$ touch config.yaml
[ec2-user@ip-10-0-1-220 ~]$ ls
config.yaml  engineering  new_name
[ec2-user@ip-10-0-1-220 ~]$  cp config.yaml  engineering/   #  copy
[ec2-user@ip-10-0-1-220 ~]$ ls engineering/
config.yaml
[ec2-user@ip-10-0-1-220 ~]$ ls
config.yaml  engineering  new_name      # we made a copy (did not remove original)
[ec2-user@ip-10-0-1-220 ~]$ rm engineering/config.yaml      # remove file
[ec2-user@ip-10-0-1-220 ~]$ rm engineering # cant remove diretory                 
rm: cannot remove ‘engineering’: Is a directory
[ec2-user@ip-10-0-1-220 ~]$ rm -d engineering               # remove directory
```


## 4.2 User Management in Linux

### 3 Types of Users
Standard user : logued by default, has a home directory, shell log in
Root     user : special superuser priviledges 
Service  user : does not log in, run proces but has no home

```sh
su          # SWITCH  log to a diferent user
adduser     # ADD     add new user
passwd      # PASWORD change user password 
usermod     # MODYFY  /ets/passwd file
userdel     # DELETE  delete an user

exit        # Log off
sudo chmod  # change
```

we start our EC2 SSH loged in as the default "ec2-user" user
it has priviledge to access sudo & run commands as  "root user" a.k.a. "superuser"

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo adduser akira
[ec2-user@ip-10-0-1-220 ~]$ ls -al /home
drwxr-xr-x  4 root     root      35 Oct  2 11:50 .
dr-xr-xr-x 18 root     root     257 Oct  1 19:49 ..
drwx------  2 akira    akira     62 Oct  2 11:50 akira      # NEW USER
drwx------  3 ec2-user ec2-user 130 Oct  2 03:55 ec2-user   # default user
```

cat /etc/passwd
```sh
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/passwd
root:x:0:0:root:/root:/bin/bash
bin:x:1:1:bin:/bin:/sbin/nologin
daemon:x:2:2:daemon:/sbin:/sbin/nologin
adm:x:3:4:adm:/var/adm:/sbin/nologin
....
shutdown:x:6:0:shutdown:/sbin:/sbin/shutdown
halt:x:7:0:halt:/sbin:/sbin/halt
mail:x:8:12:mail:/var/spool/mail:/sbin/nologin
...
systemd-network:x:192:192:systemd Network Management:/:/sbin/nologin
....
sshd:x:74:74:Privilege-separated SSH:/var/empty/sshd:/sbin/nologin
....
ec2-instance-connect:x:997:995::/home/ec2-instance-connect:/sbin/nologin
....
tcpdump:x:72:72::/:/sbin/nologin
ec2-user:x:1000:1000:EC2 Default User:/home/ec2-user:/bin/bash
akira:x:1001:1001::/home/akira:/bin/bash

UserName Passwd UserID  GroupID Metadata    Home_directory  shell
akira   : x    :1001   :1001    :           :/home/akira:   /bin/bash

[ec2-user@ip-10-0-1-220 ~]$ sudo passwd akira
Changing password for user akira.
New password: ######
BAD PASSWORD: The password is shorter than 8 characters
Retype new password: ######                 
passwd: all authentication tokens updated successfully.
```
man usermod 
```sh
[ec2-user@ip-10-0-1-220 ~]$ man usermod

SYNOPSIS       usermod [options] LOGIN

DESCRIPTION     The usermod command modifies the system account files to reflect
                , the changes that are specified on the command line.

OPTIONS   The options which apply to the usermod command are:

       -a, --append
           Add the user to the supplementary group(s). Use only with the -Goption.

       -b, --badnames
           Allow names that do not conform to standards.

       -c, --comment COMMENT
           The new value of the user's password file comment field. '
```
man usermod 2
```sh   
[ec2-user@ip-10-0-1-220 ~]$ sudo usermod 

Usage: usermod [options] LOGIN

Options:
  -b, --badnames                allow bad names
  -c, --comment COMMENT         new value of the GECOS field
  -d, --home HOME_DIR           new home directory for the user account
  -e, --expiredate EXPIRE_DATE  set account expiration date to EXPIRE_DATE
  -f, --inactive INACTIVE       set password inactive after expiration to INACTIVE
  -g, --gid GROUP               force use GROUP as new primary group
  -G, --groups GROUPS           new list of supplementary GROUPS
  -a, --append                  append the user to the supplemental GROUPS
                                ,mentioned by the -G option without removing
                                , the user from other groups
  -h, --help                    display this help message and exit
  -l, --login NEW_LOGIN         new value of the login name
  -L, --lock                    lock the user account
  -m, --move-home               move contents of the home directory to 
                                , the new location (use only with -d)
  -o, --non-unique              allow using duplicate (non-unique) UID
  -p, --password PASSWORD       use encrypted password for the new password
        .......
  -Z, --selinux-user SEUSER     new SELinux user mapping for the user account
```
/etc/pass
```sh
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/passwd
.....   .....     .... ...
akira   : x     : 1001 : 1001 : Akira Smith :   /home/akira :   /bin/bash
                              # Akira Smith = Metadata  (new comment)

[ec2-user@ip-10-0-1-220 ~]$ su akira        # fail atempt to switch user
Password: 
[akira@ip-10-0-1-220 ec2-user]$ ls   # ec2-user lacs permission to login as akira 
ls: cannot open directory .: Permission denied
[akira@ip-10-0-1-220 ec2-user]$ su - akira  # we log in the shell for akira
Password: 
Last login: Wed Oct  2 13:10:53 UTC 2024 on pts/0
[akira@ip-10-0-1-220 ~]$ ls
[akira@ip-10-0-1-220 ~]$                    # new user directory is empty
[akira@ip-10-0-1-220 ~]$ exit
logout
[akira@ip-10-0-1-220 ec2-user]$ exit
exit
[ec2-user@ip-10-0-1-220 ~]$ ls
config.yaml  new_name


```


## 4.3 Group Management in Linux

```sh
groupadd    # ADD
groupdel    # DELETE
groupmod    # MODIFY
groupmems   # MEMBERSHIPS  Add/Remove/View users
chgrp       # CHANGE GROUP of file or dir
chown       # CHANGE OWNER of file or dir
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo groupadd engineering
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/group
akira:x:1001:
engineering:x:1002:
                                        # ADD member to group
[ec2-user@ip-10-0-1-220 ~]$ sudo groupmems -a akira -g engineering
                                        # LIST memmbers of group
[ec2-user@ip-10-0-1-220 ~]$ sudo groupmems -l -g engineering 
akira 
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/group
akira:x:1001:
engineering:x:1002:akira

[ec2-user@ip-10-0-1-220 ~]$ mkdir engeneering
[ec2-user@ip-10-0-1-220 ~]$ ls
engeneering
[ec2-user@ip-10-0-1-220 ~]$ sudo mv engeneering /usr/local/
[ec2-user@ip-10-0-1-220 ~]$ ls /usr/local/
bin  engeneering  etc  games  include  lib  lib64  libexec  sbin  share  src
[ec2-user@ip-10-0-1-220 ~]$ ls /usr/local/ -l
drwxr-xr-x 2 root     root      6 Apr  9  2019 bin
drwxrwxr-x 2 ec2-user ec2-user  6 Oct  2 18:09 engeneering   ......
#            OWNER   GROUP
                               # CHANGE GROUP  
[ec2-user@ip-10-0-1-220 ~]$ sudo chgrp engineering /usr/local/engeneering/
[ec2-user@ip-10-0-1-220 ~]$ ls /usr/local/ -l
total 0
drwxr-xr-x 2 root     root         6 Apr  9  2019 bin
drwxrwxr-x 2 ec2-user engineering  6 Oct  2 18:09 engeneering
                                # CHANGE OWNER:GROUP Recursive (all its content too)
[ec2-user@ip-10-0-1-220 ~]$ sudo chown -R root:engineering /usr/local/engeneering/
[ec2-user@ip-10-0-1-220 ~]$ ls /usr/local/ -l
total 0
drwxr-xr-x 2 root root         6 Apr  9  2019 bin
drwxrwxr-x 2 root engineering  6 Oct  2 18:09 engeneering
                          # must log in or use sudo
[ec2-user@ip-10-0-1-220 ~]$ touch /usr/local/engeneering/ec2-user
touch: cannot touch ‘/usr/local/engeneering/ec2-user’: Permission denied
[ec2-user@ip-10-0-1-220 ~]$ su - akira
Password: 
Last login: Wed Oct  2 13:13:21 UTC 2024 on pts/0
[akira@ip-10-0-1-220 ~]$ touch /usr/local/engeneering/akira
[akira@ip-10-0-1-220 ~]$ ls -l /usr/local/engeneering/
-rw-rw-r-- 1 akira akira 0 Oct  2 18:28 akira
-rw-r--r-- 1 root  root  0 Oct  2 18:26 config.yaml
-rw-r--r-- 1 root  root  0 Oct  2 18:26 contributors
```

## 4.4 Software Management in Linux

RPM package
Yum package manage
```sh
yum search 
    info
    install 
    remove
    update 
```
man yum

```sh
NAME       yum - Yellowdog Updater Modified

SYNOPSIS   yum [options] [command] [package ...]

DESCRIPTION
       yum  is  an  interactive,  rpm  based, package manager. It can automatically perform system updates, including dependency analysis and obsolete processing based on
       "repository" metadata. It can also perform installation of new packages, removal of old packages and perform queries on the  installed  and/or  available  packages
       among many other commands/services (see below). yum is similar to other high level package managers like apt-get and smart.

       While  there  are  some graphical interfaces directly to the yum code, more recent graphical interface development is happening with PackageKit and the gnome-pack‐
       agekit application.

       command is one of:
        * install package1 [package2] [...]
        * update [package1] [package2] [...]
        * update-to [package1] [package2] [...]
        * update-minimal [package1] [package2] [...]
        * check-update
        * upgrade [package1] [package2] [...]
        * upgrade-to [package1] [package2] [...]
        * distribution-synchronization [package1] [package2] [...]
        * remove | erase package1 [package2] [...]
        * autoremove [package1] [...]
        * list [...]
        * info [...]
        * provides | whatprovides feature1 [feature2] [...]
        * clean [ packages | metadata | expire-cache | rpmdb | plugins | all ]
        .....
        * search string1 [string2] [...]
        ....        
        * check
        * help [command]
```
yum help
```sh
List of Commands:

check          Check for problems in the rpmdb
check-update   Check for available package updates
clean          Remove cached data
deplist        List a package's dependencies
distribution-synchronization Synchronize installed packages to the latest available versions
downgrade      downgrade a package
erase          Remove a package or packages from your system
.....
```

### yum : repolist / search / install / remove / check

```sh
[akira@ip-10-0-1-220 ~]$ yum repolist
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd

repo id                                    repo name                                                                             status
!amzn2-core/2/x86_64                       Amazon Linux 2 core repository                                                        35,869
!amzn2extra-docker/2/x86_64                Amazon Extras repo for docker                                                            118
!amzn2extra-kernel-5.10/2/x86_64           Amazon Extras repo for kernel-5.10                                                       605
repolist: 36,592

[akira@ip-10-0-1-220 ~]$ yum search cowsay
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
=================================== N/S matched: cowsay ===================================
cowsay.noarch : Configurable speaking/thinking cow

  Name and summary matches only, use "search all" for everything.

  Name and summary matches only, use "search all" for everything.
[akira@ip-10-0-1-220 ~]$ yum info cowsay
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
Available Packages
Name        : cowsay
Arch        : noarch
Version     : 3.04
Release     : 6.amzn2
Size        : 42 k
Repo        : amzn2-core/2/x86_64
Summary     : Configurable speaking/thinking cow
URL         : https://github.com/tnalpgge/rank-amateur-cowsay
License     : GPLv3+
Description : cowsay is a configurable talking cow, written in Perl.  
            : It operates much as the figlet program does, and it written 
            : in the same spirit of silliness. It generates ASCII pictures of a cow 

[ec2-user@ip-10-0-1-220 ~]$ sudo yum install cowsay
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                           | 3.6 kB  00:00:00     
amzn2extra-docker                                    | 2.9 kB  00:00:00     
amzn2extra-kernel-5.10                               | 3.0 kB  00:00:00     
Resolving Dependencies
--> Running transaction check
---> Package cowsay.noarch 0:3.04-6.amzn2 will be installed
--> Finished Dependency Resolution
Dependencies Resolved

======================================================================
 Package           Arch       Version           Repository       Size
======================================================================
Installing:
 cowsay            noarch     3.04-6.amzn2      amzn2-core       42 k

Transaction Summary
======================================================================
Install  1 Package
Total download size: 42 k
Installed size: 77 k
Is this ok [y/d/N]: y
Downloading packages:
cowsay-3.04-6.amzn2.noarch.rpm                   | 42 kB  00:00:00     
Running transaction check
Running transaction test
Transaction test succeeded
Running transaction
  Installing : cowsay-3.04-6.amzn2.noarch          1/1 
  Verifying  : cowsay-3.04-6.amzn2.noarch          1/1 

Installed:   cowsay.noarch 0:3.04-6.amzn2          Complete!

[ec2-user@ip-10-0-1-220 ~]$ sudo yum remove cowsay
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
Resolving Dependencies
--> Running transaction check
---> Package cowsay.noarch 0:3.04-6.amzn2 will be erased
--> Finished Dependency Resolution
amzn2-core/2/x86_64                             | 3.6 kB  00:00:00     

Dependencies Resolved

======================================================================
 Package           Arch       Version           Repository       Size
======================================================================
Installing:
 cowsay            noarch     3.04-6.amzn2      @amzn2-core       77 k

Transaction Summary
======================================================================
Remove  1 Package

Installed size: 77 k
Is this ok [y/N]: y
Downloading packages:
Running transaction check
Running transaction test
Transaction test succeeded
Running transaction
  Erasing    : cowsay-3.04-6.amzn2.noarch                  1/1 
  Verifying  : cowsay-3.04-6.amzn2.noarch                  1/1 

Removed:  cowsay.noarch 0:3.04-6.amzn2                Complete!

[ec2-user@ip-10-0-1-220 ~]$ yum check-update 
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                           | 3.6 kB  00:00:00     

PyYAML.x86_64                         3.10-11.amzn2.0.3         amzn2-core    
amazon-linux-extras.noarch            2.0.3-1.amzn2             amzn2-core    
amazon-linux-extras-yum-plugin.noarch 2.0.3-1.amzn2             amzn2-core    
aws-cfn-bootstrap.noarch              2.0-30.amzn2              amzn2-core    
awscli.noarch                         1.18.147-1.amzn2.0.2      amzn2-core    
binutils.x86_64                       2.29.1-31.amzn2.0.1       amzn2-core    
cloud-init.noarch                     19.3-46.amzn2.0.2         amzn2-core    
cyrus-sasl-lib.x86_64                 2.1.26-24.amzn2.0.1       amzn2-core    
cyrus-sasl-plain.x86_64               2.1.26-24.amzn2.0.1       amzn2-core    
dbus.x86_64                           1:1.10.24-7.amzn2.0.4     amzn2-core    
dbus-libs.x86_64                      1:1.10.24-7.amzn2.0.4     amzn2-core    
dhclient.x86_64                       12:4.2.5-79.amzn2.1.5     amzn2-core    
dhcp-common.x86_64                    12:4.2.5-79.amzn2.1.5     amzn2-core    
dhcp-libs.x86_64                      12:4.2.5-79.amzn2.1.5     amzn2-core    
dmidecode.x86_64                      1:3.2-5.amzn2.1.1         amzn2-core    
e2fsprogs.x86_64                      1.42.9-19.amzn2.0.1       amzn2-core    
e2fsprogs-libs.x86_64                 1.42.9-19.amzn2.0.1       amzn2-core  
...
Obsoleting Packages             # DEPENDENCIES = NEW PACKAGES
python2-colorama.noarch               0.3.9-3.amzn2.0.1         amzn2-core    
    python-colorama.noarch            0.3.2-3.amzn2             installed     
python2-six.noarch                    1.11.0-8.amzn2.0.1        amzn2-core    
    python-six.noarch                 1.9.0-2.amzn2             installed     

[ec2-user@ip-10-0-1-220 ~]$ sudo yum update 
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                                                 | 3.6 kB  00:00:00     
(1/2): amzn2-core/2/x86_64/updateinfo                                      | 981 kB  00:00:00     
(2/2): amzn2-core/2/x86_64/primary_db                                      |  71 MB  00:00:00     
Resolving Dependencies
--> Running transaction check
---> Package PyYAML.x86_64 0:3.10-11.amzn2.0.2 will be updated
---> Package PyYAML.x86_64 0:3.10-11.amzn2.0.3 will be an update
---> Package amazon-linux-extras.noarch 0:2.0.1-1.amzn2 will be updated
---> Package amazon-linux-extras.noarch 0:2.0.3-1.amzn2 will be an update
.............................................................................................
==================================================================================================
 Package                      Arch   Version                         Repository              Size
==================================================================================================
Installing:
 kernel                       x86_64 5.10.225-213.878.amzn2          amzn2extra-kernel-5.10  34 M
 python2-colorama             noarch 0.3.9-3.amzn2.0.1               amzn2-core              30 k
.............................................................................................
Transaction Summary
==================================================================================================
Install   4 Packages
Upgrade  94 Packages

Total download size: 133 M
Is this ok [y/d/N]: y
Downloading packages:
Delta RPMs disabled because /usr/bin/applydeltarpm not installed.
(1/98): amazon-linux-extras-2.0.3-1.amzn2.noarch.rpm                       |  39 kB  00:00:00     
(2/98): PyYAML-3.10-11.amzn2.0.3.x86_64.rpm                                | 180 kB  00:00:00     
(3/98): amazon-linux-extras-yum-plugin-2.0.3-1.amzn2.noarch.rpm            |  11 kB  00:00:00     
(4/98): aws-cfn-bootstrap-2.0-30.amzn2.noarch.rpm                          | 751 kB  00:00:00     
.............................................................................................
(96/98): yajl-2.0.4-4.amzn2.0.3.x86_64.rpm                                 |  40 kB  00:00:00     
(97/98): xfsprogs-5.0.0-10.amzn2.0.1.x86_64.rpm                            | 1.0 MB  00:00:00     
(98/98): zlib-1.2.7-19.amzn2.0.3.x86_64.rpm                                |  90 kB  00:00:00     
.............................................................................................
Total                                                              53 MB/s | 133 MB  00:00:02     
Running transaction check
Running transaction test
Transaction test succeeded
Running transaction
  Updating   : zlib-1.2.7-19.amzn2.0.3.x86_64                                               1/195 
  Updating   : libcom_err-1.42.9-19.amzn2.0.1.x86_64                                        2/195 
  Updating   : libcap-2.54-1.amzn2.0.2.x86_64                                               3/195 
...........................................................
Verifying  : openssh-server-7.4p1-22.amzn2.0.7.x86_64                                   194/195 
  Verifying  : python-jwcrypto-0.4.2-1.amzn2.noarch                                       195/195 
...........................................................

Installed:
  kernel.x86_64 0:5.10.225-213.878.amzn2            python2-colorama.noarch 0:0.3.9-3.amzn2.0.1   
  python2-setuptools.noarch 0:41.2.0-4.amzn2.0.5    python2-six.noarch 0:1.11.0-8.amzn2.0.1       

Updated:
  PyYAML.x86_64 0:3.10-11.amzn2.0.3                         
Complete!
[ec2-user@ip-10-0-1-220 ~]$ yum check-update 
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                                                 | 3.6 kB  00:00:00     
[ec2-user@ip-10-0-1-220 ~]$ 


```

## RPM
```sh
# NO EXAMPLES    ->  ADD MY OWN
```

## 4.5 Monitoring a Linux Server

### 3 stages :GETHER/ REPORT /ALERTING

GETHER : Record metrics & state of system
REPORT : Review & display data
ALERTING : When threashold is reach automaticaly solve or call someone

##  TOP  &  VMSTAT

 
```sh
[ec2-user@ip-10-0-1-220 ~]$ top

top - 01:49:36 up 1 day,  6:00,  1 user,  load average: 0,00, 0,00, 0,00
Tasks:  93 total,   1 running,  49 sleeping,   0 stopped,   0 zombie
%Cpu(s):  0,0 us,  0,0 sy,  0,0 ni,100,0 id,  0,0 wa,  0,0 hi,  0,0 si,  0,0 st
KiB Mem :   988916 total,   111984 free,    94756 used,   782176 buff/cache
KiB Swap:        0 total,        0 free,        0 used.   743932 avail Mem 

  PID USER      PR  NI    VIRT    RES    SHR S %CPU %MEM     TIME+ COMMAND                        
    1 root      20   0   41732   5704   4056 S  0,0  0,6   0:02.20 systemd                        
    2 root      20   0       0      0      0 S  0,0  0,0   0:00.00 kthreadd                       
    3 root       0 -20       0      0      0 I  0,0  0,0   0:00.00 rcu_gp                         
    4 root       0 -20       0      0      0 I  0,0  0,0   0:00.00 rcu_par_gp                     
    6 root       0 -20       0      0      0 I  0,0  0,0   0:00.00 kworker/0:0H-ev                
    8 root       0 -20       0      0      0 I  0,0  0,0   0:02.71 kworker/0:1H-ev                
    9 root       0 -20       0      0      0 I  0,0  0,0   0:00.00 mm_percpu_wq                   
   10 root      20   0       0      0      0 S  0,0  0,0   0:00.00 rcu_tasks_rude_                
   11 root      20   0       0      0      0 S  0,0  0,0   0:00.00 rcu_tasks_trace                
   12 root      20   0       0      0      0 S  0,0  0,0   0:00.49 ksoftirq
```
PID  = proces ID
VIRT = virtual  memory
RES  = Residing memory (physycal RAM)
SHR  = Shared memory among process
S    = State of process : running / sleeping / stopped
load average:  0,00,  0,00,  0,00   
     on last   1min   5min   15min

Cpu(s): us : user   mode time
        sy : System mode time.
        ni : Nice   mode time. (low prioriti processes < 0 )
        id : idle time
        wa : wait time 
        hi : Hardware interrupt time
        si : Software interrupt time
        st : Steal time (by VMs)

processes Status:
        S: Sleeping  (uninterruptible sleep)
        R: Running   (runnable)
        D: Disk sleep
        Z: Zombie    (defunct)
        T: Stopped   (traced or stopped by signal)
        K: Killed    (process is killed but still in memory)
        I: Idle      (not running)
        L: Locked    (cannot be swapped out)
        N: Nice      (low priority)
        P: Paging    (process is being swapped out or in)

```sh
[ec2-user@ip-10-0-1-220 ~]$ vmstat 1 5  # refresh every 1sec 5 times
procs  | ---------memory---------- |--swap-- |----io---- |--system--| ------cpu-----
 r  b  | swpd   free   buff  cache | si   so |  bi    bo |  in   cs | us sy  id wa st
 0  0  |    0 110952   1068 781868 |  0    0 |   9    46 |  29   62 |  0  0 100  0  0
 0  0  |    0 110944   1068 781868 |  0    0 |   0     0 |  30   52 |  0  0 100  0  0
 0  0  |    0 110944   1068 781868 |  0    0 |   0     0 |  27   51 |  0  0 100  0  0
 0  0  |    0 110944   1068 781868 |  0    0 |   0     0 |  27   51 |  0  0 100  0  0
 0  0  |    0 110944   1068 781868 |  0    0 |   0     0 |  30   51 |  0  0 100  0  0
```
procs   r: Running          b: Blocked

swap    si: system  in      so: system  out

io      bi: Block input     bo: Block output

system  in: Interrupts      cs: Context switches



## 4.6 Networking in Linux

```sh
systemctl status network.service 
cat /etc/rc.d/init.d/network
ip addr list
ip route list
     ss -s
sudo ss -tnp
sudo ss -tnlp
```


```sh
[ec2-user@ip-10-0-1-220 ~]$ systemctl status network.service 
● network.service - LSB: Bring up/down networking
   Loaded: loaded (/etc/rc.d/init.d/network; bad; vendor preset: disabled)
   Active: active (running) since Tue 2024-10-01 19:49:14 UTC; 1 day 22h ago
     Docs: man:systemd-sysv-generator(8)
   CGroup: /system.slice/network.service
           ├─2849 /sbin/dhclient -q -lf /var/lib/dhclient/dhclient--eth0.lease -pf /var/run/dhclient-eth0.pid eth0
           └─2898 /sbin/dhclient -6 -nw -lf /var/lib/dhclient/dhclient6--eth0.lease -pf /var/run/dhclient6-eth0.pid eth0

Oct 03 17:37:33 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 114170ms.
Oct 03 17:39:28 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 121840ms.
Oct 03 17:41:29 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 122640ms.
Oct 03 17:43:32 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 118100ms.
Oct 03 17:45:30 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 118910ms.
Oct 03 17:47:29 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 119540ms.
Oct 03 17:49:29 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 127170ms.
Oct 03 17:51:36 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 118610ms.
Oct 03 17:53:35 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 128250ms.
Oct 03 17:55:43 ip-10-0-1-220.us-west-2.compute.internal dhclient[2898]: XMT: Solicit on eth0, interval 120710ms.
```

 Active: active (running) since Sat 2023-02 18 18:39:57 UTC; 24h ago
   Docs:  man:systemd-sysv-generator(8)
Process: 2672 ExecStart=/etc/rc.d/init.d/network start (code=exited, status=0/SUCCESS)
 CGroup: /system.slice/network.service
```sh
etc/rc.d/init.d/network start   # command: network     Arg: start
```
dhclient : gets anIP for our subnet

```sh
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/rc.d/init.d/network
#! /bin/bash
#
# network       Bring up/down networking
#
# chkconfig: 2345 10 90
# description: Activates/Deactivates all network interfaces configured to \
#              start at boot time.
#
### BEGIN INIT INFO
# Provides: $network
# Should-Start: iptables ip6tables NetworkManager-wait-online NetworkManager $network-pre
# Short-Description: Bring up/down networking
# Description: Bring up/down networking
### END INIT INFO

# Source function library.
. /etc/init.d/functions

if [ ! -f /etc/sysconfig/network ]; then
 .......
    echo $"Currently active devices:"
    echo $(/sbin/ip -o link show up | awk -F ": " '{ print $2 }')
    ;;
restart|force-reload)
    cd "$CWD"
    $0 stop
    $0 start
    rc=$?
    ;;
*)
    echo $"Usage: $0 {start|stop|status|restart|force-reload}"
    exit 2
esac

exit $rc
```
this '/sysconfig/network' file searche all interface and conects them

```sh
[ec2-user@ip-10-0-1-220 ~]$ ip addr list
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 9001 qdisc pfifo_fast state UP group default qlen 1000
    link/ether 02:42:a6:29:4b:6b brd ff:ff:ff:ff:ff:ff
    inet 10.0.1.220/24 brd 10.0.1.255 scope global dynamic eth0
       valid_lft 3251sec preferred_lft 3251sec
    inet6 fe80::42:a6ff:fe29:4b6b/64 scope link 
       valid_lft forever preferred_lft forever
```
lo   OOPBACK:   internal interface , self connection to the local host
eth0 BROADCAST: ethernet interface ip addr 10.0.1.220  with /24 CIDR range 
```sh
[ec2-user@ip-10-0-1-220 ~]$ ip addr show dev eth0
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 9001 qdisc pfifo_fast state UP group default qlen 1000
    link/ether 02:42:a6:29:4b:6b brd ff:ff:ff:ff:ff:ff
    inet 10.0.1.220/24 brd 10.0.1.255 scope global dynamic eth0
       valid_lft 2898sec preferred_lft 2898sec
    inet6 fe80::42:a6ff:fe29:4b6b/64 scope link 
       valid_lft forever preferred_lft forever

```

```sh
[ec2-user@ip-10-0-1-220 ~]$ ip route list
default via 10.0.1.1 dev eth0 
10.0.1.0/24 dev eth0 proto kernel scope link src 10.0.1.220 
169.254.169.254 dev eth0 
[ec2-user@ip-10-0-1-220 ~]$ 
```
default via 10.0.1.1 dev eth0 
  by default send all packets our AWS gateaway iP (only rout to outside our host)

10.0.1.0/24 dev eth0 proto kernel scope link src 10.0.1.220 
  any packet bount to IP in rage 10.0.1.0/24 use eth0 device

169.254.169.254 dev eth0 
  this rout is use for 0 configuration and dont leave the host


```sh
[ec2-user@ip-10-0-1-220 ~]$ ss -s

Total: 171    TCP:   6 (estab 1, closed 0, orphaned 0, timewait 0)

Transport   Total     IP(v4)    IPv6
RAW	        0         0         0        
UDP	        8         4         4        
TCP	        6         4         2        
INET	      14        8         6        
FRAG	      0         0         0        
```
SS socket Statistics : sumary on host network activity (port/conections)

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo ss -tnp
State    Recv-Q       Send-Q          Local Address:Port      Peer Address:Port    
ESTAB     0           36              10.0.1.220:22           1##.###.###.###:#####   
Process          
users:(("sshd",pid=23274,fd=3),("sshd",pid=23240,fd=3))
```

t : TCP co
n : don't do (port connections / host name lookups DNS
p :

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo ss -tnlp
State       Recv-Q      Send-Q      Local Address:Port    Peer Address:Port    Process                                        
LISTEN      0           128               0.0.0.0:111          0.0.0.0:*        users:(("rpcbind",pid=2625, fd=8))             
LISTEN      0           128               0.0.0.0:22           0.0.0.0:*        users:(("sshd",   pid=13025,fd=3))               
LISTEN      0           100             127.0.0.1:25           0.0.0.0:*        users:(("master", pid=4352, fd=13))             
LISTEN      0           128                  [::]:111             [::]:*        users:(("rpcbind",pid=2625, fd=11))            
LISTEN      0           128                  [::]:22              [::]:*        users:(("sshd",   pid=13025,fd=4)) 
```

## 4.7 Managing Services in Linux with System

```sh
ls /etc/systemd/system/multi-user.target.wants
systemctl list-unit-files 
sudo systemctl status    <process>
sudo systemctl start     <process>
sudo systemctl stop      <process>
sudo systemctl restart   <process>
```


system D : Linux process manager (first Process loaded after booting)
syseD uses unit files
unit file : config file to handle process sockets etc...


```sh
[ec2-user@ip-10-0-1-220 ~]$ cat /etc/systemd/system/multi-user.target.wants/postfix.service 
[Unit]
Description=Postfix Mail Transport Agent
After=syslog.target network.target
Conflicts=sendmail.service exim.service

[Service]
Type=forking
PIDFile=/var/spool/postfix/pid/master.pid
EnvironmentFile=-/etc/sysconfig/network
ExecStartPre=-/usr/libexec/postfix/aliasesdb
ExecStartPre=-/usr/libexec/postfix/chroot-update

ExecStart=/usr/sbin/postfix  start
ExecReload=/usr/sbin/postfix reload
ExecStop=/usr/sbin/postfix   stop

[Install]
WantedBy=multi-user.target
```

[Unit]  defines metadata & configures relationship of unit to other units
      Description = metadata
      After       = service will run after (network)
      Conflicts   = will not run to avoid coflict with ()
[Install] Defines the configuration of the process
      Type         = forking (proces will create child) if parent killed child survives
      ExecStartPre = run before    process
      ExecStart    = how to start  process
      ExecReload   = how to Reload process
      ExecStop     = how to Stop   process
[Service] behaviour when its enabled
       WantedBy    = put unit file iside "wanted by"s terget


```sh
[ec2-user@ip-10-0-1-220 ~]$ systemctl list-unit-files 
UNIT FILE                                     STATE   
proc-sys-fs-binfmt_misc.automount             static  
dev-hugepages.mount                           static  
dev-mqueue.mount                              static  
proc-fs-nfsd.mount                            static  
proc-sys-fs-binfmt_misc.mount                 static  
sys-fs-fuse-connections.mount                 static  
sys-kernel-config.mount                       static  
sys-kernel-debug.mount                        static  
tmp.mount                                     disabled
var-lib-nfs-rpc_pipefs.mount                  static  
brandbot.path                                 enabled 
systemd-ask-password-console.path             static  
systemd-ask-password-plymouth.path            static  
systemd-ask-password-wall.path                static  
session-328.scope                             static  
acpid.service                                 enabled 
amazon-ssm-agent.service                      enabled 
amzn2-early-relabel-modules.service           enabled 
arp-ethers.service                            disabled
atd.service                                   enabled 
auditd.service                                enabled 
auth-rpcgss-module.service                    static  
lines 1-23
......
.....
umount.target                                 static  
fstrim.timer                                  disabled
mdadm-last-resort@.timer                      static  
systemd-readahead-done.timer                  indirect
systemd-tmpfiles-clean.timer                  static  

277 unit files listed.
lines 258-280/280 (END)
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ systemctl status postfix.service 
● postfix.service - Postfix Mail Transport Agent
   Loaded: loaded (/usr/lib/systemd/system/postfix.service; enabled; vendor preset: disabled)
   Active: active (running) since Tue 2024-10-01 19:49:49 UTC; 2 days ago
 Main PID: 4352 (master)
   CGroup: /system.slice/postfix.service
           ├─ 4352 /usr/libexec/postfix/master -w
           ├─ 4354 qmgr -l -t unix -u
           └─23740 pickup -l -t unix -u

LOGS :
Oct 02 20:17:07 ip-10-0-1-220.us-west-2.compute.internal 
postfix/pickup[12026]:  6396578F17: uid=0 from=<root>
postfix/cleanup[12223]: 6396578F17: message-id=<20241002201707.6396578F17@ip-10-0-1-220.us-west-2.compute.internal>
postfix/qmgr[4354]:     6396578F17: from=<root@ip-10-0-1-220.us-west-2.compute.internal>, size=660, nrcpt=1 (queue active)
postfix/local[12225]:   6396578F17: to=<root@ip-10-0-1-220.us-west-2.compute.internal>, orig_to=<root>, relay=local, dela...mailbox)
postfix/qmgr[4354]:     6396578F17: removed
postfix/pickup[12026]:  448BF78F17: uid=0 from=<root>
postfix/cleanup[12223]: 448BF78F17: message-id=<20241002201726.448BF78F17@ip-10-0-1-220.us-west-2.compute.internal>
postfix/qmgr[4354]:     448BF78F17: from=<root@ip-10-0-1-220.us-west-2.compute.internal>, size=660, nrcpt=1 (queue active)
postfix/local[12225]:   448BF78F17: to=<root@ip-10-0-1-220.us-west-2.compute.internal>, orig_to=<root>, relay=local, dela...mailbox)
postfix/qmgr[4354]:     448BF78F17: removed
Hint: Some lines were ellipsized, use -l to show in full.
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo systemctl stop postfix.service 
[ec2-user@ip-10-0-1-220 ~]$ systemctl status postfix.service 
● postfix.service - Postfix Mail Transport Agent
   Loaded: loaded (/usr/lib/systemd/system/postfix.service; enabled; vendor preset: disabled)
   Active: inactive (dead) since Thu 2024-10-03 20:52:01 UTC; 3s ago
  Process: 23948 ExecStop=/usr/sbin/postfix stop (code=exited, status=0/SUCCESS)
 Main PID: 4352 (code=killed, signal=TERM)

LOGS
Oct 02 20:17:07 ip-10-0-1-220.us-west-2.compute.internal 
  postfix/local[12225]:   6396578F17: to=<root@ip-10-0-1-220.us-west-2.compute.internal>, orig_to=<root>, relay=local, dela...mailbox)
  postfix/qmgr[4354]:     6396578F17: removed
  postfix/pickup[12026]:  448BF78F17: uid=0 from=<root>
  postfix/cleanup[12223]: 448BF78F17: message-id=<20241002201726.448BF78F17@ip-10-0-1-220.us-west-2.compute.internal>
  postfix/qmgr[4354]:     448BF78F17: from=<root@ip-10-0-1-220.us-west-2.compute.internal>, size=660, nrcpt=1 (queue active)
  postfix/local[12225]:   448BF78F17: to=<root@ip-10-0-1-220.us-west-2.compute.internal>, orig_to=<root>, relay=local, dela...mailbox)
  postfix/qmgr[4354]:     448BF78F17: removed 
  systemd[1]: Stopping Postfix Mail Transport Agent...
  postfix/postfix-script[23954]: stopping the Postfix mail system  
  systemd[1]: Stopped Postfix Mail Transport Agent.
Hint: Some lines were ellipsized, use -l to show in full.

```

## 4.8 Running MariaDB in a Container

### Install docker

```sh
[ec2-user@ip-10-0-1-9 ~]$ sudo yum install docker
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core
Resolving Dependencies
--> Running transaction check
---> Package docker.x86_64 0:20.10.17-1.amzn2.0.2 will be installed
--> Finished Dependency Resolution

Dependencies Resolved
============================================================================
Package       Arch      Version               Repository          Size
Installing:
docker        x86_64    20.10.17-1.amzn2.0.2  amzn2extra-docker   39 M
Transaction Summary
=============================================================================
Install 1 Package
Total download size: 39 M
Installed size: 152 M
Is this ok [y/d/N]: y
Downloading packages:
docker-20.10.17-1.amzn2.0.2.x86_64.rpm                  13.7 kB 00:00:00
1 39 MB 00:00:00
Running transaction check
Running transaction test Transaction test succeeded
Running transaction
  Installing : docker-20.10.17-1.amzn2.0.2.x86_64           1/1
  Verifying  : docker-20.10.17-1.amzn2.0.2.x86_64           1/1
Installed:
  docker.x86_64 0:20.10.17-1.amzn2.0.2
Complete!
```
i have allredy installed it so i see this

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo yum install docker
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                                                                | 3.6 kB  00:00:00     
amzn2extra-docker                                                                         | 2.9 kB  00:00:00     
amzn2extra-kernel-5.10                                                                    | 3.0 kB  00:00:00     
(1/4): amzn2extra-docker/2/x86_64/updateinfo                                              |  19 kB  00:00:00     
(2/4): amzn2extra-docker/2/x86_64/primary_db                                              | 113 kB  00:00:00     
(3/4): amzn2extra-kernel-5.10/2/x86_64/updateinfo                                         |  91 kB  00:00:00     
(4/4): amzn2extra-kernel-5.10/2/x86_64/primary_db                                         |  31 MB  00:00:00     
Package docker-25.0.6-1.amzn2.0.2.x86_64 already installed and latest version           Nothing to do
```
### Add ec2-user to the Docker group

shis is to avoid needing "sudo" before any docker command

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo usermod -a -G docker ec2-user
[ec2-user@ip-10-0-1-220 ~]$ id ec2-user
uid=1000(ec2-user)  gid=1000(ec2-user)  groups=1000(ec2-user),
4(adm),    10(wheel),    190(systemd-journal),    992(docker)
```

### new group command (update group)

```sh
[ec2-user@ip-10-0-1-220 ~]$ newgrp docker
[ec2-user@ip-10-0-1-220 ~]$ docker ps
Cannot connect to the Docker daemon at unix:///var/run/docker.sock. Is the docker daemon running?
[ec2-user@ip-10-0-1-220 ~]$ systemctl start docker.service 
Failed to start docker.service: The name org.freedesktop.PolicyKit1 was not provided by any .service files
See system logs and 'systemctl status docker.service' for details.

```

    newgrp : command used to change the current group ID during a login session.

```sh
[ec2-user@ip-10-0-1-220 ~]$ systemctl start docker.service 
Failed to start docker.service: The name org.freedesktop.PolicyKit1 was not provided by any .service files
See system logs and 'systemctl status docker.service' for details.

[ec2-user@ip-10-0-1-220 ~]$ sudo yum install policykit-1
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                                                                | 3.6 kB  00:00:00     
No package policykit-1 available.
Error: Nothing to do
[ec2-user@ip-10-0-1-220 ~]$ sudo systemctl start docker.service 
```

  newgrp does not apply till we restart the SSH connection to the VPS
  "sudo systemctl start docker.service " worked fine in this case
  adfter reset no sudo is needed

```sh
[ec2-user@ip-10-0-1-220 ~]$ systemctl status docker.service  -l
● docker.service - Docker Application Container Engine
   Loaded: loaded (/usr/lib/systemd/system/docker.service; disabled; vendor preset: disabled)
   Active: active (running) since Fri 2024-10-04 17:06:22 UTC; 4h 23min ago
     Docs: https://docs.docker.com
  Process: 28016 ExecStartPre=/usr/libexec/docker/docker-setup-runtimes.sh (code=exited, status=0/SUCCESS)
  Process: 28015 ExecStartPre=/bin/mkdir -p /run/docker (code=exited, status=0/SUCCESS)
 Main PID: 28020 (dockerd)
    Tasks: 9
   Memory: 236.8M
   CGroup: /system.slice/docker.service
           └─28020 /usr/bin/dockerd -H fd:// --containerd=/run/containerd/containerd.sock 
                                             --default-ulimit nofile=32768:65536
LOGS:
Oct 04 17:06:21 ip-10-0-1-220.us-west-2.compute.internal 
  systemd[1]: Starting Docker Application Container Engine...
  time= "2024-10-04 :
    T "17:06:22.143107241Z" level=info    msg="Starting up"
    T "17:06:22.316614158Z" level=info    msg="Loading containers: start."
    T "17:06:22.514831737Z" level=info    msg="Loading containers: done."
    T "17:06:22.536388524Z" level=warning msg="WARNING: bridge-nf-call-iptables is disabled"
    T "17:06:22.536745665Z" level=warning msg="WARNING: bridge-nf-call-ip6tables is disabled"
    T "17:06:22.536999208Z" level=info    msg="Docker daemon" commit=b08a51f containerd-snapshotter=false storage-driver=overlay2 version=25.0.6
    T "17:06:22.538302702Z" level=info    msg="Daemon has completed initialization"
    T "17:06:22.584866238Z" level=info    msg="API listen on /run/docker.sock"
Oct 04 17:06:22 ip-10-0-1-220.us-west-2.compute.internal 
  systemd[1]: Started Docker Application Container Engine.
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ docker ps
CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

```

```sh
[ec2-user@ip-10-0-1-220 ~]$ docker pull mariadb:lastest   # TYPO ERROR
Error response from daemon: manifest for mariadb:lastest not found: manifest unknown: manifest unknown
[ec2-user@ip-10-0-1-220 ~]$ docker pull mariadb:latest    # FIRST PULL  (INSTALL)
latest: Pulling from library/mariadb
eda6120e237e: Pull complete 
3bea7484bf1d: Pull complete 
97768484d3db: Pull complete 
f7c4ca00d7c4: Pull complete 
200feec9a56a: Pull complete 
4c3b42e2cd08: Pull complete 
e287e4cde285: Pull complete 
c19c18c0f9a2: Pull complete 
Digest: sha256:9e7695800ab8fa72d75053fe536b090d0c9373465b32a073c73bc7940a2e8dbe
Status: Downloaded newer image for mariadb:latest
docker.io/library/mariadb:latest
[ec2-user@ip-10-0-1-220 ~]$ docker pull mariadb:latest  # SECOND PULL  (UPDATE-CHECK)
latest: Pulling from library/mariadb
Digest: sha256:9e7695800ab8fa72d75053fe536b090d0c9373465b32a073c73bc7940a2e8dbe
Status: Image is up to date for mariadb:latest
docker.io/library/mariadb:latest
```



```sh
docker run --detach-name mariadb -env MARIADB_USER=lab-user --env MARIADB_PASSWORD=lab-secret-password --env MARIADB_ROOT_PASSWORD=lab-root-password -p 3306:3306 mariadb: latest
```
Docker run :
            detach : run in the background  (wont takeover this shell, we can still use it)
            container_name   = mariadb
            -p port =  3306  = mariadb's default
            container_ image =  mariadb: latest
            envirovment_variables :
                      root password = lab-root-password
                      DataBase User = lab-user
                      DB password   = lab-secret-password

```sh
[ec2-user@ip-10-0-1-220 ~]$ docker run --detach --name mariadb --env MARIADB_USER=lab-user --env MARIADB_PASSWORD=lab-secret-password --env MARIADB_ROOT_PASSWORD=lab-root-password -p 3306:3306 mariadb:latest
3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3

[ec2-user@ip-10-0-1-220 ~]$ docker ps
CONTAINER ID   IMAGE            COMMAND                  CREATED          STATUS          
3cac1b4ffb27   mariadb:latest   "docker-entrypoint.s…"   38 seconds ago   Up 37 seconds   
PORTS                                       NAMES
0.0.0.0:3306->3306/tcp, ::: 3306->3306/tcp   mariadb
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ docker logs mariadb
2024-10-04 22:41:15+00:00 [Note] [Entrypoint]: Entrypoint script for MariaDB Server 1:11.5.2+maria~ubu2404 started.
2024-10-04 22:41:15+00:00 [Warn] [Entrypoint]: /sys/fs/cgroup/memory:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
10: perf_event:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
9:  freezer:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
8:  cpuset:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
7:  cpu,cpuacct:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
6:  pids:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
5:  hugetlb:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
4:  blkio:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
3:  devices:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
2:  net_cls,net_prio:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3
1:  name=systemd:/docker/3cac1b4ffb27851d4119841bf57dd9e1410d94f375cf32b6c62d6c28699e35a3/memory.pressure not writable, functionality unavailable to MariaDB
2024-10-04 22:41:15+00:00
[Note] [Entrypoint]: Switching to dedicated user 'mysql'
[Note] [Entrypoint]: Entrypoint script for MariaDB Server 1:11.5.2+maria~ubu2404 started.
[Note] [Entrypoint]: Initializing database files
[Warning] mariadbd: io_uring_queue_init() failed with errno 95
[Warning] InnoDB  : liburing disabled: falling back to innodb_use_native_aio=OFF
[Note] [Entrypoint]: Database files initialized
[Note] [Entrypoint]: Starting temporary server
[Note] [Entrypoint]: Waiting for server startup
[Note]  Starting MariaDB 11.5.2-MariaDB-ubu2404 source revision ea75a0b6009b0251e83193cd38c3974e36b65e06 server_uid KjyTHYnzkWxRQBEIh5uvt04ggeY= as process 86
[Note]    InnoDB: Compressed tables use zlib 1.3
[Note]    InnoDB: Number of transaction pools: 1
[Note]    InnoDB: Using crc32 + pclmulqdq instructions
[Note]    mariadbd: O_TMPFILE is not supported on /tmp (disabling future attempts)
[Warning] mariadbd: io_uring_queue_init() failed with errno 95
[Warning] InnoDB: liburing disabled: falling back to innodb_use_native_aio=OFF
[Note]    InnoDB: Initializing buffer pool, total size = 128.000MiB, chunk size = 2.000MiB
[Note]    InnoDB: Completed initialization of buffer pool
[Note]    InnoDB: File system buffers for log disabled (block size=512 bytes)
[Note]    InnoDB: End of log at LSN=47763
[Note]    InnoDB: Opened 3 undo tablespaces
[Note]    InnoDB: 128 rollback segments in 3 undo tablespaces are active.
[Note]    InnoDB: Setting file './ibtmp1' size to 12.000MiB. Physically writing the file full; Please wait ...
[Note]    InnoDB: File './ibtmp1' size is now 12.000MiB.
[Note]    InnoDB: log sequence number 47763; transaction id 14
[Note] Plugin 'FEEDBACK' is disabled.
[Note] Plugin 'wsrep-provider' is disabled.
[Note] mariadbd: Event Scheduler: Loaded 0 events
[Note] mariadbd: ready for connections.
Version: '11.5.2-MariaDB-ubu2404'  socket: '/run/mysqld/mysqld.sock'  port: 0  mariadb.org binary distribution
[Note] [Entrypoint]: Temporary server started.
[Note] [Entrypoint]: Creating user lab-user
[Note] [Entrypoint]: Securing system users (equivalent to running mysql
[Note] [Entrypoint]: Stoppin
[Note] mariadbd (initiated by: unknown
[Note] InnoDB: FTS optimi
[Note] InnoDB: St
[Note] InnoDB: Dumping buffer pool(s) to /var/lib/my
[Note] InnoDB: Buffer pool(s) dump completed 
[Note] InnoDB: Removed temporary tablespace dat
[Note] InnoDB: Shutdown completed; log sequence number 47763;
[Note] mariadbd: Shutdown complete

2024-10-04 22:41:21+00:00 
[Note] [Entrypoint]: Temporary server stopped
[Note] [Entrypoint]: MariaDB init process done. Ready for start up.

2024-10-04 22:41:22 
[Note] Starting MariaDB 11.5.2-MariaDB-ubu2404 source revision ea75a0b6009b0251e83193cd38c3974e36b65e06 server_uid KjyTHYnzkWxRQBEIh5uvt04ggeY= as process 1
[Note] InnoDB: Compressed tables use zlib 1.3
[Note] InnoDB: Number of transaction pools: 1
[Note] InnoDB: Using crc32 + pclmulqdq instructions
[Note] mariadbd: O_TMPFILE is not supported on /tmp (disabling future attempts)
[Warning] mariadbd: io_uring_queue_init() failed with errno 95
[Warning] InnoDB: liburing disabled: falling back to innodb_use_native_aio=OFF
[Note] InnoDB: Initializing buffer pool, total size = 128.000MiB, chunk size = 2.000MiB
[Note] InnoDB: Completed initialization of buffer pool
[Note] InnoDB: File system buffers for log disabled (block size=512 bytes)
[Note] InnoDB: End of log at LSN=47763
[Note] InnoDB: Opened 3 undo tablespaces
[Note] InnoDB: 128 rollback segments in 3 undo tablespaces are active.
[Note] InnoDB: Setting file './ibtmp1' size to 12.000MiB. Physically writing the file full; Please wait ...
[Note] InnoDB: File './ibtmp1' size is now 12.000MiB.
[Note] InnoDB: log sequence number 47763; transaction id 14
[Note] Plugin 'FEEDBACK' is disabled.
[Note] Plugin 'wsrep-provider' is disabled.
[Note] InnoDB: Loading buffer pool(s) from /var/lib/mysql/ib_buffer_pool
[Note] InnoDB: Buffer pool(s) load completed at 241004 22:41:22
2024-10-04 22:41:26 
[Note] Server socket created on IP: '0.0.0.0'.
[Note] Server socket created on IP: '::'.
[Note] mariadbd: Event Scheduler: Loaded 0 events
[Note] mariadbd: ready for connections.
Version: '11.5.2-MariaDB-ubu2404'  socket: '/run/mysqld/mysqld.sock'  port: 3306  mariadb.org binary distribution

```

### INSTALL MariaDB

```sh
[ec2-user@ip-10-0-1-220 ~]$ sudo yum install mariadb
Loaded plugins: extras_suggestions, langpacks, priorities, update-motd
amzn2-core                                                                                                                                                     | 3.6 kB  00:00:00     
amzn2extra-docker                                                                                                                                              | 2.9 kB  00:00:00     
amzn2extra-kernel-5.10                                                                                                                                         | 3.0 kB  00:00:00     
Resolving Dependencies
--> Running transaction check
---> Package mariadb.x86_64 1:5.5.68-1.amzn2.0.1 will be installed
--> Finished Dependency Resolution

Dependencies Resolved

==========================================================================
 Package     Arch       Version                   Repository         Size
==========================================================================
Installing:
 mariadb     x86_64     1:5.5.68-1.amzn2.0.1      amzn2-core        8.8 M
                                                                                                                                                                               
Transaction Summary
==========================================================================
Install  1 Package

Total download size: 8.8 M
Installed size:       49 M
Is this ok [y/d/N]: y  
Downloading packages:
mariadb-5.5.68-1.amzn2.0.1.x86_64.rpm  
                                                                                                                 | 8.8 MB  00:00:00     
Running transaction check
Running transaction test
Transaction test succeeded
Running transaction
  Installing : 1:mariadb-5.5.68-1.amzn2.0.1.x86_64                                                                                                                                1/1 
  Verifying  : 1:mariadb-5.5.68-1.amzn2.0.1.x86_64                                                                                                                                1/1 

Installed:
  mariadb.x86_64 1:5.5.68-1.amzn2.0.1                                                                                                                                                 

Complete!
```

```sh
[ec2-user@ip-10-0-1-220 ~]$ mysql --host 127.0.0.1 --port 3306 --user lab-user --password
Enter password: #  lab-secret-password
Welcome to the MariaDB monitor.  Commands end with ; or \g.
Your MariaDB connection id is 3
Server version: 11.5.2-MariaDB-ubu2404 mariadb.org binary distribution

Copyright (c) 2000, 2018, Oracle, MariaDB Corporation Ab and others.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.


MariaDB [(none)]> show databases;
+--------------------+
| Database           |
+--------------------+
| information_schema |
+--------------------+
1 row in set (0.00 sec)

MariaDB [(none)]> quit
Bye

[ec2-user@ip-10-0-1-220 ~]$ docker stop mariadb
mariadb

[ec2-user@ip-10-0-1-220 ~]$ docker ps
CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

[ec2-user@ip-10-0-1-220 ~]$ docker ps -a
CONTAINER ID   IMAGE            COMMAND                  CREATED          STATUS                      PORTS     NAMES
3cac1b4ffb27   mariadb:latest   "docker-entrypoint.s…"   21 minutes ago   Exited (0) 27 seconds ago             mariadb

[ec2-user@ip-10-0-1-220 ~]$ docker ps
CONTAINER ID   IMAGE            COMMAND                  CREATED          STATUS         PORTS                                       NAMES
3cac1b4ffb27   mariadb:latest   "docker-entrypoint.s…"   22 minutes ago   Up 3 seconds   0.0.0.0:3306->3306/tcp, :::3306->3306/tcp   mariadb

```

# 5 BASIC  BASH  SCRIPTING

## 5.1
## 5.2
## 5.3
## 5.4
## 5.5
## 5.6
## 5.7

# 6 LINUX SECURITY

## 6.1
## 6.2
## 6.3
## 6.4
## 6.5
## 6.6
## 6.7

# 7 LINUX COMMANDS & DUNCTIONALITIES

## 7.1
## 7.2
## 7.3
## 7.4
## 7.5
## 7.6
## 7.7

# 8 CONCLUSION

## 8.1
## 8.2
## 8.3
## 8.4
## 8.5
## 8.6
## 8.7



