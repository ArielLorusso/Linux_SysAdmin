
https://www.youtube.com/watch?v=WMy3OzvBWc0

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

```sh

```

```sh

```

```sh

```

