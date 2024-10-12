
# Clase 1

### Carga Oraria y organisacion

6 meses 8hs semanales;

Videos clases:
    30  min : consultas y dudas
    1   Hs  : Teoria 
    1   Hs  : Practica y tareas

Material PDF
Desafios

educacionit.com/bootcamp-devops-engineer:
nociones de linus y CLI

## Temario del Bootcamp

bootcamp 5 fases :  10 clases por face, 50 clases + o -
    FASE1: Sys Admin
            SSH  TFP  SFTP  VNC  RDP  
    FASE2: Cloud Computing  Azure AWS GCS
            EC2  S3  Cloud-Starage  Blob-storage
            CloudWatch IAM  RBAC  Snapshoot-Devops
    FASE3: DevOps      Docker 
            SRE Terraform, CloudFormation 
            Orquestadores y clusters Kubernetes:
                Sets, Pods Nodos y API
    FASE4: DevSecOps   Seguridad
            Seguridad en DevOps y jenkins
            Asegurar contenedores y pentesting
    FASE5: Empleabilidad 
            Insercion laboral
            Mejorar perfil profesional
                1) asesoramiento : CV
                2) Portfolio     : LinkedIn
                3) Roleplays     : Simulacion Entrevistas y consejos
                4) Vinculacion laboral



Tecnologias :
    AWS Apache Jerkins Github Docker Azure Kubernetes Terraform Linux

[Plan de estudio](https://static.educacionit.com/educacionit/assets/bootcamp-devops-engineer.pdf):
1. Introduccion a EducacionIT 
2. Descripcion del Bootcccamp
3. requisitos (intdod a redes y introd a linux)

## Vamos a Aprender: 

A levantar una Maquia virtual desde Virtual Box

Un entorno en la nube 

Implementación un sistema de Ecommerce 
    integrando todas las etapas de las tareas de un ingeniero en Devops 
    siguiendo todas las ceremonias del marco de metodologías ágiles.

1. Implementar infraestructura física y virtualizada 
2. Publicación en la Nube en forma manual 
3. Automatización de la aplicación 
4. Creación de Snapshots 
5. Infraestructura como Código en contenedores 
6. Orquestación con Kubelnetes, 
7. Publicación con alta disponibilidad 
8. Mantenimiento automático de componentes 
9. Implementación de seguridad 
10. Documentación

## 3 Metodologias

Lern by doing: problemas, desafios de forma individual y en equipo

Pair Programing: utilizando metodologia Agile con un companiero

Mentoring: apollo constante del tutor

## Certificaciones Linux

LPI  : Lunux Profesional Institute Certifications
CNCF : Cloud Native Computing Foundation
    LFCS : Linux Foundations Certified Sys Admins

Lpi.org/our-certifications/exams-101-objectives


## Distribuciones Linux:

    
    [Linux istributions timeline ] (https://www.upload.wikimedia.org/wikipedia/commons/1/1b/Linux_Distribution_Timeline.svg)

    [Distrowach.com] (https://www.distrowatch.com/)


Debian --> Ubuntu -> Mint
        -> Kali
RedHat --> CentOS
        -> Fedora
        -> Oracle Enterprise
        -> Manrake
Slackware -> Suse 

Arch -> manjaro

4 mas populares y clasicamente utilizadas:
Debian, Ubutu, CentOs, RedHat




Vamos a trabajar con Ubuntu

Ubutu y Ubutu-server:
    Ubutu : con interfaz y programas
    Ubutu-server: no traia GUI pero si Apache mail etc,

RedHat al pricipio cobraba su distribucon luego solo el soporte de este
tiene una orientaciona mas a lo enterprise y seguridad

Kali : pentesting
Raspbian : Raspberry Pi OS
Parrot : Seguridad Insformatica
pupy : liviana
Arch : apender y configurar el Sistema
Wifislax: Desarrollada en Argentina
FreeBSD
NixOS


A mayores recursos y conectiviad mas vulnerable el servidor

Configurar red    desde CLI o Hypervisor  ( Virtual box )

### PACKETES
RedHat -> .RPM  yum hnf  
Devian -> .DEV  apt  
windows -> chocolatey

Manejador de paquetes :

    yum
    apt-get
    Brew / Home-brew

Proceso de Instalacon:
1.  Agregar Repositorios
2.  Agregar Keys
2.  Acttualizar lista de paquetes
3.  instalar


## Comandos

GREP
SED
Texto y expresiones regulares

PS
TOP
Procesos corriendo 
Fork Bomb : ocupa toda la memoria y tira el servidor

Puertos aviertos
Perticionamiento de discos

## Glosario 

* Deployment: 
es el proceso de poner a disposición un software 
para que lo puedan emplear los usuarios a los cuales está destinado. 

* Inodo: 
una estructura que contiene metadatos de un archivo. 

* Metadatos: se trata de datos sobre un archivo, 
referencia al archivo en el sistema de archivos
tales como permisos, dueños, marcas de tiempo, etc.

* Kernell : Nucleo del Sistema Operativo 

* Módulo del kernel: se trata de archivos que extienden su funcionalidad. 
Los módulos en muchos casos son drivers (controladores) de dispositivos. 

* NICE: la prioridad que le da la CPU a un proceso, 
a menor valor de nice, mayor prioridad y viceversa. 

* PID (Identificador de Proceso): número con el que el kernel identifica a un proceso.



# FASE 1

## Clase 2

https://www.cocalc.com/features/terminal

### CTF Capture the flag
https://www.overthewire.org/wargames/
https://www.overthewire.org/wargames/bandit/
Over The Wire Bandit Walkthrough (CTF Wargame)  https://www.youtube.com/watch?v=9ReSHQihuZw
https://www.capturetheflag.withgoogle.com/
https://www.fundacionsadosky.org.ar/ctf-junior/

Area3 Oficinas Programacion     https://www.areatresworkplace.com/
https://www.google.com/maps/place/AreaTres+El+Salvador/@-34.5860057,-58.4322028,15z/data=!4m2!3m1!1s0x0:0x357a9ecb56bdbfc9?sa=X&ved=1t:2428&ictx=111


2 tipos de Capture the flag : desafio de Bulnerabilidad

1. 2 equipos con servidores que se atacan mutuamente y protegen sus servidores
2. Desafios con archivos de 32 o 64bits de un flag que devemos encontrar

competencias:
    Hackaton
    Ekoparty

### Expresiones regulares
https://www.regexr.com/

Expresiones regulares:

utilizados en cadenas de texto o patrones. 
Estos patrones pueden ser de dos tipos:

• Literales (texto plano).  nombres de archivo
• Metacaracteres (símbolos con un significado especial).



script : conjunto de instrucciones interpretadas por algun programa

### GREP - filtrar

```
grep [opciones] patron archivo
```
Opciones:
i   No diferencia mayúsculas de mínúsculas.
C   Cuenta la cantidad de coincidencias.
V   Muestra el resultado inverso.
e   Utiliza expresiones regulares.
E   Utiliza expresiones regulares extendidas.
r   Búsqueda recursiva.
n   Muestra el número de línea.
A [numero]  Muestra "número" de líneas después del patrón encontrado.
B [numero]  Muestra "número" de líneas antes del patrón encontrado.
--color


```sh
# Muestra exptesiones regulares con '-e' para el manual ignorando mayusculas
> man grep | grep -i -e'-e'
       -E, --extended-regexp
       -e PATTERNS, --regexp=PATTERNS

# Cuenta la cantidad de veces que use 'red' en los commandos
> history | grep -c red
46

# Muestra cantidad  de veces que hay 'error' en multiples archivos
> grep -c error /var/log/a*
/var/log/agns:0                 # no hay
/var/log/anaconda.log:1         # hay 1 conicidencia
/var/log/anaconda.syslog:6      # hay 6 conicidencias

# Muestra lo que no contenga la palabra "bash":
> cat /etc/passwd|grep -v bash
daemon:x:1:1:daemon:/usr/sbin:/bin/sh
bin:x:2:2:bin:/bin:/bin/sh
sync:x:4:65534:sync:/bin:/bin/sync

```

```
Posicionales (position anchor)
 ^      Al inicio de la línea.
 $      Al final de la línea.
\<\>    Palabra Exacta entre \< \>     Ejemplo: \<palabra\>
```

```sh
# Buscar el patrón "bin" dentro del archivo I /etc/passwd
> grep 'bin' /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/bin/sh
bin:x:2:2:bin:/bin:/bin/sh
```
```
Conjuntos de caracteres (character sets):

[abc]   Grupo de caracteres. Esto identifica una de esas tres letras.
[a-z]   Identifica cualquier letra de la a a la z en minúscula.
[0-9]   Identifica cualquier número.
[^abc]  Identifica cualquier letra que no sea a, b o c en minúscula.
[^a-z]  Identifica cualquier carácter que no sea de la a la z en minúscula.
  *     Este signo es un comodín para cualquier carácter, excepto nueva línea.

Clases de caracteres de la expresión regular POSIX:

[:alnum:]   Alfanumérico [a-zA-Z0-9]
[:alpha:]   Alfabético [a-zA-Z]
[:blank:]   Espacios o tabs
[:cntrl:]   Caracteres de control
[:digit:]   Dígitos numéricos[0-9]
[:graph:]   Cualquier carácter visible
[:lower:]   Minúsculas [a-z]
[:print:]   Caracteres que no son de control
[:punct:]   Caracteres de puntuación
[:space:]   Espacios en blanco
[:upper:]   Mayúsculas [A-Z]
[:xdigit:]  Dígitos hex [0-9a-fA-F]
```
```SH
# Buscar que contengm "Argentina" o "argentina":
> grep '[Aa]rgentina' prueba.txt
Restaurador de Leyes de Argentina
Argentina
argentina
124Argentina

# Buscar Exclisovamente "Argentina" o "argentina":
> grep '\<[Aa]rgentina\>' prueba.txt
Restaurador de Leyes de Argentina
Argentina
argentina

# Buscar tres números consecutivos del 0 al 9:
> grep '[0-9][0-9][0-9]'
prueba.txt
124Argentina
12345JMR
# Buscar todo lo que no comience con un número:
> grep '^[^0-9]'test
Villa Dalmine
Restaurador de Leyes de Argentina
JMR
Argentina
argentina
evil5

# Buscar exactamente abc y que aparezca sólo de 2 a 4 veces:
> grep --color '\<\(abc\){2,4\}\>' prueba2.txt
abcabc
abcabcabc
abcabcabcabc
```

### Expresiones regulares extendidas

Modificadores (Quantity modifiers)
Existen dos tipos de expresiones regulares: básicas y extendidas.
   * Las expresiones regulares extendidas consideran ciertos caracteres como especiales.
   * En las expresiones regulares básicas para que 
dicho carácter tenga un sentido especial es necesario 
anteponer una contra barra, tal como se muestra a continuación:
```
Basicas     Extendidas      Descripción
    *        *          Identifica 0 a más veces un único carácter
    \?       ?          Identifico O o una vez la expresión regular que antecede
    \+       +          Identifica 1 o más veces la expresión regular que antecede
  \{n,m}     {nm}       Identifica un rango de ocurrencias jun carácter a una expresión regular) que antecede. Debe identificar al menos n hosta m ocurrencias
    \|       |          Identifica una u otro. Función logica OR
\(regex\)   (regex)     Agrupo Identifica grupo de expresiones regulares
```

https://www.ionos.es/digitalguide/servidores/

### MAQUINAS VIRTUALES


https://www.osboxes.org/virtualbox-images/

```sh
[root@osboxes]: /etc# grep -r '^bin' .
```

1:36:45 


### SED - editar tabas



### VM Virtual machine



Virtual box :
```
    name               : bootcamp-devops
    Machine folder    g:\bootcamp-devops
    OS Type             Linux 
    Version             Ubuntu (64-bit)
   
    RAM -> 2Gb

    Do not add Virtual disk
    Crerate Virtual Disc Now     <-- ISO
    Use an esisting virtual disk <-- DVI (openbox)

    DVI  : VirtualBox Disk Image  <--
    DVH  : Virtual Hard Disk
    VMDK : Virtual Machine Disk

    Dinamicaly allocated    Slow-Small  
    Fixed size              Fast-Big    <--
```

una ves creada la Maquina virtual 
es hora de seleccionar la Imagen ISO o el Disco virtual DVI
para instalarle el sistema operativo y poder usarla

Seleccionamos la MV y vamos a :
```
options -> storage

    storage : SATA  (Disco duro de 10GB que creamos o DVI de OPENBOX)
    storage : IDE   (IMAGEN ISO de sistema operativo a instalar)
```


Username: osboxes
Password: osboxes.org
Guest Additions: Installed
Keyboard Layout: US (Qwerty)
VMware Compatibility: Version 10+



## Clase 3


### PS Process

```sh
> ps
    PID TTY          TIME CMD
  38258 pts/2    00:00:00 bash
  38330 pts/2    00:00:00 ps

> man ps | grep -i -e'\<a\>' -e'\<u\>' -e'\<x\>' -A2
      ps - report a snapshot of the current processes.

    a       Lift the BSD-style "only yourself" restriction
            causes ps to list all processes with a terminal (tty),
            or to list all processes when used together with the x option.

    x       Lift the BSD-style "must have a tty" restriction,
    
    U userlist 
            Select by effective user ID (EUID) or name.
    -u userlist
            Select by effective user ID (EUID) or name.

> ps aux
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.0 166732 12136 ?        Ss   11:08   0:01 /sbin/init sp
root           2  0.0  0.0      0     0 ?        S    11:08   0:00 [kthreadd]
root           3  0.0  0.0      0     0 ?        I<   11:08   0:00 [rcu_gp]
root           4  0.0  0.0      0     0 ?        I<   11:08   0:00 [rcu_par_gp]
root           5  0.0  0.0      0     0 ?        I<   11:08   0:00 [slub_flushwq

> ps aux | grep ssh
root        1350  0.0  0.0  15432  8864 ?        Ss   11:09   0:00 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups
ariel       2519  0.0  0.0   7980  1076 ?        Ss   12:08   0:00 /usr/bin/ssh-agent -s
ariel      56208  0.0  0.0  11748  2356 pts/2    S+   14:48   0:00 grep --color=auto ssh

```

Para SSH normalmente se usa puerto 22
HTTP 80     HTTPS 443  Tambien 8080 y 8443


### PID : Process ID

se utiliza para identificar y trabajar con procesos
se los puede terminar con la signal "kill PID -9"

### TTY : Terminal Type 

tipo de terminal asociada al processo
si vemos ? es que no esta asociada a una terminal
tambiem podemos var valores como tty7 o pts/0

### TOP

con "s" podemos cambiar la cantidad de segundos para refresco de procesos
son "q" teminamos el comando 

```sh
> top

top - 14:55:14 up  3:46,  1 user,  load average: 1,72, 1,98, 1,72
Tasks   : 359 total,   1 running, 358 sleeping,   0 stopped,   0 zombie
%Cpu(s) :  8,3 us,  1,8 sy,  0,0 ni, 89,8 id,  0,0 wa,  0,0 hi,  0,1 si,  0,0 st
MiB Mem :  15908,7 total,   6753,6 free,   5782,0 used,   3373,1 buff/cache

CHANGE DELAY FROM 3,0 to 

    PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND                                 
   3998 ariel     20   0 1136,3g 814128 178240 S  55,8   5,0  27:30.43 chrome                                  
   2624 ariel     20   0  195340  45316  33500 S   5,3   0,3   6:41.33 compton                                 
   1380 root      20   0   24,2g  99868  49200 S   5,0   0,6   8:29.75 Xorg                                    
   3243 ariel     20   0   33,1g  79172  65840 S   5,0   0,5   5:11.32 chrome                                  
   3457 ariel     20   0 1123,2g  96724  70616 S   3,7   0,6   1:03.12 code                                    
  18861 ariel     20   0 1132,2g 416136 159684 S   3,7   2,6  11:21.73 chrome                                  

ariel @ ariel-All-Series  $ top | grep -e '\<Cpu\>'
%Cpu(s):  8,8 us,  0,5 sy,  0,0 ni, 90,7 id,  0,0 wa,  0,0 hi,  0,0 si,  0,0 st
%Cpu(s):  3,7 us,  0,4 sy,  0,0 ni, 95,8 id,  0,0 wa,  0,0 hi,  0,1 si,  0,0 st
%Cpu(s):  2,1 us,  0,6 sy,  0,0 ni, 97,2 id,  0,1 wa,  0,0 hi,  0,1 si,  0,0 st
```

grep nos ira imprimiendo en pantalla cada vez que refresque
se puede usar "s" denro de grep pero no veremos lo ingresado 



### PARTICIONES

```sh
ariel @ ariel-All-Series  $ sudo ls /dev
[sudo] password for ariel:     
autofs		 hwrng	  loop6		    rtc0      tty16  tty40  tty8       ttyS30	   vcsa1
block		 i2c-0	  loop7		    sda       tty17  tty41  tty9       ttyS31	   vcsa2
bsg		     i2c-1	  loop8		    sda1      tty18  tty42  ttyprintk  ttyS4	   vcsa3
btrfs-control i2c-2	  loop9		    sda2      tty19  tty43  ttyS0      ttyS5	   vcsa4
bus		     i2c-3	  loop-control  sda3      tty2   tty44  ttyS1      ttyS6	   vcsa5
char		 i2c-4	  mapper	    sda4      tty20  tty45  ttyS10     ttyS7	   vcsa6
console		 i2c-5	  mcelog	    sda5      tty21  tty46  ttyS11     ttyS8	   vcsa7
core		 i2c-6	  mem		    sda6 
```

Vemos  sda1 sda2 sda3 ... sda6 estos device son discos 


### Gparted

Alternativas :
    Parted Magic        KDE Partition Manager

GParted es el editor de particiones de GNOME. 
Escrita en C++ con Gtkmm para relizar la GUI conforme a la Human Interface Guidelines
Esta aplicación es usada para : Crear, Eliminar, Redimensionar, Inspeccionar y Copiar 
particiones, como también sistemas de archivos. 

Esto es útil para crear espacio para nuevos sistemas operativos,
reorganizar el uso del disco y crear imágenes de un disco en una partición. 
 
La aplicación usa la librería libparted para detectar y manipular 
dispositivos y tablas de partición, mientras varias herramientas de sistema de archivos 
dan mantenimiento a sistemas de archivos no incluidos en libparted.


limitaciones: 
No puede incrementar el tamaño de particiones sin existir un espacio vacío después de esta,
si existen dos particiones juntas no se podrá aumentar el tamaño de una en detrimento de la otra.

En esta tabla se muestran las capacidades de GParted, de acuerdo con cada sistema de archivos.
Si quieres probar esto aplicación, la puedes
descone directamente de ingogogoficiol


### Parted Magic
Parted Magic es un LiveCD que se puede utilizar sin necesidad de ser instalada en el disco duro. 
 
En este LiveCD podemos encontrar varias herramientas, entre ellas, 
un editor de particiones llamado VisParted basada en el genuino Gparted, 
con el que podremos crear, redimensionar y borrar nuestras particiones del disco duro.

Soporta los siguientes sistemas de archivos :
ext2, ext3, ext4, fat16, fat32, hfs, hfs+, jfs, linux-swap, ntfs, reiserfs, reiser4 y xfs.




### DD   Formatear y particionar  desde BASH: 

```sh
> man dd
NAME  dd - convert and copy a file

```
comando  dd (Duplicate Disk)

Esta herramienta sirve para dar formato de bajo nivel a un disco rígido
 (escribirá cada sector del disco). 
 
El proceso puede variar dependiendo del tamaño de almacenamiento del disco duro
o del tipo de interfaz (IDE o SATA). La forma de implementar esta herramienta es la siguiente:

```sh
> dd if=/dev/zero of=/dev/sda
```

• dd: El comando dd (duplicate disk) es un comando para transferir datos 
desde un dispositivo a archivo, hacia otro dispositivo o archivo.

* if=/dev/zero: 

if significa input file, es decir, el origen a copiar. 
En este caso, el origen es el dispositivo zero 
(escribir el carácter zero en todo el disco)

* of=/dev/sda: 
 
of significo output file, o sea, el dispositivo o archivo destino
donde se van a copiar los datos. El ejemplo se refiere al disco rigido.

### FDISK

```sh
> man fdisk
NAME  fdisk - manipulate disk partition table

```
Particionando un disco duro con Fdisk
Fdisk es una aplicación disponible para varios sistemas operativos. 
Esta utilidad permite dividir en forma lógica un disco duro, 
siendo denominado este nuevo espacio como partición. 

La descripción de las particiones se guarda en la tabla de particiones 
que se localiza en el sector Ø de cada disco. 

La versión fdisk de Linux permite crear particiones en 94 sistemas de archivos distintos,
 incluyendo FAT32, ext3, Solaris y QNX. 
 
 Esta versión de fdisk cuenta con un menú de texto de ayuda en línea para realizar las operaciones.

```sh
> 

Welcome to fdisk (util-linux 2.34).
Changes will remain in memory only, until you decide to write them. 
Be careful before using the write command.

Command (m for help): m
Help:
DOS (MBR)
    a toggle a bootable flag
    b edit nested BSD disklabel
    C toggle the dos compatibility flag
Generic
    d delete a partition
    F list free unpartitioned space
    1 list known partition types
    n add a new partition
    P print the partition table
    t change a partition type
    V verify the partition table
    i print information about a partition
Misc
    m   print this menu
    u   change display/entry units
    x   extra functionality (experts only)

Script
    I   load disk layout from sfdisk script file
    0   dump disk layout to sfdisk script file

Save & Exit
    W   write table to disk and exit
    q   quit without saving changes

Create a new label

    g   create a new empty GPT partition table
    G   create a new empty SGI (IRIX) partition table
    0   create a new empty DOS partition table
    S   create a new empty Sun partition table

# i = print information about a partition
command (m for help): i

Partition number (1-4, default 4): 1
    Device: /dev/sda1
        Start:   2048
        End:     462639103
        Sectors: 462637056
        Cylinders: 907132
        Size:    220.60
        Id:      83
        Type:    Linux
        Start-C/H/S:      4/4/1
        End-C/H/S:   1023/254/2

# p = print the partition table
Command (m for help): p

Disk /dev/sda: 500 GiB, 536870912000 bytes, 1048576000 sectors
Disk model: VBOX HARDDISK
Units: sectors of 1 512 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O    size (minimum/optimal) : 512 bytes / 512 bytes
Disklabel type: dos         Disk identifier: 0x372dbf93

Device      Boot    Start       End         Sectors     Size    Id      Type
/dev/sda1           2048        462639103   462637056   220.6G  83      Linux
/dev/sda2   *       462639104   463224831   585728      286M    83      Linux   # BOOT
/dev/sda3           463224832   482170879   18946048    9G      82      Linux swap / Solaris
/dev/sda4           482170888   1048573951  566403072   270.1G  83      Linux

# n = add a new partition
Command (m for help): n
Command action
    e extended
    p primary partition (1-4)
    P Selected partition 3
First cylinder (2576-17849, default 2576):
Using default value 2576
Last cylinder or +size or +sizeM or +sizek (2576-2706, default 2706):
Using default value 2706

# t =  change a partition type
Command (m for help): t
Partition number (1-4): 3
Hex code (type L to list codes): 82
Changed system type of partition 3 to 82 (Linux swap / Solaris)

#  l = list known partition types
Command (m for help): l

00 Empty            | 24 NEC DOS          | 81 Minix / old Lin  | bf Solaris        
01 FAT12            | 27 Hidden NTFS Win  | 82 Linux swap / So  | c1 DRDOS/sec (FAT-
02 XENIX root       | 39 Plan 9           | 83 Linux            | c4 DRDOS/sec (FAT-
03 XENIX usr        | 3c PartitionMagic   | 84 OS/2 hidden or   | c6 DRDOS/sec (FAT-
04 FAT16 <32M       | 40 Venix 80286      | 85 Linux extended   | c7 Syrinx         
05 Extended         | 41 PPC PReP Boot    | 86 NTFS volume set  | da Non-FS data    
06 FAT16            | 42 SFS              | 87 NTFS volume set  | db CP/M / CTOS / .
07 HPFS/NTFS/exFAT  | 4d QNX4.x           | 88 Linux plaintext  | de Dell Utility   
08 AIX              | 4e QNX4.x 2nd part  | 8e Linux LVM        | df BootIt         
09 AIX bootable     | 4f QNX4.x 3rd part  | 93 Amoeba           | e1 DOS access     
0a OS/2 Boot Manag  | 50 OnTrack DM       | 94 Amoeba BBT       | e3 DOS R/O        
0b W95 FAT32        | 51 OnTrack DM6 Aux  | 9f BSD/OS           | e4 SpeedStor      
0c W95 FAT32'(LBA)' | 52 CP/M             | a0 IBM Thinkpad hi  | ea Linux extended 
0e W95 FAT16'(LBA)' | 53 OnTrack DM6 Aux  | a5 FreeBSD          | eb BeOS fs        
0f W95 Ext'd (LBA)' | 54 OnTrackDM6       | a6 OpenBSD          | ee GPT            
10 OPUS             | 55 EZ-Drive         | a7 NeXTSTEP         | ef EFI (FAT-12/16/
11 Hidden FAT12     | 56 Golden Bow       | a8 Darwin UFS       | f0 Linux/PA-RISC b
12 Compaq diagnost  | 5c Priam Edisk      | a9 NetBSD           | f1 SpeedStor      
14 Hidden FAT16 <3  | 61 SpeedStor        | ab Darwin boot      | f4 SpeedStor      
16 Hidden FAT16     | 63 GNU HURD or Sys  | af HFS / HFS+       | f2 DOS secondary  
17 Hidden HPFS/NTF  | 64 Novell Netware   | b7 BSDI fs          | fb VMware VMFS    
18 AST SmartSleep   | 65 Novell Netware   | b8 BSDI swap        | fc VMware VMKCORE 
1b Hidden W95 FAT3  | 70 DiskSecure Mult  | bb Boot Wizard hid  | fd Linux raid auto
1c Hidden W95 FAT3  | 75 PC/IX            | bc Acronis FAT32 L  | fe LANstep        
1e Hidden W95 FAT1  | 80 Old Minix        | be Solaris boot     | ff BBT    

# Hacemos un nuevo disco para la VM y aparece como  "sdb"
osboxes@osboxes:/dev$ sudo fdisk /dev/sdb
Welcome to fdisk (util-linux 2.34).
Changes will remain in memory only, until you decide to write them. Be careful before using the write command.

# p = see  Partition table
Command (m for help): p
Disk /dev/sdb: 4 GiB, 4294967296 bytes, 8388608 sectors
Disk model: VBOX HARDDISK
Units: sectors of 1 * 512 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disklabel type: dos
Disk identifier: 0x683cec71

# F = see  Free space aviable
Command (m for help): F
Unpartitioned space /dev/sdb: 3.102 GiB, 4293918720 bytes, 8386560 sectors
Units: sectors of 1 * 512 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
Start  End      Sectors  Size
2048   8388607  8386560  4G

# n = new partition
Command (m for help): n
Partition type
    p : primary (0 primary, 0 extended, 4 free)
    e : extended (container for logical partitions)

Select (default p): p
    Partition number (1-4, default 1): 2
    First sector (2048-8388607, default 2048): 2048
    Last sector, +/-sectors or +/-size{K,M,G,T,P} (2048-8388607, default 8388607): +500M

    Created a new partition 2 of type 'Linux' and of size 500 MiB.
# t = change partition type 
Command (m for help): t
selected partition 2 
Hex code (type L to list all codes): 83
Changed type of partition 'Linux' to 'Linux'.

# SIEMPRE MIRAR LA PARTICION ANTES DE ACEPTAR LOS CAMVIOS
Command (m for help): p
Disk /dev/sdb: 4 GiB, 4294967296 bytes, 8388608 sectors
Disk model: VBOX HARDDISK
Units: sectors of 1 * 512 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disklabel type: dos
Disk identifier: 0x683cec71
Device
Boot Start
End Sectors
Size Id Type
/dev/sdb2
2048 1026047 1024000 500M 83 Linux

# w =  Write table to disk and exit
Command (m for help): w
The partition table has been altered.
Calling ioctl() to re-read partition table. 
Syncing disks.
```
SIEMPRE MIRAR LA PARTICION ANTES DE ACEPTAR LOS CAMVIOS

### SSH to our VM

https://www.nepalisupport.wordpress.com/2016/06/29/linux-file-system-hierarchy/

REMOTE SSH :

    instalamos la extension  en nuestro host dentro de VS_Code  
    https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-ssh

VM IP :
```sh
    En nuetra VM seleccionamos el icono de red en la barra de tareas (al lado de audio y apagado)
    
    Wired Connected -> Wired Settings

        connected - 1000 Mb/s    Settings  <--

            IPv4    ->  IPv4 Methode  :  Aitomatic -> Manal

                Adress  192.168.0.19
                Getaway 192.168.0.1
                Mask    255.255.255.0

                DNS 8.8.8.8,8.8.4.4     # los de google
```
```sh
#   usuario @ ip
ssh osboxes@192.165.0.19
osboxes
```

### VM Network modes

Bridged   : connects the VM to your host's physical network, allowing it to 
have its own IP address and communicate directly with other devices on the network.

NAT       : translates the VM's traffic to allow it to access the internet 
through your host's network connection. You'll need to configure port forwarding
 on your host's firewall to allow SSH traffic to reach the VM.

Host-only : creates a private network between the VM and your host.
You'll need to configure the VM's IP address and network gateway to match your host's settings.


    https://www.youtube.com/watch?v=IDDmqlN-hF0
    ```
    ssh-copy-id     root@ip
    ssh -t root@ip <comando>
    ssh -D <puerto> root@ip
    ssh -X root@ip
    ssh -L 2020:<ip>:22 root@ip
    ssh -R 2020:localhost:22 root@ip
    ```

SOLUCION SSH VM

    https://www.medium.com/@jasonedlewis/accessing-your-vm-from-your-host-machine-via-ssh-b6e355bcd526

    VM NETWORK SETTINGS X DEFECTO
```
        Adapter 1 NAT
```
    VM NETWORK SETTINGS PARA SSH
```
        Adapter 1 ATACHED TO : Bridged Adapter
        Adapter 2 ATACHED TO : HOst Only adapted
```



## Clase 4

### DESAFIO

https://www.commonmark.org/help/tutorial/04-headings.html

Objetivo
    
    El objetivo de este desafío será realizar la instalación de una distribución linux a elección
    Una vez instalado el sistema operativo, tendremos que realizar algunas configuraciones 
    de la máquina virtual y del sistema operativo.

Desafío:

1) Instalar un virtualizador (Recomendamos fuertemente Virtualbox)
2) Crear maquina virtual
   * a ) Requisitos recomendados de la misma 
         ( en el ejemplo utilizamos ubuntu 20.04 con interfaz gráfica)
     + i. )   CPU: 2
     + ii )  Memory: 4096M
     + iii) Disco: 10GB
   * b ) Configurar adaptador de red como adaptador puente
3) Instalar Sistema Operativo, no utilizar una imagen de máquina virtual 
   (no utilizar OSBoxes u otra herramienta del estilo)
   * a ) Una vez instalado el sistema operativo y configurado 
         el adaptador de red como adaptador puente,
         configurar la IP fija de forma manual 
4) Realizar un clon/copia de la máquina virtual
5) Con ayuda de Grep, determinar la información de nuestro usuario almacenada en /etc/passwd)
   * a) Ejemplo: root:*:0:0:System Administrator:/var/root:/bin/sh
   * b) Guardar la salida del comando utilizado para ver esta información en un archivo con el nombre "user-info.txt"
6) Agregar un segundo disco a la máquina virtual (recomendamos que sea de al menos 2gb)
   * a) Agregar una partición primaria de al menos 1gb de tipo Linux
   * b) Agregar otra partición de al menos 500M de tipo SWAP
   * c) Escribir los cambios en disco
   * d) Guardar la información de la tabla de particiones en un archivo llamado "partition-table.txt"

Entregable

Los entregables serán almacenados en la carpeta compartida que tienen en drive 
con el formato (<carpeta con su nombre>/<Fase>/<módulo>/archivo).

Por ejemplo, el instructivo se almacenaría en la carpeta compartida con el nombre Zdenko Hraste,
en una carpeta llamada Fase 1 que dentro tendrá otra carpeta llamada Módulo 1 
y que dentro almacenare todos los archivos relevantes a este desafío.
         
Instructivo con paso a paso de como realizaron el desafio, pueden incluir screenshots, imágenes, comandos, etc.
Este instructivo además tendrá que contar con imágenes que demuestran 
el punto 2, 3 y 4 del desafío (es decir, la configuración de la máquina virtual)

Para el punto 5, tendrán que subir el archivo user-info.txt a su carpeta compartida 
siguiendo el formato explicado anteriormente. 

no olviden documentar el comando que utilizaron en el instructivo.
Para el punto 6, tendrán que subir el archivo partition-table.txt a su carpeta compartida 
siguiendo el formato, además de documentar los pasos para llegar a eso en el instructivo.

### RESOLUCION

5) *   a)
    ```sh
    osboxes@osboxes:~$ cat /etc/passwd | grep osboxes
    osboxes:x:1000:1000:osboxes.org,,,:/home/osboxes:/bin/bash
    ```
   *   b)
    ```sh
    osboxes@osboxes:~$ cat /etc/passwd | grep osboxes > usr_passwd.txt
    osboxes@osboxes:~$ ls
    Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos  snap  usr_passwd.txt
    ```

6) *   a)  
    ```sh
    fdisk /dev/sda
    
    >>Command (m for help): n
    Partition type
        p : primary (0 primary, 0 extended, 4 free)
        e : extended (container for logical partitions)

        >> Select (default p): p
        Partition number (1-4, default 1): 2
        First sector (2048-8388607, default 2048): 2048
        Last sector, +/-sectors or +/-size{K,M,G,T,P} (2048-8388607, default 8388607): +500M
        Created a new partition 2 of type 'Linux' and of size 500 MiB.
    
    >> Command (m for help): n
    Partition type
        p   primary (0 primary, 0 extended, 4 free)
        e   extended (container for logical partitions)
    
    >> Select (default p): p
    Partition number (1-4, default 1): 2
    First sector (2048-4194303, default 2048): 2048
    Last sector, +/-sectors or +/-size{K,M,G,T,P} (2048-4194303, default 4194303): +1G  

    Created a new partition 2 of type 'Linux' and of size 1 GiB.

    >> Command (m for help): t
    Selected partition 2
    Hex code (type L to list all codes): 82
    Changed type of partition 'Linux' to 'Linux swap / Solaris'.

    >> Command (m for help): p
    Disk /dev/sdb: 2 GiB, 2147483648 bytes, 4194304 sectors
    Disk model: VBOX HARDDISK   
    Units: sectors of 1 * 512 = 512 bytes
    Sector size (logical/physical): 512 bytes / 512 bytes
    I/O size (minimum/optimal): 512 bytes / 512 bytes
    Disklabel type: dos
    Disk identifier: 0xb12a832e

    Device     Boot Start     End Sectors Size Id Type
    /dev/sdb2        2048 2099199 2097152   1G 82 Linux swap / Solaris

    >> Command (m for help): w
    The partition table has been altered.
    Calling ioctl() to re-read partition table.
    Syncing disks.

    Syncing disks.
    ```

###  LPI Certification

104.2: Mantener la integridad de los sistemas de archivos

Peso: 2
    El peso = importancia que tiene este tópico en la certificación. 
    ( peso puede ir de 1 a 6 )

Descripción:

    Los alumnos deberán ser capaces de mantener un sistema de archivos estándar, 
    así comotambién los datos extra asociados con un sistema de archivos con journaling.

Áreas claves de conocimiento

    • Verificar la integridad de sistemas de archivos.
    • Monitorear el espacio y los inodos libres.
    • Reparar problemas sencillos del sistema de archivos.

### Sistema de Archivos

**¿Qué es un sistema de archivos?**

    Un conjunto de páginas apiladas no es un libro. 
    Los índices y los números de páginas lo convierten en un libro. 
    Con un sistema de archivos pasa algo parecido. 
    Un sistema de archivos sirve para poder localizar 
    la información de manera coherente. 

    A diferencia de un libro necesitamos esa coherencia, 
    no solamente para "leer" sino para "escribir", 
    es decir para modificar la información almacenada. L
    Ext2, ext3 y ext4 son sistemas de archivos creados para Linux. 
    veremos las diferencias entre estos sistemas de ficheros.

**Ext2**

    Ext2 es sinónimo de second extended filesystem. 
    Fue introducido en 1993 y desarrollado por Rémy Card. 
    Este fue desarrollado para superar la limitación 
    del sistema de archivos original ext. 
    Ext2 no tiene característica de journaling 
    (no lleva registro de los movimientos de archivos).
    
    • Se recomienda en las unidades flash, 
       unidades USB, ext2, ya que no tiene que utilizar journaling.
    • El tamaño máximo de archivo individual puede ser de 2 TB. 
      En general el tamaño del sistema de archivos ext2 puede ser de hasta 32 TB.

**Ext3**

    Ext3 es sinónimo de third extended filesystem 
    Fue introducido en 2001. Desarrollado por Stephen Tweedie, 
    está disponible a partir del kernel Linux 2.4.15.

    • La principal ventaja de ext3 es que permite a journaling. 
    En journaling tiene un área dedicada en el sistema de archivos, 
    donde se registran todos los cambios. Cuando el sistema se cuelga, 
    la posibilidad de corrupción del sistema de archivos es menor.

    Hay tres tipos de journaling disponibles en el sistema de archivos ext3:
    1)  Journal: Los metadatos y el contenido se guardan en el journaling.
    2) Ordered: Los metadatos sólo se salvan en el journaling. 
        Los metadatos son volcados al journaling sólo después 
        de escribir el contenido en el disco. Este es el valor predeterminado.
    3) Writeback: Los metadatos sólo se salvan en el journaling. 
        Los metadatos pueden estar en el journaling, ya sea antes o después 
        de que el contenido se grabe en el disco.

**Ext4**

    Ext4 es sinónimo de fourth extended filesystem . 
    Fue introducido en 2008,a partir del kernel Linux 2.6.19 ext4.
    • El tamaño máximo de archivo individual puede ser de hasta 16 TB.
    • El tamaño promedio global del sistema de archivos ext4 es 1 EB (Exabyte). 
        1 EB = 1024 PB (petabytes). 1 PB = 1024 TB (terabyte).
    • Un directorio puede contener un máximo de 64,000 subdirectorios (en comparación con 32.000 en ext3).
    • También puede montar una fs ext3 existente como un fs ext4 (sin tener que actualizar).
    • Otras nuevas características son introducidas en ext4: 
        multiblock allocation, delayed allocation, journal checksum. 
        fast fsck, etc. Estas nuevas características han mejorado el rendimiento y la fiabilidad 
        del sistema de archivos cuando se compara con ext3.

**Xfs**

    El sistema de archivos xfs fue creado por Silicon Graphic Inc. y se agregó al kernel Linux en la versión 2.4.
    Estas son algunas de sus características:
    • Alta escalabilidad, es capaz de crear particiones de unos 109 GB.
    • Uso eficiente del espacio.
    • Sistema transaccional de alto rendimiento.
    • Rápida recuperación.
    • Capacidad para establecer límite de ocupación por directorios.
    

    Comandos de xfs
```sh
    # make.xfs  :  formatear la partición/dev/sdb6 como xfs:
    > make.xfs /dev/sdb6
    # xfs_info  :  Muestra información del sistema de archivos.
    > xfs_info
    Usage: xfs_info [-V] [-t mtab] [mountpoint|device|file]

    > xfs_info/dev/sdb6
    meta-data=/dev/sdb6     isize=256       agcount=4, agsize=54284544 blks  
            =               sectsz=512      attr=2                            
    data    =               bsize=4096      blocks=217138176, imaxpct=25      
            =               sunit=0         swidth=0 blks                     
    naming  =version 2      bsize=4096      ascii-ci=0                        
    log     =internal       bsize=4096      blocks=106024, version=2          
            =               sectsz=512      sunit=0 blks, lazy-count=1        
    realtime =none          extsz=4096      blocks=0, rtextents=0             
```

**BTRFS:**

    El proyecto btrfs es relativamente nuevo y activo, 
    sin embargo distribuciones como CentOS consideran que aún no es maduro 
    de forma suficiente para usarlo en producción. 
    
    openSUSE tiene una posición diametralmente opuesta: 
    lo usa como sistema de archivos predeterminado. 

    Fedora a partir de su versión 33 lo usa como predeterminado para su edición Workstation.
    Una de las características interesantes es que puede 
    guardar y restaurar el estado del sistema de archivos (snapshots) 
    y usar subvolumenes (raíces alternativas).

```sh
    # mkfs.btrfs : crear una partición con btrfs
    > mkfs.btrfs /dev/sdb
```
    En btrfs podemos pensar en él como un determinado espacio disponible 
    que incluso puede abarcar más de un disco. Por ejemplo:

```sh
    > mkfs.btrfs -L "Mi Espacio" /dev/sdb /dev/sdc
```
**vfat**
    Es el sistema de archivos MS DOS 
    (es decir, no es nativo de Linux) con soporte de nombres largos de archivos. 
    El comando mkfs.vfat crea una partición vfat.

    # mkfs.vfat /dev/sda1

**exFAT**
    El sistema de archivos exFAT fue creado por Microsoft posee similitudes con FAT32, 
    pero brinda mayores funcionalidades (por ejemplo, tamaño de archivos más grandes que 4GiB)

    En Linux existe una implementación libre, se trata de un módulo de sistema de archivos en espacio de usuario. 
    En el caso de Debian deben estar instalados los paquetes 
        exfat-fuse (para montar particiones en exFAT) 
        exfat-utils (herramientas para manipular particiones en exFAT). 
        
    En CentOS se puede usar el repositorio adicional LiFTeR.

    Para formatear, por ejemplo:

    ```sh
        > mkfs.exfat /dev/sda1
    ```
    
    Referencias
    • [Linux Forensics Tools Repository  - LiFTeR1
      https://www.lathack.com/uso-del-sistema-de-archivos-en-linux/
      https://www.lathack.com/nivel-intermedio/
    • https://www.forensics.cert.org/#centossupport

    sudo apt install forensics-full (DISK FORENSICS)

### Resumen mkfs
    Una vez creada la partición, el sistema de archivos debe ser añadido 
    para que Linux pueda hacer uso de este espacio. 
    mkfs se usa para crear sistemas de archivos en particiones vacías. 
    mkfs se utiliza con muchas opciones :
    ```
    Opciones        Descripción
    -t fstype       Especifica el tipo de sistema de ficheros a crear. Por defecto se usa ext2.
    fs -options     Opciones específicas de sistema de ficheros para ser pasados al 
                        sistema real de ficheros que vamos a crear.
    -C              Comprueba el dispositivo en busca de bloques defectuosos 
                        antes de crear el sistema de ficheros.
    -L fichero      Lee los bloques defectuosos del fichero.
    -V              Produce una salida con más información, incluyendo 
                        todas las órdenes específicas del sistema de ficheros concreto que se ejecutan. 
                        Ésto es realmente sólo útil para comprobaciones.
    ```

### Creando Swap

    ```sh
    # Muestra el uso de las particiones swap:
    > swapon S
    Filename    Type        Size        Used   Priority
    /dev/sda3   partition   4199420     0     -1

    # Crea el swap en la partición/dev/sda3:
    > mkswap /dev/sda3
    ```

**Mas informacion :**
    • Introducción a los sistemas de archivos.
    • ext4 - Wikipedia.
    • Understanding Linux filesystems: ext4 and beyond.
    • A high-level discussion of Linux filesystem concepts
    • Comparison of file systems - Wikipedia.


**Puntos de Montaje :**

    directorio mediante el cual accedemos a un sistema de archivos. 
    montar un dispositivo en realidad  es establecer un puente entre 
    el sistema de archivos principal y el del dispositivo al cual queremos acceder. 

    El mismo principio para acceder a un CDROM, por ejemplo, 
    es el que se aplica para acceder a una carpeta de un servidor remoto.

    De acuerdo a la FHS el punto de montaje para dispositivos removibles es /media. 
    No obstante podría ser utilizado cualquier directorio, siempre que este tenga sentido.

Términos y herramientas

• /etc/fstab
• /media/
• mount
• umount
• Isblk
• blkid

Terminos y herramientas
• du
• df
• fsck
• e2fsck
• mke2fs
• tune2fs
• xfs_repair
• xfs_fsr
• xfs_db


Áreas claves de conocimiento

• Proporcionar los comandos comunes para el cargador de arranque y las opciones al kernel en el momento del arranque.
• Demostrar conocimiento de la secuencia del arranque desde BIOS/UEFI hasta la culminación del arranque.
• Entendimiento de SysVinit y systemd.
• Conocimiento básico de upstart
• Verificar los eventos del arranque en los archivos de log

Términos y herramientas
• dmesg
• journalctl
• BIOS
• UEFI
• bootloader (cargador de arranque)
• kernel
• initramfs
• init
• SysVinit
⚫ systemd

