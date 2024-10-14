
# Clase 1 - Temario + Linux

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

## LPI - Certificaciones Linux - MODULO 1

**Certificaciones de Linux**

LPI  : Lunux Profesional Institute Certifications
CNCF : Cloud Native Computing Foundation
LFCS : Linux Foundations Certified Sys Admins

https://www.lpi.org/our-certifications/summary-of-lpi-certifications/
https://learning.lpi.org/en/learning-materials/all-materials/)

Fase 1 - SysAdmin   Módulo 1 

**103.7 Buscar en texto usando expresiones regulares**

Peso: 3 (importancia del 1 al 6)

Los alumnos deberán ser capaces de :
    ● `editar` archivos de texto usando `Vi`.
    ●  editar  archivos de texto usando `expresiones regulares`.
    ● `buscar` filtrando con expresiones regulares.

Términos y herramientas
    ● grep
    ● fgrep
    ● egrep
    ● sed
    ● regex(7)

**102.1: Arranque del sistema**

Peso: 2 (importancia del 1 al 6)


Los alumnos deberán ser capaces :
    Diseñar un esquema de `particionado` para un sistema Linux.

Áreas claves de conocimiento:
    ● Asignar `sistema de archivos` y espacio de intercambio para separar `particiones` o discos.
    ● Adaptar el diseño para el uso propuesto del sistema.
    ● Asegurarse de que la partición `/boot` está en conformidad 
    con los requisitos de la arquitectura del hardware `para arrancar`.
    ● Conocimiento de las características básicas de `LVM (Logical Volume Manager)` .

Términos y herramientas :
    ● El sistema de archivos `/ (raíz)`
    ● El sistema de archivos `/var`
    ● El sistema de archivos `/home`
    ● El sistema de archivos `/boot`
    ● Partición del sistema `EFI` (ESP)
    ● Espacio de intercambio
    ● Puntos de `montaje`
    ● `Particiones`

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

APT vs Snap                     https://www.youtube.com/watch?v=1f-dzz5l1Fg
Flatpak vs Snaps vs DEB & RPM   https://www.youtube.com/watch?v=1lLZ-59xH3Y
```sh
# DISTRO   INSTALLER    Packet Managers
RedHat   -> .RPM        yum  hnf  
Devian   -> .DEV        apt  dpkg   snap  
windows  -> .MSI        chocolatey
```
Manejador de paquetes :

    yum
    apt-get
    Brew / Home-brew
   

Proceso de Instalacon:
1.  Agregar Repositorios
2.  Agregar Keys
3.  Acttualizar lista de paquetes
4.  instalar


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

## Clase 2 - VM + commandos

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

GREP : global regular expression print 

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


### SED - editar strings

stream editor
```sh
    # s = sustitution
    sed 's/unix/linux/' geekfile.txt
```
### AWK - editar tabas

    Aho, Weinberger & Kernighan

```sh
    # $1 = first column 
    hostname -I | awk '{print $1}'
```
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



## Clase 3  - Processos + SSH


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




### DD - Formatear y particionar  desde BASH: 

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

### FDISK - Tablas de particiones

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



## Clase 4 - FyleSystem

### DESAFIO 1

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

###  LPI  Certification - Módulo 2

Fase 1 - SysAdmin   Módulo 2

**104.2: Mantener la integridad de los sistemas de archivos**

Peso: 2  ( mportancia del 1 al 6 )

Descripción:

mantener un `sistema de archivos` estándar y los datos extra 
asociados con un sistema de archivos con `journaling`.

Áreas claves de conocimiento
    ● Verificar la integridad de sistemas de archivos.
    ● Monitorear el espacio y los `inodos` libres.
    ● Reparar problemas sencillos del sistema de archivos.

Términos y herramientas
    ● du
    ● df
    ● fsck
    ● e2fsck
    ● mke2fs
    ● tune2fs
    ● xfs_repair
    ● xfs_fsr
    ● xfs_db

**104.3: Controlar el montaje y desmontaje de sistemas de archivos**

Peso: 3  (importancia de 1 al 6 )

Áreas claves de conocimiento:
    ● `Montar` y `desmontar` sistemas de archivos.
    ● Configurar el montaje del sistema de archivos en el `arranque`.
    ● Configurar sistemas de archivos removibles montables por el usuario.
    ● Uso de `etiquetas y UUID` para identificar y montar sistemas de archivos.
    ● Noción de unidades de montaje de `systemd`.

Términos y herramientas
    ● /etc/fstab
    ● /media/
    ● mount
    ● umount
    ● lsblk
    ● blkid

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

### mkfs - make FyleSystem
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

### Crear Swap

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



### mount
```sh
    # Montaje y desmontaje de sistemas de archivos
    > mount [opciones] [dispositivo directorio]
```
    El comando mount admite dos tipos de opciones:
    • unos para el propio comando,
    • y otros para especificar opciones del sistema de ficheros

    ```
    Opciones    Descripción
    -a          Monta todos los filesystems especificados en 
                /etc/fstab, menos los que tengan la opción "noauto".
    -h          Ayuda del comando mount.
    -O          Especifica las opciones del mount en la línea de comandos.
    -r          Monta filesystems en modo de solo lectura.
    -t fstype   Especifica un tipo de filesystem.
    -V          Salida interactiva.
    -W          Monta el sistema de archivos de lectura/escritura.
    ```


```sh
#  El comando mount, por si solo, muestra lo que está montado en el equipo
> mount
sysfs   on   /sys type sysfs (rw,nosuid, nodev, noexec, relatime)
proc    on  /proc type proc (rw,nosuid, nodev, noexec, relatime)
udev    on  /dev type devtmpfs (rw,nosuid, relatime, size=498632k, nr_inodes=124658, mode=755)
devpts  on  /dev/pts type devpts (rw, nosuid, noexec, relatime, gid=5,mode=620, ptmxmode=000)
tmpfs   on  /run type tmpfs (rw, nosuid, noexec, relatime, size=102040k,mode=755) /dev/sda1 on type ext4 (rw,relatime, errors remount-ro, data=ordered)
securityfs on /sys/kernel/security type securityfs (rw, nosuid, nodev, noexec, relatime)
tmpfs   on  /dev/shm type tmpfs (rw,nosuid, nodev)
tmpfs   on  /run/lock type tmpfs (rw, nosuid, nodev, noexec, relatime, size=5120k)
tmpfs   on  /sys/fs/cgroup type tmpfs (ro, nosuid, nodev, noexec, mode=755)
cgroup  on  /sys/fs/cgroup/systemd type cgroup (rw,nosuid, nodev, noexec, relatime, xattr, release_agent=/lib/systemd/systemd-cgroups-agent, name=systemd)
pstore  on  /sys/fs/pstore type pstore (rw,nosuid, nodev, noexec, relatime)
cgroup  on  /sys/fs/cgroup/devices type cgroup (rw, nosuid, nodev, noexec, relatime, devices)
cgroup  on  /sys/fs/cgroup/perf_event type cgroup (rw, nosuid, nodev, noexec, relatime, perf_event)
cgroup  on  /sys/fs/cgroup/memory type cgroup (rw,nosuid, nodev, noexec, relatime, memory) cgroup on /sys/fs/cgroup/freezer type cgroup (rw, nosuid, nodev, noexec, relatime, freezer)
```

```sh
# El archivo /etc/mtab   
#    (es un enlace simbólico a     /proc/self/mounts) 
#    tiene un contenido similar al comando mount
> cat /etc/mtab
sysfs       /sys sysfs rw, nosuid, nodev, noexec, relatime 00
proc/proc   proc rw,nosuid, nodev, noexec, relatime 00
udev/dev    devtmpfs rw, nosuid, relatime, size=498632k, nr_inodes=124658, mode=755 00
devpts/dev/pts devpts rw,nosuid, noexec, relatime, gid=5,mode=620, ptmxmode=00000
tmpfs       /run tmpfs rw,nosuid, noexec, relatime, size=102040k,mode=755 00 /dev/sda1/ext4 rw,relatime, errors remount-ro, data=ordered 00
securityfs  /sys/kernel/security securityfs rw, nosuid, nodev, noexec, relatime 00
tmpfs       /dev/shm tmpfs rw, nosuid, nodev 00
tmpfs/run/lock tmpfs rw, nosuid, nodev, noexec, relatime, size=5120k 00
tmpfs       /sys/fs/cgroup tmpfs ro, nosuid, nodev, noexec, mode=755 00
cgroup/sys/fs/cgroup/systemd cgroup
rw,         nosuid, nodev, noexec, relatime, xattr, release_agent=/lib/systemd/systemd-cgroups-agent, name systemd 00
pstore/sys/fs/pstore pstore rw, nosuid, nodev, noexec, relatime 00
cgroup/sys/fs/cgroup/devices cgroup rw, nosuid, nodev, noexec, relatime, devices 00
cgroup/sys/fs/cgroup/perf_event cgroup rw, nosuid, nodev, noexec, relatime, perf_event 00
cgroup/sys/fs/cgroup/memory cgroup rw, nosuid, nodev, noexec, relatime, memory 00
cgroup/sys/fs/cgroup/freezer cgroup rw, nosuid, nodev, noexec, relatime, freezer 00
```

```sh
# Para montar una partición en un directorio:
>mount -t ext4 /dev/sdb6/mnt

# Verificamos que se monto
>mount | grep mnt
/dev/sdb6 on /mnt type ext4 (rw,relatime)

#Otro ejemplo, montar el CD-rom:
>1s -1/dev/cdrom
lrwxrwxrwx 1 root root 3 nov 25 00:47/dev/cdrom -> sro
> mount -t iso9660 /dev/cdrom/media
mount: dispositivo de bloques /dev/sro está protegido contra escritura; se monta como sólo lectura
> mount grep -i media
/dev/sro on /media type iso9660 (ro, relatime)

# montar como : lectura / escritura
> mount -t     ext4 /dev/sdb3 /home/osboxes series
> mount -w  -t ext4 /dev/sdb3 /home/osboxes series
# montar como : solo lectura
> mount -r  -t ext4 /dev/sdb3 /home/osboxes series
```

### umount

    Los sistemas de ficheros pueden ser desmontados usando el comando umount.
    Cuando un sistema de ficheros es desmontado, los contenidos del árbol principal se actualizan,
    no pudiéndose usar el umount si el sistema de ficheros que se quiere desmontar está en uso.

    Si el sistema de ficheros está en uso, el comando umount dará un error.
    Esto puede ocurrir, cuando tenemos abierto un fichero de un DVD o un proceso está usandolo.
    Incluso estar dentro del directorio del sistema a desmontar.
    Otros errores pueden surgir si quitamos dispositivos removibles sin antes desmontarlos.


    ```sh
    # Para desmontar:
    > umount /mnt
    
    # Para ver opciones y usos
    umount --help
    ```
    umount [opciones] [dispositivo directorio]
    
    Opciones    Descripción
    -a          Desmonta todos los filesystems descritos en/etc/mtab. 
                    Este fichero está mantenido por los comando mount y umount en tiempo real, 
                    se usa normalmente cuando se apaga/reinicia el PC.
    -t fstype   Desmonta sólo los filesystems del tipo especificado.



### etiquetas y UUID 

    para identificar sistemas de archivos
    En ocasiones es más sencillo y descriptivo referirse a una partición 
    por su etiqueta (LABEL). Tanto ext4, xfs como btrfs tienen herramientas
    para cambiar y/o asignar una etiqueta.

    Además, puede resultar ventajoso usar el UUID (identificador único universal), 
    cuando vamos a utilizar discos que estaban en una máquina en otra, 
    ya que podemos abstraernos del archivo del nodo al dispositivo.
```sh
# Para ver las etiquetas podemos usar el comando 1sblk:
> lsblk -o NAME, LABEL, UUID
NAME          LABEL               UUID
sda
├-sda1        SYSTEM              B4A4-9276
├-sda2
├-sda3        OS                  8E70AA5670AA44B5
├-sda4        RECOVERY            08BE6391BE63765A
├-sda5                                    63d75b5c-c4fd-41d8-bcc1-5e9c4e1f7758
├--sda6                                   FqDBQB-XKxV-pqJ0-1fBK-HIAJ-kiuI-43RХиб 01f4c47c-9b24-45c6-93bc-cdd58df078f0
   ├--fedora-root root                    50800e72-5e3d-4b58-898b-96bf07ff50af
   ├--fedora-swap swap                    8b328fbd-d712-4c5a-80e4-23e8108e1e2a
   ├--fedora-home      
   ├--fedora-vsr      Fedora-KDE-Live-27-1-6 2017-11-05-07-36-22-00
```

### blkid
```sh
> blkid
/dev/sda1: LABEL="SYSTEM"   UUID="B4A4-9276"        TYPE="vfat" PARTLABEL="EFI System Partition"
PARTUUID="5bcc6561-aa2f-4347-aed3-d99aedd43346"
/dev/sda3: LABEL="OS"       UUID="8E70AA5670AA4485" TYPE="ntfs" PARTLABEL="Basic data partition"
PARTUUID="ebaeb087-7d25-4da6-819c-fe4ebd83d519"
/dev/sda4: LABEL="RECOVERY" UUID="08BE6391BE63765A" TYPE="ntfs" PARTLABEL="Basic data partition"
PARTUUID="d101b023-4afe-48ab-af5b-702d6909a3f4"
/dev/sda5:                  UUID="63d75b5c-c4fd-41d8-bcc1-5e9c4e1f7758"     TYPE="ext4"
PARTUUID="33b8e2a9-339d-47b6-a1a2-83bcde06cf4d"
/dev/sda6:                  UUID="FqDBQB-XKxV-pqJ0-1fBK-HIAJ-kiuI-43RXu6"   TYPE="LVM2_member"
PARTUUID="b5a3fb45-d7f7-42aa-aa68-ac6e0b506e72"
/dev/mapper/fedora-root: LABEL="root" UUID="01f4c47c-9b24-45c6-93bc-cdd58df078f0"    TYPE="ext4"
/dev/mapper/fedora-swap: LABEL="swap" UUID="50800e72-5e3d-4b58-898b-96bf07ff50af"    TYPE="swap" /dev/mapper/fedora-home: UUID="8b328fbd-d712-4c5a-80e4-23e8108e1e2a" TYPE="ext4"
/dev/mapper/fedora-vsr: UUID="2017-11-05-07-36-22-00" LABEL="Fedora-KDE-Live-27-1-6" TYPE="iso9660"
PTUUID="58e4232c" PTTYPE="dos"

```


## clase 5 - Disk use + Links + BIOS /GRUB


luego veremos como configurar desde el CLI la IP estatica 

Extension para sudo SSH desde VS_Code

    Save as Root in Remote - SSH
    https://www.marketplace.visualstudio.com/items?itemName=yy0931.save-as-root

    ctrl + shift + p  > save as root

    o usar "sudo vim" "sudo nano" como alternativa 



### Espacio e los inodos libres de particiones

Un sistema de lectura/escritura no sirve de mucho 
si crece hasta el punto en que no pueda admitir nuevos ficheros.
Esto puede ocurrir si nuestro sistema de ficheros se llena o si se queda sin inodos libres. 

Los inodos son las estructuras de datos  dentro del sistema de archivos 
que describen los archivos en el disco. 
Cada sistema de archivos contiene un número finito de inodos que se establecen
en el momento de creación del sistema de archivos.

Este número es, tabien el máximo número de archivos que un sistema de archivos puede acomodar.
Como se crean con un número de inodos enorme, rara vez crearemos tantos archivos como para agotar los inodos. 
No obstante, es posible quedarse sin inodos libres en particiones que contengan muchos ficheros pequeños.


### df - Disc Fylesystem usage

Es muy importante prevenir la escasez de inodos libres en las particiones del sistema. 
El comando df brinda información necesaria, tanto sobre el uso del espacio en disco, 
como de los inodos libres. Además, nos muestra información general sobre el uso del disco 
en los sistemas de ficheros montados en directorios.

Normalmente, en los directorios, indicamos ficheros de dispositivos de particiones, 
por ejemplo, /dev/hda1, pero si indicamos otro tipo de nombre de fichero o directorio, 
obtendremos información sobre la partición donde está ubicado dicho fichero o directorio.

Si omitimos directorios, se mostrará la información relativa a los sistemas de ficheros
montados en los dispositivos incluidos en /etc/fstab. 

La forma correcta de utilizar el comando df es la siguiente:
    
    #df [opciones]/ dev/sd[a|b|c|d] [1,2,3,4]
```sh
    > df --help 
        Usage: df [OPTION]... [FILE]...
        Show information about the file system on which each FILE resides, or all file systems by default.

        -a, --all             include pseudo, duplicate, inaccessible file systems
        -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,
                                '-BM' prints sizes in units of 1,048,576 bytes;
                                see SIZE format below
        -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)
        -H, --si              print sizes in powers of 1000 (e.g., 1.1G)
        -i, --inodes          list inode information instead of block usage
        -k                    like --block-size=1K
        -l, --local           limit listing to local file systems
            --no-sync         do not invoke sync before getting usage info (default)
            --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,
                                    or print all fields if FIELD_LIST is omitted.
        -P, --portability     use the POSIX output format
            --sync            invoke sync before getting usage info
            --total           elide all entries insignificant to available space,
                                and produce a grand total
        -t, --type=TYPE       limit listing to file systems of type TYPE
        -T, --print-type      print file system type
        -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE

    # VER USO ESPACIO
    > df 
        Filesystem     1K-blocks      Used Available Use% Mounted on
        tmpfs            1629056      1840   1627216   1% /run
        /dev/sda6      166243912 156056984   1669348  99% /
        tmpfs            8145264    304556   7840708   4% /dev/shm
    
    # VER USO INODOS
    > df -i
        Filesystem       Inodes   IUsed   IFree IUse% Mounted on
        tmpfs           2036316    1215 2035101    1% /run
        /dev/sda6      10633216 1586980 9046236   15% /
        tmpfs           2036316     567 2035749    1% /dev/shm
```

### du - disk usage

Espacio ocupado por archivos y directorios
El comando du nos puede ayudar, al mostrar directorio por directorio,  el uso del espacio en disco. 
Así mismo, examina los directorios recursivamente y muestra información detallada o resumida sobre 
el espacio en disco consumido. La forma correcta de utilizar el comando du es la siguiente:

```sh
    du [opciones] [directorio]
    Opciones    Descripción
    -a          Muestra todos los ficheros, no solo los directorios.
    -c          Genera un gran total de todos los elementos listados.
    -h          Muestra los resultados en un formato legible para las personas, 
                  incluyendo sufijos como M (megabytes) y G (gigabytes).
    -S          Visualiza un sumario para cada uno de los directorios especificados, 
                  en lugar de los totales encontrados recursivamente en cada subdirectorio.
    -5          Excluye los subdirectorios de las sumas y los totales, 
                  limitándose a totalizar los directorios.
```

```sh
    #Espacio total ocupado por /etc:
    >du-sch /etc
        18M /etc
        18M total

    # ver los diez archivos más grandes en el directorio actual, usamos:
    > du -s * | sort -nr | head
        41963556	Videos
        5010840	    Desktop
        3684856	    cuda_11.4.0_470.42.01_linux.run
        3054216	    VirtualBox VMs
        1185372	    Documents
        757396	    build
        651364	    snap
        647772	    Downloads
        277100	    go
        249084	    opencv-4.x

    > du -sh * | sort -nr | grep -e'[0-9]G'|head
        41G	    Videos
        4,8G	Desktop
        3,6G	cuda_11.4.0_470.42.01_linux.run
        3,0G	VirtualBox VMs
        1,2G	Documents


    # I Espacio total ocupado por distintos directorios:
    > du -sch /*
        7.4M /bin
        42M /boot
        56K /debian
        (... salida cortada...)
```
### tune2fs en sistemas extendidos

El comando tune2fs, permite configurar algunas características del comportamiento de 
nuestro sistemas de archivos.

    Opciones        Descripción
    -c [número]     Define el número máximo de montajes antes de verificarlo.
    -C [número]     Define el número de veces que se montó.
    -f              Fuerza la operación.
    -j              Agrega journaling (convierte de ext2 a ext3).
    -m [número]     Cambia el porcentaje de bloques reservados.

 ### xfs_metadump

Solo debería ser usado para copiar sistemas de archivos desmontados, 
de solo lectura o congelados (xfs_freeze). 

```sh
# Podemos copiar los metadatos hacia un archivo:
> xfs_metadump-g/dev/sdb6 prueba.img
    Copied 347520 of 1141120 inodes (1 of 4 AGs)
> 1s-1h prueba.img
    -rw-r--r-- 1 root root 123M nov 24 23:22 prueba.img

# Uso el comando file para que reconozca el tipo de archivo:
> file prueba.img
    rino: XFS filesystem metadump image
```


### Enlaces duros

Estos enlaces comparten el inodo del fichero original. 
un hard link es indistinguible del original, 
por eso, los cambios en el link afectan al fichero original, excepto en el borrado. 

Borrar el link no elimina al original ni a la inversa.
Este tipo de enlace conserva los permisos del original y marcas de tiempo.

Por contra, no se pueden usar para hacer enlaces a directorios,
 ni pueden extenderse a otros sistemas de ficheros.

```sh
# ln = link   ( hard link por defecto)
  ln  /ruta/completa/fichero  nombre_enlace
# -s  = sofr lnk
  ln  -s  /ruta/completa/fichero  nombre_enlace
```

son implementados en los sistemas de archivos estilo
como diferentes entradas en bloques de directorio que apuntan al mismo inodo. 

Cambiando de nombre o borrando una de esas entradas no borramos los datos, 
solamente disminuye la cuenta de enlaces.

Todos los metadatos del archivo son los mismos, excluyendo el nombre.
Los enlaces duros no pueden atravesar particiones.

diferencia de los soft (simbólicos), los enlaces duros nunca se pueden
romper moviendo uno de los archivos (entradas de directorio) a otra ubicación.

Normalmente, los archivos tienen un único enlace. 
Los directorios tienen tantos enlaces como subdirectorios

### Enlaces simbólicos

enlaces pueden extenderse a otros sistemas de ficheros. 
También pueden hacer referencia a directorios,

La lectura y escritura, así como la copia del enlace,
afectan al archivo al que apuntan, mientras
que el borrado afecta al propio enlace.

un archivo separado conteniendo una referencia en el
archivo al archivo original.

un enlace simbólico puede apuntar a cualquier directorio o archivo.

Un programa llamado symlinks se escribió para
hacer el proceso de ubicar y limpiar los enlaces simbólicos rotos.


HARD vs SOFT :
https://www.linkedin.com/pulse/hard-link-soft-link-ana-maria-roman-valencia/



```sh
#      -s  = sofr lnk
>  ln  -s  /ruta/completa/fichero  nombre_enlace
```


```sh
# creamos un archivo en  /home/ariel/public
>touch ejemplo
# vemos los archivos 
> ls -lasih
total 8,0K
#Ionode disk_size  type/permision  links  owner group  file_s last_edition   name                     
8918149 4,0 K       drwxr-xr-x       2    ariel ariel  4,0K   Oct 13 18:41   .
8917727 4,0 K       drwxr-x---       74   ariel ariel  4,0K   Oct 13 18:39   ..
8971836   0         -rw-rw-r--       1    ariel ariel    0    Oct 13 18:37   ejemplo
# podemos obserbar que hay 2  referencias al directorio actual '.'
# podemos obserbar que hay 74 referencias al directorio padre '..' = home/ariel
# 4,0 K where alocated for the file 

# creamos soft y hard link
> ln ./ejemplo ./ejemplo_hard
> ln -s ./ejemplo ./ejemplo_soft

# vemos los  archivos 
> ls -lasihp | grep -v /

8971836    0 -rw-rw-r--  2 ariel ariel    0 Oct 13 18:37 ejemplo
8971836    0 -rw-rw-r--  2 ariel ariel    0 Oct 13 18:37 ejemplo_hard
8972948    0 lrwxrwxrwx  1 ariel ariel    9 Oct 13 18:41 ejemplo_soft -> ./ejemplo
    # tanto el original como el hard link tienen 2  referencias la propia y la de soft link
    # todos los archivos siguen estando vacions por lo que pesan 0


# editamos el ejemplo
> nano ejemplo
> cat  ejemplo
este texto lo escribimos dentro de el archivo ejemplo usando nano

# vemos los cambios en archivos ( el original y el hard link)
> ls -lasihp | grep -v /
8971836 4,0K -rw-rw-r--  2 ariel ariel   66 Oct 13 18:58 ejemplo
8971836 4,0K -rw-rw-r--  2 ariel ariel   66 Oct 13 18:58 ejemplo_hard
8972948    0 lrwxrwxrwx  1 ariel ariel    9 Oct 13 18:41 ejemplo_soft -> ./ejemplo
    # el espacio en disco de los hard link es 4 Kb  pero contiene 66 bytes o caracteres
    # el espacio en disco de los soft link es 0 Kb

    # 9 son los caacteres de  './ejemplo'
    # 66 son los caacteres de 'este texto lo escribimos ....  usando nano'

# al mover el soft link la direccion deja de ser valida
> mv ./ejemplo_soft  ~/Desktop/
> cd ~/Desktop/
> cat ejemplo_soft
cat: ejemplo_soft: No such file or directory  # soft link ROTO

# movemos el soft link y vuelve a funcionar
> mv ./ejemplo_soft  ~/Public/
> cd -
> cat ejemplo_soft 
este texto lo escribimos dentro de el archivo ejemplo usando nano

> du -abc -l
# size  Name 
66	    ./ejemplo       #  66 characters
9	    ./ejemplo_soft  #  9 bytes
66	    ./ejemplo_hard  #  0 bytes 
4237	.               #  directory metadata & overhead = 4 Kb
4237	total

> du /home/ariel/Desktop/ -ab --max-depth=2
5	    /home/ariel/Desktop/GO/.gitignore
1777760	/home/ariel/Desktop/GO/test
5580021	/home/ariel/Desktop/GO
8370	/home/ariel/Desktop/city.jpg


```


### BIOS UEFI y arranque

**BIOS**    :    ( Basic  Input  Output  System )
es firmware embebido en la placa madre encargado el hardware 
cuando se enciende la computadora y un proceso de diagnóstico
llamado **POST** : ( Power  On  Self  Test ).

**UEFI**    :    ( Unified  Extended  Firmware  Interface )
PCs nuevas usan UEFI, un firmware que reemplaza al sistema BIOS.

 Las principales diferencias son:

● UEFI proporciona  estándares técnicos para una interfaz, 
en lugar de aplicarse a una única implementación de un firmware.

● UEFI entiende los conceptos de 
 cargador de arranque, particiones y sistemas operativos.

● UEFI es capaz de saltear GRUB y lanzar el kernel directamente 
(aunque este modo deuso no es habitual)

### Secuencia de arranque

es el conjunto de operaciones, desde que iniciamos el equipo,
hasta que inicia el primer proceso del sistema.

Cuando iniciamos el equipo, se ejecuta el BIOS o UEFI. 
Dentro de las opciones de configuración de la BIOS/UEFI, 
podemos definir los dispositivos físicos de arranque del sistema 
(disco rígido, USB, CD-ROM, etc).

El dispositivo utilizado para el arranque debe tener instalado 
en el **primer sector**, conocido como **MBR** ( Master Boot Record ), 
el código de arranque, la definición de la tabla de particiones
y el código de comprobación.

El código de arranque inicia el bootloader o cargador de arranque (GRUB en Linux), 
donde podemos elegir a través de un menú, el Sistema Operativo a iniciar.

El sistema UEFI mantiene por compatibilidad el inicio de MBR. 
En caso de no utilizar el modo de compatibilidad intentará usar 
una partición **GPT** ( Guid  Partition  Table ) para cargar los archivos
de inicio de los distintos sistemas operativos.
Estos archivos tienen extensión **.EFI**.

UEFI puede arrancar directamente su propio bootloader o bien usar GRUB. 
Este cargará el kernel. Luego montará (si es que existe) el **initramfs**.
Continuará el inicio para detectar el tipo de CPU, el manejo de memoria, 
planificador de tareas, entradas y salidas, comunicación interprocesos, y demás sistemas

Una vez que el sistema de archivos raíces está localizado y montado 
el **initramfs** le cede el control al gestor del sistema de la máquina.
Llegado este punto se ejecuta el **primer proceso** llamado **init** o **systemd**
que es el encargado deiniciar los distintos servicios del sistema.

## clase 6

METODOS ALERNATIVOS DE COMUNICARSE CON VM

    Portapapeles bi-direccional
        settings -> General -> Advanced -> shared clipboard
    SCP (secure copy)    https://www.warp.dev/terminus/scp-from-remote-to-loca
    winscp


### DESAFIO 2


El objetivo de este desafío será administrar un número disco en nuestra máquina virtual. 
Para esto tendremos que agregar un nuevo disco, particionario, formateario,
montar los Filesystems y realizar algunas configuraciones de archivos/directorios

1) Agregar un nuevo disco a nuestra máquina virtual (al menos 2gb)
2) Crear 4 particiones primarias, 1 de tipo swap y 3 de tipo Linux (default)
3) Formatear la partición de  tipo swap como swap
4) Formatear 1 de las otras particiones como ext3
5) Formatear otra    de las particiones como ext4
6) Formatear última  de las particiones como xfs
*   a) En caso de no contar con este tipo de formato disponible en nuestro sistema, 
       realizar de la instalación
1) Montar los Filesystems de forma automática en nuestro sistema (/etc/fstab).  "mount -a"
   Para el montaje tendremos que montar/habilitar el swap y además las otras 3 particiones 
   se deberán montar de la siguiente forma (crear los directorios en caso de necesitario). 
   Montar los Filesystems sin ningún atributo extra, 
   con la configuración default y sin verificación de errores.
*   a) ext3=/data/manuales   ext4=/data/laboratorios   xfs=/data/exámenes
*   b) Para montarlos inicialmente pueden reiniciar la máquina virtual o forzar el montado
*   c) Guardar en un archivo llamado "salida-fstab.txt" 
        el contenido del archivo /etc/fstab luego de haber agregado nuestros nuevos FS.
1) Ya montados los Filesystems, crear los siguientes link simbólicos 
   (softlinks o hard links dependiendo el caso)
*   a) softlink entre /data/manuales y /home/fase1/modulo2/manuales
*   b) softlink entre /data/laboratorios y /home/fase1/laboratorios
*   c) hardlink entre /data/exámenes y /home/fase 1/exámenes
1) ¿ Funcionaron todos los enlaces simbólicos ? 
    En caso de que alguno no lo haya hecho, documentar los errores. 
    Crear un hard link entre el directorio /data/exámenes/fase1 y/data/exámenes/devops
2)   Documentar la siguiente información:
*   a) Listado de particiones del nuevo disco junto al directorio 
        dónde se montaron y el % de utilización
*   b) Permisos de los soft y hard link, se ven distinto al resto de directorios ?
*   c) Información de los directorios de los links, 
        que Inodo utiliza el archivo original y cual utiliza el creado por el link ?

### LPI  Certification - Módulo 3

Fase 1 - SysAdmin   Módulo 3

**101.1 Determinar y configurar parámetros del hardware**

Peso: 2  ( importancia del 1 al 6. )

Descripción:

    Los alumnos deberán ser capaces de determinar y configurar el hardware básico.
 
Áreas claves de conocimiento:
    ● `Habilitar y deshabilitar periféricos` integrados.
    ● Diferenciar entre los distintos tipos de dispositivos de almacenamiento masivo.
    ● Utilización de `herramientas USB`.
    ● Determinar los recursos de hardware para los dispositivos.
    ● Herramientas y utilitarios para `listar` varios tipos de información 
       del hardware (e.g. `lsusb, lspci`, etc.).
    ● Herramientas y utilerías para manipular dispositivos USB.
    ● Entendimiento conceptual de `sysfs, udev, dbus`.

Términos y herramientas:
    ● /sys.
    ● /proc.
    ● /dev.
    ● modprobe.
    ● lsmod.
    ● lspci.
    ● lsusb.

**108.2: Registros de eventos del sistema**

Peso: 4 de 1 a 6.

Descripción:
    Los alumnos deberían ser capaces de configurar `rsyslog`. 
    configurar el `daemon de registro de eventos` para 
    enviar la salida de logs a un `servidor de logs` central o  
    aceptar la salida de logs  como un servidor  de log central
    . 
    Está cubierto el uso del subsistema journal de systemd. 
    También, se incluye estar al tanto de `syslog` y `syslog-ng` 
    como sistemas alternativos.


Áreas Claves de Conocimiento
    ● Configuración básica de rsyslog.
    ● Entendimiento de `servicios estándares`, prioridades y acciones.
    ● `Consultar el journal` de systemd.
    ● Filtrar los datos del journal de systemd por criterios tales como 
        fechas, servicios oprioridades.
    ● Configurar almacenamiento persistente de journal de systemd 
        y el tamaño del journal.
    ● Borrar viejos datos del journal de systemd.
    ● `Recuperar datos de journal` de systemd desde un sistema de rescate 
        o de una copia del sistema de archivos.
    ● Entender la interacción de rsyslog con  `systemd-journald`.
    ● Configuración de logrotate.
    ● Estar al tanto de syslog y syslog-ng.


Términos y herramientas
    ● /etc/rsyslog.conf
    ● /var/log/
    ● logger
    ● logrotate
    ● /etc/logrotate.conf
    ● /etc/logrotate.d/
    ● journalctl
    ● systemd-cat
    ● /etc/systemd/journald.conf
    ● /var/log/journal/


## Arranque, servicios y apagado

**Mecanismos de arranque**
    Los `2 mecanismos` principales `de arranque` en Linux son 
    `SysVinit` y `systemD`, los describiremos a  continuación.


**SysVinit**
    Muchos sistemas operativos UNIX usan este mecanismo, 
    que fue por primera vez implementado en UNIX System III y
    posteriormente en UNIX System V.

**Proceso init**
    El primer proceso se llama `init`, arranca luego de la carga del kernel. 
    Al ser el primer proceso en ejecutarse toma el `PID 1`. 
    Es un `daemon` (es decir, corre en segundo plano y sin una terminal 
    que lo controle), 
    Es el `padre de todos los procesos` iniciados durante el uso del sistema.
    Al iniciar el sistema tendrá un nivel de ejecución
    predeterminado (runlevel), en el que se definirán
    los distintos procesos a iniciar. 
    Entre los niveles de ejecución se encuentran:
    ● La configuración principal del init es el
    archivo /etc/inittab en el que se define cuál es
    el nivel de ejecución predeterminado.
    ● Luego de leer la configuración, el init cargará
    los scripts que se encuentran dentro de
    /etc/rc2.d (en caso de que el runlevel fuera el
    1) o /etc/rc3.d (en caso de que el runlevel fuera el 3).

    /dir_name.d : directorio de configuracion

**Niveles de Ejecución ( `Runlevel` )**
    Los niveles de ejecución en `SystemV` describen ciertos
    estados del equipo, que se caracterizan por ejecutar ciertos
    procesos. En general, existen 8 niveles de ejecución, que
    van del 0 al 6 y S o s, siendo estos últimos alias del mismo
    nivel de ejecución. De estos ocho niveles, tres son
    considerados reservados, y son los siguientes:
    ● `Nivel 0` nivel `Apagado` del sistema. Inicia el proceso normal de apagado.
    ● `Nivel 1`,s,S Modo u`suario único`, se utiliza para la `reparación del sistema`, ya
    que iniciará solo los procesos necesarios para el arranque del
    sistema. Las tres opciones 1, s y S significan lo mismo.
    ● `Nivel 6` nivel `Reinicio` del sistema. Inicia la secuencia de reinicio.
    Dependiendo de la distribución:
    ●` Nivel 2` Nivel `predeterminado`, multiusuario con o sin entorno gráfico  (Debian, Ubuntu).
    ● `Nivel 3` Nivel `predeterminado,` multiusuario `sin entorno gráfico`      (Red-Hat, Slackware, CentOS).
    ● `Nivel 4 `Nivel `multiusuario` o reservado.
    ● `Nivel 5` Nivel `multiusuario` con entorno gráfico                        (Red-Hat)

**Single User Mode (Usuario único)**
    Este modo se utiliza para el mantenimiento del
    sistema. En este modo las conexiones remotas,
    red y la mayor parte de los servicios se
    encuentran desactivados. Generalmente se
    utiliza para corregir problemas del sistema de
    archivos, y que el sistema no puede resolver
    automáticamente.
    Podemos acceder a este modo porque el sistema
    así lo pide o especificando por la línea de
    comandos del GRUB.
   ```sh
    kernel /vmlinuz-2.6.27.21-170.2.56.fc10.i686ro root=/dev/hda1 rhgb quiet
   ```
    Para modo mantenimiento se agrega al final de
    la línea un número 1 o la palabra single como
    parámetros.
    
   ```sh
    linux /boot/vmlinuz-3.13.0-29-generic   root=/dev/sda1t single
   ```

logs de servicios/var/log

```sh
> ls -la /etc/rc*
lrwxrwxrwx 1 root root 7 Apr 29 16:38 /etc/rc -> rc.d/rc
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc0.d -> rc.d/rc0.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc1.d -> rc.d/rc1.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc2.d -> rc.d/rc2.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc3.d -> rc.d/rc3.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc4.d -> rc.d/rc4.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc5.d -> rc.d/rc5.d
lrwxrwxrwx 1 root root 10 Apr 29 18:33 /etc/rc6.d -> rc.d/rc6.d
lrwxrwxrwx 1 root root 13 Apr 29 16:38 /etc/rc.local -> rc.d/rc.local
lrwxrwxrwx 1 root root 15 Apr 29 16:38 /etc/rc.sysinit -> rc.d/rc.sysinit
```

**/etc/init.d**
    En este directorio se encuentran todos los `scripts`
    encargados de `levantar` cada uno de los s`ervicios` del sistema.
    Algunos de los servicios que podemos encontrar en el init.d son los referentes a:
     ● httpd    Servidor Web `Apache`
     ● smb      Servidor `Samba`
     ● postfix  Servidor de `correo`
     ● dhcpd    Servidor `DHCP`
     ● named    Servidor `DNS`
     ● mysqld   Manejador de `Base de Datos` MySQL

```sh
> ls -l /etc/rc.d/init.d/    #  Red-Hat
-rwxr-xr-x 1 root root 2974 jun 23 10:18 dhcpd
-rwxr-xr-x 1 root root 3099 feb 25 2008  httpd
-rwxr-xr-x 1 root root 4239 mar 3  2008  mysqld
-rwxr-xr-- 1 root root 6154 ago 6  05:05 named
-rwxr-xr-x 1 root root 1745 sep 18 10:26 smb
-rwxr-xr-x 1 root root 4112 mar 29 2008  postfix
# (...salida cortada...)
> ls -l /etc/init.d/         #  UBUNTU
total 176
-rwxr-xr-x 1 root root 2269 Nov 28  2019 acpid
-rwxr-xr-x 1 root root 5574 Nov  5  2019 alsa-utils
-rwxr-xr-x 1 root root 2055 Jul 16  2019 anacron
-rwxr-xr-x 1 root root 3740 Apr  1  2020 apparmor
-rwxr-xr-x 1 root root 2915 Jun 29  2022 apport
-rwxr-xr-x 1 root root 2401 Aug 21  2018 avahi-daemon
-rwxr-xr-x 1 root root 2968 Feb 26  2020 bluetooth
# (...salida cortada...)
-rwxr-xr-x 1 root root  924 Feb 13  2020 procps
-rwxr-xr-x 1 root root 1942 Nov 26  2021 network-manager
-rwxr-xr-x 1 root root 3939 Apr  3  2023 ssh

```
**/etc/rc.sysinit  o  /etc/init.d/rcS**
    En sistemas basados en Red Hat, se hace uso del
    script `rc.sysinit` para la inicialización.
    La secuencia de comandos rcS de Debian hace el
    mismo trabajo mediante la ejecución de varios
    pequeños scripts colocados en dos directorios
    diferentes.
    En cada caso, el script se pone en marcha por
    init en el arranque. Este se ocupa de algunas
    tareas esenciales para preparar el sistema para
    su uso, tales como montar sistemas de ficheros.
    Algunas de las tareas son:
    ● Configuración de `reloj` del sistema.
    ● Configuración de los parámetros del Kernel.
    ● Levantamiento de dispositivos `RAID y LVM`.
    ● Activación y actualización de cuotas en disco.
    ● Activación de la partición `SWAP`


1:08:00

```sh
> cat /var/log/alternatives.log.1
# RSH -> SSH
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rsh rsh /usr/bin/ssh           20 --slave /usr/share/man/man1/rsh.1.gz rsh.1.gz        /usr/share/man/man1/ssh.1.gz
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rlogin rlogin /usr/bin/slogin  20 --slave /usr/share/man/man1/rlogin.1.gz rlogin.1.gz  /usr/share/man/man1/slogin.1.gz
# RCP -> SCP
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rcp rcp /usr/bin/scp           20 --slave /usr/share/man/man1/rcp.1.gz rcp.1.gz        /usr/share/man/man1/scp.1.gz
```