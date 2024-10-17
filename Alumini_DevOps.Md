
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

El bootcamp 5 fases :  10 clases por face, 50 clases aprox.

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

## Clase 2 - VM + RegExp

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

[ariel @ ariel-All-Series] $ top | grep -e '\<Cpu\>'
%Cpu s:  8,8 us,  0,5 sy,  0,0 ni, 90,7 id,  0,0 wa,  0,0 hi,  0,0 si,  0,0 st
%Cpu s:  3,7 us,  0,4 sy,  0,0 ni, 95,8 id,  0,0 wa,  0,0 hi,  0,1 si,  0,0 st
%Cpu s:  2,1 us,  0,6 sy,  0,0 ni, 97,2 id,  0,1 wa,  0,0 hi,  0,1 si,  0,0 st
```

grep nos ira imprimiendo en pantalla cada vez que refresque
se puede usar "s" denro de grep pero no veremos lo ingresado 



### PARTICIONES

```sh
[ariel @ ariel-All-Series] $ sudo ls /dev
`[sudo]` password for ariel:   ****
autofs       hwrng    loop6         rtc0    tty16  tty40  tty8       ttyS30	  vcsa1
block        i2c-0    loop7	        sda     tty17  tty41  tty9       ttyS31	  vcsa2
bsg	         i2c-1    loop8         sda1    tty18  tty42  ttyprintk  ttyS4 	  vcsa3
btrfs-control i2c-2   loop9	        sda2    tty19  tty43  ttyS0      ttyS5 	  vcsa4
bus	         i2c-3    loop-control  sda3    tty2   tty44  ttyS1      ttyS6 	  vcsa5
char         i2c-4    mapper        sda4    tty20  tty45  ttyS10     ttyS7 	  vcsa6
console      i2c-5    mcelog        sda5    tty21  tty46  ttyS11     ttyS8 	  vcsa7
core         i2c-6    mem           sda6 
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
Changes will remain in memory only, until you decide to write them. 
Be careful before using the write command.

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
    En nuetra VM seleccionamos el icono de red 
    en la barra de tareas (al lado de audio y apagado)
    
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
    
    El objetivo del desafío será realizar la instalación de una distribución linux a elección
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
5) Con  Grep, determinar la información de nuestro usuario almacenada en /etc/passwd)
   * a) Ejemplo: root:*:0:0:System Administrator:/var/root:/bin/sh
   * b) Guardar la salida del comando utilizado para ver esta información 
         en un archivo con el nombre "user-info.txt"
6) Agregar un segundo disco a la máquina virtual (recomendamos que sea de al menos 2gb)
   * a) Agregar una partición primaria de al menos 1gb de tipo Linux
   * b) Agregar otra partición de al menos 500M de tipo SWAP
   * c) Escribir los cambios en disco
   * d) Guardar la información de la tabla de particiones 
        en un archivo llamado "partition-table.txt"

Entregable

Los entregables serán almacenados en la carpeta compartida que tienen en drive 
con el formato (<carpeta con su nombre>/<Fase>/<módulo>/archivo).

         
Instructivo con paso a paso de como realizaron el desafio, pueden incluir 
screenshots, imágenes, comandos, etc.
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


## Clase 5 - Disk use + Links + BIOS /GRUB


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
      #  (... salida cortada...)  ################################
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
> cd /home/ariel/public
# creamos un archivo en  /home/ariel/public
> touch ejemplo
# vemos los archivos 
> ls -lasih
#Ionode disk_size  type/permision  links  owner group  file_s last_edition   name 
8918149 4,0 K       drwxr-xr-x       2    ariel ariel  4,0K   Oct 13 18:41   .
8917727 4,0 K       drwxr-x---       74   ariel ariel  4,0K   Oct 13 18:39   ..
8971836   0         -rw-rw-r--       1    ariel ariel    0    Oct 13 18:37   ejemplo
# podemos obserbar que hay 2  referencias al directorio actual '.'
# podemos obserbar que hay 74 referencias al directorio padre '..' = home/ariel

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
```
```sh
# editamos el ejemplo
> nano ejemplo
> cat  ejemplo
este texto lo escribimos dentro de el archivo ejemplo usando nano

# vemos los cambios en archivos ( el original y el hard link)
> ls -lasihp | grep -v /
8971836 4,0K -rw-rw-r--  2 ariel ariel   66 Oct 13 18:58 ejemplo
8971836 4,0K -rw-rw-r--  2 ariel ariel   66 Oct 13 18:58 ejemplo_hard
8972948    0 lrwxrwxrwx  1 ariel ariel    9 Oct 13 18:41 ejemplo_soft -> ./ejemplo
    # 9  bytes son por los caacteres de  './ejemplo'
    # 66 bytes son por los caacteres de 'este texto lo escribimos ....  usando nano'
    # vemos 4KB que es el que se reservo en disco para el archivo
    # el espacio en disco de los hard link es 0 realmente
    #    simplemente se duplica el inodo que apunta al archivo original
    # el espacio en disco de los soft link es 0 Kb


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
```
```sh
# podemos verificar que el directorio pesa lo musmo aunque borremos el hard link
> du -al --block-size=1 ./
4096	./ejemplo      # block-size=K,M,G,100,10k...(redondea hacia arriba)
0	    ./ejemplo_soft
4096	./ejemplo_hard
12288	./  # ERROR <---  al usar "-l --block-size " DA MAL y GRANDE
            #            esto es porque -l duplica el peso de los links

> du -acl --apparent-size ./
# KB  Name 
  1	 ./ejemplo       # todos los archivos aparentan un peso de  1KB
  1	 ./ejemplo_soft  # este es el peso real del archivo original en disco 
  1	 ./ejemplo_hard  # esto se debe a sus metadatos y overhead (espacio minimo)
  5	 ./              # El directorio ya pesaba 4 KB
  5	 total           # SOLO el archivo ORIGINAL ocupa espacio REAL

> du -al --apparent-size ./  # lo comprovamos con mas copias
    1	./ejemplo
    1	./ejemplo_soft     # tanto soft como hard no ocupan espacio
    1	./ejemplo_hard     # Este kilobite aparetnte es del archivo original
    1	./ejemplo_hard_2
    1	./ejemplo_hard_3
    1	./ejemplo_hard_4
    1	./ejemplo_hard_5
    5	./            # solo hay 1kb de ."/ejemplono" y 4kB de Metadata del directorio  
> rm eje* 
> du -al --block-size=1 ./   
4096	./              # directorio = 4Kb
> du -al --apparent-size ./
4	    ./              # directorio = 4Kb

# Baobab_Disk_analizer  &  "ls -las"  muetran 4KB para "ejemplo"
# Esto no es correcto y el tamanio   REAL es  1KB

> rm ./ejemplo ./ejemplo_soft  ./ejemplo_hard 
> du -acl  --block-size=1 
4096	.
4096	total   # el directorio vacio pesa 4 kb 

> du /home/ariel/Desktop/ -ab --max-depth=2
5	    /home/ariel/Desktop/GO/.gitignore
1777760	/home/ariel/Desktop/GO/test
5580021	/home/ariel/Desktop/GO
8370	/home/ariel/Desktop/city.jpg

# sort  du command   by name  not size 
du -al --apparent-size ./ |awk ' { t = $1; $1 = $2; $2 = t; print; } ' | sort -u -r
# create junk files to test disk size
> for i in {1..100}; do cp ejemplo "ejemplo$i"; done
> for i in {1..100};                 echo "APPEND $i" >> ejemplo_$i; done
> for i in {1..100}; do j=$(($i*2)); echo "APPEND $j" >> ejemplo_$i; done
> du . --block-size=k |grep -e'\./public' -i
412k    ./Public    # space all this junk should uise after 80 chactars file *100 files
> du . --apparent-size |grep -e'\./public' -i
14K     ./Public    # space ocupied due to optimizations (APPEND) acupies 90% of files    
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

## Clase 6 - Servicios + Conf /etc/ + Logs

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
7) Montar los Filesystems de forma automática en nuestro sistema (/etc/fstab).  "mount -a"
   Para el montaje tendremos que montar/habilitar el swap y además las otras 3 particiones 
   se deberán montar de la siguiente forma (crear los directorios en caso de necesitario). 
   Montar los Filesystems sin ningún atributo extra, 
   con la configuración default y sin verificación de errores.
*   a) ext3=/data/manuales   ext4=/data/laboratorios   xfs=/data/exámenes
*   b) Para montarlos inicialmente pueden reiniciar la máquina virtual o forzar el montado
*   c) Guardar en un archivo llamado "salida-fstab.txt" 
        el contenido del archivo /etc/fstab luego de haber agregado nuestros nuevos FS.
8) Ya montados los Filesystems, crear los siguientes link simbólicos 
   (softlinks o hard links dependiendo el caso)
*   a) softlink entre /data/manuales y /home/fase1/modulo2/manuales
*   b) softlink entre /data/laboratorios y /home/fase1/laboratorios
*   c) hardlink entre /data/exámenes y /home/fase 1/exámenes
9) Funcionaron todos los enlaces simbólicos? 
10) En caso de que alguno no lo haya hecho, documentar los errores. 
    Crear un hard link entre el archivo /data/exámenes/fase1/modulo1.txt 
    y /data/exámenes/sysadmin/modulo1.txt (crear el archivo original en caso de necesitarlo)
11)  Documentar la siguiente información:
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


### Arranque, servicios y apagado

**Mecanismos de arranque**
    Los `2 mecanismos` principales `de arranque` en Linux son 
    `SysVinit` y `systemD`, los describiremos a  continuación.


**SysVinit**
    Muchos sistemas operativos UNIX usan este mecanismo, 
    que fue por primera vez implementado en UNIX System III y
    posteriormente en UNIX System V.

### Proceso INIT  + scripts RC

El primer proceso se llama `init`, arranca luego de la carga del kernel. 
Al ser el primer proceso en ejecutarse toma el `PID 1`. 
Es un `daemon` (es decir, corre en segundo plano y sin una terminal 
que lo controle), 
Es el `padre de todos los procesos` iniciados durante el uso del sistema.
Al iniciar el sistema tendrá un nivel de ejecución predeterminado (runlevel),
en el que se definirán los distintos procesos a iniciar. 

Entre los niveles de ejecución se encuentran:
● La `configuración` principal del `init` es el archivo `/etc/inittab `
en el que se define cuál es el nivel de ejecución predeterminado.
● Luego de leer la configuración, el init cargará los `scripts` que se encuentran dentro  de
 `/etc/rc2.d`   (en caso de que el runlevel fuera el 1) o 
 `/etc/rc3.d`      (en caso de que el runlevel fuera el 3).
 /etc/rc significa `etcetera` o miselanius y  `run commands`
directorios finalizados con `.d`  /dir_name.d  son `directorio de configuracion`

**Niveles de Ejecución ( `Runlevel` )**

Los niveles de ejecución en `SystemV` describen ciertos
estados del equipo, que se caracterizan por ejecutar ciertos
procesos. En general, existen 8 niveles de ejecución, que
van del 0 al 6 y S o s, siendo estos últimos alias del mismo
nivel de ejecución. De estos ocho niveles, tres son
considerados reservados, y son los siguientes:
● `Nivel 0` nivel `Apagado` del sistema. Inicia el proceso normal de apagado.
● `Nivel 1`,`s`o `S` Modo u`suario único`, se utiliza para la `reparación del sistema`, 
    ya que iniciará solo los procesos necesarios para el arranque del sistema. 
    1, s y S significan lo mismo.
● `Nivel 6` nivel `Reinicio` del sistema. Inicia la secuencia de reinicio.
Dependiendo de la distribución:
●` Nivel 2` Nivel `predeterminado`, multiusuario con o sin entorno gráfico  (Debian, Ubuntu).
● `Nivel 3` Nivel `predeterminado,` multiusuario `sin entorno gráfico`      (Red-Hat, Slackware, CentOS).
● `Nivel 4 `Nivel `multiusuario` o reservado.
● `Nivel 5` Nivel `multiusuario` con entorno gráfico                        (Red-Hat)

**Single User Mode (Usuario único)**

Este modo se utiliza para el `mantenimiento del sistema`. 
las conexiones remotas, red y la mayor parte de los `servicios` 
se encuentran `desactivados`. Generalmente se
utiliza para corregir problemas del sistema de archivos, 
y que el sistema no puede resolver automáticamente.
Podemos acceder a este modo porque el sistema
así lo pide o especificando por la línea dd comandos del GRUB.

```sh
kernel /vmlinuz-2.6.27.21-170.2.56.fc10.i686ro root=/dev/hda1 rhgb quiet
```

Para modo mantenimiento se agrega al final de la línea un número `1` 
o la palabra `single` como parámetros.
```sh
 linux /boot/vmlinuz-3.13.0-29-generic   root=/dev/sda1t single
```

Para cambiar a modo single desde otro nivel se utiliza telinit 1 o init 1. 
no es la más recomendada, porque no genera ningún tipo de aviso a los usuarios

### Daemons

**Estructura de los runlevels**

Los directorios que veremos a continuación, por si solos, no cumplen función; 
es por eso que cumplen con una lógica que fue definida desde
que se creó `Unix System V`, donde se especificó
cómo tenía que estar situados cada `daemon` de arranque.
Cuando un sistema Linux arranca, éste inicia una serie de `scripts` 
que se encuentran en `/etc`.

Hay diferencias en `inicialisacion` distribuciones de Linux, 
pero todas ellas tienen que cumplir con la `Linux Standard Base` 
para poder tener un `orden genérico`.



```sh
> ls -la /etc/rc*   # Red-Hat
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

> ls -la  /etc/ | grep -e'rc' # Ubuntu
-rw-r--r--   1 root root     2319 Jan  6  2022 bash.bashrc
-rw-r--r--   1 root root     1748 Jan  6  2022 inputrc
-rw-r--r--   1 root root      288 Mar 17  2022 mecabrc
-rw-r--r--   1 root root    11204 Feb  9  2022 nanorc
drwxr-xr-x   2 root root     4096 Jan 22  2024 rc0.d
drwxr-xr-x   2 root root     4096 Jan 22  2024 rc1.d
drwxr-xr-x   2 root root     4096 Sep 19 13:23 rc2.d
drwxr-xr-x   2 root root     4096 Sep 19 13:23 rc3.d
drwxr-xr-x   2 root root     4096 Sep 19 13:23 rc4.d
drwxr-xr-x   2 root root     4096 Sep 19 13:23 rc5.d
drwxr-xr-x   2 root root     4096 Jan 22  2024 rc6.d
-rw-r--r--   1 root root       37 Oct  1 21:12 rc.local
drwxr-xr-x   2 root root     4096 Dec 17  2022 rcS.d
-rw-r--r--   1 root root     4942 Jan 24  2022 wgetrc

```

### /etc/init.d

En este directorio se encuentran todos los `scripts`
encargados de `levantar` cada uno de los s`ervicios` del sistema.
Algunos de los servicios que podemos encontrar en el `init.d` son :
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
# (...salida cortada...)  #############################################
> ls -l /etc/init.d/         #  UBUNTU
total 176
-rwxr-xr-x 1 root root 2269 Nov 28  2019 acpid
-rwxr-xr-x 1 root root 5574 Nov  5  2019 alsa-utils
-rwxr-xr-x 1 root root 2055 Jul 16  2019 anacron
-rwxr-xr-x 1 root root 3740 Apr  1  2020 apparmor
-rwxr-xr-x 1 root root 2915 Jun 29  2022 apport
-rwxr-xr-x 1 root root 2401 Aug 21  2018 avahi-daemon
-rwxr-xr-x 1 root root 2968 Feb 26  2020 bluetooth
# (...salida cortada...)  #############################################
-rwxr-xr-x 1 root root  924 Feb 13  2020 procps
-rwxr-xr-x 1 root root 1942 Nov 26  2021 network-manager
-rwxr-xr-x 1 root root 3939 Apr  3  2023 ssh

```
### rc.sysinit

**/etc/rc.sysinit  o  /etc/init.d/rcS**

En sistemas basados en Red Hat, se hace uso del
script `rc.sysinit` para la inicialización.
La secuencia de comandos rcS de Debian hace el mismo trabajo mediante la ejecución de varios
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


**/etc/rc.local**

Este  `script` que se llama después de todos los demás scripts de init 
(después de que todos los demonios del sistema han iniciado).
Contiene las `personalizaciones` locales que afectan el inicio del sistema 
y proporciona una alternativa para modificar los scripts de inicio de otros. 

Muchos administradores prefieren evitar cambiar `rc.sysinit`, 
porque esos cambios `se perderán durante` un sistema de `actualización`.
El contenido de `rc.local no se pierde `en una actualización.

```sh
> cat /etc/rc.local
#!/bin/sh

# This script will be executed *after* all the other init scripts.
# You can put your own initialization stuff in here
# if you don't  want to do the full Sys V style init stuff.
# touch /var/lock/subsys/local

>cat /etc/rc.local
#!/bin/sh
redshift -l 46:-18 -t 5700:3600 # script para arreglar redshift
```


**/etc/rc**

Este archivo es un script que se usa para cambiar entre los niveles de ejecución.
No se usa en Debian.
```sh
> ls -la /etc/rc
lrwxrwxrwx 1 root root 7 Apr 29 16:38 /etc/rc → rc.d/rc
```


### Servicios y `/etc/init.d`

La tarea de iniciar y detener `servicios` del sistema  (también llamados `daemon`), 
cuya intención es ser ejecutados en segundo plano, (por `ejemplo, un servidor web`) 
está a cargo de archivos y enlaces simbólicos en `/etc/init.d` 
y por  directorios de nivel de ejecución  llamados desde `/etc/rc0.d` a `/etc/rc6.d`.
En este directorio tendremos una serie de `scripts` que nos proveerán 
de diversas `funcionalidades` para cada servicio.
Son scripts que llevan argumentos que dan un comportamiento a éstos, 
ya sean los más básicos, como detener o iniciar un servicio.

Al `ejecutar` el `httpd` sin parámetros:
La salida nos indica que podemos ejecutar esos parámetros.
```sh
> ./httpd
Usage: httpd
{start|stop|restart|condrestart|reload|status|
fullstatus|graceful|help|configtest}
```
`Detener` el servicio de `httpd`:
```sh
> ./httpd stop
Stopping http
```


**nuevos servicios**

Si agregamos un nuevo servicio por medio de un paquete rpm o dpkg, 
éste creará los scripts correspondientes sin tener que hacer nada. 
En otros casos tendríamos que agregarlos en el archivo rc.local o 
crear nuestros propios `shell scripts` que contienen 
los `parámetros de control` usados para administrar los `demonios`.

No todos los demonios de Linux reconocen los argumentos
detener, iniciar ,etc por la línea de comandos. 
Pero los scripts en `/etc/init.d` están `estandarizados` 
para que podamos ejecutarlos con los parámetros usados normalmente.


**Soft_links en `/etc/rc0.d`  a  `/etc/rc6.d`**

Los scripts de inicio en /etc/init.d 
no son ejecutados directamente por el proceso init.

Cada uno de los directorios `/etc/rc0.d` a `/etc/rc6.d `
contienen enlaces simbólicos que `apuntan a` los scripts 
del directorio `/etc/init.d.` 

Se usan `enlaces simbólicos` en lugar de archivos regulares 
para `evitar trabajo` innecesario al momento de `cambiar` un script.

Cuando el proceso de inicio entra en ejecución en un nivel N, 
se examinan todos los enlaces en el directorio rcN.d asociados. 
A estos enlaces se les dan nombres especiales en las formas de
`KNNname` y `SNNname`. Vamos a explicarlo:


**Prefijos K y S**

Estas letras corresponden a matar (`Kill`) e iniciar (`Start`).
Cada nivel de ejecución define un estado en el que 
determinados servicios se están ejecutando y en otros no lo están.

El `prefijo S` se utiliza para marcar los archivos de todos los servicios 
que se `van a ejecutar` en determinado runlevel.

El `prefijo K` se utiliza para todos los demás servicios que 
`no deben estar en ejecución` en determinado runlevel.


**Secuencia NN**

`Número de orden`. Esta parte del nombre del enlace es un `entero de dos dígitos` 
(con un cero a la izquierda, si es necesario). 

En él, se especifica el `orden relativo` de los servicios a `iniciar o detener`. 
El número más `bajo ` ed el `primero` en secuencia de comandos ejecutados por init, 
El número más `alto ` es el `último` en jecutar. 

No hay reglas estandarizadas para la elección de estos números, 
pero es importante que cuando añadamos un nuevo servicio, nos aseguremos
que se inicie `después` de los servicios que este necesite o `dependencias`.
Si dos servicios poseen el `mismo número`, posiblemente se ejecuten por `orden alfabético`.


**name (Nombre)**

El nombre que se usa para el servicio tiene relación con lo que hace. 
Si el servicio se llama networks, éste tratará sobre algo de redes, 
si el servicio se llama sshd, tiene relación con el tipo de conexión, secure shell.
Cuando init tiene que iniciar un runlevel, usará
el directorio correspondiente a su nivel (por
ejemplo, /etc/rc2.d) y empezará a ejecutar los
servicios que estén detallados.

El orden establecido de ejecución estará
representado por el número que está a
continuación de las letras K o S.
● La K es indicio de que ese script se llamará solamente para apagar algo.
● La S es indicio de que será utilizado para iniciarlo 
(Ej.: `S10network` luego `S11auditd`, `S12restorecond`, `S12syslog`).


**Configurar el nivel de ejecución predeterminado**

Para seleccionar el nivel predeterminado de
arranque, hay que editar el archivo /etc/inittab.
```sh
# Ejemplo : Definir el runlevel 5 como predeterminado.
id:5:initdefault:
```


**Determinar el runlevel del sistema**

Para verificar en qué runlevel nos encontramos,
se utiliza el comando runlevel, el cual mostrará
el runlevel anterior y el actual.
Si no hubo un nivel anterior, mostrará una N:
```sh
# Ejemplo : verificar en qué runlevel nos encontramos
> runlevel
N 2
```


**Cambiar el runlevel del sistema**
Para cambiar de un runlevel al otro se utiliza el
comando init o telinit (es un link simbólico).
Para reiniciar sin aviso
Para apagar sin aviso

```sh
> init 6
INIT: Switching to runlevel: 6
INIT: sending processes the TERM signal
Stopping Postfix Mail Transport Agent: postfix
# (...salida cortada...)   #############################################

> init 0
INIT: Switching to runlevel: 0
Stopping Postfix Mail Transport Agent: postfix
# (...salida cortada...)  #############################################
```

### Comando chkconfig
Este comando es útil para activar o desactivar
los servicios que se aplican durante el arranque
del equipo, así como también conocer el estado
de los servicios que se están ejecutando.
Este comando se usa en distribuciones de estilo
Red Hat.

Para conocer el estado de los procesos activos,
podemos ejecutar el siguiente comando:

```sh
> chkconfig –list
```
Para conocer el estado de httpd en cada runlevel:

```sh
> chkconfig –-list httpd
httpd 0:desactivado 1:desactivado
2:desactivado 3:desactivado 4:desactivado
5:desactivado 6:desactivado
# Para deshabilitar el servicio apache2:
> chkconfig httpd off
```



**USANDO CHECK_CONFIG :**
```sh
# Para habilitar el servicio apache2:
> chkconfig httpd on
# Para activar el httpd en los niveles 3 y 5:
> chkconfig –-level 35 httpd on
# Para desactivar el httpd en los niveles 3 y 5:
> chkconfig –-level 35 httpd off
```

**DE FROMA MANUAL :**
```sh
# Para desactivar httpd a mano en los niveles 3 y 5:
> rm /etc/rc[35].d/S11httpd
# Para activar httpd a mano en los niveles 3 y 5:
> ln -s /etc/init.d/httpd /etc/rc3.d/S11httpd
> ln -s /etc/init.d/httpd /etc/rc5.d/S11httpd
```


### Comando update-rc.d

Este comando pertenece a las distribuciones
basadas en Debian y es análogo a chkconfig.
```sh
# Para desactivar el servicio apache2:
> update-rc.d -f apache2 remove
# Para activar el servicio apache2 en los niveles predeterminados:
> update-rc.d apache2 defaults
```

**Levantando, deteniendo y reiniciando servicios**

Para iniciar, detener, o reiniciar un servicio 
se puede poner la ruta completa del ejecutable 
en init.d seguido del parámetro.
```sh
# ver parametros del comando para el servicio
> /etc/init.d/nombreDelServicio
{start|stop|status|restart|reload}
```
Supongamos que tenemos ya instalado y
configurado un servidor web Apache y lo único
que falta es iniciar el servicio. Para ello, solo
bastará teclear lo siguiente:
```sh
# iniciar el servicio  httpd
> /etc/init.d/httpd start
```

Para detener este servicio, solo debemos cambiar 
la palabra start por stop:
```sh
# /etc/init.d/httpd stop
Para reiniciar el servicio:
# /etc/init.d/httpd restart
Otra manera es mediante el comando service:
# service httpd {start|stop|status|restart|reload}
Para iniciar el servicio httpd:
# service httpd start
```

### gestor Upstart

Es un `gestor de servicios` alternativo a `SysV init` y `systemd`.
Se basa en la detección de eventos.
Los servicios se llaman `jobs` y `no usa scripts` de shell, 
sino que poseen `archivos de configuración`
con la extensión .conf dentro del directorio  `/etc/init.`
Este mecanismo fue creado por Ubuntu, pero el
proyecto está actualmente `descontinuado`.

### Comando wall

se puede utilizar para enviar un mensaje a todas las terminales 
antes de cambiar de nivel de ejecución, apagar o reiniciar el sistema.
Es posible restringir el mensaje a un grupo determinado del sistema. 
```sh
# todos los desarrolladores verán el mensaje:
> wall “Pasaremos a modo monousuario para realizar \
mantenimiento del sistema. Por favor, desconectarse.”

# g : group  (mensaje que solamente el grupo desarrolladores puede ver )
> wall -g desarrolladores “Pasaremos a modo monousuario para \
realizar mantenimiento del sistema. Por favor, desconectarse.”
```

### Comando ShutDown

Con el comando shutdown, podremos planear
nuestra tarea de apagado o reinicio de sistema.

Sintaxis
```sh
 shutdown [opciones] tiempo [mensaje de alerta]

Opciones:
 -f  Inicio rápido: omite el chequeo del disco al reiniciar.
 -h  Apaga el equipo después de detener todo.
 -k  Mensaje de alerta sin realizar el evento de apagado o de reiniciado.
 -r  Reinicia después de detener todo.
 -F  Fuerza al chequeo de discos después del reinicio.
 -c  Cancelar shutdown.
```

```sh
# Reiniciar el equipo en 60 segundos y enviar aviso.
> shutdown -r 60 “salir del sistema”
# Reiniciar el equipo ya mismo (ojo, usarlo si no hay nadie conectado):
> shutdown -r now
```

**El botón de Power**
El hardware actual en su gran mayoría soporta el
apagado de un equipo mediante el botón de
Power. Esto se puede lograr gracias al paquete
acpid que proporciona el servicio del mismo
nombre.


### Parte Practica
```sh
> service sshd status
● ssh.service - OpenBSD Secure Shell server
     Loaded: loaded (/lib/systemd/system/ssh.service; enabled; vendor preset: e>
     Active: active (running) since Mon 2024-10-14 10:08:12 -03; 7h ago
       Docs: man:sshd(8)
             man:sshd_config(5)
    Process: 1295 ExecStartPre=/usr/sbin/sshd -t (code=exited, status=0/SUCCESS)
   Main PID: 1340 (sshd)    Tasks: 1 (limit: 18829)

    Oct 14 10:08:12 ariel-All-Series systemd[1]: Starting OpenBSD Secure Shell server...
    Oct 14 10:08:12 ariel-All-Series sshd[1340]: Server listening on 0.0.0.0 port 22.

> service --status-all
 [ + ]  acpid
 [ - ]  anacron
 [ + ]  avahi-daemon
 [ - ]  bluetooth
 [ - ]  console-setup.sh
 [ + ]  cron
 [ - ]  cryptdisks
 [ + ]  cups
 [ - ]  dns-clean
 [ + ]  docker
 [ - ]  grub-common
 [ - ]  hwclock.sh
 [ + ]  irqbalance
 [ + ]  kerneloops
 [ - ]  keyboard-setup.sh
 [ + ]  networking
#  + :  Active   ( Running )
#  - :  Inactice ( Dead    )

# ver numero de servicios activos
service --status-all | grep -e'+' | grep -e'+' -n
1: [ + ]  acpid
2: [ + ]  apparmor
3: [ + ]  avahi-daemon
4: [ + ]  binfmt-support

> ls /etc/init.d/
acpid           console-setup.sh  dns-clean          kmod           mysql         pulseaudio-enable-autospawn  uuidd
alsa-utils      cron              docker             lightdm        networking    rsync                        virtualbox
anacron         cryptdisks        grub-common        linuxlogo      ntp           saned                        x11-common
apparmor        cryptdisks-early  hwclock.sh         lm-sensors     openvpn       speech-dispatcher            zfs-import
avahi-daemon    cups

# servicio /etc/init.d/ssh   (SCRIPT)
> /etc/init.d/ssh
 * Usage: /etc/init.d/ssh {start|stop|reload|force-reload|restart|try-restart|status}

# commando /bin/ssh         (EJECUTABLE)
> ssh
usage: ssh [-46AaCfGgKkMNnqsTtVvXxYy] [-B bind_interface]
           [-b bind_address] [-c cipher_spec] [-D [bind_address:]port]
           [-E log_file] [-e escape_char] [-F configfile] [-I pkcs11]
           [-i identity_file] [-J [user@]host[:port]] [-L address]
           [-l login_name] [-m mac_spec] [-O ctl_cmd] [-o option] [-p port]
           [-Q query_option] [-R address] [-S ctl_path] [-W host:port]
           [-w local_tun[:remote_tun]] destination [command [argument ...]]

# si inspeccionamos el binario veremos instrucciones y datos crudos   
>cat /bin/ssh
"BA
(F0X
   H!�ox8.     ������oH@���o���o*=���o� �
                                         0�@�P�`�p�����������Р���� 
�0�@�P�`�p�����������С���� �0�@�P�`�p�����������Т���� �0�@�P�`�p�����
@�P�`�p�����������Ц���� �0�@�P�`�p�����������Ч���� �0�@�P�`�p���������


# si inspeccionamos el script podremos ver como levanta el seervicio  
> cat /etc/init.d/ssh | grep -A2 -e'start)' -e'stop)' -e'reload)' -e'restart)'
case "$1" in  
  start)
	check_privsep_dir  # estas son funciones declaradas en esete mismo script
	check_for_no_start # mostramos solo 2 lineas de cada posible entrada
--;;
  stop)
	log_daemon_msg "Stopping OpenBSD Secure Shell server" "sshd" || true
	if start-stop-daemon --stop --quiet --oknodo --pidfile /run/sshd.pid --exec /usr/sbin/sshd; then
--;;
  reload | force-reload )
	check_for_no_start
	check_config       
--;;
  restart )
	check_privsep_dir
	check_config

# vemos el soft link para servicio ssh en modo 2  
> ls -lasi /etc/rc2.d/ | grep ssh
2363136  0 lrwxrwxrwx   1 root root    13 Sep 19 13:23 S01ssh -> ../init.d/ssh
    # apunta al archivo "ssh" en directorio "init.d"  usando 13 bytes

# podemos ver todos los servicios que se levantan al entrar en modo 2
>ls -a /etc/rc2.d/
S01binfmt-support   S01dbus    S01linuxlogo    S01plymouth    S01virtualbox



> sudo /etc/init.d/ssh stop
Stopping ssh (via systemctl): ssh.service.

> sudo /etc/init.d/ssh start
Starting ssh (via systemctl): ssh.service.

> systemctl status ssh   # lo mismo ??
> service   sshd status  # que esto ??
● ssh.service - OpenBSD Secure Shell server
     Loaded: loaded (/lib/systemd/system/ssh.service; enabled; vendor preset: enabled)
     Active: active (running) since Mon 2024-10-14 18:06:47 -03; 1min 41s ago
       Docs: man:sshd(8)
             man:sshd_config(5)
    Process: 153693 ExecStartPre=/usr/sbin/sshd -t (code=exited, status=0/SUCCESS)

    PID: 153694 (sshd)      Tasks: 1 (limit: 18829)
 # PID: 1340 (sshd)    <-  el PID cambio al reiniciar

# REINICIO PC
 > init 6

> man init
DESCRIPTION     systemd is a system and service manager for Linux operating systems.
CONCEPTS        systemd provides a dependency system between 
              . various entities called "units" of 11 different types.

  1. |Service_units, which start and control daemons and the processes they consist of.
   . For details, see systemd.service(5).

  2. |Socket_units, which encapsulate local IPC or network sockets in the system, 
   . useful for socket-based activation. For details about socket units, 
   . see systemd.socket(5), for details on socket-based activation and , see daemon(7).
  3. |Target_units are useful to group units, or provide well-known synchronization points during boot-up, see systemd.target(5).
  4. |Device_units expose kernel devices in systemd and may be used to implement device-based activation. For details, see systemd.device(5).
  5. |Mount_units control mount points in the file system, for details see systemd.mount(5).
  6. |Automount_units provide automount capabilities, for on-demand mounting of file systems as well as parallelized boot-up. See systemd.automount(5).


# cnfigu de puertos  NO esta en   apache2.conf
osboxes@osboxes:/etc/apache2$ cat apache2.conf | grep 80

# Listamos todos los archivos de conf de apache2
osboxes@osboxes:/etc/apache2$ ls
apache2.conf    conf-enabled magic   conf-available  envvars
mods-available  mods-enabled         ports.conf      sites-available   sites-enabled

# vemos que esta configuracion se encuentra en : /etc/apache2/ports.conf
osboxes@osboxes:/etc/apache2$ cat ports.conf
    # If you just change the port or add more ports here, you will likely also
    # have to change the VirtualHost statement in
    # /etc/apache2/sites-enabled/000-default.conf
    Listen 80
    <IfModule ssl_module>
            Listen 443
    </IfModule>
    <IfModule mod_gnutools>
            Listen 443       .......

# procedemos a cambiar el puerto de 80 a 90 
osboxes@osboxes:/etc/apache2$ sudo vim ports.conf
# reiniciamos el servicio para aplicar cambios
osboxes@osboxes:/etc/apache2$ service apache2 restart
osboxes@osboxes:/etc/apache2$ service apache2 status




# vemos todos los logs de apache
osboxes@osboxes:/var/log/apache2$ ls
access.log error.log other_vhosts_access.log
# vemos los log de errores
osboxes@osboxes:/var/log/apache2$ cat error.log
[Tue Jun 27 19:22:59.477772 2023] [mpm_event:notice] [pid 3573:tid  140023124679744] AH00489: Apache/2.4.41 (Ubuntu) configured 
[Tue Jun 27 19:22:59.477819 2023] [core:notice]      [pid 3573:tid  140023124679744] resuming normal operationsAH00094: Command line: '/usr/sbin/apache2'
[Tue Jun 27 19:40:56.440587 2023] [mpm_event:notice] [pid 3573:tid  140023124679744] AH00491: caught SIGTERM, shutting down
[Tue Jun 27 19:40:56.470343 2023] [mpm_event:notice] [pid 10888:tid 140392146041920] ΑΗ00489: Apache/2.4.41 (Ubuntu) configured resuming normal operations
[Tue Jun 27 19:40:56.470396 2023] [core:notice]      [pid 10888:tid 140392146041920] AH00094: Command line: '/usr/sbin/apache2'

# rompemos la configuracion con un error de tipeo  TYPO
osboxesgosboxes:/etc/apache2$ sudo Vim ports.CONT

# intentamos reiniciar el servicio a ver que nos muestra
osboxes@osboxes:/etc/apache2$ sudo service apache2 restart
    Job for apache2.service failed because the control process exited with error code. 
    See "systemctl status apache2.service" and "journalctl -xe" for details.

# Miramos el estatus para temer mas informacion y los logs nuevos
osboxes@osboxes:/etc/apache2$ service apache2 status
    ⚫apache2.service - The Apache HTTP Server
        Loaded: loaded (/lib/systemd/system/apache2.service; enabled; vendor pres 
        Active: failed (Result: exit-code) since Tue 2023-06-27 19:45:12 EDT; 315
          Docs: https://httpd.apache.org/docs/2.4/
       Process: 11306 ExecStart=/usr/sbin/apachectl start (code=exited, status=1/ 
    #   Active: FAILED
    Jun 27 19:45:12 osboxes systemd   [1]:     Starting The Apache HTTP Server...
    Jun 27 19:45:12 osboxes apachectl [11309]: AH00526: Syntax error on line 5 of
    Jun 27 19:45:12 osboxes apachectl [11309]: Invalid command 'Liste', perhaps mis
    Jun 27 19:45:12 osboxes apachectl [11306]: Action 'start' failed.
    Jun 27 19:45:12 osboxes apachectl [11306]: The Apache error log may have more info...
    Jun 27 19:45:12 osboxes systemd   [1]:     apache2.service: Control process exited, co
    Jun 27 19:45:12 osboxes systemd   [1]:     apache2.service: Failed with result 'exit->'
    Jun 27 19:45:12 osboxes systemd   [1]:     Failed to start The Apache HTTP Server.
    # en la linea 2 mos muetra que hay error de sintaxis en la linea 5 de la config
    # en la linea 3 mos muetra que "Liste" no es commando validp

osboxes@osboxes:/etc/apache2$ apachectl ports.conf Usage: /usr/sbin/apache2 [-D name] [-d directory] [-f file]
    [-C "directive"] [-c "directive"]
    [-k start restart|graceful|graceful-stop|stop]
    [-v] [-V] [-h] [-l] [-L] [-t] [-T] [-S] [-X]
    Options:
    -D name: define a name for use in <IfDefine name> directives
    -d  directorу:  specify an alternate initial ServerRoot
    -f  file:       specify an alternate ServerConfigFile
    -C "directive" :process directive before reading config files
    -c  "directive":process directive after reading config files show startup errors of level (see LogLevel)
    -e  level:
    -E  file: log startup errors to file
    -V: show version number
    -V: show compile settings
    -h: list available command line options (this page)
    -1: list compiled in modules
    -L: list available configuration directives

# Podemos usar las eramiantas CLI del servivio para testear congifuraciones
osboxes@osboxes:/etc/apache2$ apachectl configtest
AH00526: Syntax error on line 5 of /etc/apache2/ports.conf:
Invalid command 'Liste', perhaps misspelled or defined by a module not included in the server configuration
Action 'configtest' failed.
The Apache error log may have more information.

# Una vez corregido a  "Listen 80"  no hay errores no hay error en la config
osboxes@osboxes:/etc/apache2$ apachectl configtest
AH00558: apache2: Could not reliably determine the server's 
fully qualified domain name, using 127.0.1.1. 
Set the 'ServerName' directive  globally to suppress this message 
Syntax OK
```

### LOG de servicios  `/var/log` :

```sh
> cat /var/log/alternatives.log.1
# RSH : Remote Shell
#   -> alternativa insegura de : SSH
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rsh rsh /usr/bin/ssh           20 --slave /usr/share/man/man1/rsh.1.gz rsh.1.gz        /usr/share/man/man1/ssh.1.gz
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rlogin rlogin /usr/bin/slogin  20 --slave /usr/share/man/man1/rlogin.1.gz rlogin.1.gz  /usr/share/man/man1/slogin.1.gz
# RCP :Remote Copy
#  -> alternativa insegura de : SCP
update-alternatives 2024-09-19 13:23:54: run with --install /usr/bin/rcp rcp /usr/bin/scp           20 --slave /usr/share/man/man1/rcp.1.gz rcp.1.gz        /usr/share/man/man1/scp.1.gz
```

***Otros directorios importantes :***

  /var         : variables y archivos temporales 
    /var/local
    /var/backup
  /proc         : procesos

**Software mencionado:**

  Putty GitBash WinSCP   Windows_cmd
  Zabix Nagios  Keepaliv keepalived Jerkins DataDog

## Clase 7  Devices + Mopulos

Repaso de systemas de destion de servicios 
https://architecnologia.es/lpic-1-101-systemd-sysv


Como se cual usa mi systema ? 
https://unix.stackexchange.com/questions/196166/how-to-find-out-if-a-system-uses-sysv-upstart-or-systemd-initsystem

```
/usr/lib/systemd    tells you you're on a systemd based system.
/usr/share/upstart  tells you that you're probably on an Upstart-based system.
/etc/init.d         tells you the box has SysV init in its history
```

```sh
# verificar systema de arranque de mi linux
osboxes@osboxes:~$ sudo stat /proc/1/exe | grep sys
  File: /proc/1/exe -> /usr/lib/systemd/systemd
            # este ubuntu usa : SYSTEMD 
```

Un `ataque DOS` puede llenar el disco mediante `los logs del servicio`
si no lo impedimos `limitando` el flujo de request desde la `configuracion de servicio`
`llenara el disco rigido `dejando al sistema operativo del servidor inoperable

otra `buena practica` es hacer una `rotacion /automatisacion de logs`
esto nos permite aplicarle alguna logica al logging para evitar problemas

### /dev/

Dispositivos `de caracteres`
Estos dispositivos procesan la información `carácter por carácter`.
```
    /dev/tty     Terminales.
    /dev/console Terminal.
    /dev/input   Dispositivos de entrada (mouse).
    /dev/raw     Permite acceso directo a dispositivos de IO.
    /dev/pts     Pseudoterminal.
    /dev/lp      Impresora
```

Directorio /dev  Dispositivos `de bloques`
Estos dispositivos procesan la información usando `bloques y buffers`.
```
    /dev/ramN    Disco en RAM (N es el número de disco).
    /dev/hd[a-z] Disco IDE.
    /dev/sd[a-z] Disco SATA/SCSI/USB.
    /dev/mapper/ Mapea dispositivos en uno virtual (LVM y otras tecnologías)
```

###  /proc/

El kernel de Linux tiene dos funciones principales:
● Controlar el `acceso a los dispositivos` físicos del ordenador.
● Establecer cuándo y `cómo los procesos interactúan` con estos dispositivos.

El directorio / proc / contiene una jerarquía
de archivos especiales que representan el `estado actual del kernel` 
permitiendo a las aplicaciones y usuarios mirar detenidamente 
en la vista del kernel del sistema.

Dentro del directorio / proc /, se puede encontrar una
gran cantidad de `información que detalla el hardware` 
del sistema `y cualquier proceso` en ejecución. 
Además, algunos de los archivos dentro del árbol de directorios
/proc/ pueden ser manipulados por los usuarios y las
aplicaciones comunican los cambios de `configuración al kernel`.


El núcleo de Linux agrupa la información relacionada
a la asignación de recursos en el directorio /proc.
Los archivos relevantes de esta carpeta son los siguientes:

/proc/dma         Archivo que contiene el histórico DMA del equipo.
/proc/interrupts  Archivo que contiene el histórico IRQ del equipo.
/proc/ioports     Archivo que contiene el histórico Entrada/Salida del equipo.
/proc/bus/pci     La asignación de recursos puede ser consultada con comandos como lspci o dmesg


#### Dispositivos SCSI ( HHD USB DVD )

```sh
> cat /proc/scsi/scsi
    Attached devices:
 -> Host  : scsi0 Channel: 00 Id: 00 Lun: 00
    Vendor: ATA Model: # HITACHI HTS72503 Rev: PC3Z
    Type  : Direct-Access ANSI SCSI revision: 05
 -> Host  : scsi1 Channel: 00 Id: 00 Lun: 00
    Vendor: Optiarc Model: # DVD RW AD-7930H Rev: 1.D0
    Type  : CD-ROM ANSI SCSI revision: 05
 -> Host  : scsi7 Channel: 00 Id: 00 Lun: 00
    Vendor: WD Model: # My Passport 070A Rev: 1032
    Type  : Direct-Access ANSI SCSI revision: 02
 -> Host  : scsi7 Channel: 00 Id: 00 Lun: 01
    Vendor: WD Model: # Virtual CD 070A Rev: 1032
    Type  : CD-ROM ANSI SCSI revision: 04
 -> Host  : scsi7 Channel: 00 Id: 00 Lun: 02
    Vendor: WD Model: # SES Device Rev: 1032
    Type  : Enclosure ANSI SCSI revision: 04
```

***Dispositivo USB***
```sh
> cat /proc/scsi/usb-storage/7
 Host scsi7: usb-storage
 Vendor: Western Digital
 Product: My Passport 070A
 Serial Number: 575844304342394830303435
 Protocol: Transparent SCSI
 Transport: Bulk
 Quirks: SANE_SENSE
```
**Lector DVD :**
```sh
> cat /proc/scsi/sg/device_strs
ATA HITACHI HTS72503 PC3Z
Optiarc DVD RW AD-7930H 1.D0
WD My Passport 070A 1032
WD Virtual CD 070A 1032
WD SES Device 1032
```


#### CPU
```sh
# cat /proc/cpuinfo
processor : 0
vendor_id : GenuineIntel
cpu family : 6
model : 37
model name : Intel(R) Core(TM) i5 CPU M 520 @ 2.40GHz
stepping : 2
cpu MHz : 1199.000
cache size : 3072 KB
physical id : 0
siblings : 4
core id : 0
cpu cores : 2
apicid : 0
initial apicid : 0
fpu : yes
fpu_exception: yes 
```

#### Interrupciones
```sh
> cat /proc/interrupts
 CPU0 CPU1 CPU2 CPU3
 0: 636 72 10 3 IO-APIC-edge timer
 1: 382 290 60 51 IO-APIC-edge i8042
 8: 17 42 32 21 IO-APIC-edge rtc0
 9: 2850519 1206078 6738 6524 IO-APIC-fasteoi acpi
 12: 287326 300885 286864 252200 IO-APIC-edge i8042
 16: 0 0 0 0 IO-APIC-fasteoi mmc0
 17: 11 9 7 7 IO-APIC-fasteoi
 19: 443317 384748 4966 2223 IO-APIC-fasteoi ehci_hcd:usb2, ips
 23: 573117 8424 448034 229068 IO-APIC-fasteoi ehci_hcd:usb1
 40: 1947952 355339 2232 2222 PCI-MSI-edge ahci
 41: 5960060 222011 5813 4436 PCI-MSI-edge
 42: 214062 433404 305030 271928 PCI-MSI-edge em1
 43: 6925 11652 8915 8042 PCI-MSI-edge snd_hda_intel
 44: 1053 40 1 0 PCI-MSI-edge firewire_ohci
NMI: 14734 102240 102151 102148 Non-maskable interrupts 
```

#### DMA

```sh
> cat /proc/dma
 4: cascade
```

#### Memoria
```sh
> cat /proc/meminfo
MemTotal: 7971292 kB
MemFree: 199292 kB
Buffers: 204932 kB
Cached: 2354312 kB
SwapCached: 2004 kB
Active:         3530724 kB
Inactive:       1858672 kB
Active  (anon): 2336544 kB
Inactive(anon):  780000 kB
Active  (file): 1194180 kB
Inactive(file): 1078672 kB
Unevictable: 20 kB
Mlocked: 20 kB
SwapTotal: 4095996 kB
SwapFree: 4057368 kB
Dirty: 704 kB
Writeback: 0 kB
AnonPages: 2828328 kB
Mapped: 2108892 kB 
```

#### Estadísticas de disco
```sh
> cat /proc/diskstats
 1   0 ram0 0 0 0 0 0 0 0 0 0 0 0
 1   1 ram1 0 0 0 0 0 0 0 0 0 0 0
 1   2 ram2 0 0 0 0 0 0 0 0 0 0 0
 1   3 ram3 0 0 0 0 0 0 0 0 0 0 0
 8   0 sda 726060 44424 22017281 6018144 937356 113957 34200861 35812071 0 4276213 41832765
 8   1 sda1 722 1167 10734 2024 11 9 52 122 0 2025 2145
 8   2 sda2 725165 43246 22005075 6012069 889836 113948 34200809 34177257 0 2834939 40190903
 11  0 sr0 65 0 500 1926 0 0 0 0 0 1925 1925
 253 0 dm-0 769318 0 22003547 8706032 1051845 0 34200809 158419832 0 4396589 167187026
 8  16 sdb  623 455 17109 9156 44 0 8204 7109 0 7858 16265
 8  17 sdb1 87  91 1424 1169 0 0 0 0 0 1122 1169
 8  18 sdb2 85  91 1408 985  0 0 0 0 0 952 985
 11  1 sr1  28  0  224  175  0 0 0 0 0 175 175
# (...salida cortada...) ###########################
```

#### IOPorts
```sh
> cat /proc/ioports
 0000-0cf7 : PCI Bus 0000:00
 0000-001f : dma1
 0020-0021 : pic1
 0040-0043 : timer0
 0050-0053 : timer1
 0060-0060 : keyboard
 0062-0062 : EC data
 0064-0064 : keyboard
 0066-0066 : EC cmd
 0070-0071 : rtc0
 0080-008f : dma page reg
 00a0-00a1 : pic2
 00c0-00df : dma2
 00f0-00ff : fpu
 03c0-03df : vga+
 0800-080f : pnp 00:03
  ....
 0cf8-0cff : PCI conf1
 0d00-ffff : PCI Bus 0000:00
 1000-107f : pnp 00:03
 1000-1003 : ACPI PM1a_EVT_BLK
 1004-1005 : ACPI PM1a_CNT_BLK
 1008-100b : ACPI PM_TMR
 1010-1015 : ACPI CPU throttle
 1020-102f : ACPI GPE0_BLK
 1030-1033 : iTCO_wdt
 1050-1050 : ACPI PM2_CNT_BLK
 1060-107f : iTCO_wdt
 1180-11ff : pnp 00:03
 15e0-15ef : pnp 00:03
 1600-1641 : pnp 00:03
# (...salida cortada……) ###########################
```

#### Sistemas de Archivos
```sh
# cat /proc/filesystems
nodev sysfs
nodev rootfs
nodev bdev
nodev proc
nodev cgroup
nodev cpuset
nodev tmpfs
nodev devtmpfs
nodev binfmt_misc
nodev debugfs
nodev securityfs
nodev sockfs
nodev usbfs
nodev pipefs
nodev anon_inodefs
nodev devpts
ext3
ext4
nodev ramfs
nodev hugetlbfs
iso9660
nodev autofs
nodev pstore
nodev mqueue
nodev fuse
fuseblk
nodev fusectl
xfs
```

#### Procesos
```sh
> ls -d /proc/[0-9]*
/proc/1     /proc/13481 /proc/17301 /proc/20891 /proc/23308 /proc/26 /proc/27417 /proc/27541
/proc/28    /proc/403   /proc/68
/proc/1034  /proc/13484 /proc/1731 /proc/21 /proc/23310 /proc/26791 /proc/27421 /proc/27559
/proc/28011 /proc/405   /proc/69
/proc/1041  /proc/13495 /proc/17315 /proc/21128 /proc/23450 /proc/268 /proc/27422 /proc/27562
/proc/2805  /proc/406   /proc/6947
/proc/1049  /proc/13516 /proc/17320 /proc/2138 /proc/23475 /proc/27 /proc/27424 /proc/27563
/proc/28179 /proc/4356  /proc/7
/proc/1050  /proc/13533 /proc/1737 /proc/21717 /proc/2353 /proc/27087 /proc/27425 /proc/27564
/proc/28199 /proc/4357  /proc/70
#(...salida cortada……)  ###############################################################
```

###  /sys/ 

A partir de 2.6 del kernel Linux comenzó a utilizarse un nuevo 
`sistema de archivos` llamado `sysfs`. 
Este  `es virtual` y se monta sobre el directorio `/sys`.
Es un directorio con `información `específica de `hardware`. 
El servicio haldaemon extrae datos de/sys para ser utilizado 
por aplicaciones de escritorio.

El servicio `haldaemon` ha sido reemplazado por `udisks` y `upower`.

#### Servicio udev

Sirve para `mejorar el uso` del directorio `/dev `
(que contiene los archivos que son nodos de dispositivos en general) 
y para manejar el comportamiento del `sistema frente a eventos` 
relacionados con `dispositivos de bloque`, red, usb, etc. 

También se basa en la información que extrae del directorio /sys para trabajar.
El comportamiento mencionado por parte de udev se basa en archivos
de `reglas `que están en el directorio `/usr/lib/udev/rules.d`, 
como podemos ver en los siguientes slides.

```sh
> ls /usr/lib/udev/rules.d/
39-usbmuxd.rules            60-serial.rules     77-mm-dell-port-types.rules      80-libinput-device-groups.rules
40-usb-media-players.rules  64-btrfs-dm.rules   77-mm-ericsson-mbm.rules         80-mm-candidate.rules
40-usb_modeswitch.rules     64-btrfs.rules      77-mm-fibocom-port-types.rules   80-net-setup-link.rules
50-firmware.rules           64-xorg-xkb.rules   77-mm-haier-port-types.rules        80-udisks2.rules
50-udev-default.rules       65-libwacom.rules   77-mm-huawei-net-port-types.rules   84-nm-drivers.rules
55-dm.rules                 66-azure-ephemeral.rules 77-mm-longcheer-port-types.rules   85-hdparm.rules
56-lvm.rules                69-cd-sensors.rules 77-mm-mtk-port-types.rules 85-hwclock.rules
60-block.rules              69-libmtp.rules     77-mm-nokia-port-types.rules
```


Estos archivos no hay que tocarlos sino los que
están en el directorio `/etc/udev/rules.d`:
```sh
> ls /etc/udev/rules.d/
60-cdrom_id.rules 60-vboxadd.rules
```
En el caso que se necesite modificar alguna regla:
Lo correcto es copiar el archivo a este último directorio 
y hacer los cambios pertinentes.



**Monitoreo de los eventos de udev**

Escucha los eventos de udev del kernel y los que se
envían mediante una regla de udev, mostrando la ruta
del dispositivo respecto al directorio sys. Se puede usar
para` analizar el tiempo que le toma cada evento.`
La siguiente es una muestra recortada al insertar
un CDROM:

```sh
> udevadm monitor
monitor will print the received events for:
UDEV - the event which udev sends out after rule processing
KERNEL - the kernel uevent
KERNEL[17145.085584] change /devices/pci0000:00/0000:00:01.1/ata2/host1/target1:0:0/1:0:0:0/block/sr0 (block)
UDEV__[17145.191044] change /devices/pci0000:00/0000:00:01.1/ata2/host1/target1:0:0/1:0:0:0/block/sr0 (block)
```

#### Subdirectorios

Sysfs es un sistema de archivos virtual basado inicialmente en ramfs 
que está implementado en el kernel de Linux 2.6. 
El núcleo exporta hacia el espacio de usuario `información` sobre los `dispositivos y controladores`. 
Esta información se organiza `dentro de /sys`, agrupada en directorios de forma jerárquica.
```
Directorio        Descripción
    ●/sys/block     contiene Un directorio por cada dispositivo de tipo bloque.
    ●/sys/bus       contiene un directorio por cada tipo de bus físico del sistema.
    ●/sys/class     Directorios de los dispositivos organizados en clases por el kernel.
                    Una clase de dispositivo describe un tipo de dispositivo funcional.
    ●/sys/devices   Muestra los `dispositivos físicos` que han sido encontrados 
                    por los diferentestipos de bus registrados en el kernel.
    ●/sys/firmware  Contiene interfaces para manipular objetos y atributos específicos del firmware.
    ●/sys/modules   Un directorio por cada `módulo` cargado por el kernel.
    ●/sys/fs        Un directorio por cada `sistema de archivos`.
    ●/sys/power     Contiene información del sistema de alimentación eléctrica.
```

#### D-bus 

es un sistema de `comunicación entre aplicaciones` mediante mensajes. 
Para ello, `usa un demonio` ejecutable que funciona como bus del sistema 
al que se conectan las aplicaciones.

Dispone de dos funcionalidades:
● Comunicación entre las aplicaciones de una misma sesión de usuario.
● Comunicación entre el sistema operativo y la sesión de escritorio.


El `servicio udev` entonces, se encarga de detectar
y hacer determinadas acciones con dispositivos,
los cuales se ven reflejados en /sys.

El `servicio D-bus` al tener capacidad para enviar
mensajes entre aplicaciones puede, entre otras
cosas, realizar una acción determinada en un
entorno de escritorio, relacionada con un
dispositivo detectado


### info adicional - Arquitectura del Sistema

#### hotplug y coldplug
Hotplug es la capacidad que tienen algunos dispositivos para
`conectarse y desconectarse` del equipo `sin reiniciar` el sistema. 
Estosdispositivos pueden configurarse de forma automática y funcionar correctamente.
Entre los tipos de conexión que `permiten hotplug` se encuentran:
● USB.
● Firewire.
● SATA.
● SAS.



#### HAL

`Hardware Abstracton Layer` capa situada entre el software y el hardware. 
( este software fue quitado y reemplazado por otros), 
Las aplicaciones no acceden directamente al hardware 
sino que lo hacen a través de HAL. 

Éste aglutina toda la información de los dispositivos que proviene 
de diferentes fuentes y proporciona un acceso homogéneo a las aplicaciones.

Cuando un dispositivo es añadido, se genera una señal a través del bus 
del sistema de mensajes con todos los detalles del dispositivo añadido.
En la actualidad, HAL ha sido reemplazada por udev.


#### La BIOS y los perisfericos

Para ver información de, periféricos  entrada/salida, chipsets y nuestra PC
existe la `BIOS`  (Basic Input Output System) 
nos muestra un listado y configuración de cada componente de nuestro equipo, 
con una serie de parámetros específicos para cada uno. 

Toda esta información puede ser manipulada allí con diferentes opciones.
Una de las opciones que más nos va importar es la referida a `los IRQ`,
`I/O, fecha, puertos paralelos y serie, entre otros.`

La `certificacion  LPIC-1`  evalua tener conocimientos del BIOS, 
ya que las configuraciones varían según los fabricantes; 
por eso necesitamos saber cómo arrancar el equipo :
desde un CD,  red,  disco interno,  puerto serial o un USB 
y realizar configuraciones de los recursos mediante la BIOS.

Es importante diferencias entre conectores `IDE y SCSI, SATA`
tanto en un `HDD` como para un `CD/DVD`.


#### Asignación de recursos

Para permitir que los periféricos y dispositivos
del equipo se comuniquen directamente con
los recursos del sistema, en particular con
el CPU (Central Processing Unit), el sistema
asigna recursos tales como líneas y canales
de comunicación para cada dispositivo.
Muy particularmente, estos recursos son
conocidos como solicitudes de interrupción
(IRQ), direcciones de entrada/salida y accesos
directos a memoria (DMA).
Solicitudes de interrupción (IRQ)
Antes de explicar qué es una solicitud de
interrupción, debemos conocer cuál es la función
de un procesador. El procesador es el encargado
de procesar y administrar los datos y peticiones
que le llegan. Sin embargo, un solo procesador
no es capaz de procesar simultáneamente
varias peticiones, por lo que solo atiende de
a una a las peticiones que a él llegan, es aquí
donde las solicitudes de interrupción empiezan a
jugar un papel importante.

Cuando un periférico desea acceder a un recurso,
envía un pedido de interrupción al procesador
para llamar su atención. Los periféricos cuentan
con un número de interrupción que se denomina
IRQ (Peticiones de Interrupción). Es como si
cada periférico tirara de un “hilo” que está atado
a una campana para indicarle al equipo que
desea que le preste atención. Este “hilo” es, de
hecho, una línea física que conecta cada ranura
de expansión así como cada interfaz
entrada/salida a la motherboard.

Ejemplo: supongamos que un programa 1 está siendo
atendido por el procesador, pero súbitamente una
solicitud de interrupción llega al procesador. Es
entonces cuando el programa 1 llega a ser suspendido
momentáneamente por un programa 2. Este programa
2 es ahora atendido por el procesador y hasta que
termine, el programa 1 interrumpido, puede continuar
ejecutándose.

Una interrupción se convierte en una interrupción
de hardware cuando es solicitada por uno de los
componentes de hardware del equipo.

Cuando un periférico desea acceder a un recurso,
envía un pedido de interrupción al procesador
para llamar su atención. Los periféricos cuentan
con un número de interrupción que se denomina
IRQ (Peticiones de Interrupción). Es como si
cada periférico tirara de un “hilo” que está atado
a una campana para indicarle al equipo que
desea que le preste atención. Este “hilo” es, de
hecho, una línea física que conecta cada ranura
de expansión así como cada interfaz
entrada/salida a la motherboard.

**Direcciones de entrada/salida**
representan direcciones específicas en la memoria del sistema. 
Dichas direcciones son asignadas por el CPU a cada uno de los dispositivos
del hardware del sistema para que puedan escribir y leer datos sobre la misma.



#### Libros

● “LPI Linux Certification in a Nutshell”, 
Third Edition, June 2010, Adam Haeder, Stephen
Addison Schneiter, Bruno Gomes Pessanha & James Stanger.

● “LPIC-1: Linux Professional Institute
Certification Study Guide: (Exams 101 and 102)”, 
2nd Edition, February 2009, Roderick W. Smith.


### MODULOS 


**Modularización del kernel**

Los kernel modernos están modularizados. 
Estos modulos están `separados del nucleo kernel` 
son `cargados o borrados` por el superusuario.

Hay ciertos parámetros en el archivo del gestor de arranque 
y de la línea comandos del kernel que afectan a este, 
dado que estos no controlan módulos del kernel.

Al `conectar físicamente` el dispositivo, 
el kernel intentará cargar el `módulo` necesario para que 
el dispositivo pueda `funcionar` este se llama `driver`


#### Comandos  módulos

Para `comprobar` que se ha instalado correctamente 
o para `instalar` el módulo si disponemos de un driver precompilado,
podemos utilizar las siguientes herramientas de `gestión de módulos`:

```
Comando :       Descripción :
lsmod             Muestra módulos que se cargaron en memoria durante el proceso de arranque.
modprobe [módulo] Carga el módulo definido. Si depende de otros módulos los cargará primero.
rmmod    [módulo] Descarga el módulo de la memoria.
modinfo  [módulo] Proporciona información del módulo.
```


#### Directorios de Modulos

Los módulos compilados se encuentran en `/lib/modules/versión_del_kernel`.
Para configurar sus parámetros, utilizaremos el archivo `/etc/modules.conf` 
o `/etc/modules`. 

Para que un módulo se cargue siempre en memoria, puede ser necesario
añadir un archivo al directorio `/etc/modprobe.d` durante el proceso de arranque. 
Dependiendo la distribución, podemos tener algo así:

```sh
# CONFIG MODULOS
> ls -l /etc/modprobe.d/
total 32
-rw-r--r-- 1 root root 884  ago 22 12:18 blacklist.conf
-rw-r--r-- 1 root root 140  nov 16 08:14 broadcom-wl-blacklist.conf
-rw-r--r-- 1 root root 382  jul 21 16:24 dist-alsa.conf
-rw-r--r-- 1 root root 5309 jul 21 16:24 dist.conf
-rw-r--r-- 1 root root 473  jul 21 16:24 dist-oss.conf
-rw-r--r-- 1 root root 30   feb 8   2011 openfwwf.conf
-rw-r--r-- 1 root root 64   abr 20  2011 wireless.conf
```
El comando blacklist sirve para evitar que se carguen ciertos módulos.


```sh
# Según el kernel que tengamos, tendremos los diferentes módulos.
> ls -l  /lib/modules
total 12
drwxr-xr-x 2 root root 4096 oct 30 23:01 2.6.40.4-5.fc15.x86_64
drwxr-xr-x 2 root root 4096 nov 18 05:05 2.6.40.6-0.fc15.x86_64
drwxr-xr-x 7 root root 4096 nov 23 03:36 2.6.41.1-1.fc15.x86_64

> ls   /lib/modules/2.6.41.1-1.fc15.x86_64
build  modules.alias    modules.builtin.bin  modules.devname    
    .  modules.order    modules.symbols      modules.alias.bin  
extra  modules.drm      modules.modesetting  modules.ieee1394map
    .  modules.pcimap   modules.symbols.bin  modules.inputmap
kernel modules.block    modules.dep          modules.isapnpmap 
    .  modules.seriomap modules.usbmap       modules.networking 
misc   modules.builtin  modules.dep.bin      modules.ofmap  
    .  modules.softdep  modules.ccwmap
sour        updates         vdso        #    23 modulos   7 directorios
```

`modules.dep` es el `árbol de módulos` que g`enera el sistema` cuando arranca.
Para `regenerarlo`, hay que tipear `depmod -a`.


```sh
# MODULOS INSTALADOS
[ariel @ ariel-All-Series]  $ ls /lib/modules/5.15.0- # tab + tab 
5.15.0-56-generic/      5.15.0-69-generic/      5.15.0-76-generic/ 
5.15.0-67-generic/      5.15.0-71-generic/      5.15.0-79-generic/
                    # Tengo modulos para 6 versiones de kernel 
                    # segun neofetch uso  :     5.15.0-79-generic/
[ariel @ ariel-All-Series]  $ ls /lib/modules/5.15.0-79-generic/
build       initrd          kernel        updates        vdso 
modules.alias      modules.builtin.alias.bin  modules.dep       modules.symbols.bin   
modules.alias.bin  modules.builtin.modinfo    modules.dep.bin   modules.softdep  
modules.builtin    modules.devname            modules.order     modules.symbols  
modules.builtin.bin       #   13 MODULOS   y  5 directorios
```


#### Comando lsmod

lsmod muestra información referida a los módulos cargados (/proc/modules):

```sh
> lsmod
Module              Size            Used by
nls_utf8            1389            1
xfs                 695061          0
usb_storage         45982           0
uas                 7775            0
r8712u              146231          0
snd_hda_codec_hdmi  23548           1
snd_hda_codec_conexant 55283        1
snd_hda_intel       24072           4
snd_hda_codec       85181           3 snd_hda_codec_hdmi,snd_hda_codec_conexant,snd_hda_intel
snd_hwdep           6264            1 snd_hda_codec
snd_seq             52186           0
uvcvideo            56989           0
snd_seq_device      5941            1 snd_seq 
```
  

```sh
# podemos ver info de cualquier modulo listado en lsmod
> modinfo i915
filename: /lib/modules/2.6.41.1-1.fc15.x86_64/kernel/drivers/gpu/drm/i915/i915.ko
license: GPL and additional rights
description: Intel Graphics
author: Tungsten Graphics, Inc.
license: GPL and additional rights
srcversion: 61F1EF8287C2CB6B830FE31
alias: pci:v00008086d0000015Asv*sd*bc03sc*i*
alias: pci:v00008086d00000106sv*sd*bc03sc*i*
depends: drm,drm_kms_helper,i2c-core,video,i2c-algo-bit
```     

#### Insmod & rmmod

El comando insmod permite cargar módulos, con la
diferencia de que no resuelve dependencias, y de que
hay que especificar el path hasta el módulo.
```sh
#Cargar módulo:
> insmod /lib/modules/2.6.41.1-1.fc15.x86_64/kernel/fs/fat/vfat.ko
insmod: error inserting 'vfat.ko': -1 Unknown symbol in module
# Muestra las dependencias:
> modprobe --show-depends vfat**
```

```sh
# Cargar el módulo necesario y cargar nuevamente el que falló:
> insmod /lib/modules/2.6.41.1-1.fc15.x86_64/kernel/fs/fat/fat.ko
> insmod /lib/modules/2.6.41.1-1.fc15.x86_64/kernel/fs/fat/vfat.ko
# Remover un módulo:
> rmmod fat
ERROR: Module fat is in use by vfat
> rmmod vfat      # Sacar módulo dependiente:
> lsmod |grep fat # Listar los módulos que contengan "fat":
fat     44588   0
# Sacar el módulo que antes falló:
> rmmod fat
> lsmod |grep fat
```
#### Modprobe

El comando modprobe permite cargar un módulo con el
nombre, sin necesidad de especificar el path completo, ni
los módulos dependientes, dado que utiliza el contenido
del modules.dep para resolver las dependencias.

```sh
> modprobe --show-depends fat   # DEPECENCIAS
insmod /lib/modules/2.6.18-194.el5/kernel/fs/fat/fat.ko
> modprobe --show-depends nfs
insmod /lib/modules/2.6.18-194.el5/kernel/net/sunrpc/sunrpc.ko
insmod /lib/modules/2.6.18-194.el5/kernel/fs/nfs_common/nfs_acl.ko
insmod /lib/modules/2.6.18-194.el5/kernel/fs/fscache/fscache.ko
.......
```


```sh
> modprobe -l nfs           # Muestra ubicación del módulo:    
/lib/modules/2.6.18-194.el5/kernel/fs/nfs/nfs.ko
> modprobe -rav nfs         # Similar a `rmmod` 
rmmod /lib/modules/2.6.18-194.el5/kernel/fs/nfs/nfs.ko
rmmod /lib/modules/2.6.18-194.el5/kernel/fs/lockd/lockd.ko
rmmod /lib/modules/2.6.18-194.el5/kernel/fs/fscache/fscache.ko
rmmod /lib/modules/2.6.18-194.el5/kernel/fs/nfs_common/nfs_acl.ko
remove { /bin/umount /var/lib/nfs/rpc_pipefs > /dev/null 2>&1 || :; } ; /sbin/modprobe -r --ignore-remove sunrpc
rmmod /lib/modules/2.6.18-194.el5/kernel/net/sunrpc/sunrpc.ko
```

Para enviarle `parámetros a un módulo` delkernel, 
tienen que ser insertados en un archivo de configuración específico 
● `/etc/modprobe.conf`,
● `/etc/modprobe.d/modprobe.conf`
● `/etc/modprobe.d/aliases`

Ahi estan los distintos parámetros que puede necesitar un módulo 
(dirección I/O, interrupción, canal DMA, etc.). 
Si quisiéramos cambiar algo, porque es requerido por el hardware, 
tendríamos que especificarlo ahí.


#### Parámetros por línea de comando

**Opciones del Kernel durante el proceso de inicio**

Existen tres maneras de `pasar opciones al Kernel`
y controlar su comportamiento:

1. Al construir y `compilar el núcleo`.
2. `Cuando se inicia` el Kernel, a través de los archivos de configuración, 
o desde la línea de comandos de LILO o GRUB.
3. `Durante la ejecución`, modificando los archivos de los directorios /proc y /sys.

También se pueden pasar parámetros desde la línea de comandos
a los módulos que no están integrados en el núcleo.

```sh
# La sintaxis es la siguiente:
> modprobe `módulo` `parámetro`
```

```sh
# Cargar modulo usbcore con parámetro autosuspend habilitado:
> modprobe  usbcore  autosuspend=1
```
Si el `módulo está integrado`, se pasa al kernel la opción:
        modulo.parámetro
        usbcore.autosuspend=1

Cambiar los parámetros de un módulo en `tiempo de ejecución `
mediante el directorio` /sys`:
```sh
# La sintaxis es la siguiente:
 echo -n `[value]` > /sys/module/`[modulename]`/parameters/`[parm]`.
# Para suspender el modulo USB:
 echo -n 1         > /sys/module/usbcore/parameters/autosuspend
```

### HARDWARE info

```sh
> lspci         # Obtener información del hardware del equipo
00:00.0 Host bridge: Intel Corporation Core Processor DRAM Controller (rev 02)
00:02.0 VGA compatible controller: Intel Corporation Core Processor Integrated Graphics Controller (rev 02)
00:16.0 Communication controller: Intel Corporation 5 Series/3400 Series Chipset HECI Controller (rev 06)
00:16.3 Serial controller: Intel Corporation 5 Series/3400 Series Chipset KT Controller (rev 06)
00:19.0 Ethernet controller: Intel Corporation 82577LM Gigabit Network Connection (rev 06)
00:1a.0 USB Controller: Intel Corporation 5 Series/3400 Series Chipset USB2 Enhanced Host Controller (rev 06)
00:1b.0 Audio device: Intel Corporation 5 Series/3400 Series Chipset High Definition Audio (rev 06)
# (...salida cortada...)   ################################################################

> lspci -t      #  -t : tree   (En forma de árbol)
-+-[0000:ff]-+-00.0
 |           +-00.1
 |           +-02.0
 |           \-02.3
 \-[0000:00]-+-00.0
             +-02.0
             +-16.0
# (...salida cortada...)   ################################################################
> lspci -tv     #  -tv ,  obtenemos más información:
    -+-[0000:ff]-+-00.0 Intel Corporation Core Processor QuickPath Architecture Generic Non-core Registers
     |           +-00.1 Intel Corporation Core Processor QuickPath Architecture System Address Decoder
     |           +-02.0 Intel Corporation Core Processor QPI Link 0
     |           \-02.3 Intel Corporation Core Processor Reserved
     \-[0000:00]-+-00.0 Intel Corporation Core Processor DRAM Controller
                 +-02.0 Intel Corporation Core Processor Integrated Graphics Controller
                 +-16.0 Intel Corporation 5 Series/3400 Series Chipset HECI Controller
```

Puedo notar que en `mi PC` aparecen componentes `AMD y Nvidia`
pero en la `VM que corre dentro` de esta se simulan `componentes INTEL`

#### Comando lshw

Es una potente herramienta de texto para extraer
información sobre el hardware presente.
```
    Opciones    Descripción
    -c clase    Muestra una clase determinada   (memory, network, disk, cpu).
    -html       Exporta en formato html.
    -short      Modo resumido.
```

```sh
[ariel @ ariel-All-Series] $ lshw -short
WARNING: you should run this program as super-user.
H/W path            Device    Class          Description
========================================================
                              system         Computer
/0                            bus            Motherboard
/0/0                          memory         16GiB System memory
/0/1                          processor      AMD Ryzen 5 2600 Six-Core Processor
/0/100                        bridge         Family 17h (Models 00h-0fh) Root Co
/0/100/0.2                    generic        Family 17h (Models 00h-0fh) I/O Mem
/0/100/1.1                    bridge         Family 17h (Models 00h-0fh) PCIe GP
/0/100/1.1/0        wlp1s0    network        AR9287 Wireless Network Adapter (PC
/0/100/1.3                    bridge         Family 17h (Models 00h-0fh) PCIe GP
/0/100/1.3/0                  bus            Advanced Micro Devices, Inc. [AMD]
# (...salida cortada…)   #############################################
```

```sh
# I made a custom command to view the CLASS names
# tried first with AWK  but  CUT | SORT | UNIQ work better here 
> sudo lshw -short  | cut -c 33- | cut -c -16  | sort | uniq -c
# Instances  CLASS name
      1 ================    
     26  bridge         
      8  bus            
      1  Class  -------> # not a class name     
      2  communication  
      2  disk              
      2  display        
      4  generic        
     18  input          
      7  memory         
      4  multimedia     
      2  network        
      1  processor      
      2  storage        
      5  system         
      7  volume     
#     This are all  14   posible  "CLASS"  oprions
#     the 18 inputs are USB 
```
```sh
>lshw -c disk
 *-cdrom
    description: DVD-RAM writer
    product: CDDVDW SH-224DB
    vendor: TSSTcorp
```

Lista de todos los comandos del tipo ls :
```sh
> ls /usr/bin/ |grep ^ls        # all the  :  "ls"   commands
ls              lshw            lsmod          lsusb   
lsattr          lsinitramfs     lsns           
lsblk           lsipc           lsof           
lsb_release     lslocks         lspci          
lscpu           lslogins        lspgpot        
lsdiff          lsmem           lss16toppm     
```

Podemos encontrar info de dispositivos en archivos `/pci/ids`
OJO tiene `34811` lineas de informacion
https://manpages.ubuntu.com/manpages/bionic/en/man1/lshw.1.html

```sh
[ariel @ ariel-All-Series] $ locate pci.ids -b | grep -e'/pci.ids$' | grep -e'^/usr' -e '^/proc'
# locate -b : no machear directorio solo archivo
# deve estar en carpeta   /usr   o  /proc 
/usr/share/doc/pci.ids
/usr/share/hwdata/pci.ids
/usr/share/misc/pci.ids
```
```sh
           # we will only show lines 20 to 35 to get a general idea
[ariel @ ariel-All-Series] $ sed -n '20,35p' /usr/share/hwdata/pci.ids  
# Vendors, devices and subsystems. Please keep sorted.

# Syntax:
# vendor  vendor_name
#	device  device_name				<-- single tab
#		subvendor subdevice  subsystem_name	<-- two tabs

0001  SafeNet (wrong ID)
0010  Allied Telesis, Inc (Wrong ID)
# This is a relabelled RTL-8139
	8139  AT-2500TX V3 Ethernet
0014  Loongson Technology LLC
	7a00  Hyper Transport Bridge Controller
	7a02  APB (Advanced Peripheral Bus) Controller
	7a03  Gigabit Ethernet Controller
```


#### dmidecode

Nos devuelve todala información del hardware: 
proviene de el archivo  /sys/devices/virtual/dmi/id

Opciones     Descripción
-t tipo     Tipo de dispositivo 
            (0: BIOS, 4: Procesador, 5: Banco Memoria, 6: Memorias)
```sh
> sudo dmidecode -t 5
SMBIOS 2.6 present.
> sudo dmidecode 2.11
Handle 0x0007, DMI type 5, 20 bytes
Memory Controller Information
    Error Detecting Method:     None
    Maximum Memory Module Size: 4096 MB
    Maximum Total Memory Size:  8192 MB
    Supported Speeds:           Other
    Supported Memory Types:     DIMM    SDRAM
    Memory Module Voltage:      2.9 V
    Associated Memory Slots:    2   0x0008  0x0009
    Enabled Error Correct
```



#### Dispositivos USB


Los dispositivos USB (Universal Serial Bus),
permiten conectar diversos tipos de periféricos :
(teclados, discos rígidos, pen drives, cámaras, impresoras, etc).

Cuando se configura el núcleo, se ve una sección llamada USB support 
que contiene opciones USB. 
Los dispositivos USB son agregados al equipo en forma de árbol,
identificados de forma unívoca por el sistema.

Existen 4 tipos de controladores USB:
Controlador          Módulo kernel  Protocolo   Velocidad máxima
● OHCI :  (Compaq)   usb-ohci.o     USB 1.1     12Mbps.
● UHCI :  (Intel)    usb-uhci.o     USB 1.1     12Mbps
● EHCI :  (USB 2.0)  ehci-hdc.o     USB 2.0     480Mbps
● XHCI :                                        5 Gbps


El soporte a dispositivos USB está disponible desde 
la versión 2.2.7 del kernel de Linux, y, con ello los 3 primeros módulos 


**Existe una cantidad enorme de dispositivos USB**
Dispositivos de :
Human Interface (HID)  Comunicación  Almacenamiento_masivo    Audio   IrDA     Impresoras
● Input Devide        ● Modems.    ● Disco Duro/Compacto.  ● Placas ● InfraRed  ● USB or
mouse, teclado...     ● Wifi.      ● Lectores de tarjetas.   sonido   Device    Paralell

```sh
> lsusb
Bus 001 Device 010: ID 046d:c52e Logitech, Inc.
Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
Bus 002 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
Bus 001 Device 002: ID 8087:0020 Intel Corp. Integrated Rate Matching Hub
Bus 002 Device 002: ID 8087:0020 Intel Corp. Integrated Rate Matching Hub
Bus 001 Device 004: ID 17ef:480f Lenovo Integrated Webcam [R5U877]
Bus 002 Device 009: ID 1058:070a Western Digital Technologies, Inc. My Passport Essential SE
```

```sh
# lsusb -t
/: Bus 02.Port 1: Dev 1, Class=root_hub, Driver=ehci_hcd/3p, 480M
    |__ Port 1: Dev 2, If 0, Class=hub, Driver=hub/8p, 480M
        |__ Port 1: Dev 9,  If 0, Class=stor., Driver=usb-storage, 480M
/: Bus 01.Port 1: Dev 1, Class=root_hub, Driver=ehci_hcd/3p, 480M
    |__ Port 1: Dev 2, If 0, Class=hub, Driver=hub/6p, 480M
        |__ Port 2: Dev 10, If 0, Class=HID,   Driver=usbhid, 12M
```



### LOGS - ( Mensajes )

**Man Pages**

Las páginas del manual en Linux son siempre
información útil. Recomendamos siempre repasar
y/o consultar las opciones de un determinado
comando.
Por ejemplo Ejecutando : man ip



**Definición y uso de Logs**
De acuerdo al artículo Log File de Wikipedia, un
archivo de log registra los eventos que ocurren
en un sistema operativo o en software que se
ejecuta en él.
Tener un sistema que nos provea de información
acerca de lo que está pasando en nuestro equipo
es de fundamental importancia, dado que
podemos entender cómo está funcionando
nuestro equipo desde diferentes puntos de vista. 

Si las aplicaciones o funciones críticas informan
cada evento en el equipo; a partir de esto,
podemos generar estadísticas para solucionar
problemas repetitivos o detectar fallas que nos
ayudarán a solucionar diferentes problemas o
criterios.

Estos mensajes que generan las aplicaciones o
un servicio de log del sistema se pueden
encontrar en el directorio /var/log.

Por ejemplo:
Muchos mensajes son reportados en el archivo
/var/log/syslog o en el /var/log/messages.
Por otro lado, si un servicio genera muchos mensajes,
probablemente estos serán escritos en un archivo
separado como lo hace el servidor Web Apache o un
servicio de correo.

```sh
ls -la /var/log      # contiene los logs principales:
drwxr-x--- 2 root adm  4096   Sep 30 18:02 /var/log/  apache2
drwxr-xr-x 2 root root 4096   Dec 4  07:43 /var/log/  apt
-rw-r--r-- 1 root root 0      May 27  2014 /var/log/  aptitude
-rw-r--r-- 1 root root 1097   May 26  2014 /var/log/  aptitude.1.gz
-rw-r--r-- 1 root root 813    Jun 5   2013 /var/log/  aptitude.2.gz
-rw-r--r-- 1 root root 492    Apr 19  2013 /var/log/  aptitude.3.gz
-rw-r----- 1 root adm  84378  Dec 9  21:53 /var/log/  auth.log
-rw-r----- 1 root adm  144929 Dec 7  08:01 /var/log/  auth.log.1
-rw-r----- 1 root adm  9712   Nov 30 08:06 /var/log/  auth.log.2.gz
-rw-r----- 1 root adm  7331   Nov 23 07:56 /var/log/  auth.log.3.gz
-rw-r----- 1 root adm  7015   Nov 16 08:08 /var/log/  auth.log.4.gz
-rw-r----- 1 root adm  31     Apr 18  2013 /var/log/  boot
drwxr-xr-x 2 root root 4096   Dec 9  08:06 /var/log/  cups
-rw-r----- 1 root adm  9503   Dec 9  21:46 /var/log/  daemon.log
# (...salida cortada...)   #############################################
```

#### Syslog

Estos mensajes se realizan mediante `un protocolo` llamado `syslog`.
En `2001` se publicó la primera `RFC al respecto`. 
Uno de sus principios fundamentales es la `simple configuración` 
tanto para la transmisión como para la recepción de mensajes.
Luego se hicieron `mejoras` al protocolo como la de
separar el contenido del mensaje de su transporte y el `soporte de cifrado`.

Este servicio `actualmente casi no se usa`.
Lo podemos encontrar  en 
versiones anteriores a Red-Hat 6, CentOS 6. 
En el caso de Debian, se encontrará en versiones anteriores a Lenny.

Cuando instalamos el paquete correspondiente,
contendrá dos utilitarios (syslogd y klogd) que
proveerán soporte para el registro de eventos del
sistema. Syslogd y klogd corren como demonios
(procesos en segundo plano) y envían los
mensajes del sistema a diferentes lugares (logs
de distintos servicios, correo, seguridad, errores,
autentificación, etc.).

#### Sysklogd

(Syslog Daemon) se lanza automáticamente al arrancar un sistema Unix,
siendo el encargado de guardar informes sobre el funcionamiento de la máquina. 

`Recibe mensajes` de las diferentes partes `del sistema` (núcleo, programas…) 
y los `envía y/o almacena` en diferentes localizaciones, tanto locales como remotas, 
siguiendo un criterio `definido en` el fichero de configuración `/etc/syslog.conf`,
donde especificamos las reglas a seguir 
para gestionar el almacenamiento de mensajes del sistema.

#### Syslog-ng y Rsyslog

**Syslog-ng**

El servicio `syslog-ng` fue creado en el año `1998`.
Algunas funcionalidades que tiene son:

● `Trabaja con cualquier clase de datos` 
que no está organizado de una manera predeterminada.
● `Recibe y envía` mensajes formateados en el lenguaje `JSON`.
● `Clasifica y organiza` los mensajes con analizadores de sintaxis incorporados.

**Rsyslog**

`Empezó en el 2004` cuando su autor principal Rainer Gerhards 
decidió escribir un potente sistema de registro de eventos 
para que pueda `competir con syslog-ng`. 
Éste fue usado por Fedora a partir del 2007, 
               por SUSE   a partir del 2009 
               por Debian a partir de su versión 5,
entre otras distribuciones que decidieron usarlo.

Fuentes y más recursos
● [ RFC 3164 - The BSD Syslog Protocol]
● [ RFC 5424 - The Syslog Protocol]
● [ RFC 5426 - Transmission of Syslog Messages over UDP]




###  LOGS - ( Herramientas )

#### logger

Con este comando podremos hacer llamadas a
syslog(3) para que el sistema pueda escribir un
log donde se le indique.
Opciones:
-p Prioridad (puede utilizarse servicio.prioridad).
-t Marca, agrega un texto para identificar el mensaje.

Ejemplo
```sh
> logger -p mail.info "Mensaje de prueba"
> tail /var/log/mail.log
Dec 9 22:43:35 debian evillarreal: Mensaje de prueba
> logger -t "marca de prueba" -p mail.info "Mensaje de prueba"
> tail /var/log/mail.log
Dec 9 22:46:47 buegsevi marca de prueba: Mensaje de prueba
```
#### systemd-cat

Este comando tiene algunas similitudes con
logger, pero es específico de systemd.
Con este comando podemos volcar la salida de
cualquier comando a un log:
systemd-cat -t kernel uname -a

```sh
[root@debian10-eit:~] $ journalctl -t kernel
-- Logs begin at Tue 2020-12-29 14:30:33 UTC, end at Tue 2020-12-29 22:24:40 UTC. --
Dec 29 22:24:40 debian10-eit kernel[652]: Linux debian10-eit 5.9.15-200.fc33.x86_64 #1
SMP Wed Dec 16 19:14:35 UTC 2020 x86_64 GNU/Linux
########################################################################
```

####  lastlog y last

Con estos comandos podremos obtener
información acerca de los intentos fallidos de
logueo de los usuarios del sistema y de las veces
que se pudieron conectar.

**Lastlog**

Muestra la última vez que se logueó cada usuario.
Ejemplo
```sh
> lastlog -u root
Username Port From Latest
root tty2 Fri Sep 19 15:20:39 -0300 2014
-u Define el usuario a consultar.
-t días Muestra solo los registros que no sean más antiguos que la cantidad de días definida.
-b días Muestra solo los registros que sean más antiguos que la cantidad de días definida.
```

**Last**

El comando last muestra las últimas veces que
un usuario ingresó en el sistema pero también
las veces que se apagó o reinició el equipo.
Indica también la versión de kernel con la que se
inició, lo cual es muy importante.

Opcion  Descripcion:
-f      `Lee otro archivo` en lugar de usar /var/log/wtmp.
-numero `Cantidad de líneas` a mostrar.
-F      `Más datos` acerca de  `login` y logout.
-w      `Más datos` acerca del `usuario` y dominios.

Ejemplo
```sh
> last
user1 pts/12 10.1.5.23 Tue Dec 9 22:51 still logged in
user1 pts/11 alm-s01-v01 Tue Dec 9 22:50 - 23:00 (00:09)
user1 pts/6 10.1.5.23 Tue Dec 9 21:52 still logged in
user1 pts/6 10.1.5.23 Mon Dec 8 13:03 - 07:54 (18:51)
user1 pts/6 10.1.5.23 Sat Dec 6 09:49 - 09:11 (23:22)
# (...salida cortada...)   #############################################
```

Si bien rsyslog registra los logins fallidos en un archivo
existen algunas herramientas que permiten visualizarlos.
En CentOS por ejemplo contamos con el comando
faillock:
```sh
> faillock
educacionit:
When Type Source Valid
2020-08-10 14:01:50 RHOST 10.0.3.1 V
2020-08-10 14:01:54 RHOST 10.0.3.1 V
root:
When Type Source Valid
```
#### Ver logins fallidos

Para eso es necesario usar una configuración en el
sistema de autenticación, a continuación mostramos de
las modificaciones que habría que realizar y el archivo
involucrado:
```sh
#%PAM-1.0
# This file is auto-generated.
# User changes will be destroyed the next time authselect is run.
auth required pam_env.so
auth required pam_faillock.so preauth silent deny=4 unlock_time=1200
auth sufficient pam_unix.so try_first_pass nullok
auth required pam_faillock.so authfail deny=4 unlock_time=1200
auth required pam_deny.so
account required pam_unix.so
account required pam_faillock.so …

password requisite pam_pwquality.so try_first_pass local_users_only retry=3 authtok_type=
password sufficient pam_unix.so try_first_pass use_authtok nullok sha512 shadow
password required pam_deny.so
session optional pam_keyinit.so revoke
session required pam_limits.so
session optional pam_systemd.so
session [success=1 default=ignore] pam_succeed_if.so service in crond quiet use_uid
session required pam_unix.so
```
…
Si queremos que quede de manera permanente hacemos
lo siguiente:
```sh
# authconfig --enablefaillock --update
```

En el caso de Debian, existe una herramienta similar llamada pam_tally2:
En este caso también habría que modificar ciertos archivos en `/etc/pam.d`, 
por ejemplo, de este modo:
```sh
> pam_tally2 --user sergio
Login Failures Latest failure From
sergio 6 08/04/20 03:37:38 10.0.3.1
Archivo /etc/pam.d/common-auth
auth required pam_tally2.so
auth [success=1 default=ignore] pam_unix.so
nullok_secure
auth requisite pam_deny.so
auth required pam_permit.so
auth optional pam_cap.so
```

Esta herramienta sirve para registrar todos los comandos
ejecutados en los logs. Lo hace mediante la carga previa
anterior a la ejecución de cualquier programa de la librería
libsnoopy.so.
Se puede instalar de este modo:


#### Snoopy

**Instalacion**
```sh
> curl -O
https://github.com/a2o/snoopy/raw/install/install/install-snoopy.sh
> chmod u=rwx,ox=rx install-snoopy.sh
> ./install-snoopy.sh stable

may 10 15:58:40 debian.educacionit.local snoopy[1160]: [uid:0 sid:1144 tty:/dev/pts/0 cwd:/root filename:/bin/ls]: ls
may 10 15:58:43 debian.educacionit.local snoopy[1161]: [uid:0 sid:1144 tty:/dev/pts/0 cwd:/root filename:/bin/journalctl]: journalctl -f
may 10 15:58:49 debian.educacionit.local snoopy[1162]: [uid:0 sid:1144 tty:/dev/pts/0 cwd:/root filename:/usr/bin/clear]: clear
may 10 15:59:21 debian.educacionit.local snoopy[1190]: [uid:0 sid:1144 tty:/dev/pts/0 cwd:/root filename:/usr/bin/vi]: vi .bashrc
may 10 15:59:27 debian.educacionit.local snoopy[1191]: [uid:0 sid:1144 tty:/dev/pts/0 cwd:/root filename:/bin/journalctl]:
```
Una vez reiniciado el sistema, podremos ver con `journalctl -f`:

```sh
> chmod 755 /lib/libsnoopy.so.0.0.0 ; LD_PRELOAD = /lib/libsnoopy.so.0.0.0 bash
En lugar de habilitarlo para todo el sistema, se puede
activar para una sesión de shell determinada:
Para deshabilitarlo, sencillamente salimos de bash:
> bash
```

Si en cambio la habilitamos globalmente y queremos revertirlo luego, 
solamente resta reiniciar.

En Debian se puede instalar desde los repositorios, l
uego se puede `habilitar/deshabilitar` con el comando `dpkg-reconfigure`.

```sh
> snoopy-disable
SNOOPY: Removing from /etc/ld.so.preload: /lib/libsnoopy.so
SNOOPY: Disabled.
SNOOPY: Hint: Your system needs to be restarted to finish snoopy cleanup.
[...]
```

**Bibliografía**

1. Wikipedia Log.
2. Linux Syslog Server and Log Management.
3. Montar un Servidor syslog en Linux con rsyslog y LogAnalyzer.
4. ¿Qué es journalctl con systemd en Linux y cómo funciona?
5. Stunnel y cómo cifrar los mensajes de log de GNU/Linux.

#### Faillog

Muestra los logueos fallidos de los usuarios.

-a Muestra todos los eventos.
-l Bloquea por un tiempo determinado el login luego de fallar.
-u Muestra información del usuario definido.

El presente contenido se deja solamente por motivos históricos.

Ejemplo:
```sh
[root@CentOS-5 init.d] $  faillog -u root
Usuario Fallos Máximo Último
root    0      0      12/31/69 21:00:00 -0300
```



### Logrotate

Erik Troan y Preston Brown son los autores de Logrotate,
una utilidad para `administrar las políticas de los logs` de tu equipo.

Logrotate es un estándar en sistemas RedHat y Debian. 
Con esta herramienta, podremos especificar todo tipo de parámetros 
a la hora de administrar nuestros logs.

Un archivo de configuración de Logrotate, 
consiste en una serie de especificaciones para los grupos de archivos de log 
que vamos a administrar.

Las opciones especificadas fuera de cada contexto de un log concreto, 
(errors, rotate, weekly…) se aplican a todos ellos, 
Pueden ser reemplazadas con una especificación concreta para un log en particular.

En nuestro sistema, la utilización de logs es algo imprescindible 
es por eso que éstos crecen constantemente 
hay que tener alguna utilidad para especificar el comportamiento.

El directorio de `configuración global` se encuentra en `/etc/logrotate.conf`;
sino, también, tenemos `otro` directorio en `/etc/logrotate.d/`,
donde podremos poner individualmente cada configuración.

Para que cada una de las c`onfiguraciones tenga efecto`, 
se programa una entrada en el crontab del sistema, 
para que corran cada determinado tiempo (`/etc/crond.daily/logrotate`).

 -d  Se utiliza para debug no hace nada, simula la rotación.
 -f  Fuerza la rotación
 -v  Nos da más información.

Ejemplo
```sh
> logrotate -d /etc/logrotate.conf
reading config file /etc/logrotate.conf
including /etc/logrotate.d
reading config file apache2
reading config file apt
reading config file aptitude
reading config file cups
reading config file dpkg
reading config file mysql-server
reading config file pm-utils
reading config file rsyslog
reading config file samba
reading config file vsftpd …

Handling 29 logs
rotating pattern: /var/log/apache2/*.log weekly (52 rotations)
empty log files are not rotated, old logs are removed
considering log /var/log/apache2/access.log
 log does not need rotating
considering log /var/log/apache2/error.log
 log does not need rotating
not running prerotate script, since no logs will be rotated
not running postrotate script, since no logs were rotated
rotating pattern: /var/log/apt/term.log monthly (12 rotations)
empty log files are not rotated, old logs are removed
considering log /var/log/apt/term.log
 log does not need rotating
```

El directorio `/etc/logrotate.d` es un lugar estándar 
para los archivos de configuración de Logrotate.
Todos los paquetes software conscientes de
logrotate (la gran mayoría) se integran con este
sistema de administración de logs en la parte de
su proceso de instalación, lo que simplifica
ampliamente la administración.

Ejemplo
```sh
# Todas las Configuraciones de log rotate
> ls /etc/logrotate.d
apache2     cups        lighttpd        ppp
apt         dirmngr     monit           vsftpd
aptitude    dpkg        mysql-server    rsyslog

# una de las configuraciónes de Ejemplo
> cat /etc/logrotate.d/vsftpd
/var/log/vsftpd.log
{
    create 640 root adm   # 640 = chmod permission 
    missingok
    notifempty
    rotate 4
    weekly
}
########################################################################
```

Opciones        Descripcion 
missingok       No se producirá ningún error si el archivo de log no existe.
notifempty      No rotar el log si éste está vacío.
sharedscripts   Los scripts de postrotate solo se ejecutarán 
                una vez que los logs viejos sean comprimidos.
delaycompress       Sirve por si algún programa está escribiendo 
                    y necesita al archivo, éste no se comprime.
postrotate/endscript    Lo que esté dentro de estas directivas, 
                        se ejecutará luego de la rotación de archivos.
compress        Comprime los archivos rotados.
daily           Rotar diariamente.
weekly          Rotar semanalmente.
monthly         Rotar mensualmente.
yearly          Rotar anualmente.

Lo que no esté definido 
se tomará del archivo de configuración global `/etc/logrotate.conf`.

#### Fail2ban

#### Crontab

https://crontab.guru/
https://ostechnix.com/a-beginners-guide-to-cron-jobs/


### PRACTICA  APACHE2

```sh

[osboxes@osboxes:~]$  ls /proc
1      14    162    19     386   73    asound         locks
10     1448  1633   194    387   739   bootconfig     mdstat
1006   1449  164    195    388   74    buddyinfo      |meminfo
108    1460  1643   2      389   743   bus            misc
11     1461  1644   20     3958  75    cgroups        modules
111    1467  1649   21     3966  752   cmdline        mounts
112    1468  1653   22     4     757   consoles       mtrr
11278  1475  1654   23     5     76    |cpuinfo        net

[osboxes@osboxes]:~$ sudo ls /proc/1 
. arch_status   cwd        mem	          patch_state   |stat
. attr	        environ    mountinfo      personality   statm
. autogroup	    |exe       mounts	      projid_map    status
. auxv		    fd	       mountstats     root	        syscall
. |cgroup       fdinfo net  sched	      task
. clear_refs    gid_map    ns             schedstat     timens_offsets
. cmdline	    io	       numa_maps      sessionid     timers
. comm		    limits     |oom_adj	      setgroups     timerslack_ns
. coredump_filter     loginuid   oom_score    smaps     uid_map
. cpu_resctrl_groups  map_files  oom_score_adj  smaps_rollup  wchan
. cpuset        maps       pagemap        stack         
# OOM = Out Of Memory
osboxes@osboxes:~$ sudo ls -las /proc/1/ |grep exe
0 lrwxrwxrwx   1 root root 0 Oct 13 21:44 exe -> /usr/lib/systemd/systemd

```

```sh
[osboxes@osboxes:~] $ ps -aux |grep firefox
osboxes  35878 16.5 17.5 3208648 353968 ?  Sl   17:22   0:09 /usr/lib/firefox/firefox -new-window
osboxes  35954  0.0  2.1 228520   42792 ?  Sl   17:22   0:00 /usr/lib/firefox/firefox -contentproc -parentBuildID 20240923135042
osboxes  35996  0.9  5.2 2450464 105320 ?  Sl   17:22   0:00 /usr/lib/firefox/firefox -contentproc -isForBrowser -prefsLen 29131

[osboxes@osboxes:~] $ service apache2 status
apache2.service - The Apache HTTP Server
Loaded: loaded (/lib/systemd/system/apache2.service; 
Active: active (running) since Tue 2023-06-27 19:58:5
Docs: https://httpd.apache.org/docs/2.4/
Process : 11375 ExecStart=/usr/sbin/apachectl start (co
Process : 13247 ExecReload=/usr/sbin/apachectl gracefu
Main PID: 11379 (apache2)

[osboxes@osboxes:~] $ ls /proc/11379 |grep exe
lrwxrwxrwx 1 root root 0 Jun 28 07:14 exe -> /usr/sbin/apache2

[osboxes@osboxes:~] $ ps -aux | grep 29
root  29  0.0  0.0  0  0?  S  Jun27 0:00 [ооm rеарег]
#  OOM reaper  mata procesos cuando la pc no tiene memoria

[osboxes@osboxes:~]$ cat /proc/uptime 
50306.80 48011.93
osboxes@osboxes:~$ uptime  # similar info to /proc/uptime 
 17:44:45 up 13:58,  1 user,  load average: 0.01, 0.04, 0.08
#################################################################################

[osboxes@osboxes:~] $ cat /proc/cpuinfo 
processor	: 0
vendor_id	: AuthenticAMD
cpu family	: 23
model		: 8
model name	: AMD Ryzen 5 2600 Six-Core Processor
#################################################################################

osboxes@osboxes:~$ cat /proc/meminfo 
MemTotal:        2011236 kB
MemFree:          329564 kB
MemAvailable:    1138600 kB
Buffers:           69968 kB
osboxes@osboxes:~$ free   # similar info to /proc/meminfo  
              total        used        free      shared  buff/cache   available
Mem:        2011236      681052      329564       13164     1000620     1138820
Swap:       9473020      277380     9195640


[osboxes@osboxes:~] $ ls /sys/
block  bus  class  dev  devices  firmware  fs  hypervisor  kernel  module  power
[osboxes@osboxes:~] $ ls /sys/block/
loop0  loop10  loop12  loop2  loop4  loop6  loop8  sda  sr0
loop1  loop11  loop13  loop3  loop5  loop7  loop9  sdb
[osboxes@osboxes:~] $ ls -l /sys/block/ |grep sd
lrwxrwxrwx 1 root root 0 Oct 13 21:44 sda -> ../devices/pci0000:00/0000:00:0d.0/ata3/host2/target2:0:0/2:0:0:0/block/sda
lrwxrwxrwx 1 root root 0 Oct 13 21:44 sdb -> ../devices/pci0000:00/0000:00:0d.0/ata4/host3/target3:0:0/3:0:0:0/block/sdb
[osboxes@osboxes:~] $ ls  /sys/bus/
ac97         dax           machinecheck  parport      sdio     workqueue
acpi         edac          mdio_bus      pci          serial   xen
auxiliary    eisa          memory        pci-epf      serio    xen-backend
cec          event_source  mipi-dsi      pci_express  snd_seq
clockevents  gpio          mmc           platform     spi
clocksource  hid           nd            pnp          usb
container    i2c           node          rapidio      virtio
cpu          isa           nvmem         scsi         vme

[root@osboxes]: cat /etc/apache2/apache2.conf
# ErrorLog: The location of the error log file.
# If you do not specify an ErrorLog directive within a <Vir tualHost>  container,
# error messages relating to that virtual host will be logged here. 
# If you *do* define an error logfile for a <VirtualHost> container, 
# that host's errors will be logged there and not here.
#
ErrorLog ${APACHE_LOG_DIR}/error.log

#
# LogLevel: Control the severity of messages logged to the error_log.
# Available values: 
#      trace8, trace1, debug, info, notice, warn, еггог, сrit, alert, emerg.
# It is also possible to to cnfigure the log level for partic ular modules, 
# e.g. "LogLevel info ssl:warn"
#
LogLevel warn

# Include module configuration:
IncludeOptional mods-enabled/*.load
#################################################################################

[root@osboxes]: cat /etc/logrotate.conf
login.defs logrotate.d/
# see "man logrotate" for details
# rotate log files weekly
weekly

# use the adm group by default, since this is the owning gr
oup
# of /var/log/syslog.
su root adm
# keep 4 weeks worth of backlogs
rotate 4

# create new (empty) log files after rotating old ones
# use date as a suffix of the rotated file
#dateext

# uncomment this if you want your log files compressed
#compress

# packages drop log rotation information into this directory
include /etc/logrotate.d

# system-specific logs may be also be configured here.
#################################################################################

[root@osboxes]: ls /etc/logrotate.d
alternatives    btmp            speech-dispatcher
apache2         gups-daemon     ubuntu-advantage-tools
apport          dpkg            ufw
apt             ppp             unattended-upgrades
bootlog         rsyslog         wtmp_


[root@osboxes]: cat /etc/logrotate.d/apache2
/var/log/apache2/*.log 
{
    daily           # rota de forma diaria
    missingok       # si no existe archivo lo crea apache
    rotate 14       # almacena ultimos 14 logs
    compress        # comprime los logs
    delaycompress   #
    notifempty      # nos avisa si esta vavio
    create 640 root adm # permisos para el archivo cuando se cree
    sharedscripts
    postrotate      # script con la logica del logrotate
        if  invoke-rc.d apache2 status > /dev/null 2 >&1;
        then \                                # revisa   el estatus  de apache
            invoke-rc.d apache2 reload > /dev/null \ 
        fi;                                   # reinicia el servicio de apache
    endscript
    prerotate
        if [ -d /etc/logrotate.d/httpd-prerotate ];  # si existe config   httpd-prerotate
        then \
            run-parts /etc/logrotate.d/httpd-prerotate; \    #  ejecutarla con run-parts
        fi; \
    endscript
}
#################################################################################

[root@osboxes]: cat /etc/logrotate.d/ufw
/var/log/ufw.log
{
    rotate 4
    weekly
    missingok
    notifempty
    compress
    delaycompress
    sharedscripts
    postrotate
        invoke-rc.d rsyslog rotate >/dev/null 2>&1 || true
    endscript
}

[root@osboxes]: ls /var/log/apache2
access.log error.log other_vhosts_access.log
access.log.1 егror.log.1
other_vhosts_access.log.1 

[root@osboxes]: ls /etc/ |grep cron
anacrontab      # otro tipo de crontab
cron.d          # rutinas personalizadas
cron.daily      # cada dia
cron.hourly     # cada hora
cron.monthly    # cada mes
crontab
cron.weekly
#################################################################################

[root@osboxes]:  cat /etc/crontab 
# /etc/crontab: system-wide crontab
# Unlike any other crontab you don't have to run the `crontab'
# command to install the new version when you edit this file
# and files in /etc/cron.d. These files also have username fields,
# that none of the other crontabs do.

SHELL=/bin/sh
# You can also override PATH, but by default, newer versions inherit it from the environment
#PATH=/usr/local/sbin:/usr/local/bin:/sbin:/bin:/usr/sbin:/usr/bin

# Example of job definition:
# .---------------- minute (0 - 59)
# |  .------------- hour (0 - 23)
# |  |  .---------- day of month (1 - 31)
# |  |  |  .------- month (1 - 12) OR jan,feb,mar,apr ...
# |  |  |  |  .---- day of week (0 - 6) (Sunday=0 or 7) OR sun,mon,tue,wed,thu,fri,sat
# |  |  |  |  |
# *  *  *  *  * user-name command to be executed
 17  *	* * *	root    cd / && run-parts --report /etc/cron.hourly
 25  6	* * *	root	test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.daily )
 47  6	* * 7	root	test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.weekly )
 52  6	1 * *	root	test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.monthly )
#################################################################################

[root@osboxes]:  service cron status
● cron.service - Regular background program processing daemon
     Loaded: loaded (/lib/systemd/system/cron.service; enabled; vendor preset: >
     Active: active (running) since Wed 2024-10-16 12:16:30 -03; 7h ago
       Docs: man:cron(8)
   Main PID: 1103 (cron)
      Tasks: 1 (limit: 18829)
     Memory: 764.0K

``` 

```sh
# comando prohibido :     ' sudo rm -fr /* '
# borra todo los archivos del systema desde la raiz
```

## CLase 8

### DESAFIO

**Objetivo**

    Obtener información de un servidor (en nuestro caso, nuestra máquina virtual) 
    para poder agregar el mismo a nuestro inventario de servidores. 
    Además, una vez obtenida la información de nuestro servidor, 
    instalaremos un servicio (a elección) y realizaremos una configuración inicial 
    tendremos que probar su funcionamiento. 
    Por último, una vez verificado el funcionamiento tendremos que revisar los logs 
    y verificar que los mismos se rotan de forma periódica y satisfactoria 
    para evitar que se Ilene la partición donde se están almacenando.

**Desafío:**

Dividiremos el desafío en 2 partes:
Obtener información de nuestro servidor y agregar una entrada a nuestro inventario de servidores
Instalar el servicio, verificar su funcionamiento, revisar los logs y revisar el logrotate

Parte 1:
La entrega de esta primera parte será un archivo creado en google sheets (Con el nombre: server-inventory). Este archivo tendrá que tener la siguiente información:
1) Hostname
2) IP (necesitará ser una IP fija)
3) Cantidad de memoria (asignada, no libre)
4) Procesador (Agregar información de cuantos nucleos tiene disponibles en caso de ser una máquina virtual)
1) Storage (Cantidad de almacenamiento asignado y particiones como así también los filesystems)
2) Sistema operativo y versión
3) Notas (información adicional del servidor, por ejemplo si es una máquina virtual y con que virtualizador fue creada, si es una notebook, si es un servidor remoto, etc).

ATENCIÓN: Toda la información obtenida y cargada en el inventario de servidores (archivo de google sheets) tendrá que ser respaldada con el comando utilizado para obtener dicha
información y documentado en el instructivo, de esta forma cualquier persona podrá seguir
su instructivo para obtener información de su sistema. En caso de usar un comando
específico de un tipo de sistema operativo, agregar la aclaración en el instructivo.


Parte 2:

contarán con la posibilidad de instalar un servicio a su gusto 
en el servidor que configuraron en el punto anterior, 
algunos ejemplos pueden ser un servidor web   (apache, nginx, etc)
                            una base de datos (mysql, mariadb, mongodb, etc)
                            un servicio de conexión remota (ssh)
                            otro servicio no mencionado
Además de documentar cada paso en el instructivo para la correcta instalación del mismo

tendrán que documentar lo siguiente:

1) el servicio instalado, se inició de forma automática al finalizar la instalación? 
(revisar el estado del servicio luego de instalario). 
En caso de que no esté iniciado, iniciarlo.

2) Verificar el funcionamiento del mismo (en caso de ser una aplicación web, 
acceder a la misma, en caso de ser una base de datos, ejecutar una query, etc)

3) Verificar si en los logs se almacena la información de nuestra prueba de funcionamiento 
(en caso de un servidor web, un log con la request, en caso de una base de datos, 
un log con la query que corrimos, en caso de un acceso remoto, 
un log con la información del usuario y la ip de donde se quiso conectar).

4) En algunos servicios, al instalario ya configura logrotate, 
verificar si logrotate ya nos creó una configuración para nuestro servicio 
y en caso contrario, crearla y verificar su funcionamiento. 
En caso de que la configuración ya exista, 
describir qué hace cada sección/parte de la configuración.


Entregable
Los entregables serán almacenados en la carpeta compartida 
que tienen en drive con el formato (<carpeta con su nombre>/<Fase>/<módulo>/archivo).


### LPI  Certification - Módulo 4

#### 110.1 Realizar tareas de administración de seguridad

Peso: 3 (importancia del 1 al 6).

Descripción:
saber como revisar la `configuración` del sistema 
para `asegurar la seguridad` del mismo de acuerdo a las políticas locales.

**Temas cubiertos de LPI en este módulo**

● `Auditar` el sistema para encontrar 
  archivos con el bit `suid/sgid` establecidos
● Establecer o cambiar la `contraseña` de usuarios 
  y la información de `expiración` de las mismas.
● Establecer `límites en el login` de usuario, procesos y `uso de memoria`.
● Uso y `configuración básica de sudo`.

**Términos y herramientas**

● find
● chage
● /etc/sudoers
● visudo
● su
● ulimit
● fuser
● who, w, last

#### 206.1: Compilar e instalar paquetes a partir de código fuente.

Peso: 2 (importancia del 1 al 6).

**Descripción:**

`compilar e instalar` un programa ejecutable  a partir de `código fuente`. 
El objetivo incluye ser capaz de `desempaquetar` un archivo de código fuente.
Este tema pertenece al nivel 2 de la certificación LPI.

**Temas cubiertos de LPI en este módulo**

● Desempaquetar código fuente usando herramientas de compresión y archivado.
● Entender lo básico de la invocación de make para compilar programas.
● Aplicar parámetros a un script configure.
● Saber dónde el código fuente se almacena de manera predeterminada.

**Términos y herramientas**

● /usr/src/
● gunzip
● gzip
● bzip2
● xz
● tar
● configure
● make
● uname
● install
● patch

### Comandos para gestionar usuarios y grupos

Introducción
Las cuentas de usuario están localizadas en el
fichero /etc/passwd y las contraseñas cifradas
de los usuarios son asignadas al archivo
/etc/shadow.
Cuando una nueva cuenta de usuario es creada
(usando el comando useradd), de manera
predeterminada toma la plantilla (opción -m)
/etc/skel para generar el entorno de trabajo
del usuario (/home/nombredeusuario).
 

####  useradd

Para generar una cuenta de usuario haremos uso
del comando useradd, siguiendo esta sintaxis:
```sh
# useradd [opciones] nombreDelUsuario
Ejemplo
# useradd -g sistemas usuario1
Si queremos crear una cuenta del sistema hacemos así:
# useradd -r backup
```
Opciones
 -b  Define la base para el home del usuario.
 -d  Define el home del usuario.
 -e  Se usa para especificar la fecha en la que expira la cuenta. 
     Debe especificarse en el siguiente formato Año-Mes-Día.
     Ejemplos: -e 20100506, -e 20081224, -e 20090214.
 -f  Número de días antes de que la contraseña expire, 
     o de que la cuenta sea deshabilitada.
 -g  El nombre del grupo o gid asignado a un nuevo usuario.
 -G  Grupo secundario al cual puede ser asignado un usuario.
     Ejemplos: -G desarrolloJava, -G ventasMedicas, -G soportePHP.
 -u  Identificador o uid que será asignado al usuario, 
     por defecto Linux asignará UID’s a partir del número 500.
 -m  Crea el home del usuario.
 -s  Intérprete de comandos SHELL que será asignado al usuario. 
     Ej.: /bin/bash

#### Comando id

El comando id sirve para ver la información de
un usuario y sus grupos, por ejemplo:
```sh
> id sergio
uid=1000(sergio) gid=1000(sergio) grupos=1000(sergio),27(sudo)
```

#### usermod

El comando usermod modifica los parámetros de acceso
asignados a una cuenta existente del sistema.
Sintaxis:
```sh
> usermod [-c comment] [-d home_dir [ -m]] nombreDelUsuario
```

Opciones
 -c  Añade o modifica el comentario, campo 5 de /etc/passwd.
 -d  Modifica el directorio de trabajo o home del usuario,
     campo 6 de /etc/passwd.
 -e  Cambia o establece la fecha de expiración de la cuenta,
     formato AAAA-MM-DD, campo 8 de /etc/shadow.
 -g  Cambia el número de grupo principal del usuario (GID), 
     campo 4 de /etc/passwd.
 -G  Establece otros grupos a los que puede pertenecer el usuario,
     separados por comas.
 -I  Cambia el login o nombre del usuario, 
     campo 1 de /etc/passwd y de /etc/shadow.
 -L  Bloquea la contraseña del usuario, 
     no permitiéndole que ingrese al sistema por ese método.
 -s  Cambia el SHELL por defecto del usuario cuando ingrese al sistema.
 -u  Cambia el UID del usuario.
 -U  Desbloquea una contraseña previamente bloqueada con la opción -L.

Si quisiéramos cambiar  el nombre de usuario de ’carita’ a ’carlita’:
seguro también cambiará el nombre del directorio de inicio o Home en /home,
pero si no fuera así, hacemos lo siguiente:
Otros cambios o modificaciones en la misma cuenta:
```sh
# usermod -l carita carlita
# usermod -d /home/carlita carlita
# usermod -c “supervisor de área” -s /bin/ksh -g 505 carlita
```
El ejemplo modifica el comentario de la cuenta, su SHELL por defecto,
que ahora será Korn SHELL, y su grupo principal de usuario 
que quedó establecido al GID 505. 
Todo esto se aplicó al usuario que, como se observa, 
debe ser el último argumento del command.

#### userdel

El comando userdel remueve un usuario del sistema.
Sintaxis:
```sh
# userdel [opción] nombreDelUsuario
```
-r  Este parámetro indica que se elimina la cuenta 
    y la carpeta de trabajo del usuario con todos sus datos.
    Si usáramos el comando userdel sin el parámetro -r ,
    solo eliminará al usuario del sistema.
-f  Elimina todos los del usuario, cuenta, directorios y archivos, 
    pero además lo hace sin importar si el usuario está 
    actualmente en el sistema trabajando.

Los caracteres admitidos para las contraseñas son los siguientes:
Sintaxis:
#### Comando passwd

El comando passwd se utiliza para cambiar contraseñas.

Cuando se emplea el comando passwd sin opciones, 
se cambia la contraseña del usuario que lo invocó. 
Primero nos exigirá la contraseña vigente 
y luego pedirá dos veces la nueva para prevenir cualquier error.

La utilización del comando passwd con los parámetros usuario 
y contraseña sólo es posible para root. 
Si se utiliza sólo el parámetro usuario al usar este comando,
entonces, root puede cambiar la contraseña para ese usuario.
```sh
# * , . ; : _ - + ! $ % & / | ? { [ ( ) ] }
# passwd [Opciones] nombreDelUsuario
```

Opciones
 -e  Esta opción forzará al usuario a cambiar su contraseña 
     en su siguiente login al sistema.
 -l  Con esta opción, el administrador del sistema
     puede inhabilitar la contraseña de algún usuario específico.
 -u  Con esta opción, el administrador revierte el efecto de la opción -l.
 -n  Mínimo número de días antes de poder cambiar
 -x  Máximo número de días de validez; luego pide cambiar.
 -f  Cambia el nombre completo del usuario.
 -s  Cambia el SHELL del usuario.

### Administración de grupos

#### Comando groupadd
Para dar de alta grupos de trabajo en el sistema usaremos
el comando groupadd, el cual deberá ser aplicado según la
siguiente sintaxis:
```sh
# groupadd [opciones] nombreDelGrupo
```
 -g  Define mediante un valor numérico el ID del grupo, 
     este número no puede ser uno negativo.
 -r  Define un grupo del sistema. Un grupo del sistema 
     es aquel que tiene un número de identidad (GID) de grupo 
     por debajo del número 500. 
     Este particular GID es utilizado por los servicios del sistema 
     como un servidor web o de correo.
 -f  Forza al sistema a crear el grupo aunque éste ya exista.
 -o  Asigna un ID existente a un grupo.

#### groupmod

El comando groupmod permite modificar el nombre o GID de un grupo.

Sintaxis:
```sh
# groupmod [-g nuevo-gid] [-n nuevoNombre] nombreDelGrupo
```
 -g  cambia el GID de un grupo existente en el sistema.
 -n  sirve para cambiar el nombre de un grupo existente por otro.

#### groupdel

El comando groupdel elimina un grupo del sistema.

Sintaxis:
```sh
# groupdel nombreDelGrupo
```

#### gpasswd

Permite administrar los grupos. Se puede utilizar para
añadir y eliminar usuarios, señalar un administrador e
indicar una contraseña para el grupo.

Sintaxis:
```sh
# gpasswd [opciones] nombreDelGrupo
```
Las contraseñas de grupo sólo son necesarias si un
usuario que no es miembro del mismo quisiera anexarse
al grupo y convertirlo en uno de sus grupos efectivos,
para ello deberá proporcionar la contraseña del grupo.

Opciones
 -R  Hace que el grupo sea reservado para miembros.
 -A  usuario,, grupo Señala como administrador de un grupo particular a un usuario del grupo.
 -M  usuario,, grupo Añade miembros a un grupo.
 -r  grupo Elimina la contraseña del grupo.
 -a  usuario,, grupo Se añade permanentemente un usuario a un grupo.
 -d  usuario,, grupo Se borra permanentemente a un usuario del grupo.
 -r  grupo Elimina la contraseña del grupo.

#### grpck
El comando grpck revisa un grupo de sistema.
Sintaxis:

#### groups
Nos dice en qué grupos está un usuario:
Comando grpck y comando groups
```sh
# grpck nombreDelGrupo # groups educacionit
educacionit : educacionit users
```

```sh

```

```sh

```





