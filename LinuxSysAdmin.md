
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
# GPT & MBR  1:12:20
