45 Linux Networking tools you should know:

ping			'are these computers even connected?"

curl		make any `HTTP` request you want
httpie		like curl but easier ("http get")
wget		download files
tc 			contrilon the router from linux 

dig/nslookup	 IP dor that domain ?, `DNS` `query`
whois 			 is this domain registered ?

ssh			Secure Remote Shell
scp			copy files over a `SSH` connection
rsync		copy only changed files (works over SSH)

ngrep			grep for your network
tcpdump			"show me all `packets` on Port 80!"
wireshark		look at those packets in a GUI
tshark			command line super powerful packet `analysis`
tcpflow			capture & assemble TCP streams

ifconfig	"what's my IP address?"
ipcalc		easily see what an `IP` means, eg : 13.21.2.3/25
route		view & change the route table
ip			replaces ifconfig, route, and more!
arp			see your `ARP` table
mitmproxy	spy on SS' Connections programs ....laking

nmap 			in ur network scanning ur ports
zenmap			GUI for `N-Map`
p0f				identify OS of hosts connecting to you

openvpn				A `VPN`
wire guild			A newer VPN

nc 				netcat! make `TCP` connections manually
socat			proxy a TCP socket to a unix domain socket + LoTS MORE
telnet			like ssh but insecure.

ftp/sftp				`copy files`. sftp does it over SSH.
netstat/is/Isof/fuser	No m...usta "what `ports` are servers using?"

iptables			set up `firewalls` and NAT!
nftables			new version of iptables
hping3				construct any TCP packet you want
traceroute/mtr 		what servers are on the way to that server?
teptrac 			use top packers instead of icmp to traceroute

ethtool			manage physical `Ethernet` connections network cards
Liw/iwconfig	manage wireless network settings (see speed/frequency!)
sysct			configure Linux kernel's network Stack
openssl			do literally anything with `SSL certificates`
stunnel		    make a TLS/SSL proxy for an insecure Server

iptraf/nethogs/iftop/ntop		see what's using `bandwidth`
ab/nload/iperf					`benchmarking` tools

nsenter						enter a container process's network namespace

python3 -m http.servers			`serve` files from a directory








ls  /dev/input/*
    /dev/input/event0   /dev/input/event11  /dev/input/event14  /dev/input/event3  /dev/input/event6  /dev/input/event9
    /dev/input/event1   /dev/input/event12  /dev/input/event15  /dev/input/event4  /dev/input/event7  /dev/input/mice
    /dev/input/event10  /dev/input/event13  /dev/input/event2   /dev/input/event5  /dev/input/event8  /dev/input/mouse0

    /dev/input/by-id:
    usb-Logitech_USB_Receiver-if01-event-mouse  usb-Logitech_USB_Receiver-if01-mouse

    /dev/input/by-path:
    pci-0000:2a:00.3-usb-0:2:1.1-event-mouse  pci-0000:2a:00.3-usb-0:2:1.1-mouse  platform-i8042-serio-0-event-kbd


sudo cat  /dev/input/by-path/platform-i8042-serio-0-event-kbd 



sudo cat  /dev/input/by-path/pci-0000\:2a\:00.3-usb-0\:2\:1.1-mouse 

