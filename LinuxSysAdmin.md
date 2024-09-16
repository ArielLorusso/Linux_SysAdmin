
https://www.youtube.com/watch?v=WMy3OzvBWc0
Linux Server Course - System Configuration and Operation
freeCodeCamp.org


# BIOS & UEFI 

BIOS  :  Basic Input Output System      (OLDER)
UEFI  :  Unified Extensible Firmware Interface (NEW)

Interface between hardware & Operating system

BIOS : 1st sector MBR (Master boor Record)
    Max syze 2Tb
    4 Partitions x (HDD) Hard Drive Disc / (SSD) Solid State Drive
    workorround : extended pertitions

UEFI : in stead of a boot sector it stores the booting code in a special partition
    tons of partitions & Larger Hard drives
    secure boot

# GRUB & GRUB2    5:20

GRUB : Grand Unified Boot Loader        (LEGACY) 
    Transition into OS Loading Partition
    menu.lst or grub.conf    dificult t modify

GRUB2 : hidden boot menu ( press Shift )
    grub.cnf    easy to modofy at   /etc/default/grub
    can boot ISO USB UUID 

# Boot Method       9:36

Hardware vs Software based boot

## HARDWARE
    PXE : Network (Preboot eXecution Envirovment )
        DHCP serer -> IP adress -> Boot file in TFTP server
        Download Boot image from TFTP server in local network
    IPXE : HTTP faster & more reliable than TFTP
    USB : Flash drive
    CD : 

## SOFTWARE
    ISO

# Boot Modules & files 14:10
    Kernell  boot process :
    BIOS -> GRUB -> VmLinux -> full kernell

    VmLinux/ Linuz (compressed) :
    striped kernell file that loads filesystems & modules (Usb Mouse/keyboard) (not full kernell)

    initrd : init ram disk (module & driver info)
    initRamFs : init the fylesystem is part of the kernell

    /boot :
    abi-4.15.0-42-generic                      initrd.img-4.15.0-42-generic    '    config-4.15.0-42-generic        
    config-4.15.0-45-generic        
    memtest86+.bin                  
    memtest86+.elf memtest86+       
    multiboot.bin 
    retpoline-4.15.0-42-generic 
    System.map-4.15.0-42-generic 
    System.map-4.15.-45-generic 
    initrd.img-4.15.0-45-generic 
    vmlinuz-4.15.0-42-generic 
    vmlinuz-4.15.0-45-generic
    /grub 

# Kernell Paniks 21:30
    Error / not found

    1) Faulty hardware :
        Overclock CPU, Bad Ram, Videocard, Network card
    2) Sysytem Upgrede :
        Rescue System to Older Kerell
        Shift -> grub menue
        select old kernell & remove the new

# Loading Modules on boot  27:05

    finds dependencies for modules automatically

    etc/modules: 

    e1000 #inel network card
```sh
    vi modules
```

# Blacklist Modules on boot  28:35
    we can blacklist the modules we do not want

    /etc/modprobe.d/blacklist.conf

# Modules Loaders :

## insmod : 
        old, needs full path, does not chack dependencies
## modprobe : 
        frontend for insmod that needs just the module name
        checks dependencyes and installs it before the requested module 
## depmod : 
        generates the modules dependencyes map

## lsmod : 
        lists all modules installed :

## rmmod : 
        removes a module if not used

## example  34:00
root@ubuntu:/lib/modules/4.15.0-45-generic/kernel/drivers/net$ 

```sh
insmod /lib/modules/4.15.0-45-generic/kernel/drivers/net/thunderbolt-net.ko 
    insmod: ERROR: could not insert module   # ERROR
    /lib/modules/4.15.0-45-generic/kernel/drivers/net/thunderbolt-net.ko : 
    Unknown symbol in module root@ubuntu:/l

modprobe thunderbolt-net    # NO ERROR
    
lsmod
    Module              Size        Used by 
    thunderbolt_net     24576       0 
    thunderbolt         122880      1 thunderbolt_net 
    btrfs               1122304     0 
    zstd compress       163840      1 btrfs
    xor                 24576       1 btrfs 
    raid6 pq            114688      1 btrfs 
    ufs                 77824       0 
    qnx4                16384       0 
    hfsplus             106496      0

rmmod thunderbolt
    ERROR : module thunderbolt is in use by thenderbolt_net # ERROR

rmmod thunderbolt-net
rmmod thunderbolt                                   # NO ERROR

depmod 

```

# NETWORK conectivity 37:50
## Net-tools
```sh
sudo apt install net-tools
```

## PING
```sh
ping google.com    # Internet conection test
    connect: Network is unreachable
ping 8.8.8.8        # Local  conection test
    connect: Network is unreachable
```
## IFCONGIG
## IP ADD  (address)
```sh
root@ubuntu:~# ip add
1: lo: # LOCAL HOST
    <LOOPBACK, UP, LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
        valid_lft forever preferred_lft forever
    inet6:: 1/128 scope host
        valid_lft forever preferred_lft forever

2: eth0:    # ETHERNET
    <BROADCAST, MULTICAST, UP, LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
    link/ether 00:15:50:01:80:00 brd ff:ff:ff:ff:ff:ff
    inet 10.10.10.10/24 brd 10.10.10.255 scope global noprefixroute etho
        valid_lft forever preferred lft forever
    inet6 fe80::3cc8:9fab:b94c:2561/64 scope link noprefixroute
```
## IP ROUTE
```sh
root@ubuntu:~# ip route
default via 10.10.10.1 dev eth0 proto static metric 100
 10. 10. 10.  0/24  dev eth0 proto kernel     scope link src 10.10.10.10 metric 100
169.254.  0.  0/16  dev eth0                  scope link metric 1000
```
## PING
```sh
root@ubuntu:~# ping google.com
PING google.com (172.217.12.46) 56(84) bytes of data.
64 bytes from dfw28s04-in-f14.1e100.net (172.217.12.46): icmp_seq=1 ttl=54 time=6.98 ms
```
# DNS DOMAIN NAME SYS 42:51

## DIG  
dig @server(IP) host(Name ej:google)
```sh
root@ubuntu:~# dig google.com
; <<<<>>> DiG 9.10.3-P4-Ubuntu <><><><><><> google.com
;; global options: +cmd
;; Got answer:
;;->>HEADER<< opcode: QUERY, status: NOERROR, id: 960
;; flags: qr rd ra; QUERY: 1, ANSWER: 6, AUTHORITY: 0, ADDITIONAL:1

;; OPT PSEUDOSECTION:
; EDNS: version: 0, flags:; udp: 512
;; QUESTION SECTION:
;google.com.              IN    A
;; ANSWER SECTION:
google.com.        299    IN    A    64.233.177.102
google.com.        299    IN    A    64.233.177.139
google.com.        299    IN    A    64.233.177.113
google.com.        299    IN    A    64.233.177.101
google.com.        299    IN    A    64.233.177.138
google.com.        299    IN    A    64.233.177.100
;; Query time: 17 msec
;; SERVER: 8.8.8.8#53    (8.8.8.8)
;; WHEN: Tue Feb 12 06:50:58 PST 2019
;; MSG SIZE rcvd: 135
root@ubuntu:~#
```

## NSLOOKUP
```sh
root@ubuntu:~# nslookup google.com
Server:     8.8.8.8
Address:    8.8.8.8#53

Non-authoritative answer:
Name: google.com    Address: 64.233.177.139
Name: google.com    Address: 64.233.177.100
Name: google.com    Address: 64.233.177.113
Name: google.com    Address: 64.233.177.138
Name: google.com    Address: 64.233.177.101
Name: google.com    Address: 64.233.177.102
```
## HOST

/etc/hosts : default IP for DNS hosts
    adding ip will overwtite the host 
host command : see the changes
```sh
root@ubuntu:-# host google.com
google.com has address 64.233.177.139
google.com has address 64.233.177.100
google.com has address 64.233.177.113
google.com has address 64.233.177.138
google.com has address 64.233.177.101
google.com has address 64.233.177.102

google.com has IPv6 address 2607:f8b0:4008:80d::200e
google.com mail is handled by 30 alt2.aspmx.l.google.com. google.com mail is handled by 10 aspmx.l.google.com.
google.com mail is handled by 40 alt3.aspmx.l.google.com. google.com mail is handled by 50 alt4.aspmx.l.google.com.
google.com mail is handled by 20 alt1.aspmx.l.google.com.
root@ubuntu:-#
```
# STANDARD  Network config files 48:30
STANDARD (consistent across all Linux distributions)
    /etc/hosts
    /etc/resolv.conf
    /etc/nsswitch.cong



```sh
/etc/hosts :
127.0.0.1    localhost
127.0.1.1    ubuntu

#127.0.0.1    google.com  TEST MAP GOOGLE TO LOCALHOST

#The following lines are desirable for IPv6 capable hosts ::1
ip6-localhost ip6-loopback

fe00::0 ip6-localnet
ff00::0 ip6-mcastprefix
ff02::1 ip6-allnodes
ff02::2 ip6-allrouters
```

```sh
/etc/resolv.conf:
# Example configuration of GNU Name Service Switch functionality.
# If you have the glibc-doc-reference' and 'info' packages installed, try:
#`info libc "Name Service Switch" for information about this file.

passwd:   compat systemd
group:    compat systemd
shadow:   compat
gshadow:  files

hosts:     files mdns4_minimal [NOTFOUND=return] dns myhostname
networks:  files

protocols:  db files
services:   db files
ethers:     db files
грс:        db files
netgroup:   nis
```


```sh
This file is managed by man:systemd-resolved (8).
# Do not edit. This is a dynamic resolv.conf file for connecting local clients to the
# internal DNS stub resolver of systemd-resolved. This file lists all
# configured search domains. Run "systemd-resolve-status" to see details about the uplink DNS servers #currently in use.
# Third party programs must not access this file directly, but only through the
# symlink at /etc/resolv.conf. To manage man:resolv.conf (5) in a different way,
# replace this symlink by a static file or a different symlink.
# #See man:systemd-resolved.service (8) for details about the supported modes of #operation for /etc/resolv.conf.

nameserver 127.0.0.53     # System resolve -> Local cache dns server as entry point to internet
```
# Devian Network Files (Ubuntu & mint) 53:00

/etc/network/interfaces
/etc/network/*
network manager

/etc/network/interfaces
```
# This file describes the network interfaces available on your system
# and how to activate them. For more information, see interfaces (5).

source /etc/network/interfaces.d/*

# The loopback network interface
auto lo
iface lo inet loopback

#The primary network interface
auto etho
iface eth0 inet static
address 172.20.0.1
gateway 192.168.0.1 netmask 255.255.255.0
dns-nameservers 172.20.0.1
```
MODE    Description       Need Switch Support ? (Link Agregation)
0        balance-rr        Sorta  RECOMMENDED (could use cable) alternates port per packet
1        active backup     No     if port fails change it
2        balance-xor       Yes    1 Hash x client determines port
3        broadcast         Yes    all ports trasmit the data at once
4        802.3ad           Yes    RECOMMENDED Link Agregation
5        balance-lb        No     load balance : transmit based on the port use
6        balance-alb       No     RECOMMENDED same as MODE 5 but constatly changes MAC for the ports


etc/netplan/01-network-manager-all.yaml
```yaml
# Let NetworkManager manage all devices on this system
network:
    version: 2
    renderer: netwerkd
    ethernets:
        eth0:
            dhcp4: false
bonds:
    bond0:
        dhcp4: false
        interfaces:
            - etho
        addresses: [10.10.10.10/24]
        gateway4: 10.10.10.1
        parameters:
            mode: active-backup
        nameservers:
                addresses: [8.8.8.8]
```

etc/netplan/ifconfig-eth0
```
DYPE=Ethernet
BOOTPROTO=none
DEFROUTE=yes
NAME=etho
DEVICE=etho
ONBOOT=yes
MASTER-bond0  # WE MADE THIS BOND
SLAVE=yes
```
etc/netplan/ifconfig-bond0
```
DEVICE=bond0
NAME=bond0
BONDING_MASTER=yes
IPADDR=10.10.10.15
PREFIX=24
ONBOOT=yes
BOOTPROTO=none
BONDING_OPTS="mode=6 miimon=100"
```
We can check our bond with ip command
ip add
```
1:  .......
2: et: <BROADCAST, MULTICAST, UP, LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
link/ether 00:15:50:01:80:01 brd ffffffffff:ff
3: bond0: <NO-CARRIER, BROADCAST, MULTICAST, MASTER, UP> mtu 1500 qdisc noqueue state D
4:  .......
```
# GPT & MBR  Partition Systems  1:12:20

Master Boor Record : tiny reserved space at the bigining describing the disk partitions
we can find the partitions in  Small Computer System Interface (SCSI) disk
dev/sda(storage drive)    dev/sda1(partition1)  dev/sda2(partition2) ....  
Limited to 2TB & 4 Partitions

GPT : GUID Partition Table
GUID : Global Unique Identifier
Has multiple copies of the partition table for reliability
Has no Memory & Partition limitations
NEW & RECOMMENDED

# File System Herarchy  1:18:00

Real / Virtual
Relative / Absolute
Network Mounts

dev/sda1 = rooth partition ( / path of our linux)
dev/sda1 :                              
virtual FileSystem :    /proc   /sys    Dinamicaly created FSys to interact with kernell
remote NFS server :     /home           Might be a remote Sys but is Mounted inside our Fsys
/media/USB1    /debv/sda2     and any other drive will be munted insife deb/sda1 (rooth) as media
/debv/sda2     will appear in      dev/sda1/mnt/data

Command tree lest us see the directories
```  ┬ ├ └ │
bob@ubuntu:~$ tree Pictures/
Pictures/
└-┬--> Cbtgold.jpg
  └--> Trips
         ├-> Grocery Store
         │    ├-> eggs.jpg
         │    └-> milk.jpg
         ├-> Mexico
         │    ├-> pic0002.jpg
         │    ├-> pic0005.jpg
         │    └-> pic0006.jpg
         └-> Orlando
              ├-> IMG_004.jpg
              └-> IMG_005.jpg
4 directories, 8 files
```
cd ~
cd ../..  (rooth)
tree -L 2 -d
    -L 2        : just 2 nested directories
    -l          :
    -d          : list only directories
    -P *.jpg    : list only   .jpg
    -I */.txt   : exclude any .txt

Mexico or any other folder can be a NFS share mounted in our FSys... we do not know
```sh
bob@ubuntu:-/Pictures/Trips$ ls -a
.    ..    'Grocery Store'    Mexico    Orlando
```
.  = this directory
.. = parent directory

cd ~  = Change Directory   to     /home/user

# Partitions 1:25:20
 TOOLS :
    parted / gparted
    fdisk
    info tools

lsblk
```
[root@centos ~]# lsblk
NAME             MAJ: MIN    RM    SIZE    RO    TYPE    MOUNTPOINT
fdo              2:0         1     4K      0     disk
sda              8:0         0     20G     0     disk
├-sda1           8:1         0     1G      0     part    /boot
├-sda2           8:2         0     19G     0     part
   ├ centos-root 253:0       0     17G     0     lvm     /
   ├ centos-swap 253:1       0     2G      0     lvm     [SWAP]
sdb              8:16        0     10G     0     disk
sdc              8:32        0     10G     0     disk
sdd              8:48        0     10G     0     disk
sde              8:64        0     10G     0     disk
sro              11:0        1     1024M   0     rom
```

cat  /proc/partitions
```
major    minor    #blocks    name
2        0        4          fde
11       0        1048575    sre
8        0        20971520   sda
8        1        1048576    sda1
8        2        19921920   sda2
8        16       10485760   sdb
8        32       10485760   sdc
8        48       10485760   sdd
8        64       10485760   sde
253      0        17821696   dm-0
253      1        2097152    dm-1
```

## make partition
command gparted (GUI)   Desktop
command parted  (CLI)   Server   ( may not come installed )  
cammand fdisk   (CLI)   Server   ( allways installed )

fdisk  /dev/sdb
m = help
g = GPT partition
o = MBT partition
p = print partition table
n = add new partition
w = Write & exit

# Formatting various FileSystems  1:30:55

Fsys : ext4   xfs   btrf   dos
ext4   Most common, has suport journals (salvage Powerdown while writting)
xfs    Old for big drives (CentOS & Redhat) its own set of tools diffetent from linux
btxfs  New Xfs nwe features, abandoned
dos    Windows (ntfs, vfat, fat32)

Default ext4 -> more used = more docummentation & tutorials

# Mounting partitions 1:36:04

commands mount / unmount 
/etc/fstab    (automatically on boot)
blkid

# Working with files 3:02:33

## User & Profiles

## Text  Editor
 Nano : Easy & intuitive (use if aviable)
 Vi : Hard & Old (Always available)
 
### Vi Modes
    Vi command mode -> press "i"  -> Vi insert mode
    Vi insert mode  -> press Esc  -> Vi command mode
### Vi commands
    :wq <enter>  SAVE & QUIT
    :q! <enter>  QUIT
    :w  <enter>  SAVE
### Nano  commands   
    ^ == Ctrl
    ^G Get Help   ^Q Write Out   ^W Where Is   ^K Cut Text    ^J Justify   ^C Cur Pos
    ^X Exit       ^R Read File   ^\ Replace    ^U Uncut Text  ^T To Spell  ^  Go To Line

 
## View text files

cat file1 file2:
    concatenates files and shows and prints the output
head -n 5 file :
    Shows firs 10 lines of the file, we changed it to 5 lines 
tail -n 5 file :
    shows last 10 lines of the file, we changed it to 5 lines
more file :
    shows entire file, with navigation (in a extrern window)
less file : (better)
    similar to more but has /word  ( find & hilight some word )
    
## serch for text 3:13:25

grep -F word file :
    shows lines containing word in file -F avoids regular expression
    cat file | grep word  -> this is most common use ( filter a command with pipe)
    grep word cat file    -> this is another     use ( filter a command inside grep)
    combination :
        grep word1 file | grep word2  | grep word3   ->  filters lines containing  word1  &  word2  &  word3 ...
regex :
    
strigs :

##  STDIN,  STDOUT,  STDERR  3:17:26

STDIN : Input of a command 
STDOUT : output of a command

    text | command   :  | converts text or STDOUT to STDIN of command  -> command (text) 
    command < file   :  > converts file as STDIN of command

In General :

    STDIN   | command  
    command < STDIN. . . .
    command   STDOUT  >   File_name
    command   STDERR  2>  File_name


# Input Output tips

    /dev/null : an Trash can (instant delette) 
    tee       : STDIN -> tee file -> STDOUT
    xargs     : forces STDOUT as argument when | does not work
    
examples :

    ls Documents ff > /dev/null  2>&1    
        1) ls generated SRDERR : can not acces 'ff' no such file or directory
        2) > errased STDOUT  by sending it to /dev/null
        3) 2> sended STDERR  to STDOUT 
        
    cat file.txt | tee copy.txt : 
        1 ) cat shows the file (STDOUT)
        2 ) | converts cat STDOUT to tee's STDIN 
        3 ) tee saves it's STDIN and passes it as STDOUT ro be seen

    cat file.txt | xargs mkdir
        1) cat recives file.txt and opens te text as STDOUT
        2) | converts cat STDOUT to cxargs STDIN
        3) xargs separates every line in the file and 
        calls several times mkdir for each word in the file

## Text manipulation 3:28:12

cut paste sort wc :

filel.txt

    chicken
    fish
    turtle
    monkey
    
file2.txt

    lips
    whiskers
    feathers
    flippers
        
sort file1.txt > sorted_file1.txt
    
    chicken
    fish
    monkey
    turtle 
    //sorts the text in alphabetical order


wc file1.txt
    
    4 4 27 file.txt
    //  4 words, 4 lines, 27 characters

cut -c 3,4,5  file1.txt

    ick     // chicken
    sh      // fish
    rtl     // turtle
    nke     // monkey
    // shows the letter 3,4,5 of each line in file.txt
    
paste file1.txt file2.txt

    chicken lips
    fish    whiskers
    turtle  feathers
    monkey  flippers

## AWK & SED 3:33:00

SED

AWK

# Managing services 3:51:30
