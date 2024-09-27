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


### INSTALL AWS CLI

## AWS Security & Crededntials
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