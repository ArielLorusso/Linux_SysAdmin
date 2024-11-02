

# Clase 1 - Temario + Linux
	
 educacionit.com/bootcamp-devops-engineer:

## Carga Horaria y organisacion

6 meses 8hs semanales;

Videos clases:
    30  min : consultas y dudas
    1   Hs  : Teoria 
    1   Hs  : Practica y tareas

Material PDF y Desafios

nociones de Linux y CLI

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

## LPI - Certificacion Linux - Módulo 1

**Certificaciones de Linux**

LPI  : Lunux Profesional Institute Certifications
CNCF : Cloud Native Computing Foundation
LFCS : Linux Foundations Certified Sys Admins

https://www.lpi.org/our-certifications/summary-of-lpi-certifications/
https://learning.lpi.org/en/learning-materials/all-materials/)

Fase 1 - SysAdmin   Módulo 1 

**103.7 Buscar en texto usando expresiones regulares**

Peso: 3    ( importancia para examen LPI   del 1 al 6).

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

Peso: 2   ( importancia para examen LPI   del 1 al 6).


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

## PACKETES e intaladores

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

* PID (Identificador de Proceso): número con el que el kernel
identifica a un proceso.

# FASE 1 - Linux SysAdmin

## Clase 2 - VM + commandos + RegExp

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
https://www.sitepoint.com/learn-regex/

Expresiones regulares:

utilizados en cadenas de texto o patrones. 
Estos patrones pueden ser de dos tipos:

• Literales (texto plano).  nombres de archivo
• Metacaracteres (símbolos con un significado especial).



script : conjunto de instrucciones interpretadas por algun programa

### GREP - filtrar

GREP : global regular expression print 

```sh
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
[root@osboxes]: grep -r '^bin' /etc
```

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

# muestra lo que NO contenga la palabra "bash":
> cat /etc/passwd|grep -V bash
ariel:4x^a41$%:1000:1000:ariel,,,:/home/ariel:/bin/bash


> cat /etc/passwd |grep -v bash
daemon:4x^a41$%:1:1     :daemon:/usr/sbin:/usr/sbin/nologin
bin   :4x^a41$%:2:2     :bin   :/bin:/usr/sbin/nologin
sys   :4x^a41$%:3:3     :sys   :/dev:/usr/sbin/nologin
sync  :4x^a41$%:4:65534 :sync  :/bin:/bin/sync
```

```sh
# Buscar el patrón "bin" dentro del archivo /etc/passwd
> grep 'bin' /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/bin/sh
bin:x:2:2:bin:/bin:/bin/sh
```

```
Posicionales (position anchor)
 ^      Al inicio de la línea.
 $      Al final de la línea.
\<\>    Palabra Exacta entre \< \>     Ejemplo: \<palabra\>
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
> grep '[0-9][0-9][0-9]' prueba.txt
124Argentina
12345JMR

# Buscar todo lo que no comience con un número:
> grep '^[^0-9]' test
Villa Dalmine
Restaurador de Leyes de Argentina
JMR
Argentina
argentina
evil5

# Buscar exactamente abcd y que aparezca sólo de 2 a 4 veces:
> grep  '\<\(abcd\){2,4\}\>' prueba2.txt
abcdabcd
abcdabcdabcd
abcdabcdabcdabcd

# Buscar exactamente cualquier caracter que sea alfabetico y no c o d 

> grep  '[a-zA-Z^c]'  prueba2.txt 

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
    *        *          0 a más veces un único carácter
    \?       ?          0 o una vez la expresión regular que antecede
    \+       +          1 o más veces la expresión regular que antecede
  \{n,m\}    {n,m}      rango de ocurrencias a expresión regular que antecede. 
                               Debe identificar al menos n hosta m ocurrencias
    \|       |          una u otro. Función logica OR
\(regex\)   (regex)     grupo de expresiones regulares
```

https://www.ionos.es/digitalguide/servidores/

### MAQUINAS VIRTUALES


https://www.osboxes.org/virtualbox-images/


### SED - Stream EDitor

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
### WC - Word  Count
```sh
>echo hola como esta | wc
      1       3      15
    # lines   words  letters  
> ps -ux | wc -l
176
> ls -la /home/ariel/ | wc -l
113
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
autofs       hwrng    loop6         rtc0    tty16  tty40  tty8       ttyS30   vcsa1
block        i2c-0    loop7         sda     tty17  tty41  tty9       ttyS31   vcsa2
bsg          i2c-1    loop8         sda1    tty18  tty42  ttyprintk  ttyS4    vcsa3
btrfs-control i2c-2   loop9         sda2    tty19  tty43  ttyS0      ttyS5    vcsa4
bus          i2c-3    loop-control  sda3    tty2   tty44  ttyS1      ttyS6    vcsa5
char         i2c-4    mapper        sda4    tty20  tty45  ttyS10     ttyS7    vcsa6
console      i2c-5    mcelog        sda5    tty21  tty46  ttyS11     ttyS8    vcsa7
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

Peso: 2   ( importancia para examen LPI   del 1 al 6).

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

Peso: 3    ( importancia para examen LPI   del 1 al 6).

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



### INODO y DISCO

Un sistema de lectura/escritura no sirve de mucho si crece 
hasta el punto en que no pueda admitir nuevos ficheros.
Esto puede ocurrir si nuestro sistema de ficheros se llena 
o si se queda sin inodos libres. 

Los inodos son las estructuras de datos dentro del sistema de archivos 
que describen los archivos en el disco. 
Cada sistema de archivos contiene un `número finito` de inodos que se establecen
en el momento de creación del sistema de archivos.

los `INODOS` determinan máximo número de archivos 
que un sistema de archivos puede acomodar.

Como se crean con un número de inodos enorme, 
`rara vez` crearemos tantos archivos como para `agotar` los inodos. 
No obstante, es posible quedarse sin inodos libres 
en particiones que contengan muchos ficheros pequeños.


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
    
```sh
df [opciones]/ dev/sd[a|b|c|d] [1,2,3,4]
```

```sh
# VER AYUDA 
> df --help 
    Usage: df [OPTION]... [FILE]...
    Show information about the file system on which each FILE resides, 
    or all file systems by default.

    -a, --all               Include pseudo, duplicate, inaccessible file systems
    -B, --block-size=SIZE   Scale sizes by SIZE before printing them; 
                            .. e.g:'-BM' prints sizes in units of 1,048,576 bytes.
    -h, --human-readable    Print sizes in powers of 1024 (e.g., 1023M)
    -H, --si                Print sizes in powers of 1000 (e.g., 1.1G)
    -i, --inodes            List inode information instead of block usage
    -k                      Like --block-size=1K
    -l, --local             Limit listing to local file systems
        --no-sync           Do not invoke sync before getting usage info (default)
     --output[=FIELD_LIST]  Use the output format defined by FIELD_LIST,
                                or print all fields if FIELD_LIST is omitted.
    -P, --portability       Use the POSIX output format
        --sync              Invoke sync before getting usage info
        --total             Elide all entries insignificant to available space,
                                and produce a grand total
    -t, --type=TYPE         Limit listing to file systems of type TYPE
    -T, --print-type        Print file system type
    -x, --exclude-type=TYPE  Limit listing to file systems not of type TYPE

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
        41963556    Videos
        5010840     Desktop
        3684856     cuda_11.4.0_470.42.01_linux.run
        3054216     VirtualBox VMs
        1185372     Documents
        757396      build
        651364      snap
        647772      Downloads
        277100      go
        249084     opencv-4.x

    > du -sh * | sort -nr | grep -e'[0-9]G'|head
        41G     Videos
        4,8G    Desktop
        3,6G    cuda_11.4.0_470.42.01_linux.run
        3,0G    VirtualBox VMs
        1,2G    Documents


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
4096    ./ejemplo      # block-size=K,M,G,100,10k...(redondea hacia arriba)
0       ./ejemplo_soft
4096    ./ejemplo_hard
12288   ./  # ERROR <---  al usar "-l --block-size " DA MAL y GRANDE
            #            esto es porque -l duplica el peso de los links

> du -acl --apparent-size ./
# KB  Name 
  1  ./ejemplo       # todos los archivos aparentan un peso de  1KB
  1  ./ejemplo_soft  # este es el peso real del archivo original en disco 
  1  ./ejemplo_hard  # esto se debe a sus metadatos y overhead (espacio minimo)
  5  ./              # El directorio ya pesaba 4 KB
  5  total           # SOLO el archivo ORIGINAL ocupa espacio REAL

> du -al --apparent-size ./  # lo comprovamos con mas copias
    1  ./ejemplo
    1  ./ejemplo_soft     # tanto soft como hard no ocupan espacio
    1  ./ejemplo_hard     # Este kilobite aparetnte es del archivo original
    1  ./ejemplo_hard_2
    1  ./ejemplo_hard_3
    1  ./ejemplo_hard_4
    1  ./ejemplo_hard_5
    5  ./            # solo hay 1kb de ."/ejemplono" y 4kB de Metadata del directorio  
> rm eje* 
> du -al --block-size=1 ./   
4096    ./              # directorio = 4Kb
> du -al --apparent-size ./
   4    ./              # directorio = 4Kb

# Baobab_Disk_analizer  &  "ls -las"  muetran 4KB para "ejemplo"
# Esto no es correcto y el tamanio   REAL es  1KB

> rm ./ejemplo ./ejemplo_soft  ./ejemplo_hard 
> du -acl  --block-size=1 
4096    .
4096    total   # el directorio vacio pesa 4 kb 

> du /home/ariel/Desktop/ -ab --max-depth=2
5       /home/ariel/Desktop/GO/.gitignore
1777760 /home/ariel/Desktop/GO/test
5580021 /home/ariel/Desktop/GO
8370    /home/ariel/Desktop/city.jpg

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

Peso: 2  ( importancia para examen LPI   del 1 al 6).

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

Peso: 4   ( importancia para examen LPI   del 1 al 6).

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

## Clase 7 - Devices + Modulos + Logs

Repaso de sistemas de destion de servicios 
https://architecnologia.es/lpic-1-101-systemd-sysv


Como se cual usa mi sistema ? 
https://unix.stackexchange.com/questions/196166/how-to-find-out-if-a-system-uses-sysv-upstart-or-systemd-initsystem

```
/usr/lib/systemd    tells you you're on a systemd based system.
/usr/share/upstart  tells you that you're probably on an Upstart-based system.
/etc/init.d         tells you the box has SysV init in its history
```

```sh
# verificar sistema de arranque de mi linux
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


### HARDWARE

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
#   device  device_name   <----------------- single tab
#       subvendor subdevice  subsystem_name <-- two tabs

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

Para que cada una de las `configuraciones tenga efecto`, 
se programa una entrada en el crontab del sistema, 
para que corran cada determinado tiempo (`/etc/crond.daily/logrotate`).

Sintaxis :

logrotate [Option] /etc/logrotate.conf

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

### CRON + ANACRON  ( Rutinas )

Ambos son procesos de automatisacion  


CRON : Es un Proceso que corre y ejecuta comandos 
ejecuta `trabajos de rutina  ( jobs )` pasada la hora/fecha configurada.
estos trabajos se realizaran periodicamente.

ANACRON : En caso de que el sistema haya estado apagado 
Anacron revisa los trabajos perdidos mientras el sistema estubo apagado


#### Comparacion : CRON vs ANACRON


https://rm-rf.es/cron-o-anacron-%C2%BFque-elegir/

```js
CRON        Ejecuta tarea a cierta hora si el sistemaesta encendido
ANACRON     Garantiza la ejecucion aunque sistema no estaba encendido 

CRON        Un crontab x usuario y varios archivos de cofig `(crontab)`
ANACRON     Un unico archivo de config

CRON        Corre de fondo como `servicio`
ANACRON     Corre a travez de llamadas en `Aranque del sistema`


/bin/crontab       `command` use by most users to `edit` personal crontab files
/usr/bin/crontab   symbolic `link` to /bin/crontab, provides an alternative path

/usr/sbin/anacron  `daemon` that runs periodic jobs on the system
/usr/sbin/cron     `daemon` for scheduling & running jobs defined in crontab files.

/etc/crontab        `config file` system-wide confug para CRON 
/etc/anacrontab     `config file` para el daemon ANACRON
```


https://ostechnix.com/a-beginners-guide-to-cron-jobs/

#### CRON Sintaxis :

```sh
Minute(0-59) Hour(0-24) Day_of_month(1-31) \
 Month(1-12) Day_of_week(0-6)   Command_to_execute
```

https://crontab.guru/

#### Atajos y Valores :

```sh
*	any value
,	value list separator
-	range of values
/	step values
@yearly	    (non-standard)
@annually	(non-standard)
@monthly	(non-standard)
@weekly	    (non-standard)
@daily	    (non-standard)
@hourly	    (non-standard)
@reboot	    (non-standard)
```
#### Anacron 

https://opensource.com/article/21/2/linux-automation

in this example we keep things simple, 
so the task this article automates is the `creation of a file` called hello 
in `the /tmp` directory:

```sh
#!/bin/sh
touch /tmp/hello
```
Verify which cron system your Linux distribution provides. 
If it's anything other than cronie, 
you can probably install cronie from your distro's software repository

**Cron jobs**

```sh
> which anacron
/usr/sbin/anacron
```
we can place any script to run regularly into `~/.local/etc/cron.daily `directory. 
```sh
 mkdir -p ~/.local/etc/cron.daily ~/.var/spool/anacron
```

To configure anacron to run your cron jobs, 
create a configuration file at /.local/etc/anacrontab:

```sh
$ cp example ~/.local/etc/cron.daily
$ chmod +x ~/.local/etc/cron.daily/example
```


```sh
> cat /.local/etc/anacrontab:
    SHELL=/bin/sh
    PATH=/sbin:/bin:/usr/sbin:/usr/bin
    1  0  cron.mine    run-parts /home/tux/.local/etc/cron.daily/
```
**Adding anacron to .profile**

Finally, you must ensure that anacron runs with your local configuration.
Because you're running anacron as a regular user and not as the root user, 
you must direct it to your local configurations :

    The anacrontab file telling anacron what to do, 
    And the spool directory helping anacron keep track of 
    how many days it's been since each job was last executed

```sh
anacron -T -t ~/.local/etc/anacrontab   -S /home/tux/.var/spool/anacron

```

**Testing Our cron job**

We can technically test this without rebooting, 
but it makes the most sense to `reboot` ,
because that's what this is `designed to handle`. 

interrupted and irregular login sessions. 
Take a moment to reboot your computer, log in, 
and then look for the test file:

```sh
>ls /tmp/hello
/tmp/hello
```
Assuming the file exists, 
your example script has executed successfully. 
You can now remove the test options from ~/.profile, 
leaving this as your final configuration:

```sh
anacron -t /home/tux/.local/etc/anacrontab  -S /home/tux/.var/spool/anacron
```

**To add a new interval:**

1. Add a directory to ~/.local/etc (for instance, cron.weekly).

2. Add a line to ~/.local/etc/anacrontab to run scripts in the new directory. 
   For a weekly interval, the configuration would be:
```sh
7 0 cron.mine run-parts /home/tux/.local/etc/cron.weekly/
```
(  with the 0 value optionally being some number of minutes 
       to politely delay the start of the script      ).

3. Place your scripts in the cron.weekly directory.



**Archivos**

A continuacion buscamos todos los archivos cron y anacron

```sh
>type cron 
cron is     /usr/sbin/cron
>type anacron 
cron is     /usr/sbin/cron
>type crontab
crontab is  /usr/bin/crontab


> ls -ap /etc |grep cron
anacrontab   crontab        cron.d/
cron.daily/  cron.hourly/   cron.monthly/    cron.weekly/

>ls -ap /etc/cron*
    /etc/crontab

    /etc/cron.d:
    ./  ../  anacron  e2scrub_all  .placeholder  zfsutils-linux

    /etc/cron.daily:
    ./        apt-compat     cracklib-runtime  google-chrome  microsoft-edge-dev 
    ../       aptitude       dpkg              logrotate      ntp
    0anacron  brave-browser  geogebra          man-db         .placeholder   plocate

    /etc/cron.hourly:
    ./  ../  .placeholder

    /etc/cron.monthly:
    ./  ../  0anacron  .placeholder

    /etc/cron.weekly:
    ./  ../  0anacron  man-db  .placeholder


# lets find out how many cron files we find in /etc 
> sudo ls -p /etc/* | grep -v -e'/' |grep -e'cron' | sort | uniq -c
# matchhes  Filename:
      3     0anacron
      3     anacron
      3     cron
      4     S01anacron
      4     S01cron         

>sudo ls -ap /var/spool/* |grep cron
    /var/spool/anacron/:
        cron.daily
        cron.monthly
        cron.weekly
    
    /var/spool/cron/:
        crontabs/       # empty directory

```
**ejemplo**

```sh
>crontab -e
#  Ariel Test command
#     Finf Process :             ps -aux |grep -e'\<yes you\>'
#     kill Process :   kill -9 $(ps -aux |grep -e'\<yes you\>' | awk 'NR==1 { print $2; }')
08 20 * * * yes you
```



### PRACTICA - APACHE2 y CRONTAB

#### /proc

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
. arch_status   cwd        mem            patch_state   |stat
. attr          environ    mountinfo      personality   statm
. autogroup     |exe       mounts         projid_map    status
. auxv          fd         mountstats     root          syscall
. |cgroup       fdinfo net  sched         task
. clear_refs    gid_map    ns             schedstat     timens_offsets
. cmdline       io         numa_maps      sessionid     timers
. comm          limits     |oom_adj       setgroups     timerslack_ns
. coredump_filter     loginuid   oom_score    smaps     uid_map
. cpu_resctrl_groups  map_files  oom_score_adj  smaps_rollup  wchan
. cpuset        maps       pagemap        stack         
# OOM = Out Of Memory
osboxes@osboxes:~$ sudo ls -las /proc/1/ |grep exe
0 lrwxrwxrwx   1 root root 0 Oct 13 21:44 exe -> /usr/lib/systemd/systemd
```

#### service
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
```

#### apache - /proc
```sh
[osboxes@osboxes:~] $ ls /proc/11379 |grep exe
lrwxrwxrwx 1 root root 0 Jun 28 07:14 exe -> /usr/sbin/apache2

[osboxes@osboxes:~] $ ps -aux | grep 29
root  29  0.0  0.0  0  0?  S  Jun27 0:00 [ооm rеарег]
#  OOM reaper  mata procesos cuando la pc no tiene memoria

[osboxes@osboxes:~]$ cat /proc/uptime 
50306.80 48011.93
[osboxes@osboxes:~]$ uptime   # similar info to /proc/uptime 
 17:44:45 up 13:58,  1 user,  load average: 0.01, 0.04, 0.08
#################################################################################
```
#### /proc/ HW info
```sh
[osboxes@osboxes:~] $ cat /proc/cpuinfo 
processor   : 0
vendor_id   : AuthenticAMD
cpu family  : 23                 model  : 8
model name  : AMD Ryzen 5 2600 Six-Core Processor
#################################################################################
[osboxes@osboxes:~ ]$ cat /proc/meminfo 
MemTotal:        2011236 kB
MemFree:          329564 kB
MemAvailable:    1138600 kB
Buffers:           69968 kB
[osboxes@osboxes:~] $ free   # similar info to /proc/meminfo  
              total        used        free      shared  buff/cache   available
Mem:        2011236      681052      329564       13164     1000620     1138820
Swap:       9473020      277380     9195640
```
#### /sys/ -  HW info
```sh
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
```
#### apache - /etc  config
```sh
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
```
#### apache - logrotate
```sh
[root@osboxes]: cat /etc/logrotate.conf
login.defs logrotate.d/
# see "man logrotate" for details
# rotate log files weekly
weekly

# use the adm group by default, since this is the owning group
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
bootlog         rsyslog         wtmp


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
        if [ -d /etc/logrotate.d/httpd-prerotate ];  # si existe config  httpd-prerotate
        then \
            run-parts /etc/logrotate.d/httpd-prerotate; \  #  ejecutarla con run-parts
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
```
#### apache - crontab 
```
[root@osboxes]: ls /etc/ |grep cron
anacrontab      # otro tipo de crontab
cron.d          # rutinas personalizadas
cron.daily      # cada dia
cron.hourly     # cada hora
cron.monthly    # cada mes
crontab
cron.weekly
#################################################################################
```
 #### crontab
```sh 
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
 17  *  * * *   root    cd / && run-parts --report /etc/cron.hourly
 25  6  * * *   root    test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.daily )
 47  6  * * 7   root    test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.weekly )
 52  6  1 * *   root    test -x /usr/sbin/anacron || ( cd / && run-parts --report /etc/cron.monthly )
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
#### Destruir la pc
```sh
# comando prohibido :     ' sudo rm -fr /* '
# borra todo los archivos del sistema desde la raiz
```

## CLase 8 - SysAdmin Security  Passwd

### DESAFIO 3

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

**Parte 1**:

La entrega de esta primera parte será un archivo creado en google sheets (
Con el nombre: server-inventory). Este archivo tendrá que tener la siguiente información:

1) Hostname
2) IP (necesitará ser una IP fija)
3) Cantidad de memoria (asignada, no libre)
4) Procesador (Agregar información de cuantos nucleos tiene disponibles si es una máquina virtual)
1) Storage (Cantidad de almacenamiento asignado y particiones como así también los filesystems)
2) Sistema operativo y versión
3) Notas (información adicional del servidor, por ejemplo si es una máquina virtual 
   y con que virtualizador fue creada, si es una notebook, si es un servidor remoto, etc).

ATENCIÓN: Toda la información obtenida y cargada en el inventario de servidores 
(archivo de google sheets) tendrá que ser respaldada con el comando utilizado para obtener dicha
información y documentado en el instructivo, de esta forma cualquier persona podrá seguir
su instructivo para obtener información de su sistema. En caso de usar un comando
específico de un tipo de sistema operativo, agregar la aclaración en el instructivo.


**Parte 2**:

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

1) Verificar el funcionamiento del mismo (en caso de ser una aplicación web, 
acceder a la misma, en caso de ser una base de datos, ejecutar una query, etc)

1) Verificar si en los logs se almacena la información de nuestra prueba de funcionamiento 
(en caso de un servidor web, un log con la request, en caso de una base de datos, 
un log con la query que corrimos, en caso de un acceso remoto, 
un log con la información del usuario y la ip de donde se quiso conectar).

1) En algunos servicios, al instalario ya configura logrotate, 
verificar si logrotate ya nos creó una configuración para nuestro servicio 
y en caso contrario, crearla y verificar su funcionamiento. 
En caso de que la configuración ya exista, 
describir qué hace cada sección/parte de la configuración.


Entregable
Los entregables serán almacenados en la carpeta compartida 
que tienen en drive con el formato (`<carpeta con su nombre>/<Fase>/<módulo>`/archivo).


### LPI  Certification - Módulo 4

#### 110.1 Treas de admin de seguridad

Peso: 3   ( importancia para examen LPI   del 1 al 6).

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

Peso: 2   ( importancia para examen LPI   del 1 al 6).

**Descripción:**

`compilar e instalar` un programa ejecutable  a partir de `código fuente`. 
El objetivo incluye ser capaz de `desempaquetar` un archivo de código fuente.
Este tema pertenece al nivel 2 de la certificación LPI.

**Temas cubiertos de LPI en este módulo**

● Desempaquetar código fuente usando herramientas de compresión y archivado.
● Entender lo básico de la invocación de` make `para `compilar programas`.
● Aplicar parámetros a un `script configure`.
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

### gestion USUARIOS 

**Introducción**

Las `cuentas` de usuario están localizadas en el `fichero /etc/passwd`  y 
las `contraseñas cifradas` de los usuarios estan en el `archivo /etc/shadow`.
Cuando una nueva cuenta de usuario es creada (usando el comando useradd),
de manera predeterminada `toma la plantilla` (opción -m) ` /etc/skel `
para generar el entorno de trabajo del usuario (`/home/nombredeusuario`).
 
#### Least Privilege Principle

El administrador de un sistema deve asegurar que 
cada usuario tenega el `minimo posible de privilegios`,
los justos y necesarios `para realizar sus tareas`
brindar privilegios de mas vulnerabilidades al sistema
en caso de que algun usuaruio sea hackeado o `robem su contraseña`

 ● Limitar permisos de ejecucion y escritura
 ● permitir solo comandos especificos
 ● Forzar usuarios a cambios de contraseña regularmente

####  useradd

Para `generar` una cuenta de usuario nueva , 
siguiendo esta sintaxis:

```sh
 useradd [opciones] nombreDelUsuario
```
 Ejemplo

```sh
 useradd -g sistemas usuario1
```
Si queremos crear una cuenta del sistema hacemos así:
```sh
 useradd -r backup
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

Al crear el usuario se crea su directorio    /home/user_name
dentro de este se crean binarios del usuario /home/user_name/bin
donde hallaremos la shell de ese usuario y comandos

```sh
[root@osboxes]: / $  ls /home.
bin     cdrom       etc     lib     lib64   lost+found  mnt     proc 
run     sys         usr     boot    dev     home        lib32   libx32
media   opt         root    snap    sbin    srv         tmp     var

[osboxes@osboxes:~ ]$ cat /etc/passwd
# CONTRASENAS se guardan encriptadas 
# User name : encript_pass : UID : GID : GECOS name : home_dir : logi shell
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
 #  (... salida cortada...)  ################################
                             # nologin = usados por el sistema
[osboxes@osboxes:~] $ cat /etc/passwd |grep osbo
osboxes:x:1000:1000:osboxes.org,,,:/home/osboxes:/bin/bash

> cat /etc/passwd 
daemon:4x^a41$%:1:1:daemon:/usr/sbin:/bin/sh
bin:4x^a41$%:2:2:bin:/bin:/bin/sh
sync:4x^a41$%:4:65534:sync:/bin:/bin/sync
nvidia-persistenced:x:129:139:NVIDIA Persistence Daemon,,,:/nonexistent:/usr/sbin/nologin
ariel:4x^a41$%:1000:1000:ariel,,,:/home/ariel:/bin/bash
# Podemos verificar que el UID y GID es correcto con commando id
> id 
uid=1000(ariel) gid=1000(ariel) groups=1000(ariel),4(adm),24(cdrom),27(sudo),30(dip)
```

https://www.ibm.com/docs/en/aix/7.1?topic=passwords-using-etcpasswd-file




#### id

El comando id sirve para ver la información de
un usuario y sus grupos, por ejemplo:

```sh
> id sergio
uid=1000(sergio) gid=1000(sergio) grupos=1000(sergio),27(sudo)
```

#### usermod

modifica los parámetros de acceso asignados a una cuenta existente del sistema.

Sintaxis:
```sh
 usermod [-c comment] [-d home_dir [ -m]]  [ nombreDelUsuario]
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
 usermod -l carita carlita              # cambiar nombre de usuario
 usermod -d /home/carlita carlita       # cambiar nombre del directorio inicio
 usermod -c “supervisor de área” -s /bin/ksh -g 505 carlita
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
 userdel [opción] nombreDelUsuario
```
-r  Este parámetro indica que se elimina la cuenta 
    y la carpeta de trabajo del usuario con todos sus datos.
    Si usáramos el comando userdel sin el parámetro -r ,
    solo eliminará al usuario del sistema.
-f  Elimina todos los del usuario, cuenta, directorios y archivos, 
    pero además lo hace sin importar si el usuario está 
    actualmente en el sistema trabajando.


#### passwd - Forzar r actualizar contraseñas

El comando passwd se utiliza para cambiar contraseñas.

Cuando se emplea el comando passwd sin opciones, 
se cambia la contraseña del usuario que lo invocó. 
Primero nos exigirá la contraseña vigente 
y luego pedirá dos veces la nueva para prevenir cualquier error.

La utilización del comando passwd con los parámetros usuario 
y contraseña sólo es posible para root.

Si se utiliza sólo el parámetro usuario al usar este comando,
entonces, root puede cambiar la contraseña para ese usuario.
 
Los caracteres admitidos para las contraseñas son los siguientes 
`   * , . ; : _ - + ! $ % & / | ? { [ ( ) ] }   `
 
Sintaxis:
```sh
passwd [Opciones] nombreDelUsuario
```

Opciones:
 -e  Esta opción forzará al usuario a cambiar su contraseña en su siguiente login al sistema.
 -l  Con esta opción, el administrador del sistema
     puede inhabilitar la contraseña de algún usuario específico.
 -u  Con esta opción, el administrador revierte el efecto de la opción -l.
 -n  Mínimo número de días antes de poder cambiar
 -x  Máximo número de días de validez; luego pide cambiar.
 -f  Cambia el nombre completo del usuario.
 -s  Cambia el SHELL del usuario.

### gestion GRUPOS

#### groupadd

Para crear grupos de trabajo en el sistema 
el cual deberá ser aplicado según la siguiente sintaxis:

```sh
groupadd [opciones] nombreDelGrupo
```
    -g  Define mediante un valor numérico el ID del grupo, 
        este número no puede ser uno negativo.
    -r  Define un `grupo del sistema`. Un grupo del sistema  es aquel que 
        tiene un número de `identidad (GID)` de grupo `por debajo` del número `500`. 
        Este particular GID es utilizado por los servicios del sistema 
        como un servidor web o de correo.
    -f  Forza al sistema a crear el grupo aunque éste ya exista.
    -o  Asigna un ID existente a un grupo.

#### groupmod

El comando groupmod permite modificar el nombre o GID de un grupo.

Sintaxis:

```sh
groupmod [-g nuevo-gid] [-n nuevoNombre] nombreDelGrupo
```
 -g  cambia el GID de un grupo existente en el sistema.
 -n  sirve para cambiar el nombre de un grupo existente por otro.

#### groupdel

El comando groupdel elimina un grupo del sistema.

Sintaxis:
```sh
groupdel nombreDelGrupo
```

#### gpasswd

Permite administrar los grupos. Se puede utilizar para
añadir y eliminar usuarios, señalar un administrador e
indicar una contraseña para el grupo.

Sintaxis:
```sh
 gpasswd [opciones] nombreDelGrupo
```
Las contraseñas de grupo sólo son necesarias si un
usuario que no es miembro del mismo quisiera anexarse
al grupo y convertirlo en uno de sus grupos efectivos,
para ello deberá proporcionar la contraseña del grupo.

Opciones
```sh
  -R  Hace que el grupo sea reservado para miembros.
  -A  usuario,, grupo Señala como administrador de un grupo particular a un usuario del grupo.
  -M  usuario,, grupo Añade miembros a un grupo.
  -r  grupo Elimina la contraseña del grupo.
  -a  usuario,, grupo Se añade permanentemente un usuario a un grupo.
  -d  usuario,, grupo Se borra permanentemente a un usuario del grupo.
  -r  grupo Elimina la contraseña del grupo.
```
#### grpck
El comando grpck revisa un grupo de sistema.
Sintaxis:

#### groups
Nos dice en qué grupos está un usuario:

####  grpck  y  groups
```sh
> grpck  nombreDelGrupo     # revisar el  grupo 
> groups educacionit        # revisar los grupos del usuario 
educacionit : educacionit users
```

### gestion PERMISOS

#### chmod

`Change mode` nos permite editar los permisos de directorios y archivos

Sintaxis :
```sh
chmod [options] [files/directores]
```
```py
    UGOA         |   RWX
=================|=============
  u = User       |  r =  Read
  g = Group      |  w =  Write
  o = Others     |  x = eXecute
  a = All = ugo  |
```
se puede setear con `3 numeros` para los 3 tipos
`octal '0-7'` que representados en binario `7 = 111 = rwx ` 

```sh
> chmod ugo=- /home/ariel/Public/
> ls -l /home/ariel/ |grep Public
d---------  2 ariel ariel       4096 Oct 17 15:36 Public

> sudo chmod ug=+rx /home/ariel/Public/
> ls -l /home/ariel/ |grep Public
dr-xr-x---  2 ariel ariel       4096 Oct 17 15:36 Public

> $ sudo chmod 755 /home/ariel/Public/
> $ ls -l /home/ariel/ |grep Public
drwxr-xr-x  2 ariel ariel       4096 Oct 17 15:36 Public

# 755 = Permite al resto usar pero no modificar
# 777 = anarqia ! cualquier cosa es permitida

```

#### chown

#### ACL - Permisos espesificos

Access Control List

https://juncotic.com/acl-access-control-lists-y-los-permisos-en-gnu-linux/


Las ACL son representaciones de permisos para elementos del sistema de archivos,
que extienden los permisos nativos POSIX.1 del sistema. 

los permisos nativos también tienen su representación en ACL cuando éstas están activadas,
los permisos nativos son representados por ACL’s, y además, podemos agregar ACL’s adicionales
para otorgar permisos más granularizados a otras entidades del sistema de archivos.

```py
Tipo de entrada  | Etiqueta de permisos |   Forma en text
=================|======================|=============================
Owner (dueño) *  |   ACL_USER_OBJ       | user::rwx ó u::rwx
Named user       |   ACL_USER           | user:name:rwx ó u:name:rwx
Owning group  *  |   ACL_GROUP_OBJ      | group::rwx ó g::rwx
Named group      |   ACL_GROUP          | group:name:rwx ó g:name:rwx
Mask (máscara)   |   ACL_MASK           | mask::rwx ó m::rwx
Others (otros)   |   ACL_OTHER          | other::rwx ó o::rwx
```

**ACL: requisitos**

● Que las ACL’s estén soportadas en los módulos de sistemas de archivos en el kernel Linux.
● Que el sistema de archivos sobre el que se vayan a implementar tenga activada la opción acl.
● Que se encuentren instaladas las utilidades para gestionar las ACL’s.

**Soporte de ACL en el núcleo Linux**

Para verificar si las ACL están soportadas por nuestro kernel tenemos dos formas.

● Si existe el archivo de configuración que se utilizó 
para compilar el núcleo en nuestra distribución, 
en general se encontrará dentro de /boot, y su nombre será 
config-<version del nucleo Linux activo>. 

En definitiva podríamos utilizar el siguiente comando para verificarlo:

```sh
[ ariel-All-Series ] $  grep ACL  /boot/config-$(uname -r)
CONFIG_XILINX_EMACLITE=m
CONFIG_EXT4_FS_POSIX_ACL=y
# (...salida recortada ... )  ###############################
# $(uname -r) = config-5.15.0-79-generic = nuestra version de kernell
```
●  Si no disponemos de este archivo de configuración, 
podríamos verificar si existe el archivo /proc/config.gz. 
Este archivo contiene las configuraciones utilizadas por el kernel 
que está en ejecución en este momento
```sh
[ ariel-All-Series ] $ grep ACL /proc/config.gz
grep: /proc/config.gz: No such file or directory
```

**Instalación de las utilidades**

Si ya verificamos que el kernel tiene soporte para ACL, 
no quedará más que instalar las utilidades necesarias, 
en general, incluidas en el paquete acl del repositorio de la distribución:
```sh
# Debian:
sudo apt install acl
# Arch Linux
sudo pacman -S acl
```

**Otorgando permisos a usuarios y grupos**

Supongamos que el usuario uaa necesita acceso 
de lectura y escritura al archivo archivo.txt. 

Como comentamos arriba, no podríamos darle estos permisos 
al usuario sin asignarlo como dueño, o cambiar el grupo del archivo.

Con ACL podríamos otorgar estos permisos utilizando setfacl 
y el modificador -m o --modify de esta manera:

```sh
setfacl -m u:uaa:rw- archivo.txt
```

El dueño del archivo (o el root) podrán setear estos permisos.
Ahora la ACL del archivo se verá como la siguiente imagen, 
y el usuario uaa podrá modificarlo. 
Se aprecia también una entrada para la máscara, o mask.
```sh
diego@cryptos: $  setfacl mutuaa:rw- archivo.txt
diego@cryptos: $  getfacl archivo.txt
#file: archivo.txt
#owner: diego
#group: users
user::rw-
user:uaa: rw-
group::r--
mask::rw-
other::r--
```
Lo mismo podría aplicarse a un directorio.

La sintaxis de setfacl especifica los permisos para usuarios o grupos 
utilizando la siguiente nomenclatura:

```sh
    u:named_user:permission
    g:named_group:permission
```

Y se pueden otorgar varios permisos en la misma línea 
separando los mismos por coma, por ejemplo:

(los guiones - pueden omitirse, los uso para mantener claridad en los permisos).

```sh
setfacl -m u:usuario1:rw-,u:usuario2:r--,g:grupo1:r-- archivo.txt
```

En el caso de que el destino sea un directorio 
y quisiéramos aplicar la ACL a todos los elementos interiores de manera recursiva,
podemos utilizar el modificador -R:

```sh
 setfacl -Rm u:usuario1:rw- directorio/
```
#### chmod  SUID, SGID & StickyBit 


https://www.redhat.com/en/blog/suid-sgid-sticky-bit

**user + s (pecial)**

SUID, the special permission for the user access level has a single function:
A file with SUID always executes as the user who owns the file,
regardless of the user passing the command.
If the file owner doesn't have execute permissions, 
then use an uppercase S here.

Now, to see this in a practical light, 
let's look at the /usr/bin/passwd command. 
This command, by default, has the SUID permission set:
```sh
[tcarrigan@server ~]$ ls -l /usr/bin/passwd 
-rwsr-xr-x. 1 root root 33544 Dec 13  2019 /usr/bin/passwd
```
Note the s where x would usually indicate execute permissions for the user.

**group + s (pecial)**

Commonly noted as SGID, this special permission has a couple of functions:

If set on a file, it allows the file to be executed as 
the group that owns the file (similar to SUID)
If set on a directory, any files created in the directory 
will have their group ownership set to that of the directory owner

```sh
[tcarrigan@server article_submissions]$ ls -l 
total 0
drwxrws---. 2 tcarrigan tcarrigan  69 Apr  7 11:31 my_articles
```
This permission set is noted by a lowercase s 
where the x would normally indicate execute privileges for the group.
It is also especially useful for directories 
that are often used in collaborative efforts between members of a group. 
Any member of the group can access any new file. 
This applies to the execution of files, as well. 
SGID is very powerful when utilized properly.

for SUID, if the owning group does not have execute permissions, 
then an uppercase S is used.

#### Atributos de archivos
https://www.techtarget.com/searchdatacenter/tip/Working-with-Linux-file-system-attributes
https://linuxopsys.com/show-file-attributes-in-linux

Attributes in Linux
Some filesystems support additional attributes 
(other than those described in the preceding sections). 

In particular, some Linux-native filesystems 
support several attributes that you can adjust with the chattr command. 

**The  Attributes:**

    a - append only
    c - compressed
    d - no dump
    e - extent format
    i - immutable
    j - data journaling
    s - secure deletion
    t - no tail-merging
    u - undeletable
    A - no atime updates
    D - synchronous directory updates
    S - synchronous updates
    T - top of directory hierarchy

**Definitions**     The detailed meaning  ( according to the manual page )

a - append only: this attribute allows a file to be added to, but not to be removed.
    It prevents accidental or malicious changes to files that record data, log etc...
c - compressed: it causes the kernel to compress data written to the file automatically 
    and uncompress it when it’s read back.
d - no dump: it makes sure the file is not backed up in backups where the dump utility is used
e - extent format: it indicates that the file is using extents for mapping the blocks on disk.
i - immutable:  it makes a file immutable,  beyond simply disabling write access to the file. 
    The file can’t be deleted, links to it can’t be created, and the file can’t be renamed.
j - data journaling: it ensures that on an Ext3 file system the file is first written to the journal
    and only after that to the data blocks on the hard disk.
s - secure deletion: it makes sure that recovery of a file is not possible after it has been deleted.
t - no tail-merging: Tail-merging is a process in which small data pieces 
    at a file’s end that don’t fill a complete block are merged with similar pieces of data
    from other files.
u - undeletable: When a file is deleted, its contents are saved which allows a utility 
    to be developed that works with that information to salvage deleted files.
A - no atime updates: Linux won’t update the access time stamp when you access a file.
D - synchronous directory updates: it makes sure changes to files are written to disk immediately,
    and not to cache first.
S - synchronous updates: the changes on a file are written synchronously on the disk.
T - and top of directory hierarchy: A directory will be deemed to be the top of directory hierarchies
 for the purposes of the Orlov block allocator.

##### lsattr

To list attribute of files and sub-directory of the current directory

    lsattr [oprions] [ files...  ]

```sh
> lsattr  ./
 -----a-----------e- ./file1
 ----i------------e- ./hello_dir
 -----------------e- ./usrcopy
```
##### chattr

To change attribute of files and sub-directory of the current directory

    lsattr [oprions] [ files...  ]

```sh
>chattr +i  ./file1
```

### Políticas de CONTRASEñAS y cuentas

Introducción
se realizarán tareas básicas para poder aplicar una `seguridad básica` 
y mínima al control de los usuarios, viendo temas como seguridad en claves,
aplicación y creación reglas para ejecución de `comandos administrativos`,
control de los recursos del sistema y auditar `permisos especiales`.

Seguridad en el equipo
La seguridad en el equipo es muy importante, 
no importa lo pequeña que parezca la tarea a `securizar`, 
lo importante es saber los métodos y aplicarlos según corresponda.



#### chage

Se usa para listar o cambiar el tiempo en el que
expira una contraseña de usuario.

Sintaxis:
```sh
 chage [opciones] nombreDelUsuario
```

Opciones
 -d días    cuenta el `número de días` (desde 01-01-1970) transcurridos 
            desde que `cambió la contraseña` por última vez. Se puede usar /MM/DD/YY
 -E fecha   Modifica la fecha en que la cuenta del usuario `Expira` y será bloqueada.
            Se puede usar /MM/DD/YY
 -I días    Modifica cuántos días puede `permanecer` una cuenta coon  
            con una contraseña expirada (`Iinactiva`) antes de ser bloqueada.
 -M días    Modifica el `Máximo de días` durante los que es válida una contraseña
            Pasados los`días, el usuario debe modificarla.
 -m días    Modifica el `mínimo de días` entre el cambio de una contraseña 
            Evita que el usuario cambie de clave reiteradas veces en el día.
 -W días    Modifica cuantos días que se avisará (`Warning`) al usuari
            antes de `cambiar la contraseña`.
 -l usuario Muestra la información del usuario especificado.

**Ejemplos** 

Primero veamos la configuracion luego cambiaremos cada uno de los ítems:

```sh
[root@oc6127656113 ~] chage -l matias
Last password change    : Nov 26, 2011
Password expires        : Feb 24, 2012
Password inactive       : Mar 02, 2012
Account expires         : never
Minimum number of days between password change    : 5
Maximum number of days between password change    : 90
Number of days of warning before password expires : 7
```

cambiamos cada uno de sus parámetros:

```sh
[root@oc6127656113 ~] chage -d 10 -E 01/22/2012 -I 9 -M 5 -m 2 -W 2 matias
[root@oc6127656113 ~] chage -l matias
Last password change   : Jan 11, 1970     # -d 10 
Password expires       : Jan 16, 1970     #       <---- this is calculated 11 + 5
Password inactive      : Jan 25, 1970     # -I 9
Account expires        : Jan 22, 2012     # -E  01/22/2012 
Minimum number of days between password change    : 2     #  -m 2
Maximum number of days between password change    : 5     #  -M 5 
Number of days of warning before password expires : 2     #  -W 2
```

Es importante establecer estos puntos, dado que nos servirán para
poder controlar bien el comportamiento de nuestras cuentas.

```sh
# Si quisiéramos omitir todo tipo de seguridad:
[root@oc6127656113 ~] chage -d -1 -E -1 -I -1 -M -1 -m -1 -W -11 matias
[root@oc6127656113 ~] chage -l matias
Last password change   : never
Password expires       : never
Password inactive      : never
Account expires        : never
Minimum number of days between password change    : -1
Maximum number of days between password change    : -1
Number of days of warning before password expires : -1
```

```sh
# O también así:
[root@oc6127656113 ~] chage -d 999999 -E 999999 -I 999999 -M 999999 -m 999999 -W -999999 matias
# Como verán, los tiempos que marcan son imposibles:
[root@oc6127656113 ~] chage -l matias
Last password change   : Nov 28, 4707
Password expires       : never
Password inactive      : never
Account expires        : Nov 28, 4707
Minimum number of days between password change    : 999999
Maximum number of days between password change    : 999999
Number of days of warning before password expires : 999999
```

#### SU + SUDO

https://docs.bluehosting.cl/tutoriales/servidores/de-la-teoria-a-la-practica-sudo-sudoers-y-visudo.html

**Elevando privilegios con su**

```sh
> man su
NAME   su - run a command with substitute user and group ID

SYNOPSIS   su [options] [-] [user [argument...]]

-, -l, --login
    Start the shell as a login shell with an environment similar to a real login
-P, --pty
    Create a pseudo-terminal for the session. The independent terminal
    has better security, the user does not share a terminal with the original session
-s, --shell=shell
    Run the specified shell instead of the default.
```

el comando su (`Switch User` o "cambiar de usuario).
ejecuta una nueva sesión en la consola shell como otro usuario, 
en general, el usuario root. 
nos convertimos en el usuario root hasta cerrar esa sesión. 

Por razones de seguridad y estabilidad 
`no es una buena práctica` utilizar este comando
ya que equivale a `iniciar sesión como root`,

ya hemos explicado algunas razones de peso para no utilizar esta cuenta.
ej: digamos que un usuario regular que no tiene experiencia 
en la administración de sistemas Linux quiere borrar un archivo personal
y por error elimina  de forma recursiva y forzada archivos del sistema (rm -rf). 
Esto es potencialmente catastrófico y podría dañar el sistema por completo.

para usar el comando su el usuario debe conocer la contraseña del usuario root.
La sintaxis de este comando es la siguiente:

```sh
su - miusuario
```

```sh
# ejemplo mio : 
osboxes@osboxes:~$ touchprueba.txt
osboxes@osboxes:~$ sudo  su              # sudo su == sudo su root
root@osboxes:/home/osboxes# touch prueba2
root@osboxes:/home/osboxes# su osboxes
osboxes@osboxes:~$ 
-rw-r--r-- 1 root    root    0 Jul 4 19:32 prueba2.txt
-rwsrwsr-- 1 osboxes osboxes 0 Jul 4 19:18 prueba.txt
# OJO !!   el archivo prueva2 no fue hecho por osboxes
# fue hecho por   ROOT   y esto    NO NOS PERMITE EDITARLO !!
# esto es ejemplo de malas practicas
```

Una vez ejecutado el comando se le pedirá la contraseña del usuario en cuestión.
El guion (-) permite el inicio de un nuevo shell de conexión 
con las preferencias del usuario miusuario. 

Si omite el guion no se cargará la sesión desde el directorio home del usuario
y no se inicializarán las variables de preferencia para ese usuario 
(HOME, SHELL, USER, LOGNAME and PATH).

Si ejecuta el comando su o su - por sí solo, sin especificar ningún usuario,
se da por sentado que está invocando al usuario root.

**Elevando privilegios con sudo**

Otra forma `más segura` de otorgar privilegios root temporalmente a un usuario
es usando el comando **sudo** (`Super User DO`, por sus siglas en inglés). 

Esta es la `forma recomendada` y la mejora práctica 
para ejecutar acciones con privilegios elevados. 
La gran diferencia, es que los comandos precedidos con sudo 
son ejecutados `por el propio usuario, NO por root`.

¿Y cuál es la ventaja de esto? Son muchas ventajas, 
en general relacionadas con la seguridad de su sistema. 
Aprenderá más a medida que lee esta guía.

Para ejecutar un comando que requiera privilegios elevados,
simplemente use la palabra sudo delante del comando:
```sh
sudo comando_con_root_requierment
```

Cuando lo haga se le pedirá su contraseña personal, 
se ejecutará el comando y luego usted seguirá siendo un usuario regular.
si debe ejecutar 100 comandos que requieran privilegios root, 
tendrá que precederlos todos con la utilidad sudo.

En la mayoría de las distribuciones de Linux,
la utilidad sudo debe habilitarse manualmente 
para los usuarios que lo requieran. 

explicamos cómo activar esta opción para un usuario regular.

Diferencias entre sudo y su
Algunas de las diferencias entre estas dos utilidades se enumeran a continuación:

```js
        SUDO                        |      SU
====================================|============================================
Los comandos son ejecutados         |    
por un usuario regular que          |   Sirve para cambiar de un usuario a otro,
`debe ser parte  de` un grupo       |   generalmente se pasa 
de usuarios con la posibilidad      |   de un usuario regular al usuario root.
 de utilizar sudo `(sudoers)`       |
====================================|============================================
Solo es necesaria                   |   requiere saber la contraseña, del root
la contraseña del usuario actual.   |   la cual no debería ser revelada
                                    |   a ningún usuario regular
====================================|============================================
Se pueden registrar las acciones    |   Las posibilidades para registrar
ejecutadas bajo la figura de sudo.  |   eventos son más limitadas.
====================================|=============================================
Ofrece varias características que   |   Una vez que accede como root,
proveen un mayor control de         |   no hay control de lo que
lo que hacen los usuarios.          |   puede hacer en el sistema.
```

#### /etc/sudoers

Para  Fefora y CentOS  sudoers se llama wheel

`etc/sudoers ` contiene una lista de los usuarios
que pueden ejecutar el comando sudo y cuáles son los alcances de sus privilegios.
  
Cuando un usuario ejecuta un comando precedido por sudo,
el sistema busca en el archivo `/etc/sudoers` 
y los archivos en `/etc/sudoers.d` para comprobar la información allí plasmada 
y otorgar o denegar el permiso para usar el comando.

La estructura básica para los usuarios enumerados en este archivo es la siguiente:

quién dónde = (como_quién) qué

Por ejemplo, un usuario con privilegios administrativos absolutos como root
 tendrá la siguiente estructura:
```
    root    ALL=(ALL)       ALL
```
Considerando que ALL significa "todos", 
esto quiere decir que la regla aplica al usuario root, en todos los hosts,
root puede ejecutar comandos como todos los usuarios 
y se pueden ejecutar todos los comandos.

Esta guía da un enfoque muy general del archivo sudoers 
y no pretende detallar su estructura o personalización.
La documentación de este archivo es muy extensa 

https://www.linuxtotal.com.mx/index.php?cont=info_admon_014

/etc/sudoers puede tener 3 clases de configuraciones
    Alias
    Opciones (Defaults)
    Reglas de acceso

##### ALIAS

Un alias se refiere a un `usuario`, un `comando` o a un `equipo`. 
El alias engloba bajo un solo nombre (nombre del alias) una serie de elementos 
que después en la parte de definición de reglas 

 Sintaxis :
```sh
tipo_alias NOMBRE_DEL_ALIAS = elemento1, elemento2, elemento3, ... elementoN
```

Es posible indicar `varios alias del mismo tipo` separando por` : `entre ellos 
```sh
tipo_alias NOMBRE1 = elemento1, elemento2 : NOMBRE2 = elemento1, elemento2
```

tipo_alias:
```
    Cmnd_Alias  - alias de comandos.
    User_Alias  - alias de usuarios normales.
    Runas_Alias - alias de usuarios administradores o con privilegios.
    Host_Alias  - alias de hosts o equipos.
```

**Cmnd_Alias**
Definen uno o más comandos y otros alias de comandos que podrán 
ser utilizados después en alias de usuarios. Ejemplos:
```sh
    Cmnd_Alias WEB       = /usr/sbin/apachectl, /usr/sbin/httpd, sudoedit /etc/httpd/
    Cmnd_Alias APAGAR    = /usr/bin/shutdown -h 23\:00
    Cmnd_Alias NET_ADMIN = /sbin/ifconfig,    /sbin/iptables,  WEB  # (primero alias) 
    Cmnd_Alias TODO_BIN  = /usr/bin/,         !/usr/bin/rpm
```

**User_Alias**
Define a uno o más usuarios: 
grupos del sistema (indicados con %),  grupos de red (netgroups indicados con +) 
 Ejemplos:
```sh
    User_Alias MYSQL_USERS = andy, marce, juan, %mysql
    User_Alias ADMIN       = sergio, ana
    User_Alias OPERADORES  = ADMIN, alejandra
    User_Alias TODOS       = ALL, !samuel, !david
```

**Host_Alias**

Definen uno o más equipos u otros alias de host. 
pueden indicarse 
    por su nombre (si se encuentra en /etc/hosts) 
    por nombre de dominio, si existe un resolvedor de dominios, 
    por dirección IP, por dirección IP con máscara de red. Ejemplos:

```sh
Host_Alias LANS       = 192.168.0.0/24, 192.168.0.1/255.255.255.0
Host_Alias WEBSERVERS = 172.16.0.21, web1 :   DBSERVERS = 192.168.100.10, dataserver
# WEBSERVERS y DBSERVERS = en el mismo renglón
```

Opciones ( o defaults)

    permiten definir ciertas características de comportamiento 
    para los alias previamente creados, para usuarios, usuarios privilegiados, 
    para equipos o de manera global para todos. 


Las opciones tienen `cuatro niveles` de uso:

    De manera global, afecta a todos
    Por usuario
    Por usuario privilegiado
    Por equipo (host)

Elemplos:
    Global : Defaults         opcion1, opcion2 ...
    Usuario: Defaults`:usuario` opcion1, opcion2 ...
    Equipo : Defaults`@equipo`  opcion1, opcion2 ...
    Usuario Privilegiado: Defaults`>usuario` opcion1, opcion2 ...

##### LISTAS

Permite establecer/eliminar `variables de entorno` propias de sudo. 
Los `Defaults` para variables es de los menos usados en 
las configuraciones de sudo y ciertamente de los más confusos. 

Para entender como se aplican es más fácil  si primero 

al ejecutas el comando `sudo -V` , y al final del listado 
`encontrarás en mayúsculas` las posibles `variables de entorno` 
que se pueden  establecer o quitar y que vienen del shell.

```sh
Defaults env_delete -= HOSTNAME
```

Elimina la variable de entorno 'HOSTNAME', 
comandos que se ejecuten bajo sudo y que requieran de esta variable 
no la tendrían disponible.
```sh
Defaults env_reset
Defaults env_check += DISPLAY, PS1
```
opción 'env_reset' reinicializa las variables de entorno 
que sudo utilizará o tendrá disponibles, 
y solo quedan disponibles LOGNAME, SHELL, USER y USERNAME. 

La siguiente línea indica que agregue (+=) a lo anterior,
la variable de entorno DISPLAY a su valor establecido antes del reset.



##### REGLAS de acceso

Aunque no es obligatorio declarar alias, ni opciones (defaults), 
y de hecho tampoco reglas de acceso, pues el archivo /etc/sudoers 
no tendría ninguna razón de ser si no se crean reglas de acceso.

De hecho podríamos concretarnos a crear solamente reglas de acceso, 
sin opciones ni alias y podría funcionar todo muy bien.

Sintaxis :

```sh
usuario host = comando1, comando2, ... comandoN
```

```js
`usuario` puede ser un usuario, un 'alias' de usuario o un `grupo` [indicado por %], 

`host` puede ser `ALL` cualquier equipo, un solo 'equipo', un `alias` de equipo
     , una dirección `IP` o una definición de red `IP`/máscara, 
      
`comandoX` es cualquier comando indicado con su ruta completa. 
    Si se `termina en '/' ` como en `/etc/http/` entonces indica 
    `todos` los archivos dentro de ese directorio.
```

Las reglas de acceso definen :

    que usuarios ejecutan que comandos
    bajo que usuario y en que equipos. 

Sintaxis :
```sh
usuario host = comando1, comando2, ... comandoN
```
La mejor forma de  aprender a configurar sudoers  es con ejemplos:

```sh
%gerentes dbserver = (director) /usr/facturacion, (root) /var/log/*
```

Un ejemplo más detallado. 
Los usuarios que pertenezcan al grupo del sistema llamado `gerentes`
pueden en el equipo llamado `dbserver` 
ejecutar como si fueran el usuario `director` 
la aplicación llamada `facturacion`, 
además como usuarios `root` 
pueden ver el contendido de los archivos que contenga el directorio /var/log.


Lo anterior intoduce algo nuevo, 
que en la lista de comandos es posible indicar 
bajo que usuario se debe ejecutar el permiso. 

Por defecto es el usuario 'root', pero no siempre tener que asi. 

Además la lista 'hereda' la primera definición de usuario
que se indica entre paréntesis ( ), 
por eso si se tiene más de alguno hay que cambiar de usuario 
en el comando conveniente. 

El ejemplo anterior también sería válido de la siguiente manera:

```sh
%gerentes dbserver = /var/log/*, (director) /usr/facturacion
```
No es necesario indicar (root) 
ya que es el usuario bajo el cual se ejecutan los comandos por defecto.

También es válido usar (ALL) 
para indicar bajo cualquier usuario. 

El ejemplo siguiente da permisos absolutos.


```sh
sergio ALL = (ALL) ALL
```

Se establece permiso para el usuario 'sergio' en cualquier host, 
ejecutar cualquier comando de cualquier usuario, 
por supuesto incluyendo los de root.


#### visudo

visudo, el comando que permite al administrador modificar /etc/sudoers
`bloquea el archivo /etc/sudoers` de tal manera que nadie más lo puede utilizar,
esto por razones obvias de seguridad 

`evita` que dos o más usuarios administradores `modifiquen simultaneamente`
pisando accidentalmente los cambios que el otro realizó.

visudo es que al cerrar el archivo, `verifica` que el archivo este` bien configurado`
Si al cerrar visudo detecta un `error` 
nos mostrará la línea donde se encuentra, y la pregunta "What now?":

    >>> sudoers file: syntax error, line 15 <<<
    What now?  

Se tienen tres opciones para esta pregunta:

    e - edita de nuevo el archivo, 
    x - salir sin guardar los cambios.
    Q - salir y guarda los cambios.


```sh
> sudo cat /etc/sudoers
# This file MUST be edited with the 'visudo' command as root.
#
# Please consider adding local content in /etc/sudoers.d/ instead of
# directly modifying this file.
#
# See the man page for details on how to write a sudoers file.
#
Defaults	env_reset
Defaults	mail_badpass
Defaults	secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
Defaults	use_pty

# This preserves proxy settings from user environments of root
# equivalent users (group sudo)
#Defaults:%sudo env_keep += "http_proxy https_proxy ftp_proxy all_proxy no_proxy"

# This allows running arbitrary commands, but so does ALL, and it means
# different sudoers have their choice of editor respected.
#Defaults:%sudo env_keep += "EDITOR"

# Allow members of group sudo to execute any command
%sudo	ALL=(ALL:ALL) ALL
# See sudoers(5) for more information on "@include" directives:
# (...salida cortada...)  #############################################

> $ ls  /etc/sudoers.d
0pwfeedback  mintdrivers  mintupdate  README  zfs
```

```sh
> man 5 sudoers         # See sudoers(5)
```


#### Other Sudo Workflows

Ariel is a Linux system Admin
Raul is a non root user that needs temporary privileges

is there a way to give Raul access to sudo command 
without allowing him to run  visudo , edit /etc/sudoers , chage , chown ,etc
to modify another user's passwords or gain permanent super user status ?


Yes, there are ways to grant Raul temporary sudo privileges 
without allowing him to modify other users' passwords 
or gain permanent superuser status.

Here are 3 methods you can consider:

1. ) Using the sudo -u command:
Temporary privileges: 

This method grants Raul root privileges for a single command.
```sh
# Example:
sudo -u root <command>
# Replace `<command>` with the specific command you want Raul to run.
```

2. ) Creating a specific sudoers rule:
Custom command restrictions: 

You can create a rule in the /etc/sudoers file 
that allows Raul to run specific commands
but restricts his ability to modify other users passwords 
or gain permanent superuser status.
```sh
# Allow Raul to run specific commands
raul ALL=(root) NOPASSWD: /usr/bin/command1, /usr/bin/command2
# Replace command1 and command2 with the actual commands you want Raul to be able to run.
```

3. ) Using a sudoers group:
Group-based privileges: 

Create a sudoers group and add Raul to it. 
Grant the group specific privileges.
```sh
# Create a sudoers group
sudo groupadd sudoers_group

# Add Raul to the group
sudo usermod -a -G sudoers_group raul

# Grant the group specific privileges
sudoers_group ALL=(root) NOPASSWD: /usr/bin/command1, /usr/bin/command2
```

Important notes:

Security: Always exercise caution when granting sudo privileges. 
Ensure that the rules you create are specific and necessary.

Refer to the `sudoers manual` 
for more detailed information and examples.

Consider` alternative` methods: Depending on your specific use case, 
you might consider other methods, such as using a passwordless 
sudo configuration or leveraging tools like `sudoedit` 
for temporary editing privileges.


## Clase 9 - uLimit + AT + Cron + C-Make + Kernell

###  AT - ATtention (Automatic temporization)

**Introducción**

Ahora veremos temas relacionados con la `automatización de tareas`,
delegar tareas al sistema y controlar mejor su funcionamiento.
Utilizaremos y configuraremos servicios fundamentales como 
`cron, at y anacron`, viendo su funcionamiento y configuración en cada caso.

hay tareas que se realizan `sin intervension` nuestra.
evitamos tener que estar presente para poder realizarla.

¿Qué son las tareas programadas ?

#### at

Con el comando at se pueden ejecutar `trabajos por lotes`, 
para ser ejecutados por única vez.
Se puede programar un trabajo de dos maneras diferentes:

● Programar el trabajo a ser ejecutado en un `tiempo absoluto`. 
  Por ejemplo, el 03 de julio, 10am.

● Programar el trabajo a ser ejecutado en el `tiempo relativo` . 
  Por ejemplo, 5 horas a partir de ahora.

```
Tipo de 
referencia :
     Sintaxis :  Descripción :
Fija  
     HH:MM      Específica hora y minutos cuando los comandos se debe ejecutar. 
                El demonio asume que la hora es hoy, a menos que 
                esa hora ya haya pasado realmente y asume que es mañana.
                También podemos agregar am o pm para especificar mañana o tarde.
      Noon      Específica que el comando correrá a las 12:00 PM.
      Midnight  Específica que el comando correrá a las 12:00 AM.
      Teatime   Específica que el comando correrá a las 4:00 AM.
      MM/DD/YY  Específica el mes, día, año exacto en que un comando se ejecutará.
   HH:MM MMDDYY Específica el mes, día, año y tiempo exacto en que un comando se ejecutará.

Relativa  
        now     Específica que un comando debe ejecutarse inmediatamente.
    now + valor Específica que un comando debe ejecutarse en el futuro, es un tiempo estimado.
                Por ejemplo: now +5 minutes, now +2 hours, now +3 days.
        today   Específica que el comando debe correr hoy. T
                ambién se puede usar con otros parámetros para determinar
más opciones. Por ejemplo: 2 pm today.  
    tomorrow    Específica que el comando deberá correr mañana. 
                posible usar otros parámetros para determinar más opciones. 
                Por ejemplo: 2pm tomorrow. 
```
**Ejemplos**

hacemos lo siguiente:
```sh
# Programar un trabajo especificando fecha y hora.
> at [tiempo] [fecha] -f [archivo_comandos]
# Programar un trabajo a las 11 am el 20 de mayo,
> at  11 am   may 20  -f  lista_de_comandos.txt
```

 Programar un trabajo con at usando un `tiempo relativo`
 a partir de ahora ( `now` ). 

```sh
> at now + Cantidad Unidad

# Trabajo a ejecutar en un minuto a partir de ahora:
> at now + 1 min    -f  lista_de_comandos.txt
# Lo musmo ahora por STDIN.
> echo ”killall httpd” | at now + 1 min
```
Tambien podemos ejecutaelo dentro una hora o `al dia siguirntr`

```sh
> at now + 1 hour      
> at now + 1 day        
```

Ingresar los comandos   `por medio del teclado`,
al terminar de tipear pulsar las teclas `ctrl d`
y aparecerá `<EOT> `y la `fecha` en la que se ejecutará.

```sh 
> at now + 2 min
at> touch /tmp/lala.txt
at> touch /tmp/lala2.txt
at> <EOT>
job 11 at Wed Dec 1 22:21:00 2014
```

#### atq

para `mostrar todos los trabajos` en el orden que están programadas 
o enejecución actualmente. 
Mostrará una lista de todos los trabajos pendientes.

El `primer` número que se muestra es el `número de trabajo`, 
`seguido` de la `hora` en que el proceso se va a ejecutar,
y el `nombre del usuario`.

También se puede utilizar at -l.
```sh
> atq
4 2010-04-20 11:00 educacionit
```

####  atrm

El comando atrm se utiliza para `eliminar un trabajo` en particular.
Por ejemplo, para eliminar el trabajo número 4,
utilizamos el siguiente comando atrm.
También se puede utilizar `atd -d 4`.

```sh
> atrm 4       #  atd -d 4
```
 

#### batch 

ejecutará un trabajo solo cuando :
el promedio de carga del sistema sea menor a 1,5.

Al igual que el comando at, se puede ejecutar batch,
ingresar los comandos y luego pulsar las teclas “ctrl d”.

Por ejemplo, actualizar la base de datos de locate cuando
la carga sea menor a 1.5:

```sh
> batch
at> updatedb
at> <EOT>
job 11 at Wed Dec 1 22:25:00 2014
```

#### at.allow y at.deny

En primer lugar, el sistema controla el archivo `at.allow`. 
Si at.allow existe, solo los nombres de usuario especificados
en el archivo `at.allow` están permitidos para el uso de trabajos.
A continuación, (si at.allow no existe), se controla a `at.deny`. 

Si at.deny existe, a los nombres de usuarios especificados en
`at.deny` no se les permite utilizar el comando at.

De manera predeterminada, la mayoría de los sistemas 
utiliza `at.deny` para poner fin al uso de trabajos 
a ciertos usuarios de sistema, como `www-data, nobody, backup`, etc.
Archivos at.allow y at.deny
Ejecutar un comando y luego salir de la SHELL.

Podemos ejecutar un comando (o SHELL script)
en el servidor remoto utilizando el comando at y salir de la SHELL.
```sh
> at -f myjob now + 1 min
> exi`t
```

Myjob seguirá funcionando incluso después de salir fuera del servidor,
de manera similar al comando nohup.

Otros tipos adicionales de formatos de hora del comando at
Puede utilizar cualquiera de los siguientes formatos 
en orden de fecha y hora:

```sh
> at 10 am tomorrow
> at 11:00 next month
> at 22:00 today
> at now + 1 week
> at noon
```

###  CRON 

#### /erc/Crontab

Para poder utilizar este tipo de tareas programadas 
primero debemos ver cómo es el` archivo de configuración`, 
para así programar nuestras tareas.

Las tareas las pueden programar los usuarios o tambiénel sistema.


SHELL   Indica que `interprete` deberá ejecutar los comandos 
PATH    Lista de Directorios de comandos a utilizar.
MAILTO  el email al que llega las salidas de los comandos ejecutados.

Estas variables no son estrictamente necesarias.

Ejemplo

Estas líneas muestran la distribución de la información 
en el archivo de configuración del crontab del sistema.
```sh
> cat /etc/crontab
SHELL=/bin/bash
PATH=/sbin:/bin:/usr/sbin:/usr/bin
MAILTO=root
# For details see man 4 crontabs
# Ejemplo de definición:
# .---------------- minuto (0 - 59)
# | .------------- hora (0 - 23)
# | | .----------- día del mes (1 - 31)
# | | | .--------- mes (1 - 12) o en inglés  jan,feb,mar,apr ...
# | | | | .------- día de la semana (0 - 6)   (Domingo=0 or 7) OR sun,mon,tue,wed,thu,fri,sat
# | | | | |  .---- usuario a ejecutar la tarea (el usuario solo se configura en este archivo)
# * * * * * usuario comando_a_ejecutar
 ```

#### crontab

permite  realizar ciertas `tareas de administración`,
limitadas al usuario que las realice.

Opciones:
 -l  Lista las tareas programadas del usuario.
 -e  Edita las tareas programadas.
 -r  Borra las tareas programadas.

crearemos un crontab para un usuario normal del sistema.

**Atajos**

En lugar de especificar los valores en los `cinco campos`,
se puede especificar un “@” seguido de una `palabra clave` 
midnight, daily, monthly, yearly, hourly.
```sh
    Clave    Equivalente
    @yearly  0 0 1 1 *
    @monthly 0 0 1 * *
    @daily   0 0 * * *
    @hourly  0 * * * *
    @reboot  Arranca en el inicio.
```
**Ejemplos**

● Ejecutar el script mantenimiento_anual.sh de manera anual :
```sh
 @yearly /home/educacionit/bin/mantenimiento_anual.sh
```
● Ejecutar comando borra_temporales.sh luego de reiniciar :

```sh
 @reboot borra_temporales.sh
```

● Listar las tareas programadas :
```sh
 crontab -l
 0 4 * * * /backup/backup.sh
# ejecutará el script backup.sh todos los días a las 04:00.
```

● Ejecutar una tarea cada 5 horas :
El segundo campo que corresponde a la hora tiene / ,
eso significa que lo hará cada 5 horas  (*/5).
usando */2 sería cada 2 horas, */3 para 3 horas, etc.

```sh
 */5 * * * * /home/crond1/backup.sh
```



● Ejecutar una tarea cada 5 minutos : 
El primer campo que corresponde a los minutos tiene /,
eso significa que lo hará cada 5 minutos (*/5).
usando */6 sería cada 6 minutos, */15 para 15 minutos, etc.

```sh
 0 */5 * * * /home/crond1/backup.sh
```


● Ejecutar una tarea cada una hora de 9 a 18.
Se ejecutará al minuto cero, de cada hora definida en el rango.

● Ejecutar una tarea el día 1 del mes.

● Ejecutar todos los viernes a la medianoche.

se puede escribir el nombre del día en inglés.
```sh
0 9-18 * * * /home/crond1/backup.sh
0 5 1 * *    /home/crond1/backupfull.sh
0 0 * * 5    /home/crond1/backup.sh
0 0 * * Fri  /home/crond1/backup.sh
```
podremos utilizar valores que corresponden a cada día.
```sh
0=Sun (También se puede utilizar el 7)
1=Mon
2=Tue
3=Wed
4=Thu
5=Fri
6=Sat
```
● Ejecutar una tarea cada 5 meses.
No hay una forma de decir exactamente
“cada 5 meses”; para lograr eso debemos
especificar en qué meses queremos correr la
tarea donde, por ejemplo, el quinto mes sea
mayo (May) y el décimo mes Octubre (Oct),
separados por coma.
También puedes escribir los meses en inglés.

● El siguiente ejemplo ejecutará la tarea dos
veces al año una el primero de Mayo (May) a
la medianoche, y otra, el primero de Octubre
(Oct) a la medianoche.
También se puede escribir los meses en
inglés.

No confundir 5, 10 (ejecutará en Mayo y Octubre) con 5-10
(ejecutará desde Mayo hasta Octubre).
```sh
0 0 * 5,10 * /home/crond1/backup.sh
0 0 1 5,10 * /home/crond1/backup.sh
0 0 1 May,Oct * /home/crond1/backup.sh
0 0 * may,oct * /home/crond1/backup.sh
```

Ejemplos

● Ejecutar una misma tarea dos veces al día.
El siguiente script realiza un backup incremental dos veces al día, todos los días.
Se ejecutará un SHELL script de backup incremental (incrementa-backup)
a las 11 y a las 16, todos los días.
La separación con la coma en el campo específico 
significa que debe ser ejecutado en la hora correspondiente.

● Ejecutar una tarea diariamente.
El siguiente ejemplo chequea el estado de la
base de datos todos los días de semana
(excluyendo los Sábados y Domingo) durante
la franja horaria 9 a 18.

00 11,16 * * * /home/crond1/bin/incremental-backup
0 09-18 * * 1-5 /home/ramesh/bin/check-db-status

Los crontabs de los usuarios se encuentran en el directorio /var/spool/cron/
o /var/spool/cron/crontabs/ según la distribución. 
Dentro de este directorio aparecerá un archivo con el nombre del usuario,
dentro tendrá las tareas programadas.

● Editar las tareas programadas del usuario crond1.
● Listar las tareas programadas del usuario crond1.
● Borrar las tareas programadas del usuario crond1.
```sh
# Administración de tareas programadas
> ls-l /var/spool/cron
-rw------- 1 crond1 root 523 dic 18 02:38 crond1
> crontab -u crond1 -e
> crontab -u crond1 -l
> crontab -u crond1 -r
```

Crontab del sistema

El archivo de cron de sistema es `/etc/crontab`.
Si ponemos tareas en dicho archivo serán ejecutadas igualmente, 
aunque no es recomendable. 
Este crontab se deja para que lo maneje la distribución y sus programas. 
Es igual que el crontab de root, salvo que en este podemos especificar 
con qué usuario se ejecuta cada cosa, 
y cron hará una suplantación previa a la ejecución.
[...]

Archivos de configuración
Los archivos de configuración del crontab se encuentran en /etc/cron. 
También tenemos un /etc/crond.deny para denegar 
o un /etc/cron.allow para permitir el uso de cron.

```sh
# ls -ld /etc/cron.*
drwxr-xr-x. 2 root root 4096 dic 18 04:24 /etc/cron.d
drwxr-xr-x. 2 root root 4096 feb 8   2011 /etc/cron.daily
 -rw-r--r-- 1 root root 0    jun 29 09:55 /etc/cron.deny
drwxr-xr-x. 2 root root 4096 feb 8   2011 /etc/cron.hourly
drwxr-xr-x. 2 root root 4096 feb 8   2011 /etc/cron.monthly
drwxr-xr-x. 2 root root 4096 feb 8   2011 /etc/cron.weekly
```

Directorios predefinidos: hourly, daily, weekly y monthly

Los sistemas UNIX modernos vienen con directorios predefinidos
para que cron lea y ejecute lo que hay dentro 
en los intervalos que su nombre indica:

Dichos directorios se suelen utilizar para enlazar scripts 
que deben ser llamados en el intervalo correspondiente al directorio, sin argumentos.

Por ejemplo
Si creamos un script de bash y lo guardamos en /root/bin, 
le damos permisos de ejecución, y lo enlazamos en /etc/cron.hourly
y cron lo ejecutará cada hora:
```sh
# chmod +x /root/bin/miScript.sh
# ln -s /root/bin/miScript.sh /etc/cron.hourly/
/etc/cron.daily
/etc/cron.hourly
/etc/cron.weekly
/etc/cron.monthly
```

Algunos archivos importantes que deniegan el
acceso a crontab son /etc/cron.deny,
/etc/cron.allow; con estos dos archivos,
dependiendo cuál utilicemos, le permitirán a los
usuarios poder usar crontab, o, sino, especificar
quiénes no van a poder utilizarlo.
Es más útil definir quién lo puede utilizar, así
acotamos el margen de error.
/cron…
 

● Verificar el estado del servicio cron.
```sh
#Servicio Crontab
> service crond status
Redirecting to /bin/systemctl status crond.service
crond.service - Command Scheduler
 Loaded: loaded (/lib/systemd/system/crond.service)
 Active: active (running) since Sun, 18 Dec 2011
04:31:23 -0300; 5s ago
 Main PID: 17885 (crond)
 CGroup: name=systemd:/system/crond.service
 └ 17885 /usr/sbin/crond -n
 ```

● Reiniciar el servicio de cron.
(No es necesario reiniciar al agregar una tarea).
```sh
> service crond restart
```
Restarting periodic command scheduler: cron [ ok ]
Starting periodic command scheduler: cron. [ ok ] 


### gestor contraseñas + MFA

sojo bitguard  keypass 
vulnerados : lastpass passvolt ?

combiene que el gestor de contraseñas y el MFA esten separados

YubiKey  : usb-paswords ( Hardware Authentication key )
          U2F : Universal Second Factor = FIDO2 Protocol    
          https://fidoalliance.org/fido2/
          https://www.microsoft.com/en-us/security/business/security-101/what-is-fido2

los caracteres iniciales del valor del campo de contraseña en /etc/shadow 
identifican el algoritmo de cifrado:
●  $1$  es resumen de mensaje 5 (MD5)        INSEGURO !
●  $2a$ es pes perglobo
●  $5$  es un algoritmo hash seguro de 256 bits (SHA-256)
●  $6$  es un algoritmo hash seguro de 512 bits (SHA-512)
●  Sy$(o $7$) es sicrypt
●  ninguno de los anteriores significa DES

### ForkBomb y ulimit

Fork bomb es un programa que crea inumerables instancias de si misma
esto agota los recursos del sistema y cuelga el servidor
para protejerlo debemos limitar el uso maximo 



Preventing fork bomb on Linux: 

https://www.cyberciti.biz/faq/understanding-bash-fork-bomb/

Understanding `:(){ :|:& };:` fork() bomb code
WARNING! These examples may crash your computer if executed.

The `:()  ` Defined the function called :
This function accepts no arguments
The syntax for bash function is as follows:
```sh
foo(){
 arg1=$1
 arg2=$2

 echo 'Bar..'
 # do_something on $arg argument
}
```
fork() bomb is defined as follows:
```sh
:(){
 :|:&
};:
```
`:|: ` Next it will call itself using programming 
     technique called recursion and pipes 
     the output to another call of the function ‘:’
     The worst part is function get called two times to bomb your system.

`&   ` Puts the function call in the background 
     so child cannot die at all and start eating system resources.

`;  `  Terminate the function definition.

`:  `  Call (run) the function aka set the fork() bomb.



Please note that ulimit is a shell builtin. 
You can verify this using the `type command` or command command as follows:
```sh
type -a ulimit
ulimit is a shell builtin
```
https://linuxcommand.org/lc3_man_pages/typeh.html

To find out the current maximum processes you can run on Linux:
```sh
# view number of process limit
ulimit -u  
# view all limitations
ulimit -a
```
https://www.ss64.com/bash/ulimit.html

 ulimit --help

Syntax      ulimit [-HS] -a
            ulimit [-HS] [-bcdefiklmnpqrstuvxPRT] [limit]
Key
   -S   Set a soft limit for the given resource.
   -H   Set a hard limit for the given resource.

   -a   All current limits are reported.
   -b   The maximum `socket buffer` size.
   -c   The maximum size of core files created. 
   -d   The maximum size of a process’s data segment.
   -e   The maximum scheduling priority ("nice") 
   -f   The maximum size of files created by the shell(default option).
   -i   The maximum number of pending signals.
   -k   The maximum number of `kqueues` that may be allocated.
   -l   The maximum size that can be `locked into memory`. 
   -m   The maximum `resident memory` set size. 
   -n   The maximum number of open file descriptors. 
   -p   The pipe buffer size.
   -P   The maximum number of `pseudoterminals`.
   -q   The maximum number of bytes in POSIX message queues.
   -r   The maximum real-time scheduling priority.
   -R   The maximum time a real-time process can run before blocking, in microseconds.
   -s   The maximum `stack size`. 
   -t   The maximum amount of `cpu time` in seconds.
   -T   The maximum number of threads.
   -u   The maximum number of `processes` available to a single user.

ulimit configures the  /etc/security/limits.conf file

https://www.seguinet.es/limitando-el-uso-de-recursos-con-ulimit/
https://linuxhint.com/disk_quota_ubuntu/

```sh 
cat /etc/security/limits.conf 
# /etc/security/limits.conf
#
#Each line describes a limit for a user in the form:
#
#<domain>        <type>  <item>  <value>
#
#Where:
#<domain> can be:
#        - a user name
#        - a group name, with @group syntax
#        - the wildcard *, for default entry
#        - the wildcard %, can be also used with %group syntax,
#                 for maxlogin limit
#        - NOTE: group and wildcard limits are not applied to root.
#          To apply a limit to the root user, <domain> must be
#          the literal username root.
#
#<type> can have the two values:
#        - "soft" for enforcing the soft limits
#        - "hard" for enforcing hard limits
#
#<item> can be one of the following:
#        - core - limits the core file size (KB)
#        - data - max data size (KB)
#        - fsize - maximum filesize (KB)
#        - memlock - max locked-in-memory address space (KB)
#        - nofile - max number of open file descriptors
#        - rss - max resident set size (KB)
#        - stack - max stack size (KB)
#        - cpu - max CPU time (MIN)
#        - nproc - max number of processes
#        - as - address space limit (KB)
#        - maxlogins - max number of logins for this user
#        - maxsyslogins - max number of logins on the system
#        - priority - the priority to run user process with
#        - locks - max number of file locks the user can hold
#        - sigpending - max number of pending signals
#        - msgqueue - max memory used by POSIX message queues (bytes)
#        - nice - max nice priority allowed to raise to values: [-20, 19]
#        - rtprio - max realtime priority
#        - chroot - change root to directory (Debian-specific)
#
#<domain>      <type>  <item>         <value>
#

#*               soft    core            0
#root            hard    core            100000
#*               hard    rss             10000
#@student        hard    nproc           20
#@faculty        soft    nproc           20
#@faculty        hard    nproc           50
#ftp             hard    nproc           0
#ftp             -       chroot          /ftp
#@student        -       maxlogins       4

# End of file

```
### Matar procesos
```sh
> type yes
yes is /usr/bin/yes
```

```sh
>man yes
NAME       yes - output a string repeatedly until killed
SYNOPSIS   yes [STRING]...
```

```sh
> yes you
you
you .....

> ps -aux |grep you
ariel       2549  0.0  0.2 392548 40872 ?        Sl   11:05   0:00 /usr/lib/x86_64-linux-gnu/xfce4/panel/wrapper-2.0 /usr/lib/x86_64-linux-gnu/xfce4/panel/plugins/libxfce4powermanager.so 11 14680082 power-manager-plugin Power Manager Plugin Display the battery levels of your devices and control the brightness of your display
ariel      80394 52.6  0.0  10904  1056 pts/0    R+   15:51   0:16 yes you
ariel      80595  0.0  0.0  11748  2432 pts/2    S+   15:52   0:00 grep --color=auto you

> kill -9  80394
 errno 137 : SIGKILL   

# Conociendo el nombre se puede evaluar el PID dentro del comando kill
> kill -9 $(ps -aux |grep -e'\<yes you\>' | awk 'NR==1 { print $2; }')

```



### Compilar aplicaciones

**Introducción**

La manera común de instalar programas en
Linux es mediante paquetes ya compilados por
la distribución. En casos excepcionales puede ser
necesario compilar, algunas razones son:
```
● El paquete no está en los repositorios de la distribución.

● El paquete está en los repositorios de la distribución
 pero está muy desactualizado.

● Queremos compilarlo quitando y/o agregando funcionalidades.
Los desarrolladores adoptan distintas maneras y software 
para permitir que sus programas sean instalados, 
algunos de ellos son:

    ● Archivo Makefile.
    ● Autotools.
    ● CMake.
```

En general, los paquetes con código fuente vienen como archivos tarball
(extensiones .tar.gz, .tar.bz2, .tar.xz) o sencillamente como zip.

La mayoría de estos paquetes se bajan desde sitios como 
GitHub, GitLab, o del propio proyecto.

Es costumbre que este tipo de paquetes 
incluyan archivos llamados  `INSTALL` y `README`. Estos
muy importantes ya que contienen información sumamente útil 

● los pasos a seguir para compilar 
● los requisitos previos para llevar a cabo dicha acción.

Este proceso consta de los siguientes pasos:
Compilar programas empaquetados con `Autotools`

Ejecución de make install
Ejecución del comando make
Ejecución de script configure
Extracción del paquete

#### Autools

Descarga del paquete
```sh
> curl -O https://dev.yorhel.nl/download/ncdu-1.14.2.tar.gz
% Total % Received % Xferd Average Speed Time Time Time Current
Dload Upload Total Spent Left Speed
100 141k 100 141k 0 0 67272 0 0:00:02 0:00:02 --:--:-- 67272
```

Descompresión y extracción del paquete
```sh
# tar xvzf ncdu-1.14.2.tar.gz
ncdu-1.14.2/
ncdu-1.14.2/install-sh
ncdu-1.14.2/Makefile.am
ncdu-1.14.2/deps/
ncdu-1.14.2/deps/khashl.h
ncdu-1.14.2/deps/yopt.h
ncdu-1.14.2/aclocal.m4
#  (... salida cortada...)  ################################
```

El paquete podría estar comprimido con bzip2,
gzip, o xz como se ve en el curso de Introducción
a Linux, de manera que hay que usar el
modificador para el comando tar que
corresponda. Si está comprimido con zip se
puede usar el comando unzip para Linux.
```sh
# Entrar en el directorio de las fuentes
 cd ncdu-1.14.2
```
#### Generación del archivo Makefile

En este paso se ejecuta el script configure que viene con
el paquete este se encargará de verificar que está todo lo
necesario para poder compilar e instalar el paquete,
además va a generar un archivo llamado Makefile el cual
tendrá una serie de recetas para el compilador:
```sh
> ./configure
./configure
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... /usr/bin/mkdir -p
checking for gawk... gawk
checking whether make sets $(MAKE)... yes
checking whether make supports nested variables... yes
checking for gcc... gcc …
checking whether the C compiler works... yes
#  (... salida omitida ...)  
configure: Using /bin/sh as the default shell if $SHELL is not set
checking that generated files are newer than configure... done
configure: creating ./config.status
config.status: creating Makefile
config.status: creating config.h
config.status: executing depfiles commands
```
Este paso es crucial, si termina con error
significa que no podrá compilarse el paquete.
Las distribuciones suelen tener en sus repositorios 
compiladores y otras herramientas para desarrollo.

Por ejemplo :

● En CentOS hay un grupo de paquetes que puede
instalarse llamado “Developement Tools”.

● En Debian hay un metapaquete con el nombre
“build-essential”.

Supongamos el siguiente escenario: 
```sh
checking for unistd.h… yes
checking limits.h usability… yes
checking limits.h presence… yes
checking for limits.h… yes
checking sys/time.h usability… yes
checking for unistd.h… (cached) yes
checking fnmatch.h usability… yes
checking fnmatch.h presence… yes
checking for fnmatch.h… yes
checking ncurses.h usability… NO    # NO
checking ncurses.h presence…  NO    # NO
checking for ncurses.h…       NO    # NO
configure: error: required header file not found
```
Vemos que el proceso terminó con error, en
particular para los encabezados de la librería
ncurses, por lo tanto en CentOS debería hacerse
lo siguiente:

Y luego se deberá ejecutar nuevamente el script
configure hasta que no haya más errores.

En las distribuciones relacionadas con Red Hat 
los paquetes de desarrollo terminan con “-devel”,
mientras que en las distribuciones basadas en Debian 
finalizan con “-dev”.

El script configure depende totalmente en la
manera en que el desarrollador armó el paquete
para compilar, pero en general posee una ayuda:
Por ejemplo, la opción --prefix define el
directorio de instalación del paquete, en este
caso se puede instalar como usuario común en
algún directorio dentro de su $HOME.
```sh
 yum install ncurses-devel
 ./configure --prefix
```
El paso siguiente es efectivamente compilar:


#### Make

```sh
> make
make all-am
make[1]: Entering directory '/root/ncdu-1.14.2'
depbase=`echo src/browser.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/browser.o   -MD -MP -MF $depbase.Tpo -c -o src/browser.osrc/browser.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/delete.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/delete.o     -MD -MP -MF $depbase.Tpo -c -o src/delete.osrc/delete.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dirlist.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dirlist.o    -MD -MP -MF $depbase.Tpo -c -o src/dirlist.osrc/dirlist.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dir_common.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\ …
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dir_common.o -MD -MP -MF $depbase.Tpo -c -osrc/dir_common.o src/dir_common.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dir_export.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dir_export.o -MD -MP -MF $depbase.Tpo -c -osrc/dir_export.o src/dir_export.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dir_import.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dir_import.o -MD -MP -MF $depbase.Tpo -c -osrc/dir_import.o src/dir_import.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dir_mem.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dir_mem.o    -MD -MP -MF $depbase.Tpo -c -o src/dir_mem.osrc/dir_mem.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/dir_scan.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/dir_scan.o   -MD -MP -MF $depbase.Tpo -c -osrc/dir_scan.o src/dir_scan.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/exclude.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/exclude.o    -MD -MP -MF $depbase.Tpo -c -o src/exclude.o src/exclude.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/help.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/help.o       -MD -MP -MF $depbase.Tpo -c -o src/help.osrc/help.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/shell.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/shell.o      -MD -MP -MF $depbase.Tpo -c -o src/shell.osrc/shell.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/quit.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/quit.o       -MD -MP -MF $depbase.Tpo -c -o src/quit.osrc/quit.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/main.o  | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
```
Y el último paso es instalar…

```sh
> make install
make[1]: Entering directory '/root/ncdu-1.14.2'
/usr/bin/mkdir -p '/usr/local/bin'
/usr/bin/install -c ncdu '/usr/local/bin'
/usr/bin/mkdir -p '/usr/local/share/man/man1'
/usr/bin/install -c -m 644 ncdu.1 '/usr/local/share/man/man1'
make[1]: Leaving directory '/root/ncdu-1.14.2'
```

Si quisiéramos desinstalar se debería ejecutar:
```sh
> make uninstall
( cd '/usr/local/bin' && rm -f ncdu )
( cd '/usr/local/share/man/man1' && rm -f ncdu.1 )
```
`CMake` se usa mucho con los lenguajes C y C++, 
y se usa en proyectos de software libre (`Ninja`),
software privativo (`Visual Studio`) y mixto (`Xcode`).

Hay algunos paquetes que usan un tipo de
controlador de compilación distinto como cmake.
En este caso el tipo de compilación es un poco distinto.

#### Compilar usando CMake

En general, se prefiere no compilar sobre el
propio directorio de las fuentes sino en un
directorio aparte.
Luego, creamos los archivos necesarios para
poder compilar
Notar como apuntamos al directorio de las fuentes. 
La opción `-DCMAKE_BUILD_TYPE=release` 
en este caso puntual es para indicarle el tipo de compilación.
```sh
> mkdir build && cd build
> cmake -DCMAKE_BUILD_TYPE=release 
```

Si se presenta un error como vemos a continuación:
-- Looking for GnuTLS
-- Could NOT find GnuTLS (missing: GNUTLS_LIBRARY GNUTLS_INCLUDE_DIR)
CMake Error at CMakeLists.txt:127 (message):
 Cannot find GnuTLS. Use -DENABLE_SYNC=OFF to build Taskwarrior without
 sync support. See INSTALL for more information.
 

Eso indica que un archivo necesario para
compilar con todas las funcionalidades está ausente. 
En Debian 10, lo solucionaremos así :

```sh
> apt -y install libgnutls28-dev   # instalo  libgnutls28
> cmake --build                  # ejecuto la herramienta de compilación
> make install                   # instalo el paquete compilado
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/main.o -MD -MP -MF $depbase.Tpo -c -o src/main.osrc/main.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/path.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/path.o -MD -MP -MF $depbase.Tpo -c -o src/path.osrc/path.c &&\
mv -f $depbase.Tpo $depbase.Podepbase=`echo src/util.o | sed 's|[^/]*$|.deps/&|;s|\.o$||'`;\
gcc -DHAVE_CONFIG_H -I. -I./deps -g -O2 -MT src/util.o -MD -MP -MF $depbase.Tpo -c -o src/util.osrc/util.c &&\
mv -f $depbase.Tpo $depbase.Po
gcc -g -O2 -o ncdu src/browser.o src/delete.o src/dirlist.o src/dir_common.o src/dir_export.o
src/dir_import.o src/dir_mem.o src/dir_scan.o src/exclude.o src/help.o src/shell.o src/quit.o src/main.o src/path.o src/util.o -lncursesw -ltinfo
make[1]: Leaving directory '/root/ncdu-1.14.2'
```

### Compilación del Kernel 

El kernel Linux es **monolítico**

Un núcleo monolítico es un tipo de núcleo o kernel 
de un sistema operativo. 

Como ejemplos de sistemas operativos de núcleo monolítico
están `UNIX, Linux, Solaris, DOS, AIX y FreeBSD`.

Estos sistemas tienen un núcleo grande y complejo, 
que engloba todos los servicios del sistema. 

Está programado de forma `no modulmar`,
y tiene un rendimiento mayor que un micronúcleo.

Sin embargo, cualquier cambio a realizar en
cualquier servicio requiere la recopilación del núcleo 
y el reinicio del sistema para aplicar los nuevos cambios.

Hay diversas ramificaciones de este diseño, 
que se han ido amoldando a nuevas necesidades.

el sistema de módulos ejecutables `en tiempo de ejecución`, 
que le brinda al modelo de núcleo monolítico 
algunas de las ventajas de un micronúcleo. 

Dichos módulos pueden ser compilados, modificados, 
cargados y descargados en tiempo de ejecución, 
de manera similar a los servicios de un micronúcleo, 
pero con la diferencia de que se ejecutan 
en el espacio de memoria del núcleo mismo (anillo 0). 

De esta forma, un bloqueo del módulo, 
es probable que bloquee todo el núcleo. 
Además, el módulo pasa a formar un todo con el núcleo,
usando la API del mismo, 
y no se emplea un sistema de mensajes como en los micronúcleos.

Este es el esquema usado por, entre otros, Linux,
FreeBSD y varios derivados de UNIX.
Cabe resaltar que el paso constante de mensajes 
entre los servicios del micronúcleo,
es en parte responsable del pobre rendimiento de los micronúcleos.

un sistema operativo con núcleo monolítico concentra 
todas las funcionalidades posibles :
` ( planificación, sistema de archivos, redes, `
`   controladores de dispositivos, gestión de memoria, etc)`
dentro deun gran programa. 

El mismo puede tener un tamaño considerable, 
y deberá ser recopilado por completo al añadir una nueva funcionalidad.

Todos los componentes funcionales del núcleo tienen acceso 
a todas sus estructuras de datos internas y a sus rutinas. 

Un error en una rutina puede propagarse a todo el núcleo.
La alternativa es tener una estructura de micronúcleo,
donde las partes funcionales están divididas en unidades 
separadas con mecanismos de comunicación estrictos entre ellos.

**Diagrama del núcleo**

Sistema operativo basado en un kernel monolítico :

                    ●  Application
                 ┌- ●  VFS, System call
                 |  ●  IPC, File System
    MODO KERNEL <   ●  Scheduler, Virtual Memory
                 └- ●  Device Drivers, Dispatcher....
                    ●  Hardware


Sistema operativo basado en microkernel:

    ●          Application
        ┌------┬---┴----┬----------┐     ---------------
    ● IPC     UNIX    Device      File      MODO
      Applic  Server  Driver      Server    USUARIO
        └-------┴---┬---┴-----------┘      ------------
    ●  IPC, Virtual Memory, Scheduler =     MODO KERNEL
                    |                     --------------
    ●            Hardware

Sistema operativo basado en kernel híbirido :

    ●           Application
        ┌-------┬---┴----┬------┐    -------------
    ●  File     |      UNIX     |        Modo
       Server   |      Server   |        USUARIO
        |       |        |      |    --------------              
    ●   |     Applic     |    Device      Modo
        |      IPC       |    Driver      KERNEL
        └-------┴---┬----┴------┘
                    |                         
    ●  Basic IPC, Virtual Memory, Scheduling  
    ●         Hardware                  -------------


** Arquitectura de Linux**

Actualmente Linux es un núcleo monolítico
híbrido. Los controladores de dispositivos y las
extensiones del núcleo normalmente se ejecutan
en un espacio privilegiado conocido como anillo 0
con acceso irrestricto al hardware, aunque
algunos se ejecutan en espacio de usuario.
A diferencia de los núcleos monolíticos
tradicionales, los controladores de dispositivos y
las extensiones al núcleo se pueden cargar y
descargar fácilmente como módulos, mientras el
sistema continúa funcionando sin interrupciones.
Además, los controladores pueden ser
prevolcados (detenidos momentáneamente por
actividades más importantes) bajo ciertas
condiciones.
Esta habilidad fue agregada para gestionar
correctamente interrupciones de hardware, y
para mejorar el soporte de multiprocesamiento
simétrico.
El hecho de que Linux no fuera desarrollado
siguiendo el diseño de un micronúcleo (diseño
que, en aquella época, era considerado el más
apropiado para un núcleo por muchos teóricos
informáticos) fue asunto de una famosa y
acalorada discusión entre Linus Torvalds y
Andrew S. Tanenbaum.

Categorías del kernel
Prepatch o RC Tiene nuevas funcionalidades aún no probadas.
Mainline Posee nuevas funcionalidades.
Stable Tiene correcciones de errores provenientes de Mainline.
Longterm Corrección de errores para las ramas más viejas.
Distribution Cualquier versión que viene empaquetada en una distribución de Linux y
no ha sido compilada “a mano” a partir del código fuente de kernel.org.

Instalar paquetes necesarios para compilar Compilando el kernel
Compilar un kernel consume mucho tiempo y espacio disco 
(al menos unos 16 GB)
por otro lado en algunas distribuciones perdemos el soporte 
al utilizar un kernel personalizado.

Debian 
```sh

apt install build-essentials
apt install ncurses-dev 

```
CentOS

```sh
yum group install “Development Tools”
yum install binutils-devel
yum install ncurses-develel
yum install futils-libelf-devel
yum install hmaccalc
```
Salvo que tengamos una buena razón, 
solo deberíamos bajar una versión ‘stable’ o ‘longterm’.

Por ejemplo :

```sh
$ curl -O
```
Otra opción es instalar el paquete de fuentes del
kernel de la distribución.

Por ejemplo En Debian se pueden buscar con :

```sh
apt search ‘^linux-source’.
```
**Extraer las fuentes del kernel**

Tradicionalmente se usaba el directorio /usr/src para poner las fuentes del kernel,
en la actualidad eso no se recomienda y es preferible hacerlo como usuario distinto de root.

```sh
$ cd /home/sergio
$ tar --auto-detect -xvf linux-5.4.71.tar.xz && cd linux-5.4.71
```

Luego podemos hacer un listado de los archivos y veremos un directorio llamado Documentation 
el cual contiene información muy importante de los distintos componentes del kernel.
Por ejemplo El archivo `Documentation/process/changes.rst` 
tiene un listado de los requerimientos para instalar el kernel.

```sh
$ ls    Documentation/process/changes.rst
arch    certs           CREDITS     Documentation   fs          init 
Kbuild  kernel          LICENSES    Makefile        net         samples 
block   COPYING         crypto      drivers         include     Kconfig 
lib     MAINTAINERS     mm          README          scripts     sound 
ipc     security        xtools      virt            usr
```

**Usar la configuración del kernel actual como plantilla**

Copiar la configuración del kernel actual:
```sh
$ cp /boot/config-$(uname -r) .config
```
Actualizar la configuración para adaptarlo a la nueva
versión del kernel y decirle que use los valores
predeterminados para las opciones nuevas:

```sh
$ make localmodconfig
```
Cuando se usa el archivo ‘config’ de la distribución 
puede ser necesario hacer lo siguiente:

```sh
sed -i -r 's#(CONFIG_SYSTEM_TRUSTED_KEYS=")(.*)(")#\1\3#g' .config
```

**Configuramos el kernel**

Ahora vamos a personalizar nuestro kernel, para
eso, deberíamos ejecutar el siguiente comando:

```sh
  make menuconfig
```

Allí veremos una interfaz con menús, como la que
se muestra en la siguiente pantalla.


Podemos navegar a través de esta interfaz con las flechas del teclado y
con la tecla TAB. Podemos salir con Esc o elegir alguna de las opciones
principales situadas debajo con la tecla Enter.

La siguiente tabla muestra los tipos de funcionalidades que podemos encontrar:
```     
Precedidas por :          Tipo de funcionalidad :
    [ ]    Pueden estar dentro o fuera de la imagen del kernel
    < >    Pueden estar dentro de la imagen del kernel o como módulos.
    { }    Se seleccionan por medio de otra funcionalidad
             pueden estar dentro de la imagen del kernel o como módulos
    --     Se seleccionan por medio de otra funcionalidad.
```
Se puede usar la barra de estado para habilitar o deshabilitar funciones.
Si una funcionalidad está en blanco significa que 
no se compilará de ninguna manera en el kernel,
si tiene ‘M’ estará como módulo y si tiene ‘*’
estará dentro del kernel.

Una vez que terminamos nuestra configuración
podemos guardarla, seleccionando `<Save>`.

**Interfaces de configuración alternativas**

Se pueden usar interfaces alternativas de configuración
cambiando el parámetro de make, como vemos en la si guiente tabla:

  Comando :           Interfaz :

    make                Línea de comandos (Texto puro).
    make xconfig        Gráfica, basada en librerías Qt.
    make gconfig        Gráfica: basada en librerías GTK+.


El sistema se encargará de:

● Generar las dependencias entre los módulos.
● Copiar el kernel nuevo a la ubicación correcta.
● Generar el archivo de initramfs (disco de memoria inicial).
● Actualizar grub.

**Compilar**

```sh
> make menuconfig 
```

**Instalar los módulos del kernel y el kernel**

```sh
$ su -c “make modules_install && make install” 
```

El sistema se encargará de:

    ● Generar las dependencias entre los módulos.
    ● Copiar el kernel nuevo a la ubicación correcta.
    ● Generar el archivo de initramfs (disco de memoria inicial).
    ● Actualizar grub.

**Disco de Memoria Inicial**:
En versiones más viejas se puede usar el comando o bien
mkinitramfs o dracut para generar el archivo initramfs:

**Uso de update-initramfs**

```sh
 update-initramfs -u -v
```

**Uso de mkinitramfs**

```sh
 mkinitramfs -k -o /boot/initrd.img-5.4.71 5.4.71
```
( El último parámetro es la versión del kernel)

**Uso de dracut**

En distribuciones de la rama Red Hat se utiliza dracut:

```sh
 dracut -f /boot/initramfs-5.4.71.img 5.4.71
```

**Parches de actualización**

Aplicar un parche para actualizar el kernel:
```sh
> cd linux-5.4.71
> curl -L -O
https://cdn.kernel.org/pub/linux/kernel/v5.x/incr/patch-5.4.71-72.xz
> xzcat patch-5.4.71-72.xz | patch -p1
```

Si se queremos revertir los cambios hacemos:

```sh
> xzcat patch-5.4.71-72.xz | patch -R -p1
```

**Parches no diferenciales**

Si un parche no es diferencial primero hay que aplicar en forma reversa el parche, 
de esa manera el kernel queda como estaba en la rama mainline:

**siguiente versión stable:**

```sh
> curl -L -O
https://cdn.kernel.org/pub/linux/kernel/v5.x/patch-5.4.71.xz
> xzcat patch-5.4.71.xz | patch -R -p1
```
Una vez allí podemos aplicar el parche para pasar a la siguiente versión stable:

```sh
> curl -L -O
https://cdn.kernel.org/pub/linux/kernel/v5.x/patch-5.4.72.xz
> xzcat patch-5.4.72.xz | patch -p1
```

**Fuentes y recursos adicionales**

    ● Núcleo (informática) - Wikipedia, laenciclopedia libre
    ● Monolithic kernel - Wikipedia
    ● Building a custom kernel - Fedora ProjectWiki
    ● 8.10. Compilación de un núcleo
    ● Capítulo 9. Trucos del sistema
    ● HowTos/Custom_Kernel - CentOS Wiki
    ● Applying Patches To The Linux Kernel 
        —  TheLinux Kernel documentation
    ● Building External Modules
        — The Linux Kernel  documentation


## Clase 10 - Accesibilidad + Backups + Encriptacion

### DESAFIO 4

   **Objetivo**
    Administrar usuarios y grupos de nuestro sistema 
    (crearemos usuarios y grupos, asignaremos permisos a
    distintos archivos y directorios y una vez terminada la práctica 
    haremos una limpieza para completar el ciclo).
    
    Además, utilizaremos algunas herramientas de automatización 
    para ejecutar comandos de forma periódica o en algún momento determinado.

   **Parte 1**  Administracion de grupos y usuarios

1) Crear 3 usuarios (Asegurarse de que sus directorios home sean creados)
+   a) Mariano
+   b) Luis
+   c) Jose
1) Crear 3 grupos
*   a) Administradores
*   b) Desarrolladores
*   c) Operaciones
1) Realizar las siguientes modificaciones:
*   a) Mariano tiene que ser parte del grupo Administradores (primario)
*   b) Luis tiene que ser parte del grupo Desarrolladores (primario)
*   c) Jose tiene que ser parte del grupo Administradores (primario) 
                                            y Operaciones (Secundario)
1) Los miembros del grupo de Administradores, deben poder correr cualquier comando como sudo sin utilizar la contraseña
2) Los miembros del grupo Operaciones, deben poder correr el comando mount y umount 
    (con cualquier argumento) como sudo y tendrán que utilizar la contraseña.
    
3) Desarrollar la siguiente estructura de directorios y archivos: 
*   a) Dentro del Home del usuario Mariano, tendrán que crear la siguiente estructura:
    +   i) Scripts/ping.sh (tendrá que tener el siguiente contenido) 
                           (permisos 2770, owner Mariano y grupo Administradores)
        #!/bin/bash
        ping www.google.com.ar
    +   ii) Scripts/kick.sh (permiso rwx-rwx-, owner Mariano y grupo administradores)
            docs/test.txt (permiso el owner puede leer y escribir, el grupo puede leer y escribir y los demás usuarios no pueden hacer nada, owner Mariano y grupo administradores)
    +   iv) docs/readme.txt (permiso 660, owner Mariano y grupo Administradores)
*   b) Dentro del Home del usuario Luis, tendrán que crear la siguiente estructura:
    +   i) feat-1/index.html (tendrá que tener el siguiente contenido) 
                             (permisos ugo=664, owner Luis y grupo Luis) 
         `<H1> Hola Bootcamp! </H1>`
    +   ii) feat-1/readme.txt (permisos rwrwr, owner Luis y grupo Desarrolladores)
            feat-2/tests      (permisos rwrwr, owner Luis y grupo Luis)
*   c) Dentro del Home del usuario Jose, tendrán que crear la siguiente estructura:
    +   i) ops/script.sh (permisos 4770, owner Jose y grupo operaciones)
    +   ii)ops/test.sh   (permisos el owner tiene todos los permisos, 
                          el grupo tambien y los demas usuarios solo pueden leer, 
                          owner Jose y grupo operaciones)
        adm/mount.sh (Tendrá que tener el siguiente contenido) 
                     (permisos rwxrwx, owner Jose y grupo administradores, 
                     además agregar un FACL que haga que el usuario Mariano 
                     no pueda ejecutar este archivo, sólo pueda leerlo).
        #!/bin/bash
        mount -a
    +   iv) procedures/kick.txt (permisos rwrwr, owner Jose y grupo operaciones)
1) Bloquear el acceso del usuario Luis (no borrar el usuario, solo bloquear el acceso)
2) Forzar un cambio de contraseña en el siguiente login del usuario Jose
3) Configurar el vencimiento de la contraseña del usuario Mariano (en 7 días)


    **Parte 2**  Automatización de tareas 

1) En el crontab del usuario Mariano, 
    agregar una linea que ejecute el script ping.sh c
    ada 5 minutos de cada hora de cada dia
2) En el crontab del usuario Jose, 
    agregar una línea que ejecute el comando echo $USER > procedures/kick.txt 
    (agregar el path completo) en la hora 18 de cada día de cada hora
3) En el crontab general del sistema, 
    agregar una línea que ejecute el comando free -m como el usuario Mariano 
    en el minuto 15, 30, 45 de las horas 6, 12 y 18 el dia Lunes de cada mes
4) En el crontab general del sistema, 
    agregar una línea que ejecute el comando df -h como el usuario Jose 
    cada minuto entre las 15:30 y las 15:35 el día 17 del mes.

IMPORTANTE: Realizar una copia del home de los usuarios que creamos 
ya que los vamos a eliminar y eliminar su home, 
necesitaran los archivos para el entregable.

5) Crear el archivo /tmp/usuarios-eliminados.txt
*   a) Logueado como cada usuario, realizar el comando echo $USER >> /tmp/usuarios-eliminados.txt
6) Automatizar la eliminación de los usuarios con el comando AT:
*   a) Eliminar el usuario Jose y su home en 5m
*   b) Eliminar el usuario Luis y su home en 10m
*   c) Eliminar el usuario Mariano y su home en 15m


    **ENTREGABLE** 

Se esperan los archivos:
    Instructivo
    Directorio home de cada usuario (Mariano, Jose y Luis) junto a sus archivos
    Crontab del usuario Mariano (crontab-mariano.txt)
    Crontab del usuario Jose (crontab-jose.txt)
    Crontab General del sistema (crontab-general.txt)

Recuerden seguir las instrucciones al pie de la letra para los entregables.
    Paara esta entrega se espera que sepan realizar un instructivo
    en un formato optimo y legible
    https://www.instructables.com/How-to-make-a-great-Instructable/
    https://geekflare.com/es/user-manual-software/
### Certificacion LPI - Fase 1 - Módulo 5 

#### 106.2: Escritorios gráficos 

Peso: 1   ( importancia para examen LPI   del 1 al 6).


Descripción:

Los alumnos deberían tener un conocimiento conceptual de 
los escritorios de Linux principales.
Además, deberían tener un conocimiento conceptual de 
los protocolos usados para acceder a las sesiones de escritorio remoto.
Temas cubiertos de LPI en este módulo

Áreas Claves de Conocimiento
● Concepto de los `escritorios de Linux` principales.
● Concepto de los protocolos de `sesiones de escritorio remoto`.

Términos y herramientas
● `KDE`
● `Gnome`
● `Xfce`
● X11
● XDMCP
● VNC
● Spice
● RDP

####  106.3: Accesibilidad

Peso: 1  ( importancia para examen LPI   del 1 al 6).

Descripción:

Los alumnos deberían demostrar que conocen
y están al tanto de las tecnologías de almacenamiento.

Áreas Claves de Conocimiento
● Conocimiento básico de `configuraciones y temas visuales`.
● Conocimiento básico de `tecnología de asistencia`.

Términos y herramientas

● Alto contraste/Temas de escritorio con letra grande.
● Lector de pantalla.
● Pantalla Braille.
● Lupa de pantalla.
● Teclado en pantalla.
● Teclas pegajosas/Teclas repetitivas.
● Teclas lentas/Rechazo de teclas/Alternar teclas.
● Teclas como mouse.
● Gestos.
● Reconocimiento de voz.

####  204.3: Gestor de Volúmenes Lógicos

Peso: 3   ( importancia para examen LPI   del 1 al 6).

Descripción:
Los candidatos deberían ser capaces de `crear y eliminar` 
`volúmenes lógicos`, grupos de volúmenes, y `volúmenes físicos`. 
Este objetivo incluye `instantáneas` y `redimensionar` volúmenes lógicos.

Áreas Claves de Conocimiento
● Herramientas en la suite LVM.
● Redimensionar, renombrar y eliminar volúmenes lógicos, 
   grupos de volúmenes, y volúmenes físicos.
● Crear y mantener instantáneas.
● Activar grupos de volúmenes.

Términos y herramientas
● /sbin/pv*
● /sbin/lv*
● /sbin/vg*
● mount
● /dev/mapper/
● lvm.conf

####  206.2 Operaciones de backup
Peso: 3   ( importancia para examen LPI   del 1 al 6).

Los candidatos deberían ser capaces de usar las técnicas 
de `clave pública` para `asegurar los datos y las comunicaciones`.

Descripción:
Los candidatos deberían ser capaces de usar las
herramientas para realizar copias de respaldo de
los datos del sistema importantes.
Este tópico pertenece al examen LPIC-2 201.

Áreas Claves de Conocimiento
● Saber que directorios tienen que ser incluidos en las copias de seguridad.
● Estar al tanto de las soluciones de copias de respaldo 
  tales como `Amanda, Bacula y BackupPC`.
● Saber los beneficios y desventajas de 
  las cintas, `CDR`, discos u otro medio de `copia de seguridad`.
● Realizar copias de respaldo parciales y manuales.
● Verificar la integridad de las copias de respaldo.
● Restaurar parcial o totalmente copias de seguridad.

Términos y herramientas

● /bin/sh
● dd
● tar
● /dev/st* y /dev/nst*
● mt
● rsync

###  Entornos y Acceso remoto


#### Escritorios Gráficos

    ● KDE
    ● GNOME
    ● XFCE

**KDE**

KDE es en realidad un `equipo` internacional que desarrolla software libre, 
uno de sus proyectos es `Plasma` altamente personalizable. 
Está basado en las `librerías Qt`

**GNOME**

Este entorno de escritorio que se propone ser amigable para los usuarios finales 
y posee una configuración minimalista. GNOME usa las librerías GTK.

**XFCE**

XFCE usa las librerías GTK, pero se propone ser un escritorio 
con` bajo consumo de recursos` sin perder por eso amigabilidad.

##### startx Gestor de pantallas

Si bien se puede lanzar un entorno gráfico con el `comando startx`, 
para instalaciones de escritorio o estaciones de trabajo 
es más común usar un gestor de pantallas o `Display Manager  (DM)`.
Existen varios display managers, veamos la tabla de la derecha:


● **xdm** 
Es el display manager `más antiguo` y, por ello, 
el visualmente más rudimentario de todos.

● **kdm**
Era el gestor de pantallas predeterminado de KDE, 
hasta ahora, que está siendo desplazado por SDDM.

● **gdm** 
Es un gestor de pantallas escrito desde cero
que no tiene código en común con XDM.

● **lightdm**
`Light Display Manager `oporta diferentes entornos de escritorio,
consume relativamente `poca memoria`, 
soporta diferentes tecnologías de pantallas.

**sddm** 
Es el display manager predeterminado del proyecto KDE Plasma 5 para Wayland*.
(*) Wayland es un protocolo alternativo a X Window System.


##### lightdm

**Instalación de lightdm**

En CentOS 7 se puede instalar mediante:
```sh
[CentOS]:$  yum install lightdm
```

**Configurar LightDM**

Los archivos y subdirectorios de configuración
están en el directorio `/etc/lightdm`:

```sh
[CentOS]:$ ls etc/lightdm
keys.conf   lightdm.conf    lightdm.conf.d
lightdm-kde-greeter.conf     users.conf
```

El archivo de configuración principal es el denominado `lightdm.conf`, 
a la derecha vemos un resumen del mismo:

```sh 
[CentOS]:$ cat etc/lightdm/lightdm.conf

[LightDM]
minimum-vt=1
user-authority-in-system-dir=true
[SeatDefaults]
xserver-command=X -background none
greeter-session=lightdm-greeter
session-wrapper=/etc/X11/xinit/Xsession
[XDMCPServer]
# Cambiar de false a true para habilitar XDMCP
>enabled=false
>port=177
[VNCServer]
# Cambiar de false a true para habilitar VNC
>enabled=false
>command=Xvnc
>port=5900
```

**Ubuntu** usa Gnome como interfaz, 
asi que `no tiene lightdm` instalado por defecto sino `gdm`  por defecto

```sh
[osboxes@osboxes]:~$ cat /etc/gdm3/custom.conf 
# GDM configuration storage
# See /usr/share/gdm/gdm.schemas for a list of available options.

[daemon]
# Uncomment the line below to force the login screen to use Xorg
#WaylandEnable=false
#####  (...salida recortada ...) ##########################################
```
```sh
[osboxes@osboxes]:~$  systemctl status lightdm
Unit lightdm.service could not be found.

[osboxes@osboxes]:~$  locate lightdm
/snap/gtk-common-themes/1519/share/themes/Greybird/gtk-3.0/apps/lightdm-unity-greeter.css
/snap/gtk-common-themes/1519/share/themes/Greybird-dark/gtk-3.0/apps/lightdm-unity-greeter.css
/snap/gtk-common-themes/1535/share/themes/Greybird-dark/gtk-3.0/apps/lightdm-unity-greeter.css
/usr/share/lightdm                          #  
/usr/share/lightdm/lightdm.conf.d          
```

LinuxMint con Xfce,  si trae Lightdm por defecto

```sh
[ariel-All-Series]:$  systemctl status lightdm.service 
● lightdm.service - Light Display Manager
     Active: active (running) since Sat 2024-10-19 21:38:38 -03; 2h 16min ago

[ariel-All-Series]:$  locate lightdm.conf
/etc/init/lightdm.conf
/etc/lightdm/lightdm.conf.d
/etc/lightdm/lightdm.conf.d/70-linuxmint.conf

[ariel-All-Series]:$  cat /etc/lightdm/lightdm.conf.d/70-linuxmint.conf 
[SeatDefaults]
user-session=xfce
```

Guarda muchas similitudes con otros display managers
(configuración del greeter y la manera en que se ejecuta X). 
Además tiene secciones para la `configuración del acceso remoto`
(`XDMCPServer` y `VNCServer`). 
El aspecto de `LightDM` se puede realizar editando el archivo
`lightdm-kde-greeter.conf`.

Además, LightDM posee una opción muy interesante para probarlo, la cual es:

```sh
> lightdm --test-mode
```

De esta manera, podemos probar el Display Manager sin salir de la sesión.

**Servicio lightdm:**

Se habilita y deshabilita como cualquier otro servicio en system :

```sh
> systemctl sttus   lightdm        # Revisar:
> systemctl start   lightdm        # Arrancar:
> systemctl enable  lightdm        # Habilitar:
> systemctl disable lightdm        # Deshabilitar:
> systemctl stop    lightdm        # Detener:
```

#### Acceso remoto

##### XDMCP como cliente

XDMCP : `X Display Manager` Control Protocol
Supongamos que tenemos un `servidor XDMCP`
con dirección` IP 192.168.91.1` en ese caso el
comando para usar desde el cliente sería:

```sh
X -query 192.168.91.1
```
Hay que tener en cuenta que la conexión sería sin cifrar, 
por lo tanto, al utilizarlo en producción
sería conveniente usar un `túnel SSH`, para proporcionar mayor seguridad.

```sh
[ariel-All-Series]:$ X -query ***.***.***.***
/usr/lib/xorg/Xorg.wrap: Only console users are allowed to run the X server

[ariel-All-Series]:$ sudo X -query ***.***.***.***
(EE) 
Fatal server error:
(EE) Server is already active for display 0
	If this server is no longer running, remove /tmp/.X0-lock and start again.

[ariel-All-Series]:$ sudo X -help 
use: X [:<display>] [option]
-a #                   default pointer acceleration (factor)
-ac                    disable access control restrictions
-audit int             set audit trail level

#  THIS RUINED DISPLAY :   sudo X :1 -query ***.***.***.***
#  I clearly don't any idea how this works
```
https://en.wikipedia.org/wiki/X.Org_Server


##### VCN

VNC (Virtual Network Computing) parmite  acceso a un escritorio remoto .
El software `TigerVNC` ofrece tanto un `componente cliente` como `servidor`. 

Este último `se puede lanzar` como usuario `sin privilegios de root`.
En algunos casos es necesario ajustar el archivo  `~/.vnc/xstartup`,

en el siguiente ejemplo estaría lanzando una sesión 
del entorno de escritorio XFCE al conectarse:

```sh
#!/bin/sh
unset SESSION_MANAGER
unset DBUS_SESSION_BUS_ADDRESS
vncconfig -nowin &
exec dbus-launch xfce4-session
```

Hay que ejecutar el `comando vncpasswd` para setear la contraseña de acceso 
y luego lanzar el proceso de servidor:

```sh
vncserver --localhost no :1
```
Y suponiendo que el servidor vnc tiene IP 10.0.0.1, 
desde el cliente ejecutar: 

```sh
vncviewer 192.168.79.38:5901
```

Tal como muestra la captura de pantalla, 
la conexión no está cifrada, por lo tanto es `insegura`, 
es recomendable usar un `túnel ssh` para asegurarla.

##### RDP

`RDP` (Remote Desktop Protocol) es un protocolo que se usa principalmente 
para acceder a `sistemas operativos Microsoft Windows`, 
sin embargo existe una implementación libre que se puede instalar en Linux.
Existen varias herramientas gráficas que sirven para acceder de manera remota,
una de ellas es `Remmina` la cual soporta `varios protocolos`.

##### Spice

Otro protocolo es `Spice` 
(Simple Protocol for Independent Computing Environments) 
que se usa principalmente para acceso al escritorio de `máquinas virtuales` 
tanto de manera local como remota.


● 106.2 Lesson 1: 106.2 Lesson 1.
● Xrdp by neutrinolabs: http://xrdp.org/.
● Proyecto SPICE: Spice-Space.org.
● TigerVNC: TigerVNC.
● Screen access to any PC: Remmina.


### Accesibilidad 


Introducción a accesibilidad

En este tópico vamos a explicar las diferentes
herramientas que existen para personas con
capacidades diferentes.


Demostración y uso de programas de accesibilidad
Para apoyar a una fuerza laboral diversa, es
necesario estar familiarizado con la forma de
configurar la accesibilidad en la configuración
de sistemas Linux. El software de asistencia para
los usuarios con capacidades diferentes se puede
clasificar así:

● Herramientas de teclado para las personas con dificultades para tipear.
● Herramientas de mouse para las personas con dificultades para usar el mouse.
● Los lectores de pantalla para las personas ciegas o con baja visión.
● Lupas de pantalla para personas para visualizar bien la pantalla.
● Los dispositivos Braille (dispositivos con caracteres braille) 
para personas ciegas o con baja visión.
● Temas de escritorio de alto contraste para personas con dificultades visuales.


Todas estas herramientas y/o configuraciones 
(a excepción de los dispositivos Braille que se trata de hardware) 
están disponibles en los entornos de escritorios más usados 
tales como GNOME y KDE Plasma.
Es recomendable en estos casos usar una distribución actualizada 
y orientada a usuarios finales y estaciones de trabajo.


Vamos a empezar por mirar el uso de AccessX
para proporcionar accesibilidad del teclado.
La mayoría de distribuciones Linux incluyen una
variedad de herramientas de accesibilidad para
ayudar a los usuarios con impedimentos físicos
que hace que sea difícil para ellos usar un mouse
tradicional o el teclado. Una de las herramientas
que puedes utilizar se llama AccessX: Es una
aplicación incluida con la mayoría de entornos
de escritorio Linux, que permite configurar una
amplia variedad de palabras clave para el
ajustes de parámetros de accesibilidad.

Estos ajustes están diseñados para permitir a
usuarios con alguna discapacidad física, utilizar
un teclado tradicional. Se pueden configurar los
ajustes que veremos en la próxima pantalla.

#### Accesibilidad de teclado

StickyKeys Permite bloquear las teclas modificadoras, 
tales como CTRL y SHIFT. Esto les permite realizar

tareas de teclado con un solo dedo que normalmente requieren dos o más dedos.

MouseKeys Permite secuencias de teclas que se utilizan 
para mover el cursor del ratón sobre la pantalla

y enviar clics del ratón.

**SlowKeys**

Configura el teclado de manera que el usuario debe 
presionar una tecla durante un período
determinado de tiempo, antes de que la combinación de teclas sea enviada. 
Esto ayuda al usuario a evitar el envío de pulsaciones accidentales.

`ToggleKeys` Emite una alerta sonora si bien la tecla Bloq Mayús 
o el núm de bloqueo está activada.

`RepeatKeys` Configura el teclado para dar tiempo a los usuarios 
de pulsar más de una vez, antes de enviarmúltiples secuencias de teclas.

`BounceKeys `y Delay Keys Inserta un ligero retraso entre pulsaciones de teclas,
para evitar que el teclado envíe pulsaciones de teclas involuntarias.


Si bien los conceptos que podemos extraer de
AccessX son muy útiles, el proyecto tiene unos
cuantos años de inactividad.
Para los usuarios con impedimentos físicos para
utilizar un teclado tradicional, Linux ofrece la
opción de utilizar un teclado en pantalla
(GNOME viene con uno ya incorporado). Los
teclados en pantalla permiten a los usuarios
utilizar cualquier dispositivo señalador (como un
ratón) para seleccionar las teclas de un teclado
virtual. Comúnmente utilizados en aplicaciones
de pantalla de teclado incluyen xkbd, kvbd, etc.

Los entornos de escritorios principales tienen la
manera de configurar opciones de Accesibilidad,
por ejemplo en Plasma de KDE, podemos en
Preferencias del Sistema. Allí encontraremos
varias secciones:

**Accesibilidad de mouse**

Funcionalidad Ayuda a las personas que tienen
 
dificultad para:  Timbre Oir.

Teclas modificadoras: Teclas adhesivas  Presionar varias teclas almismo tiempo.

Teclas modificadoras: Teclas de bloqueo Presionar una tecla una solavez.

Filtros de teclado: Teclas lentas Evitar tipear accidentalmente una tecla.

Filtros de teclado: Teclas de rechazo

Evitar tipear accidentalmente múltiples teclas.

Lector de pantalla Ver y/o leer.


Una opción disponible para usuarios con
discapacidad visual es un lector de pantalla.
Los lectores de pantalla “leen” el texto que
aparece en la pantalla de forma audible para
el usuario. Algunos lectores de pantalla pueden
utilizar su placa de sonido del ordenador,
mientras que otros requieren hardware especial
sintetizador de voz.

La aplicación Orca es probablemente el lector
de pantalla libre más utilizado. A diferencia de
muchos otros lectores de pantalla, Orca puede
leer el texto desde el escritorio de GNOME y
también desde Plasma. Muchos otros lectores
de pantalla, como Emacspeak, sólo trabajan con
pantallas de terminales basadas en texto.
Orca también incluye opciones de magnificación
de pantalla.

#### Lector de pantalla Orca

Configuración General
En la pestaña General se puede configurar:
● Distribución de teclado: determinar si se
usará un equipo de escritorio o una notebook.
● `Ratón`: comportamiento cuando el movimiento
del puntero activa consejos en pantalla o los
objetos del bajo del mismo.
● `Actualización de barras de progreso`:
comportamiento del lector y de la pantalla
braille cuando existan barras de progreso.

● `Fecha y hora`: como se leerá la fecha y la hora.
● Perfiles: mantener y usar varias configuraciones.
● Hablar todo: habilita la lectura de pantalla
desde la ubicación actual hasta el final.


**Voz**
● `Tipo de voz`: aplicar voces distintas de acuerdo al contexto.
● Sistema de voz: el software que envía el texto al sintetizador.
● Sintetizador de voz: el software que se encarga de hablar.
● Idioma: el idioma de la voz.
● Persona: elegir la voz del lector.
● Estilo de capitalización: el estilo de capitalización que usará el sintetizador.

● `Velocidad, tono, volumen`: más opciones de personalización de la voz.
● Configuración global de la voz: el manejo de las pausas; 
palabras con mayúsculas y minúsculas; y de los números.


**Lee**
● Activar Lee: para habilitar/deshabilitar el sintetizador de voz.
● Cantidad de información: el nivel de detalle en la lectura.
● Nivel de puntuación: con qué detalle se leerán los signos de puntuación.
● Contexto hablado: información adicional sobre elemento seleccionado.

Los usuarios de Linux con alguna discapacidad
visual también pueden utilizar los dispositivos
de Braille. Existen varios tipos de herramientas
Braille. Para interactuar con este tipo de
dispositivos, el sistema Linux debe estar
ejecutando el demonio de brltty.
La utilidad Orca que hemos estado trabajando
se puede utilizar para trabajar con dispositivos
Braille. Orca se puede activar/desactivar usando
el atajo de teclado Alt + Tecla Window + s, o
bien abrirlo desde consola con el comando orca.

Podemos lanzar el siguiente comando para
configurar Orca:

````sh
> orca --setup
````

⠛ ⠝ ⠕ ⠍

#### Pantalla Braille

● Activar Soporte Braille: configurar Orca para utilizar una pantalla Braille.
● Configuración de Pantalla:
aquí en Activar Braille contraído se puede usar una terminal Braille contraída.
● Configuración de mensajes temporales: opciones para mensajes temporales.
● Cantidad de información: configurar Orca para utilizar una pantalla Braille.

● Indicador de selección: 
cómo el texto seleccionado en la pantalla aparecerá subrayada
en la línea Braille.
● Indicador de hiperenlace: 
cómo el hipertexto en la pantalla aparecerá subrayada en la línea Braille
● Enable Braille Support: 
configurar Orca para utilizar una pantalla Braille.
Seleccione Aceptar para guardar los cambios 
en la configuración de Orca Braille.


Eco de teclas
● Activar eco de teclas: qué teclas pulsadas se leerán.
● Activar eco por carácter: si queremos que el
lector mencione los caracteres tipeados como texto.
● Activar eco por palabras: si queremos que
el lector mencione las palabras tipeadas.
● Activar eco por frases: si queremos que el
lector mencione las oraciones tipeadas.

Atajo de teclado
● Teclas modificadoras del Lector de pantalla:
Aquí se puede elegir la tecla que servirá para
realizar atajos dentro de Orca. Además, hay
una lista de combinaciones de teclas
disponibles con una determinada acción vinculada.

Pronunciación
● Diccionario de pronunciación: Aquí podemos
modificar el comportamiento del sintetizador.
Por ejemplo: podríamos configurar para que
cuando encuentre “FYI” en lugar de leerlo
literalmente, diga “Para tu información”.


Atributos de texto
Aquí se puede definir de qué modo el lector
(y eventualmente un dispositivo Braille) se
comportará frente a ciertos atributos de texto.
Por ejemplo: estilos de párrafos, subrayado,


### Gestión de Volúmenes Lógicos

**Device Mapper**

En Linux el` LVM` se basa en un concepto
denominado Device Mapper: es una rutina del
kernel que permite mapear un dispositivo de
bloques a otro, mediante la interfaz de
aplicación ioctl.

Consideremos el siguiente ejemplo del comando
dmsetup: vemos que los volúmenes lógicos
`/dev/mapper/centos-swap` y` /dev/mapper/root`
tienen como target la partición `/dev/sda2.`
Otro target es el dm-raid que sirve como puente
de un Device Mapper a un RAID.

```sh
> dmsetup ls --tree
    centos-swap (253:0)
    └─ (8:2)
    centos-root (253:1)
    └─ (8:2)

> ls -l /dev/ | tr -s " " | grep "8, 2"
brw-rw---- 1 root disk 8, 2 ago 20 23:06 sda2

> fdisk -luc | grep sda2
/dev/sda2 1026048 16777215 7875584 8e Linux LVM
```


La organización de un LVM es como
se muestra en el diagrama :

    ╔==================================╗
    ║ ┌-----------┐     ┌-----------┐  ║
    ║ | /dev/sda1 |     | /dev/sdb1 |  ║
    ║ | PV 1      |     |  PV 3     |  ║
    ║ | /dev/sda2 |     └-----------┘  ║
    ║ | PV 2      |      Volumen       ║
    ║ └-----------┘      Lógico 2      ║
    ║  Volumen                /var     ║
    ║  Lógico 1                        ║
    ║      /usr                        ║
    ╚==================================╝
                    VG 1

#### Componentes de la anatomía de un LVM:

● Volume Group    (VG)
● Physical Volume (PV)
● Logical Volume  (LV). 


**Organización de un LVM**

**Volume Group (VG)**
Un VG o un Grupo de Volúmenes podemos
pensarlo como una determinada cantidad
discreta de espacio disponible para crear
volúmenes lógicos (LVs).

**Physical Volume (PV)**
Un PV o un Volumen Físico, son las unidades
físicas que constituyen un VG. Una partición
puede ser convertida en PV. Cada PV tiene
una Physical Extent (PE), podríamos hacer una
analogía de una PE con bloque de un disco. El
tamaño mínimo que puede tener un LV está
dado por el PE.

**Logical Volume (LV)**
Un LV o Volumen Lógico es el equivalente a una
partición común en los esquemas MBR o GPT.
Cada LV tiene una Logical Extent (LE) que es
igual al PE del PV.

**Creación de PVs**
Antes de poder crear un VG tenemos que crear
uno o más PVs. Un PV se arma a partir de una
partición. Es decir, tenemos que indicar que la
partición es de tipo LVM. Entonces usaremos el
fdisk para este caso. Crearemos dos PVs.
Veamos el código de la próxima pantalla.

#### Creación de un VG

```sh
> fdisk /dev/sdg
Welcome to fdisk (util-linux 2.23.2).

Device does not contain a recognized partition table
Building a new DOS disklabel with disk identifier `0x16d6d0f6`.

Orden (m para obtener ayuda): n
    Partition type:
        p primary (0 primary, 0 extended, 4 free)
        e extended
    Select (default p): p
        Número de partición (1-4, default 1): 1
        Primer sector (2048-8388607, valor predeterminado 2048):
               Se está utilizando el valor predeterminado 2048
        Last sector, +sectors or +size{K,M,G} (2048-8388607, 
                               valor predeterminado 8388607):
        Partition 1 of type Linux and of size 4 GiB is set

Orden (m para obtener ayuda): t
    Selected partition 1
    Hex code (type L to list all codes): 8e
    Changed type of partition 'Linux' to 'Linux LVM'

Orden (m para obtener ayuda): p
    Disk /dev/sdg: 4294 MB, 4294967296 bytes, 8388608 sectors
    Units = sectors of 1 * 512 = 512 bytes
    Sector size (logical/physical): 512 bytes / 512 bytes
    I/O    size (minimum/optimal) : 512 bytes / 512 bytes
    Disk label type: dos
    Identificador del disco: `0x16d6d0f6`
    Disposit. Inicio Comienzo Fin Bloques Id Sistema
    /dev/sdg1 2048 8388607 4193280 8e Linux LVM

Orden (m para obtener ayuda): w
    ¡Se ha modificado la tabla de particiones!
    Llamando a ioctl() para volver a leer la tabla de particiones.
    Se están sincronizando los discos.
```

Con el disco `/dev/sdh` hacemos el mismo procedimiento.
Se puede crear una `partición de tipo LVM` que ocupe todo
el disco de manera interactiva del siguiente modo:

Aquí creamos una partición que ocupa todo el disco, 
pero podríamos haber creado más de una partición de tipo LVM.


```sh
> fdisk /dev/sdh < <(echo -e 'd\nn\np\n1\n\n\nt\n8e\nw')
```


Entonces nos quedan dos particiones, `/dev/sdg1` y `/dev/sdh1` 
que usaremos como PVs de la siguiente manera:

Ahora sí, con los PVs podemos armar nuestro VG:

```sh
> pvcreate /dev/sd[gh]1
Physical volume "/dev/sdg1" successfully created
Physical volume "/dev/sdh1" successfully created

> vgcreate sergio /dev/sd[gh]1
Volume group "sergio" successfully created
```

**Creación de volúmenes lógicos**

Recién cuando se ha creado un VG podemos
crear volúmenes lógicos que serían como las
particiones en un disco tradicional.

Crearemos un LV más de 5G:

Mappeo de sergio-lv1 y sergio-lv2:
```sh
> lvcreate --size 4G --name lv1 sergio
Logical volume "lv1" created

> lvcreate --size 4G --name lv2 sergio
Logical volume "lv2" created
```

Vemos el resultado de los últimos comandos:


```sh
> mkfs.xfs /dev/mapper/sergio-lv1
meta-data=/dev/mapper/sergio-lv1   isize=256   agcount=4, agsize=262144 blks=                              sectsz=512  attr=2, projid32bit=1 
                                   crc=0
data     =                         bsize=4096  blocks=1048576, imaxpct=25
         =                         sunit=0     swidth=0 blks
naming   =version 2                bsize=4096  ascii-ci=0 ftype=0
log      =internal                 bsize=4096  blocks=2560,   version=2
         =                         sectsz=512  sunit=0 blks,  lazy-count=1
realtime =none                     extsz=4096  blocks=0,      rtextents=0
```

```sh
> mkfs.ext4 /dev/mapper/sergio-lv2
mke2fs 1.42.9 (28-Dec-2013)
Etiqueta del sistema de ficheros=
OS type : Linux
Tamaño del bloque   =4096 (bitácora=2)
Tamaño del fragmento=4096 (bitácora=2)
Stride=0 blocks, Stripe width=0 blocks
327680 inodes, 1310720 blocks
65536  blocks (5.00%) reserved for the super user
Primer bloque de datos=0
Número máximo de bloques del sistema de ficheros=1342177280
40 bloque de grupos
32768 bloques por grupo, 32768 fragmentos por grupo
8192 nodos-i por grupo
Respaldo del superbloque guardado en los bloques:
    32768, 98304, 163840, 229376, 294912, 819200, 884736

Allocating group tables: hecho
Escribiendo las tablas de nodos-i: hecho
Creating journal (32768 blocks): hecho
Escribiendo superbloques y la información contable del sistema de ficheros: hecho
```

Finalmente tenemos que activar el VG para comenzara usar los LVs:

```sh
> vgchange -a y sergio
2 logical volume(s) in volume group "sergio" now active
```

Ahora posdemos montar los LVs:

```sh
> mount /dev/mapper/sergio-lv1 /lv1
> mount /dev/mapper/sergio-lv2 /lv2
```


### Más operaciones con Volúmenes Lógicos



#### Agrandar un LV

Una de las características más ventajosas de un LVM es que
si hay espacio disponible en el VG se puede agrandar un LV.
Cambiar de tamaño volúmenes lógicos

```sh
[root@centos7 ~] :  lvs sergioexample/lv1
LV VG Attr LSize Pool Origin Data% Move Log Cpy%Sync Convert
lv1 sergioexample -wi-ao---- 1,00g

[root@centos7 ~] :  lvresize -r -L+2G sergioexample/lv1
Extending logical volume lv1 to 3,00 GiB
Logical volume lv1 successfully resized
resize2fs 1.42.9 (28-Dec-2013)
Filesystem at /dev/mapper/sergioexample-lv1 is 
   mounted on /lv1; on-line resizing required
old_desc_blocks = 1, new_desc_blocks = 1
The filesystem on /dev/mapper/sergioexample-lv1 
   is now 786432 blocks long.

[root@centos7 ~] :  lvs sergioexample/lv1
LV VG Attr LSize Pool Origin Data% Move Log Cpy%Sync Convert
lv1 sergioexample -wi-ao---- 3,00g
```

Notar que:
```sh
    lvresize -r -L+2G sergioexample/lv1`
```
No es lo mismo que:
```sh
    lvresize -r -L2G sergioexample/lv1
```

La primera sentencia le suma 2G, mientras que

la segunda lo establece en 2G. Es una sutil pero
importante diferencia.

● La opción `-r` se vale de `fsadmin` para
redimensionar online el sistema de archivos.

● Otra opción es usar el comando `lvextend` 
y luego la herramienta apropiada para agrandar el sistema de archivos.

#### Reducir el tamaño de un LV

Para esta tarea hay que tomar más recaudos,
ya que esta tarea implica reducir el tamaño del
sistema de archivos dentro el LV.

Por lo tanto, hay que desmontar el sistema de
archivos, en este caso es conveniente usar la
herramienta lvresize. Tomemos este ejemplo:

```sh
[root@centos7 ~] :  findmnt -T /lv2
TARGET SOURCE FSTYPE OPTIONS
/lv2 /dev/mapper/sergioexample-lv2 ext4 rw,relatime,data=ordered

[root@centos7 ~] :  lvs -v sergioexample/lv2
Using logical volume(s) on command line
LV VG #Seg Attr LSize Maj Min KMaj KMin Pool Origin Data% Meta% Move Cpy%Sync Log
Convert LV UUID LProfile
lv2 sergioexample 1 -wi-ao---- 1,00g -1 -1 253 2
QRtBVT-PJLu-fBVg-w0fd-5m3g-KVEN-tCRgZI

[root@centos7 ~] :  df -h /lv2
S.ficheros Tamaño Usados Disp Uso% Montado en
/dev/mapper/sergioexample-lv2 976M 313M 596M 35% /lv2
```

Ahora procedemos a redimensionar:

```sh
[root@centos7 ~] :  umount /lv2
[root@centos7 ~] :  lvresize -r -L600M sergioexample/lv2
fsck de util-linux 2.23.2
/dev/mapper/sergioexample-lv2: 8143/65536 files (0.2% non-contiguous), 92340/262144 blocks
resize2fs 1.42.9 (28-Dec-2013)
Resizing the filesystem on /dev/mapper/sergioexample-lv2 to 153600 (4k) blocks.
The filesystem on /dev/mapper/sergioexample-lv2 is now 153600 blocks long.
Reducing logical volume lv2 to 600,00 MiB
Logical volume lv2 successfully resized

[root@centos7 ~] :  e2fsck -f /dev/mapper/sergioexample-lv2
e2fsck 1.42.9 (28-Dec-2013)
Paso 1: Verificando nodos-i, bloques y tamaños
Paso 2: Verificando la estructura de directorios
Paso 3: Revisando la conectividad de directorios
Paso 4: Revisando las cuentas de referencia
Paso 5: Revisando el resumen de información de grupos
/dev/mapper/sergioexample-lv2: 8143/40960 files (0.2% non-contiguous), 90540/153600 blocks ...

[root@centos7 ~] :  mount /dev/mapper/sergioexample-lv2 /lv2
[root@centos7 ~] :  df -h /lv2
S.ficheros Tamaño Usados Disp Uso% Montado en
/dev/mapper/sergioexample-lv2 558M 312M 205M 61% /lv2

[root@centos7 ~] :  lvs -v sergioexample/lv2
Using logical volume(s) on command line
LV VG #Seg Attr LSize Maj Min KMaj KMin Pool Origin Data% Meta% Move Cpy%Sync
Log Convert LV UUID LProfile
lv2 sergioexample 1 -wi-ao---- 600,00m -1 -1 253 2
```

#### Uso de snapshots

Una snapshot de LVM sirve para capturar
el estado del sistema de archivos en un
determinado momento. Sirve por ejemplo,
para probar modificaciones en archivos de
configuración y en caso de problemas, volver
al estado anterior a dichos cambios.

El tamaño del snapshot está determinado por:

● El espacio libre en el VG.
● El tamaño que ocupa el sistema de archivos en el LV.
● El tamaño que tendrán las modificaciones
respecto al momento en que creamos la instantánea.
Si la instantánea llega al 100% del tamaño
asignado, la misma no funcionará.


Generación de una snapshot
Se crea con el comando lvcreate como se muestra
a continuación:

Hacer un backup de la instantánea
Si el sistema de archivos es xfs debe montarse con la opción nouuid.

```sh
[root@centos7 ~] :  lvcreate --size 100M --snapshot --name alfa /dev/mapper/sergioexample-lv2
umo Logical volume "alfa" created

[root@centos7 ~] :  mkdir /mnt/alfa
[root@centos7 ~] :  mount /dev/mapper/sergioexample-alfa /mnt/alfa
[root@centos7 ~] :  tar cJf alfa-$(date '+%F').tar.xz /mnt/alfa
```

El tarball generado se puede usar luego
para restaurar el estado de los archivos al
momento en que se hizo la instantánea.

Volver al estado en que se generó la instantánea
Otra manera de volver al punto en que se generó la
snapshot es con este comando:

Para que comience a hacer el merge tanto el LV de la
snapshot como el del LV de origen tienen que estar
activos y sus sistemas de archivos desmontados. Como
se puede apreciar además, el LV correspondiente a la
instantánea se borra al terminar la combinación.

```sh
[root@centos7 ~] :  lvconvert --merge /dev/mapper/sergioexample-alfa
Merging of volume alfa started.
lv2: Merged: 99,9%
lv2: Merged: 100,0%
Merge of snapshot into logical volume lv2 has finished.
Logical volume "alfa" successfully removed
```

Crear snapshots en el sistema de archivos raíz
En ese caso debe agregarse el módulo dm_snapshot al
initramfs, de lo contrario fallará al arrancar. Se debe
usar` mkinitrd, mkinitramfs o dracut`, como se muestra a continuación:

```sh
[root@centos7 ~] : dracut --add-drivers dm-snapshot.ko /boot/initramfs-sergio.img
```

#### Configuración y administración

La configuración, salvo que realmente se
justifique, no se necesita cambiar y se puede ver
con el comando siguiente:
[root@centos7 ~] :  lvm dumpconfig | less

La configuración está determinada por los
siguientes factores de preeminencia:
● Opción --config en la línea de comandos.
● Perfiles (Están alojados en /etc/lvm/profiles).
● Etiquetas por host (útil para un cluster).
● Archivo `/etc/lvm/lvm.conf`.


#### Recuperar un LVM borrado

Se puede recuperar un LVM reciente borrado de la
siguiente manera:

Este comando mostrará una lista de archivos de backups
de metadatos, veremos en el listado un archivo que tiene
lo que buscamos:
```sh
[root@centos7 ~] :  vgcfgrestore --list sergioexample

File: /etc/lvm/archive/sergioexample_00065-2109576959.vg
VG name: sergioexample
Description: Created *before* executing 'lvremove sergioexample/lv4'
Backup Time: Sat Aug 23 17:11:01 2014
```

Entonces recuperamos los metadatos:

Resta ahora solamente activar el volumen:
```sh
[root@centos7 ~] :  vgcfgrestore -v -f /etc/lvm/archive/sergioexample_00065-2109576959.vg
sergioexample Restored volume group sergioexample

[root@centos7 ~] :  lvchange -a y /dev/mapper/sergioexample-lv4
Tabla de comandos lvm
```

Fuentes y más recursos

    ● LVM - ArchWiki.
    ● How to configure LVM on Arch Linux 2017.
    ● Configurar y extender Linux Logical Volume Manager.


### GPG:  encriptacion y claves 

#### GnuPG  ( GNU Pass Gen )

En agosto de 1996 D. Atkins, de MIT; W. Stallings,
de Comp-Comm Consulting y P. Zimmerman, 
de Boulder Software Engineering 

escribieron una RFC ( Request for Comments) 
sobre `PGP` (`Pretty Good Privacy`). 

Estos servicios proporcionaban en relación firma digital, 
`confidencialidad`, `compresión` y `conversión` en base 64 
de archivos de mensajes y de datos.

Poco más de 10 años después J. Callas, de PGP
Corporation; L. Donnerhacke, de IKS GmbH; H.
Finney, de PGP Corporation; D. Shaw y R. Thayer
publicaron una actualización para lo que ya se
conocía como OpenPGP.

`GnuPG` es una implementación completa y libre
del estándar OpenPGP y proporciona además,
una herramienta de línea de comandos con
características para la fácil integración con otras
aplicaciones.



#### Tipos de cifrado

##### Cifrado simétrico

Es el más antiguo. Un ejemplo sencillo es el siguiente: 
supongamos que tenemos el siguiente mensaje, 
el cual queremos enviar a un destinatario: `“Hola Mundo”`. 

Podríamos reemplazar cada consonante por la que le sigue
y reemplazar cada vocal por un número, 
entonces nos queda: `"I4m1 N5oe4"`.

La persona que lo recibe debería saber qué método usamos 
para cifrar el mensaje, que consistiría en ejecutar 
exactamente `lo mismo` que hicimos nosotros pero a la `inversa`.

Por dicho motivo este tipo de cifrado se denomina `simétrico`.
En la actualidad se usan algoritmos mucho más sofisticados para cifrar.
Sin embargo esta forma de cifrar tiene una importante `desventaja`: 
solamente se puede transmitir `mediante un canal seguro`.

Trasladado al ejemplo con GnuPG, esta herramienta es capaz de
cifrar mediante una clave secreta un archivo. 

Si deseamos enviarle dicho archivo a otro usuario, 
éste deberá conocer la clave que usamos.



##### Cifrado asimétrico

En el cifrado asimétrico, tanto el emisor como el receptor 
usan un método distinto para descifrar un mensaje, 
haciéndolo mucho más resistente
para transmitirlo `por un canal inseguro`.

El método para cifrado asimétrico que se emplea con GnuPG se llama `clave pública`.
Supongamos que tenemos a los usuarios Alice y Bob. Alice creará:

    ● Una clave privada.
    ● Una clave pública.

Cuando Bob quiera enviarle un mensaje 
lo cifrará mediante la clave pública de Alice. 
Dicho mensaje solamente se puede descifrar 
mediante la `clave privada` de Alice.

Este método, aunque un poco más complejo, 
es mucho más seguro y resistente para ser enviado por canales inseguros. 

El único recaudo que debetener Alice es que 
debe mantener su clave privada sin compartir.



##### Cifrado híbrido

GnuPG usa cifrado híbridas.
Por ejemplo, si Juan quiere enviarle a Pedro un archivo cifrado
necesitará la clave pública de Pedro.
GnuPG hará lo siguiente de manera transparente:

● Creará una clave de sesión para cifrar el archivo.
● Cifrará la clave de sesión con la clave pública de Pedro.

Pedro, al recibir el archivo cifrado, 
podrá descifrarlo con GnuPG, 
el cual hará lo siguiente de manera transparente:

● Usará la clave privada de Pedro para descifrar la clave de sesión.
● Usará la clave de sesión para descifrar el archivo.


####  firmas digitales ( Algoritmos )


**Cifrado Simetrico :**

    ● AES
    ● 3DES
    ● Blowfish

**Cifrado Asimetrico :**

    ● Elgamal
    ● RSA
    ● Hashes:
    ● MD5
    ● SHA-1 and -2
    ● RIPEMD-160

**Firmas Digitales :**

    ● DSA
    ● RSA

GPG utiliza muchos algoritmos de encriptación, 
incluyendo los siguientes:


GnuPG usa criptografía de clave pública para
que los usuarios puedan comunicarse de manera
segura. En un sistema de clave pública, cada
usuario tiene un par de claves consistiendo de
una clave privada y una clave pública.

Una clave privada se mantiene en secreto, no se
necesita revelar. La clave pública se puede entrar
a cualquiera con quien el usuario desee
comunicarse.

GnuPG usa un esquema algo más sofisticado en
el que un usuario tiene un par de claves primario
y luego cero o más pares de claves subordinadas
adicionales. Los pares primarios y subordinados
se empaquetan para facilitar la gestión de claves.


#### Sistemas de claves públicas

Para poder entender mejor el sistema de
codificación usado por los sistemas de claves
asimétricas (ie. claves públicas y privadas), es
necesario entender las diferencias con los
sistemas de claves simétricas (ie. claves secretas).

Como se mencionó previamente, los sistemas de
cifrado con clave simétrica son aquellos en los
que la clave que se usa para cifrar una serie de
datos, es la misma que la que se usará para
descifrar estos datos.

En el caso del correo electrónico, el remitente
cifraría el mensaje con una clave secreta, y para
que el destinatario pueda descifrarlo, necesitaría
haber obtenido previamente esta misma clave de
un modo «seguro», o sea de modo que la clave no
haya podido ser interceptada durante la entrega.
Si no tenemos la completa seguridad de que el
intercambio de la clave ha sido seguro, la validez
de este sistema es nula.



Por el contrario, los sistemas de cifrado con
claves asimétricas usan claves distintas para el
cifrado y posterior descifrado de los datos.
En un caso como el anterior, el remitente usaría la
clave pública del destinatario para cifrar el
mensaje, y el destinatario descifraría el mensaje
con su propia clave privada. Así pues, la clave
privada no debe ser accesible para nadie que no
sea el propio dueño de la misma, mientras que la
clave pública, puede ser entregada a cualquier
persona. En un sistema de cifrado bien
implementado, la clave privada no debe derivar
nunca de la clave pública.


El concepto de la firma digital se basa en la
verificación de la autoría de un mensaje. Esto
quiere decir que se puede comprobar que el
destinatario del mensaje puede comprobar que el
«supuesto» remitente es quien afirma ser. Para
ello, el remitente, una vez compuesto el mensaje,
lo firma usando su propia clave privada. El
destinatario, una vez recibido el mensaje,
comprobará la veracidad de éste, esto es, lo
verificará usando la clave pública del remitente.

Este método es de especial utilidad para reducir
riesgos de seguridad en nuestros sistemas (nos
podrían enviar un supuesto parche para un
programa, y éste en realidad ser un virus o un
troyano); también podrían enviarnos información
o datos, como provenientes de una fuente lícita o
fiable. En ambos casos, no sería muy difícil
falsificar la dirección y nombre del remitente, pero
sí imposible falsificar la firma digital de éste.

#### Firmas digitales

Como ya hemos dicho, la verificación de un
mensaje firmado digitalmente se lleva a cabo
mediante el uso de la clave pública del
remitente sobre el texto del propio mensaje. De
este modo no sólo podemos verificar la identidad
del autor, sino que también podemos comprobar
la integridad del mensaje, ya que la firma digital
ha sido generada con el texto y la clave privada.
Así pues, una alteración o modificación del texto
«a posteriori», o cualquier manipulación del
mensaje (especialmente si hacemos uso de las
especificaciones MIME/PGP), daría como
resultado un error en la verificación.


Un punto flaco en los algoritmos de clave
asimétrica es la transmisión del código público.
Es posible que una persona ponga en circulación
código con un identificador de usuario falso. Si se
codifican mensajes con este pseudo código, el
intruso los puede decodificar y leerlos.
La solución PGP (y por consiguiente la solución
GnuPG) está en firmar los códigos. La clave
pública de un usuario puede estar firmada con
las claves de otros usuarios.
Anillos de confianza

El objetivo de estas firmas es el de reconocer que
el UID (identificador de usuario) de la clave
pertenece al usuario a quien dice pertenecer.
A partir de ahí es un problema de cada usuario
de GnuPG el decidir hasta qué punto se puede
fiar de la firma.


Una clave se puede considerar fiable cuando se
confía en el remitente y cuando se sabe con
seguridad que dicha clave pertenece a éste. Solo
cuando se puede confiar plenamente en la clave
del firmante, se puede confiar en la firma que
acompaña a la clave de un tercero.
Para tener la certeza de que la clave es correcta
hay que compararla con la huella digital por
medio de canales fiables (por ejemplo, podríamos
llamarle por teléfono, y que nos la dijera de
palabra para poder compararla), antes de darle
una confianza absoluta.


Pero eso no significa que todo lo cifrado sea
seguro; si la NSA (Agencia de Seguridad
Nacional de los EE.UU.) hubiera conseguido
descodificar una clave PGP mediante
criptoanálisis, análisis del código, o cualquier otro
modo, no es probable que lo hicieran público.

#### Límites de seguridad

Si se desea mantener la confidencialidad de los datos que se poseen,
no basta con determinar qué algoritmo de cifrado se va a usar;
también es necesario pensar en la seguridad general del sistema.

En principio, PGP está considerado como `suficientemente seguro`, 
y hasta el momento no se sabe que haya habido ningún incidente 
en el que una clave PGP haya sido descodificada.

Pero aún en el caso de que las claves PGP fueran
a todas luces imposibles de decodificar, 
otros tipos de ataques a la seguridad pueden ser utilizados.

A principios de febrero fue detectado `un troyano` 
que buscaba las claves `PGP` en el disco duro, 
y las transfería al atacante mediante `FTP`. 

Si en este caso hubiéramos escogido una contraseña débil o fácil,
un simple análisis que consistiera en un `«ataque de diccionario»` 
la descubriría en poco tiempo.

Otra posibilidad técnica, aunque más difícil, es la
de los troyanos que recogen entradas de teclado
y las transmiten al asaltante. 
También es posible, aunque muy difícil, 
pasar el contenido de una pantalla a otra. 
En este último caso no sería necesario ningún análisis
sobre datos cifrados, ya que se obtendrían `«pre-cifrados»`.

Por todo esto es necesaria una planificación de la seguridad 
que esté bien prevista y que minimice los riesgos.


La idea no es la de recrear una atmósfera de
paranoia entre la gente, sino dejar claro que para
implementar un sistema seguro no basta con la
instalación de un programa criptográfico, que si
bien es un paso hacia un sistema más seguro, no
es una solución completa.
Troyanos como el aparecido en marzo de 1999
(Melissa) probaron que muchas compañías no se
encuentran preparadas en temas de seguridad.

### Uso de GnuPG 

#### Creación de claves

Lo primero que hay que hacer una vez que se tiene GnuPG instalado 
es crear nuestra clave pública y privada. 
Para hacerlo hay que usar el comando `gpg --gen-key`.

Usa `gpg --full-generate-key` para el diálogo completo de generación de clave.

```sh
$ gpg --gen-key
gpg (GnuPG) 2.2.12; Copyright (C) 2018 Free Software Foundation, Inc.
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
gpg: caja de claves '/home/educacionit/.gnupg/pubring.kbx' creada
```

GnuPG debe construir un ID de usuario para identificar su clave.

Es necesario generar muchos bytes aleatorios.
Es una buena idea realizar alguna otra tarea
(trabajar en otra ventana/consola, mover el ratón,
usar la red y los discos) durante la generación de
números primos. Esto da al generador de
números aleatorios mayor oportunidad de
recoger suficiente entropía.

En este momento aparecerán cuadros de diálogos 
para ingresar la `passphrase` y luego su confirmación:

```sh
    Nombre y apellidos: Sergio Belkin
    Dirección de correo electrónico:
    sbelkin@example.com
    Ha seleccionado este ID de usuario:
    "Sergio Belkin <sbelkin@example.com>"
    ¿Cambia (N)ombre, (D)irección o (V)ale/(S)alir? V
```


Y luego vamos a ver cómo genera la clave:

```sh
gpg: clave E12874DA0D8297CA marcada como de confianza absoluta
gpg: certificado de revocación guardado como
'/home/educacionit/.gnupg/openpgp-revocs.d/0C6AE5792E5A9A11A37
42ACEE12874DA0D8297CA.rev'
claves pública y secreta creadas y firmadas.
pub rsa3072 2021-01-29 [SC] [caduca: 2023-01-29]
0C6AE5792E5A9A11A3742ACEE12874DA0D8297CA
uid Sergio Belkin <sbelkin@example.com>
sub rsa3072 2021-01-29 [E] [caduca: 2023-01-29]
```

#### Ver claves públicas disponibles

Para ver las claves públicas que tenemos disponibles hay
que hacerlo con el comando gpg --list-keys. Esto lista las
claves que hay disponibles dentro del fichero pubring.gpg.

```sh
$ gpg --list-key
gpg: comprobando base de datos de confianza
gpg: marginals needed: 3 completes needed: 1 trust model: pgp
gpg: nivel: 0 validez: 1 firmada: 0 confianza: 0-, 0q, 0n, 0m, 0f, 1u
gpg: siguiente comprobación de base de datos de confianza el: 2023-01-29
/home/educacionit/.gnupg/pubring.kbx
------------------------------------
pub rsa3072 2021-01-29 [SC] [caduca: 2023-01-29]
0C6AE5792E5A9A11A3742ACEE12874DA0D8297CA
uid [ absoluta ] Sergio Belkin <sbelkin@example.com>
sub rsa3072 2021-01-29 [E] [caduca: 2023-01-29]
```

El identificador de las claves es lo que hayamos
metido en el nombre, en el apellido, en la
dirección de correo o el número que aparece
después del 1024D al hacer `gpg –list-keys`. Si
en algún caso coincide el ID, se mostrarán los que
coinciden.

#### Ver claves privadas disponibles

Para ver las claves privadas que tenemos disponibles hay
que hacerlo con el comando `gpg –list-secret-keys`. Esto
lista las claves que hay disponibles dentro del fichero
secring.gpg.


Se llama anillos a los archivos en los que se
guardan las claves públicas y privadas.
Generalmente donde se guardan las claves
públicas es el archivo pubring.gpg y en el que se
guardan las claves secretas secring.gpg.

#### Borrar claves de los anillos

Si se quiere borrar alguna clave primero hay que
borrar la clave privada y después la pública. Si se
intenta borrar primero la clave pública y ésta
tiene asociada una clave privada, da un mensaje
de error.


Para borrar claves privadas se hace con el
siguiente comando:

```sh
gpg –delete-secret-key ClaveID
```

Para borrar claves públicas se hace con el
comando a continuación:

```sh
gpg –delete-key ClaveID
```

#### Ver la huella de la clave

Las claves están identificadas por lo que se
llama huella. La huella es una serie de números
que se usa para verificar si una clave pertenece
realmente al propietario. Si se recibe una clave
podemos ver cuál es su huella y luego pedirle a
su propietario que nos diga su huella. Si ambas
coinciden la clave es correcta y no ha sido
manipulada. Si no fuera igual es que ha sido
modificada.

La huella es como el md5 que verifica que un
archivo no ha sido manipulado.



#### Exportar claves

Las claves se pueden exportar a ficheros para
que las podamos distribuir entre la gente que
queremos que nos encripte o firme cosas o bien
porque vamos a formatear el equipo y
necesitamos salvarlas.
Para exportar la clave pública se hace poniendo:


```sh
gpg –armor –output fichoeDeSalida –export ClaveID
```

Para exportar la clave privada se haría poniendo:
```sh
gpg –armor –output fichoeDeSalida –export-secret-key ClaveID
```

Si quisiéramos salvar todas las claves que tenemos valdría 
con copiar los archivos pubring.gpg y secring.gpg y luego 
cuando vayamos al nuevo equipo ponerlas en el directorio de GnuPG.

#### Importar claves

Si se quiere importar claves nuevas porque, por
ejemplo, hemos formateado el equipo y queremos
volver a tener nuestras claves, las importamos
con el comando gpg –import ClaveID.
En el apartado anterior se han salvado las claves
pública y privada, ahora vamos a importarlas.
Primero importamos la pública y luego la privada.


Ahora, si queremos importar la clave de una amigo, pues
se haría igual.

### RAIDS y JBOD

RAID es Rebundancia a fallos de Hardware de almacenamiento.
`NO ES BACKUP`, los backup se suelen hacer esporadicamente
A diferencia de un backup tradicional el `RAID opera en todo momento`
Nos permite que el Sisema/BaseDatos siga funsionando al fallar algun disco.

El Backup se usa `en conjunto` con RAID  para garantizar la robustez del sistema


https://aprendeit.com/crear-raid-en-linux-con-mdadm/
https://www.baeldung.com/linux/raid-intro
https://www.ionos.com/digitalguide/server/security/
https://www.seagate.com/la/es/products/nas-drives/raid-calculator/
https://www.diskinternals.com/raid-recovery/jbod-vs-raid/

**Qué es un RAID?**

Podemos definir un raid de discos como un grupo o matriz de discos independientes 
de hecho RAID es un acrónimo de `Redundant Array of Indepent Disks`.

Los discos se unifican mediante software o hardware para redundar datos 
y/o utilizar toda la capacidad de cada disco en conjunto. 
 
Esto será más fácil de entender cuando definamos cada tipo de RAID más adelante.

**RAID por software**
Es una aplicación que permite la creación de RAIDs a nivel lógico 
a partir de discos conectados a nuestro equipo. 
Este software crea un sistema de ficheros en el cual trabaja 
comportándose según el tipo de RAID configurado

**RAID por Hardware**
Es un dispositivo físico que permite la creación de un RAID de discos.
Puede ser una tarjeta de expansión PCI o PCIE o bien esté integrada en la placa base,
este hardware integra todo lo necesario para realizar un RAID 
sin utilizar el procesador ni la memoria RAM del sistema (como norma general), 
además puede integrar una caché. 
Esta caché puede agilizar las operaciones de lectura/escritura.

**VENTAJAS DE CADA TIPO**

**El RAID por hardware** 
Requiere hardware el cual conlleva un coste 
Con el RAID por hardware en caso de fallar un disco, 
solo debemos insertar el disco nuevo y el normalmente se encarga de 
reconstruir el RAID sin ningún paso adicional (como norma general)
El RAID por hardware no utiliza recursos del procesador de la máquina anfitrión.

**El RAID por software**
evita el el punto de fallo de una única tarjeta RAID. 
Si falla esta tarjeta el RAID no funcionará.
En los sistemas actuales ya no se nota tanto la diferencia de rendimiento 
respecto a los RAID por hardware ya que los procesadores son más potentes.


#### Niveles RAID más usados

##### RAID 0 (Data Striping, Striped Volume)

Este raid toma la capacidad de los discos añadidos y la suma. 
si tenemos 2 discos de 1TB con este RAID conseguiremos un volumen de 2TB. 
Si los discos son de distintas capacidades, siempre toma la más baja para utilizarla,
al igual que las RPM (revoluciones por minuto) del disco. 
si tenemos un disco de 2TB a 7200RPM y otro de 1TB a 5400RPM 
tendremos un volumen de 2TB a 5400RPM, volvemos a tener un volumen de 2TB pero más lento.
Por eso es importante que los discos sean similares.
Por otro lado en este tipo de RAIDs prima el rendimiento pero no la seguridad,
no hay redundancia de datos por lo que si un disco se rompe se corromperá el volumen.

##### RAID 1 (espejo)

Este RAID al igual que en el RAID anterior y en todos los RAID, 
los discos deben tener la misma capacidad para evitar desaprovechar discos. 
En esta modalidad de RAID se configura los dos discos en espejo, 
esto quiere decir que se replica todo el contenido del disco 
en otro disco por cada 2 discos 1 disco se dedica a redundar datos. 

Está recomendado para 2 discos. Este RAID tiene una ventaja añadida 
y son mayores velocidad de lectura multiusuario 
ya que pueden leerse datos de los dos discos. 
Sin embargo las escrituras se ralentizan ya que tienen que hacerse en ambos discos.

##### RAID 5

Este RAID es el más popular debido a su bajo coste. 
Con 3 discos se dispone del 75% de la capacidad de los discos aproximadamente. 
Requiere solamente un mínimo de 3 discos y soporta la pérdida por completo de un disco.
La información se sirve en bloques distribuidos por el total de los discos
por lo que a mas discos mas rendimiento también influye el tamaño de los discos
cuanto mas grandes sean mas tiempo tarda en reconstruirse el RAID 
en caso de fallo de un disco.

Este RAID protege contra los fallos distribuyendo el cálculo de paridad 
por el conjunto de los discos y así protegiendo contra posibles errores de hardware.

El punto flaco de este tipo de RAID está en que si falla un disco, 
hasta reponerlo el volumen queda desprotegido contra algún fallo de otro disco.
Aquí es donde entran los discos Spare. 
Un disco spare es un disco de reserva para que entre “a formar parte del juego”
cuando uno de los discos falle, de esta forma el numero de discos que pueden fallar es dos
(mientras que el RAID no esté en procedo de reconstrucción cuando falle el segundo disco) 

De esta forma evitamos el punto de fallo mencionado antes. 
Cuando se añade el disco spare este tipo de RAID también se conoce como RAID 5E.
Hay dos tipos de spare: “Standby spare” y “hot spare”.

Si es un standby spare conlleva un proceso de reconstrucción 
durante la incorporación del disco spare sustituyendo al disco fallido 
sin embargo si es un hot spare este tiempo se minimiza.

##### RAID 6

Digamos que es la evolución del RAID 5, necesita como mínimo 4 discos. 
Funciona como RAID 5 pero con doble banda de paridad 
que también se reparte por todos los discos. 
Este tipo de RAID soporta el fallo total de hasta dos discos 
hasta durante la reconstrucción del RAID. 
Es menos utilizado debido a que cuando se utilizan pocos discos
se desaprovecha capacidad de dos discos ya que no llegan al máximo teórico,
con 4 discos el RAID tendrá cerca de la mitad de la capacidad de los discos.
Cuantos más discos se utilicen en el RAID más capacidad de cada disco es utilizada.

Al igual que en el RAID 5, en RAID 6 se pueden añadir discos spare
(se suele llamar RAID 6E) para soportar un tercer disco fallido 
(este ultimo puede fallar sin corromper el volumen siempre 
  y cuando el raid no se esté reconstruyendo ).

##### Niveles RAID anidados

Los niveles anidados de RAID es “RAID sobre RAID”. 
Es decir un RAID de un tipo montado sobre otro/s RAID de otro tipo. 
Así se pueden aprovechar las ventajas de cada RAID. Por ejemplo:

RAID 0+1 : Es un espejo de RAIDs 0, es decir si tenemos 4 discos, 
se crean 2 raids 0 con cada pareja de discos y con los 2 volúmenes RAID 
creados se crea un raid 1. De esta forma añadimos redundancia al RAID 0.

RAID 1+0: Es un RAID 0 de dos espejos (RAID 1). Se crean 2 RAID 1 
con cada pareja de discos y con la pareja de RAID 1 creados, se crea un RAID 0.

RAID 50 (5+0): Para este RAID son necesarios un mínimo de 6 discos.
Se crean con cada trío de discos un RAID 5. 
Después con cada RAID creado se crea un raid 0 con los RAID 5 creados. 
Con 6 discos se alcanza un total de aproximadamente el 65% de la capacidad de los discos.

#### mdadm - Montar RAID 

Un raid en linux es muy fácil de configurar utilizando 
los 3 pasos que vamos a describir:

**Paso1:** 

Instalar mdadm: por defecto no suele estar instalado en Linux.

En debian y derivados:
```sh
apt-get install mdadm
```

En RedHat / CentOS y derivados:
```sh
yum install mdadm
```

**Paso2**: 

Hay que llenar de ceros los discos que se van a incluir en el RAID 
para evitar problemas con sistemas de ficheros existentes:

```sh
root@localhost:~# mdadm --zero-superblock /dev/hdb /dev/hdc
```

(Y tantos otros discos a utilizar) o con DD:
```sh
dd
```

**Paso 3**: 

Lo siguiente sería crear el RAID, básicamente sería con:

###### SINTAXIS RAID :

```sh
mdadm -C /dev/NOMBRERAID --level=raid[NUMERO] --raid-devices=NUMERO_DE_DISCOS /dev/DISCO1 /dev/DISCO2
```


**SINTAXIS RAID 0:**

Se seleccionan un mínimo de dos discos (como ejemplo vdc y vdd):
```sh
mdadm -C /dev/md0 --level=raid0 --raid-devices=2 /dev/vdc /dev/vdd
```

con commandos  `fdisk -l /dev/md0`  o 'cat /proc/mdstat'
podemos revisar el progreso de la tarea del RAID

**EJEMPLO RAID 0:**

```sh
[root@localhost ~]:$ mdadm -C /dev/mdo --level-raido=raid0 -devices=2 /dev/vdb /dev/vde
    mdadm: Defaulting to version 1.2 metadata
    ........

[root@localhost ~]:$ fdisk -l /dev/md0
    Disk /dev/md0: 2198.8 GB, 2198752722944 bytes, 4294438912 sectors
    Units sectors of 1 512 512 bytes
    Sector size (logical/physical): 512 bytes / 512 bytes
    1/0 size (minimum/optimal): 524288 bytes / 1048576 bytes


[root@localhost ~]# fdisk -l /dev/md0
    Disk /dev/mde: 1099.4 GB, 1899376361472 bytes, 2147219456 sectors
    Units sectors of 1 512 512 bytes
    Sector size (logical/physical): 512 bytes / 512 bytes
    1/0 size (minimum/optimal): 512 bytes / 512 bytes

[root@localhost ~]# cat /proc/mdstat
    Personalities: [raide] [raid1]
    mde active raid1 vdc [1] vdb[6]
    1073609728 blocks super 1.2 [2/2] [UU] [..........] resync = 1.7% (19266304/1073609728) finish=109.6min spee
    d=160195K/sec
    bitmap: 8/8 pages [32KB], 65536KB chunk
    unused devices: <none>
```


**SINTAXIS RAID 1:**
EN el caso de RAID 1 lo mejor es seleccionar 
un máximo de 2 discos / volúmenes (ponemos como ejemplo igualmente vdc y vdd):

```sh
mdadm -C /dev/md0 --level=raid1 --raid-devices=2 /dev/vdc /dev/vdd
```
ejemplo de salida del comando
```sh
[root@localhost ~]:$ mdadmc/dev/mde --level=raid1 --raid-devices=2 /dev/vdb /dev/vdc
    mdadm: Note: this array has metadata at the start and may not be suitable 
           as a boot device. If you plan to store '/boot' on this device please 
           ensure that your boot-loader understands md/v1.x metadata, or use
           --metadata=0.90
    Continue creating array? yes
    mdadm: Defaulting to version 1.2 metadata
    mdadm: array /dev/mde started.
```

**SINTAXIS RAID 5:**

Requiere como mínimo tres discos:
```sh
mdadm -C /dev/md0 --level=raid5 --raid-devices=3 /dev/vdb  /dev/vdc  /dev/vdd
```
Si queremos un disco spare (tenemos que añadir todos los discos 
incluso el spare al RAID desde el principio):
```sh
mdadm -C /dev/md0 --level=raid5 --raid-devices=3 --spare-devices=1 /dev/vdb /dev/vdc /dev/vdd /dev/vde
```
 

**SINTAXIS RAID 6:**

Reqiere como mínimo 4 discos
```sh
mdadm -C /dev/md0 --level=raid5 --raid-devices=4 /dev/vdb /dev/vdc /dev/vdd /dev/vde
```
Y con spares:
```sh
mdadm -C /dev/md0 --level=raid5 --raid-devices=4 --spare-devices=1 /dev/vdb /dev/vdc /dev/vdd /dev/vde /dev/vdf
```
En caso de fallar un disco de un RAID solo debemos extraerlo e insertar el nuevo disco 
y cuando introduzcamos el nuevo disco  (mirando el log del sistema de /var/log/messages) 
ejecutamos:
```sh
mdadm --add /dev/RAID /dev/NUEVO_DISCO
```

**ADEMAS PODEMOS :**

En caso de querer parar un RAID:
```sh
mdadm --stop /dev/md0 && mdadm --remove /dev/md0
```
Y para consultar el estado:
```sh
cat /proc/mdstat
```

### Backups -  fundamentos


¿Qué es una copia de seguridad?

Tanto los archivos del sistema como los del
usuario son susceptibles a ser borrados,
eliminados o corrompidos por:
    ● Fallas de software.
    ● Fallas de hardware.
    ● Errores humanos.
    ● Ataques informáticos.
    ● Accidentes y desastres climáticos.

Atendiendo a estos riesgos es importante realizar
copias de los datos tanto del sistema como
documentos del usuario de una manera segura,
esto es lo que comúnmente conocemos como
backup.



#### Niveles de backups

Las copias de seguridad tienen al menos tres niveles
dependiendo de lo que se respalde.

    Nivel Completo o Full   1
    Nivel Incremental       2
    Nivel Diferencial       3


**Nivel Completo o Full**

En este nivel se realiza un una copia de la
totalidad de los datos que se desean respaldar.
Siempre es útil realizar un backup completo, no
obstante, realizar copias de respaldo todas las
veces, sería imposible o al menos costoso en
cuanto a dispositivos de almacenamiento. Para
recuperar un backup full se debe hacer la
operación inversa.
Muchas veces no se recuperan los datos sobre la
ubicación original, sino en otro lado de manera de
poder verificar los archivos recuperados si es
necesario.


**Nivel Incremental**

El nivel incremental toma como punto de referencia el
backup inmediatamente anterior (que puede ser Full o
Incremental). Suponiendo que luego del backup completo
(B0) se hicieron tres backups incrementales (B1, B2 y B3) si
se desea volver al estado de los datos al realizar B2, es
necesario aplicarle al B0, los backups B1 y B2.



**Nivel Diferencial**

El nivel diferencial toma como punto de referencia
el backup full. 
Suponiendo que luego del backup completo (B0) 
se hicieron tres backups diferenciales (B1, B2 y B3) 
si se desea volver al estado de los datos al realizar B2,
es necesario aplicarle al B0 solamente el B2.

¿Qué tipo de backup es mejor? ¿Cuál deberíamos aplicar? 
Si podemos, lo ideal es usar los dos. 
El backup incremental ahorra más espacio de almacenamiento, 
pero hace que las restauración de datos sea algo engorrosa.



Es más fácil determinar qué directorios no hay que
respaldar. Conviene copiarlo máximo que se pueda
excluyendo aquellos directorios que son volátiles:

#### Directorios a respaldar

    ● /dev
    ● /proc
    ● /run
    ● /sys
    ● /tmp 


(Dependiendo de la distribución y de las aplicaciones usadas).

Si podemos elegir solamente entre unos pocos directorios,
lo recomendable sería hacer backup de:

    ● /etc       (Configuraciones).
    ● /root      (Configuraciones del superusuario).
    ● /usr/local (Aplicaciones compiladas o que no están en la distribución).
    ● /home      (Si es una estación de trabajo, o si en lugar de usar root 
                    se emplea un usuario con sudo para administrar).
    ● /var       (Muy usado en servidores).

Y obviamente cualquier otro directorio que se haya creado
a mano que esté directamente dentro del directorio raíz.


#### Medios de almacenamiento

Este es un análisis de los distintos medios de
almacenamiento disponibles:

**Medios ópticos: CDR, DVD, etc.**
● Económicos 
● Poco espacio

**Cintas Larga duración**
● Costosas
● Necesitan hardware especial

**Discos rígidos/sólidos**
● Alta capacidad
● Facilidad de uso Costosos  (en particular los de estado sólido)

Nube Aislado de accidentes locales 
● Interrupción del servicio no controlada
(si se hace en equipos de un tercero).



### DESAFIO 5

**LVM** (Logical Volume Manager)

1) Agregar 4 discos a la máquina virtual (como mínimo 2 de 1gb y 2 de 2gb)
2) Crear 1 partición que ocupe todo el tamaño del disco y formatearla como LVM
3) Crear 4 volúmenes físicos con las particiones que creamos
*   a) pv-1
*   b) pv-2
*   c) pv-3
*   d) pv-4
4) Crear 2 Volume groups
*   a) volgroup-1
    +   i )     pv-1
    +   ii)     pv-2
*   b) volgroup-2
    +   i )     pv-3
    +   ii)     pv-4
5) Crear 5 LVS
*   a) Iv-1 (300M, volgroup-1)
*   b) Iv-2(1.4G, volgroup-1)
*   c) Iv-3 (2.5G, volgroup-2)
*   d) Iv-4 (200M, volgroup-2)
*   e) Iv-5 (500G, volgroup-2)
6) Crear un FS de tipo ext4 utilizando la LV Iv-2
7) Crear un FS de tipo ext3 utilizando la LV Iv-5
8) Montar el FS de Iv-2 en el directorio /home/<usuario>/desafio5
9) Montar el FS de Iv-5 en el directorio /home/<usuario>/resize

**RAID**

1) Utilizando 2 particiones (elijan las que deseen), crear un raid 0, 
   formatearlo (ext4) y montarlo en un directorio a elección. 
   Probar crear un archivo dentro del directorio una vez creado el raid.
*   a) Ejecutar el comando mdadm -D y la ubicación del dispositivo raid 
       para obtener la información del raid 
      (no es necesario guardarla en un archivo, si documentar la salida en el instructivo)
*   b) Apagar la máquina virtual, remover uno de los 2 discos del raid, 
       el archivo sigue existiendo? por que?
3) Agregar otros 3 discos al sistema (1gb cada uno),crear una partición de tipo linux 
   que ocupe todo el espacio del disco y utilizar las mismas para crear un raid 5. 
   Una vez creado el raid, formatearlo (ext4) y montarlo en el directorio /etc/servicio-web
   y dentro del mismo crear un directorio llamado "configuración".
*   a) Ejecutar el comando mdadm -D y la ubicación del dispositivo raid 
        para obtener la información del raid (no es necesario guardarla en un archivo, 
        si documentar la salida en el instructivo)
*   b) Apagar la maquina virtual, remover uno de los 3 discos del raid, 
        el directorio sigue existiendo? por que?

**SSH**

Para esta práctica van a necesitar una máquina (ya sea su Host o una segunda máquina virtual)
de donde podamos conectarnos por SSH a nuestra máquina virtual principal.

1) En la máquina secundaria o Host, crear un par de llaves para conectarnos al host principal
2) Copiar la llave necesaria al host principal para poder conectarnos por SSH sin contraseña
3) Probar la conexión por ssh sin contraseña
4) Deshabilitar el login por ssh con contraseña
*   a) Verificar que no nos podemos loguear sin contraseña como hacíamos antes
1) Volver a habilitar el login por ssh con contraseña
*   a) Verificar que volvió a funcionar
   


### REPASO TENARIO  Y LFCS
https://training.linuxfoundation.org/certification/linux-foundation-certified-sysadmin-lfcs/




**Operations Deployment** 25% (LO VIMOS)

Configure kernel parameters, persistent and non-persistent
Diagnose, identify, manage, and troubleshoot processes and services
Manage or schedule jobs for executing commands
Search for, install, validate, and maintain software packages or repositories
Recover from hardware, operating system, or filesystem failures
Manage Virtual Machines (libvirt)                  <------ salvo esto
Config container engines, create/manage containers <------ salvo esto
Create and enforce MAC using SELinux               <------ salvo esto

**Networking** 25%      ( NO LO VIMOS)   <------ 

Configure IPv4 and IPv6 networking and hostname resolution
Set and synchronize system time using time servers
Monitor and troubleshoot networking
Configure the OpenSSH server and client
Configure packet filtering, port redirection, and NAT
Configure static routing
Configure bridge and bonding devices
Implement reverse proxies and load balancers

**Storage** 20%         (LO VIMOS)

Configure and manage LVM storage
Manage and configure the virtual file system
Create, manage, and troubleshoot filesystems
Use remote filesystems and network block devices  <------ salvo esto
Configure and manage swap space
Configure filesystem automounters
Monitor storage performance

**Essential Commands**  20%  ( LO VIMOS)

Basic Git Operations      <------ salvo esto
Create, configure, and troubleshoot services 
Monitor and troubleshoot system performance and services
Determine application and service specific constraints
Troubleshoot diskspace issues
Work with SSL certificates  <------ salvo esto

**Users and Groups**  10%   (LO VIMOS)
Create and manage local user and group accounts
Manage personal and system-wide environment profiles
Configure user resource limits
Configure and manage ACLS
Configure the system to use LDAP user and group accounts


https://www.lpi.org/our-certifications/lpic-2-overview/

To become LPIC-2 certified the candidate must be able to:

perform advanced system administration,
 including common tasks regarding the Linux kernel, 
 system startup and maintenance;

perform advanced Management of block storage and file systems 
as well as advanced networking and authentication and system security,
 including firewall and VPN;

install and configure fundamental network services, 
including DHCP, DNS,  SSH, Web servers, file servers using FTP,
 NFS and Samba, email delivery; 
 
supervise assistants and advise management on automation and purchases.




# Fase 2 - Cloud Specialist   

## Clase 12 -  AWS certif + New Acount + 2FA + EC2 + IAM 

 Módulo 6

### Servicios : IaaS  PaaS  SaaS 

    ● IssS : Infraestructura como servicio  
    ● PaaS : Plataforma      como servicio
    ● SaaS : Software        como servicio

    como servicio =  as a Service  = aaS

```j
     TODO POR                                          TODO VIENE  
  NUESTRA CUEBTA  <-------------------------------->   YA PREPARADO

Traditional   |  Infrastructure  |  Platform         |   Software 
On-Premises   |  as a service    |  as a service     |   as a service
( On-Prem )   |  ( IaaS )        |  ( PaaS )         |   ( SaaS )
==============|==================|===================|===================
              |                  |                   |   Applications    
              |                  |                   |   Data            
              |                  |  Runtime          |   Runtime         
              |                  |  Middleware       |   Middleware      
              |                  |  O/S              |   O/S             
              |  Virtualization  |  Virtualization   |   Virtualization  
              |  Networking      |  Networking       |   Networking      
              |  Servers         |  Servers          |   Servers         
              |  Storage         |  Storage          |   Storage         
==============|==================|===================|=================
```

**Proveedores:**
```j
    DigitalOcean     -    Iaas  + PaaS
    Heroku           -    PaaS
    Hostinger        -    Iaas  + PaaS
    Don Web

Iaas                |     PaaS             |     SaaS
====================|======================|=================
Amazon Web Services |   Google App Engine  |    HubSpot
Google Cloud        |   Red Hat OpenShift  |    JIRA
Microsoft Azure     |   Heroku             |    Dropbox
IBM Cloud           |   Apprenda           |    DokuSign
```

**Otros proveedores :**
    GoGoDady   Linode   Akamai    Whawei
    CloudFlare  Wix   HostGator 

**Proovedores Grandes:**
    **AwS**  GCP   Azure  Alibaba

`Big Querry`  primer servicio de AWS  que uso el docente


De cada `10 puestos` laborales mas de la mitad son para AWS

    6 o 7   AWS   <----  Mayor Demanda,  Mucho material y Gran comunidad
    2 o 3   AZURE
    1       GCS


### Certificacion AWS

https://aws.amazon.com/certification/


FUNDATIONAL < ASSOCIATE < PROFESIOMA:
```py
  ● AWS Certif :  Cloud Practitioner                      ( FACIL )    Multiple Choice
    AWS Certif :  AI    Practitioner                     
    AWS Certif :  Solutions Architect   Associate         ( MEDIO ) + Practicas
    AWS Certif :  Developer             Associate           "3hs*Dia /1mes"
  ● AWS Certif : "SysOps" Administrator Associate
    AWS Certif :  Data     Engineer     Associate
    AWS Certif :  Architect               - Professional  ( DIFICIL )
  ● AWS Certif :  "DevOps" Engineer       - Professional   
    AWS Certif :  Security              - Speciality       ( MEDIO )
  ● AWS Certif :  Advanced Networking   - Speciality
  ● AWS Certif :  Data Analytics        - Speciality
    AWS Certif :  Database              - Speciality
    AWS Certif :  Machine Learning      - Speciality
```

**certificaciones**

Son muy demandadas pero pueden dejarte poco preparado 
para algunas de las oportunidades laborales (Sobretodo si la apruevan de memoria)
En los trabajos algunos puestos mas altos pueden tener la certificafion como filtro.
Se recomienda rendir `examen presencial`.
En remoto son muy exigentes y hasta tediosos con demostrar que no estas haciendo trampa.


Pregunta fundamental de entrevista laboral
3 capas : `Three Layered Architecture`
https://medium.com/@deanrubin/the-three-layered-architecture-fe30cb0e4a6

    ● Presentation   Layer   (PL)
    ● Business Logic Layer   (BLL)
    ● Data  Access   Layer   (DAL)

Vamos a aprender a diagramar aplicaciones usando este concepto
CRUD operations , ACID principles y metodologias SCRUM y AGILE
son tambien conceptos que uno deve conocer para estar preparado
(CI/CD) Continuous Integration/Continuous Delivery


**Partnership**

Epresa Partner a AWS : AWS te ofrece clientes como consultor.
Hay categorias de Partnerchips, con distintos requisitos de certificacion
para cierto numero de empleados de la empresa.

```
    ● EC2 = AWS      Elastic CLoud Computing
      GCE = Google   Compute Engine
      AVM = Azure    Virtual Machine
      ECS = Whawei   Elastic Cloud Sercer

AWS   ECS =  Elastic Container Sercer
```
AWS Beanstalk   Poroto ? .. No todos los nombres son literales
                En este caso es referencia a cono crece de forma absurda
                el arbol de `Las Habichuelas Magicas` ( Jack and the Beanstalk )

**COSTOS**
https://aws.amazon.com/aws-cost-management/aws-budgets/
```c
    "Completamente" gratis "Free Tier" T4 con cuotas de CPU

    "Parcialmente Gratuito" por 12 meses

    Costo obligatorio
```


### Creacion Cuenta AWS



#### Primera Parte: 

Creacion de la cuenta  Cosas a tener en cuenta:

    ● Se debe contar si o si con una tarjeta de crédito

    ● Siempre y cuando se sigan las recomendaciones de la guía, no tendrá 
    ningún costo asociado a su tarjeta pero es responsabilidad de  cada uno.

    ● Es importante seguir las recomendaciones de seguridad 
    para evitar accesos indeseados a la cuenta. 

1) Acceder al siguiente link para `crear la cuenta`
https://aws.amazon.com/resources/create-account/


2) Agregar `mail` para el `usuario root` y `un nombre` para la `cuenta`
   una vez hecho esto, recibiremos un `mail de verificacion` de AWS paranuestra cuenta:

3) Acto siguiente, introducimos el código que nos enviaron por mail

4) Luego, nos pedirá ingresar `una contraseña` para el usuario Root 
   ( Este usuario es un Admin, similar al usuario Root en un Sistema Operativo Linux,
    es fundamental que además de ser `una contraseña segura`, `la guardemos muy bien` ).

5) AWS nos preguntara si es una cuenta personal o de una organización 
   ( `elegir personal `) y completar con sus datos el cuestionario.

6) AWS nos pedirá la información de nuestra `tarjeta credito`
   ( a pesar de no tener ningún costo, tendremos que agregar nuestra tarjeta )

7) AWS nos pedirá nuestro `número de teléfono` para enviarnos un código de verificación

8) Nos pedirá elegir un plan de soporte 
   ( En nuestro caso, nos mantendremos con el plan gratuito ).

9) Y listo, ahora nos tocará esperar unos minutos hasta recibir el mail de confirmación de AWS 
   diciendo que la cuenta está lista para utilizarse

10) En este paso recibiremos 3 mails,siendo el siguiente el más importante 
    el que marca que ya estamos listos para iniciar sesión en nuestra cuenta


11)  Para esto, y nuestro paso final en esta primer parte, 
    iniciaremos sesion en nuestra cuenfa recien creada, 
    haremos click en el boton de `Go to the AWS Management Console`,
    elegiremos loggearnos como el usuario rool (En caso de haber perdido la cuenta)
     https://aws.amazon.com/marketplace/management/signin


#### Segunda parte: Seguridad

En esta parte de la guia, aumentaremos la seguridad de nuestra cuenta, 
Configuraremos la seguridad del usuario root como así también crearemos un usuario administrador 
para utilizar en las prácticas en vez del usuario root.

1) En esta primer mitad de la segunda parte nos encargaremos de hacer más seguro al `usuario root,`
   para esto tendremos que buscar el `servicio IAM`

3) Vamos a asegurarnos de configurar las 2 sugerencias de seguridad, 
   que el usuario Root no tenga `access keys activas` y que tenga MFA activado para mayor seguridad 
   
4) En el caso de cuentas nuevas el usuario Root por defecto no tiene llaves de acceso 
   pero si tendremos que `configurar el MF`A, naremos click en el botón `Add MFA`

5) Una vez en la sección de seguridad, agregaremos un dispositivo de MFA

6) Para esto, pueden usar alguna aplicación o dispositivo físico, 
   en nuestro caso usaremos `Google Authenticator`:

7) Seguimos los pasos que nos dice la gula de configuración para agregar nuestro código
    Y una vez terminado nuestro usuario root ya quedo seguro 
    ( MFA activado y sin llaves de acceso programático, solo por Consola )

8) Ahora, crearemos un usuario Admin que serà el usuario que usaremos para las prácticas,
    en nuestro caso crearemos un usuario para todos los servicios
    pero pueden crear un usuario con permisos más acotados 
    e ir añadiendo permisos a medida que los vayan necesitando en las prácticas.
    Para crear este usuario, iremos a la sección de Users dentro del `servicio IAM:`

9) Y ahora le daremos al botón Add Users (Botón Azul, arriba a la derecha) 
    y nos dará la siguiente ventana:  `SPecify User datails`

    Es importante destacar que queremos marcar la opción de que el usuario tenga acceso a la Consola de AWS 
    y que sea un usuario IAM, ya que necesitaremos `acceso programático`

10) El siguiente paso será asignar permisos, 
    como solo usaremos un usuario no será necesario crear un grupo y asignarle los permisos al grupo
    sino que directamente asignaremos los permisos al usuario, 
    en este caso usaremos una `Policy` que sea de `Administrador `y que nos brinde acceso a todos los servicios.
    Para esto, seleccionaremos la opción `Attach policies directly` 
    y en el buscador de policies, busceremos una llamada AdministratorAccess, 
    tendra que darnos le siguiente policy

11) Seleccionamos esta policy y le damos a next, 
    ahora podremos revisar que esté todo como esperamos:

12) Al crear el usuario, nos dará una opción de descargar un archivo.csv, 
    recomendamos descargario para tener un backup de nuestras credenciales. 
    De ahora en más, este es el usuario que utilizaremos
    
    Recomendamos `añadirle un MFA` de la misma forma que lo hicimos para el usuario root.

13) Una vez creado el usuario, lo seleccionamos desde la sección de Users de IAM
     para configurar un Access Key para poder acceder a los servicios de AWS de forma programática. 
     Para esto, en la sección de Access Key le daremos al botón de Create access key:

14) Elegiremos la opción Other

15) En la siguiente ventana no le agregaremos un tag sino que directamente crearemos el access key,
    en la siguiente ventana nos mostrará el access key y el secret key 
    con la opción de `descargar el .csv `de nuevo (recomendamos guardar una copia de este archivo). 
    Es importante guardar estas credenciales ya que son las que utilizaremos en herramientas 
    como `Terraform` más adelante.
    En caso de perder estas credenciales podremos eliminar estas Access Keys y crear otras.


16) Y listo, así tendremos nuestro usuario Administrador listo para utilizar 
    ya sea desde la Consola de AWS o de forma programática desde nuestra terminal u otras aplicaciones.


#### Tercera parte: Presupuestos y Alertas


1) En esta última parte, explicaremos un poco la sección gratuita de AWS 
    (además de proveer recursos para una lectura más en detalle) 
    además de configurar alertas para que en caso de llegar al límite del uso gratuito 
    o en caso de tener algún costo, que nos notifiquen para poder así apagar el servicio. 
    El free tier de AWS se compone de 3 tipos: 
    
        Un periodo de 12 meses de free tier para algunos servicios, 
        otros servicios que son gratuitos para siempre 
        y pruebas gratuitas cortas (para algunos servicios específicos).

    Slempre antes de crear cualquier tipo de infraestructura o de utilizar cualquier servicios,
    que revisemos los costos asociados con este, 
    para más información del free tier visitar la siguiente pagina:
    https://aws.amazon.com/free/free-tier-faqs/

1) Primero configuraremos las alertas por uso del free tier que nos notifican 
   
2) al llegar al 85% de uso de free tier de los servicios, para esto buscaremos el servicio de billing:

3) Una vez dentro de billing, iremos a Billing Preferences en la izquierda, 
    casi abajo de todo y aca activaremos les alertas de AWS Free tier:
    Por default, estas `alertas se activan al 85% del límite` del free tier.

4) Pero no solo queremos configurar las alertas para el free tier, 
   que pasa si sin querer utilizamos un servicio fuera del free tier? 
   Bueno, para ello configuraremos un presupuesto 
   que su limite a 0 dólares gastados y que nos alerte.

5) Para esto, dentro del mesmo `servicio de Billing`, iremos a la seccion de Budgets

6) Sin cambiar nada ya estará por default la opción de utilizar `un template `
    y utilizar el `Zero Spend Budget` template, este presupuesto nos indicará 
    una vez que los costos `pasen los 0.01 centavos` de dólar

7) Una vez creado el presupuesto nuestra cuenta ya estará lista para utilizarse, 
    es importante no olvidarse de `agregar el mail` 
    al que queremos que se envien `las notificaciones` en el paso anterior.




###  Tips de 2FA 

AWS nos dara `plazo de un mes` para implementar 2 Factor Autetification
si no lo hacemos perderemos control de servicios pasado el plazo

El metodo mas sensillo es usar una `App` como `Google Autenticator`
esta se puede usar para asegurar sus cuentas de `AWS, GitHub` y otros servicios

Amazon nos dara un `QR a escanear` desde la APP
Esto generara un numero de `6 Digitos` que cambia `cada 30 segundos`

Estos 6 digiros devemos introducirlos en el `2FA Code 1`
Esperamos a que venza e introducimos  en el `2FA Code 1` el nuevo codigo
Son los ultimos 2 codigos generados por el mismo qr.

Google Autenticator tiene 2 metodos 
● Escanear el Qt automaticamente 
● Ingresar manualmente codigo de `32 digitos` 
que conecta la app con la cuenta a proteger

El metodo manual es mas personalizado y nos deja seleccionar si 2FA 
esta `basoado en tiempo` TOTP ( por defecto) `basado en contador` HOTP

Es mas seguro el metodo basado en tiempo por algo esta por defecto. 

https://blog.uniqkey.eu/hotp-vs-totp/
●  **TOTP** stands for Time-based One-Time Password.
●  **HOTP** stands fo  HMAC-based One-Time Password
HMAC stands for Hash-based message authentication code.

`TOTP` is an improvement on `HOTP` and they have certain common elements. 


### Consola Ammazon


**CONSOLA**
https://console.aws.amazon.com/console/home

Veremos como crear una maquina virtual y conectarse 
 entramos a EC2

**EC2**
https://console.aws.amazon.com/ec2/home

**instancias**
https://console.aws.amazon.com/ec2/home#Instances

**Crear instancia**
https://console.aws.amazon.com/ec2/home#LaunchInstances:


### EC2 INSANCE

1) **Name & tags**

     Name


1) **AMI**
Application and OS Images (Amazon Machine Image)  Info

        Quick Start:
     Amazon Linux    macOS       Ubuntu      Windows 
     Red Hat         SUSE Linux  Debian      etc....

1) **Instance type**

     t2.micro    Free tier eligible  
    
     Family: t2      1 vCPU      1 GiB Memory


3) **Key pair (login)**
   
     you can use a key-pair to securely connect to your instance. 
   
     Key-pair name  :  required

     -> Generate NEW KEY <-

     Key pair type
         RSA     encrypted private & public key-pair
         ED25519 encrypted private & public key-pair
     Private key file format
         .pem    For use with OpenSSH
         .ppk    For use with PuTTY

4) **Network settings  Info**

     vpc-*****
     Subnet
     Auto-assign public IP
     Allow SSH traffic from  :  Anywhere 0.0.0.0
     Allow HTTPS traffic from : NO 

5) **Configure storage  Info**

     1x8GiB  gp3     Root volume     (Not encrypted)
     Volume is smaller than snapshot, must be at least 8GB

        -> ADVANCED <-

     Size (GiB)      8
     Volume type     gp3
     IOPS            3000
     Delete on termination : YES
     Encrypted       Not encrypted
     KMS key
     Throughput      125
     File systems    EFS/FSx

6) **Advanced details  Info**
   
     Domain join directory
     Shutdown behavior
     Elastic GPU
     Purchasing option   None/Capacity Blocks

7) **Summary**
   
     Number of instances     1
     Software Image (AMI)    Amazon Linux 2023 ami-07c5ecd8498c59db5
     Virtual server type     t2.micro
     Firewall                New security group
     Storage (volumes)       1 volume(s) - 8 GiB




**EC2 Instance  ( REQUIERE 3 cosas )**

     1) Imagen (IAM)
     2) Tipo (T2)
     3) Informacion red (Default)

### Precios 

Compare instance types

**PRECIO**  = Instance **TYPE** X **REGION** X **HORAS** de Demanda

podemos ver los precios a la hora de crear la instancia 
el precio depende del tipo de instancia y region

https://console.aws.amazon.com/ec2/home#LaunchInstances:  + Ctrl F  (Compare instance types)
https://ec2pricing.net/  <--  Alternativa para ver precios sin una cuenta


en nuestro caso `t2micro` que es la unica que puede usarse en `Free tier`
Para el sistema operativo `Linux price` que es el mas barato en la mayoria de los casos
Nos sale `1.6 veces mas caro` elegir  `Sau Pablo = 0.0186` que  `Oregon = 0.0116` 
Esta en nsotros decidir si la latencia por lejania a los usuarios justifica el gasto

```j
REGION :  (Oregon)     'us-west-2'

Instance |CPU|  Archit   | Mem_GB| Network  | 'Linux price' |  RHEL pricing | SUSE price       
=========|===|===========|=======|==========|===============|===============|==============	
t1.micro | 1 | i386, x86 | 0.612 | Very Low | 0.02   USD/Hs | 0.03   USD/Hs | 0.02   USD/Hs 
t2.nano  | 1 | i386, x86 | 0.5   | Moderate | 0.0058 USD/Hs |   -    USD/Hs | 0.0058 USD/Hs 
't2.micro' 1 | i386, x86 | 1     | Moderate |'0.0116'USD/Hs | 0.026  USD/Hs | 0.0116 USD/Hs 
t2.small | 1 | i386, x86 | 2     | Moderate | 0.023  USD/Hs | 0.0376 USD/Hs | 0.053  USD/Hs 
t2.medium| 2 | i386, x86 | 4     | Moderate | 0.0464 USD/Hs | 0.0752 USD/Hs | 0.1464 USD/Hs 

REGION :  (Sao Pablo)  'sa-east-1'

Instance |CPU|  Archit   | Mem_GB| Network  | 'Linux price' | Windows price |  SUSE pricing   
=========|===|===========|=======|==========|===============|===============|===============	
t1.micro | 1 | i386, x86 | 0.612 | Very Low | 0.027  USD/Hs | 0.037  USD/Hs | 0.027  USD/Hs
t2.nano  | 1 | i386, x86 | 0.5   | Moderate | 0.0093 USD/Hs | 0.0116 USD/Hs | 0.0093 USD/Hs
't2.micro' 1 | i386, x86 | 1     | Moderate |'0.0186'USD/Hs | 0.0232 USD/Hs | 0.0186 USD/Hs
t2.small | 1 | i386, x86 | 2     | Moderate | 0.0372 USD/Hs | 0.0464 USD/Hs | 0.0672 USD/Hs
t2.medium| 2 | i386, x86 | 4     | Moderate | 0.0744 USD/Hs | 0.0924 USD/Hs | 0.1744 USD/Hs
```


### Connect to Instance

https://console.aws.amazon.com/ec2/home

Seleccionamos la instancia y click secuntario-> connect

https://console.aws.amazon.com/ec2/home#ConnectToInstance:instanceId=i-####


(EC2 Instance Connect)    (Session Manager)     (SSH client)    (EC2 serial console)

**EC2 Instance Connect**

     Port 22 (SSH) is currently open to all IPv4 addresses, indicated by 0.0.0.0/0 
     in the inbound rule in your security group.  
     For increased security, consider restricting access to only the EC2

     Instance ID  i-############# (lab1)

     Connection Type :
         Connect using EC2 Instance Connect           
             with a public IPv4 or IPv6 address.
         Connect using EC2 Instance Connect Endpoint     
             with a private IPv4 address and a VPC endpoint.

     Public IPv4 address ###.###.###.###

     IPv6 address    

**Session Manager**

      We weren't able to connect to your instance. Common reasons for this include:
      1. SSM Agent isn't installed on the instance. 
      You can install the agent on both Windows instances and Linux instances.
      2. The required IAM instance profile isn't attached to the instance. 
      You can attach a profile using AWS Systems Manager Quick Setup.
      3. Session Manager setup is incomplete. For more information, 
      see Session Manager Prerequisites.

     Session Manager usage:

     ● Connect to your instance without SSH keys, a bastion host, or opening any inbound ports.
     ● Sessions are secured using an AWS Key Management Service key.
     ●  You can log session commands and details in an Amazon S3 bucket or CloudWatch Logs log group.
     ●  Configure sessions on the Session Manager Preferences  page.


**CUAL USO ?  Session Manager :**

    ● No requiere usuario y contrasenia 
    ● Ni siquiera hace falta acceso a la llave 
    ya que esta puede ser guardada gestod de archivo seguro 
    como Lass-oass o keypass 
    ● No escala lo que previene cambios en los costos 


### AWS ( SSM ) SystemS-Manager    

https://console.aws.amazon.com/systems-manager/quick-setup

->Config Recording <-       Conformance Packs       DevOps Guru

Distributor                 Host Management         Patch Manager 

Resource Scheduler


**SSM Create config**
https://console.aws.amazon.com/systems-manager/quick-setup/create-configuration


**SSM Create Preferences**
https://console.aws.amazon.com/systems-manager/session-manager/preferences


### IAM - Identity Authentification Manager


https://console.aws.amazon.com/iam/home


https://console.aws.amazon.com/iam/home/security_credentials


    IAM Dashboard

    Security recommendations 1

    Root user has MFA

    Having multi-factor authentication (MFA) for the root user improves security for this account.
    Deactivate or delete access keys for root user

    Deactivate or delete the access keys for the root user. 
    Instead, use access keys attached to an IAM user to improve security.

    Manage access keys
    
    IAM resources       Resources in this AWS Account

    User groups         0
    Users               0
    Roles               9
    Policies            0
    Identity providers  0


### SSH ( EC2 Terraform Connection Requisit )

                        Public              Private              Private      
    ssh-keygen RSA   =  lab-key-pair.pub +  lab-key-pair    +    passphrase       
    AWS access keys  =  Access key ID    +  Secret access key

    SSH Requires : access keys + EC2_Public_IP (Dinamic)

```sh
ssh-keygen -f ./key-pair-name   -C "codered-demo"
#           -f      filename
#           -c      Requests changing the comment in the private and public key

sudo ssh   -i   key-pair-name    <user> @ <HOST_IP_ADD>
#           -i   identity_file    from which the identity (private key) for authentication is read.
sudo ssh   -i   lab-key-pair     ec2-user@***.***.***.***
Enter same passphrase again: 
Your identification has been saved in ./lab-key-pair
Your public key has been saved in ./lab-key-pair.pub



# MAS COMANDOS
    ssh         ssh-argv0           ssh-import-id-lp
    sshd        ssh-copy-id         ssh-keygen      
    ssh-add     ssh-import-id       ssh-keyscan     
    ssh-agent   ssh-import-id-gh    

```

https://security.stackexchange.com/questions/90169/rsa-public-key-and-private-key-lengths
https://travistidwell.com/jsencrypt/demo/index.html

Private : BIG   RSA-2048  for Decription
Public  : Small key       for Encription
fingerprint is:  SHA256


https://stackoverflow.com/questions/5403808/private-key-length-bytes

A bare-bone RSA private key consists in two integers, 
the modulus          (a big composite integer, its length in bits is the "RSA key length") 
the private exponent (another big integer, which normally has the same size than the modulus).
However, the modulus and the private exponent have a bit of internal structure,

Namely, if the modulus is n and is the product of two prime numbers p and q,
then the private key includes:

the modulus n           (256 bytes for a 2048-bit key)
the public exponent  e  (small, often 65537, i.e. can be encoded over 3 or 4 bytes)
the private exponent d  (256 bytes)

the factors p and q     (128 bytes each)
d reduced modulo p-1    (128 bytes)
d reduced modulo q-1    (128 bytes)
1/q mod p (the inverse of q modulo p; 128 bytes)

## Clase 13

<<<<<<< HEAD
### EC2 - Elastic Cloud Computing

####  Analisis de EC2 desde  ssm
=======
###  Analisis de EC2 desde  ssm
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75
```sh
sh-5.2$ bash
[ssm-user@ip-172-31-89-42 bin]$ whoami
ssm-user                                # user name = ssm-user

[ssm-user@ip-172-31-89-42 bin]$ sudo su
[root@ip-172-31-89-42 bin]# apt-get install apache2
Dash: apt-get: command not found       # NO tiene   apt-get
[root@ip-172-31-89-42 bin]# apt get install apache2
pash: apt: command not found           # NO tiene   apt
[root@ip-172-31-89-42 bin]#
```

Aparentemente no la instancia del docente no tiene APT 
Prueva con otros paquedes.  
(Mi instancia si tiene se ve que actualizaron la IAM de Linux)

```sh
[root@ip-172-31-89-42 bin]# dnf        # TIENE      dnf
support.info            Get support statements for DL packages
General DNF options:
    -c [config file], --config [config file]
    -q, --quiet
    -v, --verbose
```

La instancia del docente si tiene DNF por lo que supone esta basada en CentOS

```sh
[root@ip-172-31-89-42 bin]# dnf install apache2
Last metadata expiration check: 19:06:58 ago on Thu Jul 20 02:25:37 2023.
No match for argument: apache2
Error: Unable to find a match: apache2      # NO tiene   apache2
[root@ip-172-31-89-42 bin]# dnf install apache
No match for argument: apache
Error: Unable to find a match: apache       # NO tiene   apache
```

Al no poder instalar apache supone que hay que actualizar los repositorios

```sh
[root@ip-172-31-89-42 bin]# dnf update
Last metadata expiration check: 19:07:38 ago on Thu Jul 20 02:25:37 2023.
WARNING:
    A newer release of "Amazon Linux" is available.
    Available Versions:
        Version 2023.1.20230719:
        Run the following command to upgrade to 2023.1.20230719:
                       dnf upgrade --releasever-2023.1.20230719
    Release notes:
        https://docs.aws.amazon.com/linux/al2023/release-notes/relnotes.html

[root@ip-172-31-89-42 bin]# dnf upgrade
[root@ip-172-31-89-42 bin]# dnf install nginx    # Installo Nginx
Last metadata expiration check: 19:07:49 ago on Thu Jul 20 02:25:37 2023.
Dependencies resolved.

Package     Architecture     Version                    Repository      Size
Installing:
nginx               x86 64   1:1.24.0-1.amzn2023.0.1    amazonlinux     32 k
Installing dependencies:

generic-logos-httpd noarch  18.0.0-12.amzn2023.0.3      amazonlinux     19 k           
gperftools-libs     x86 64  2.9.1-1.amzn2023.0.2        amazonlinux    309 k
......................
Complete!

[root@ip-172-31-89-42 bin]# systemctl status nginx      # veo Nginx ( Apagado )
● nginx.service The nginx HTTP and reverse proxy server
    Loaded: loaded (/usr/lib/systemd/system/nginx.service; 
    disabled; preset: disabled)
    Active inactive (dead)
    
[root@ip-172-31-89-42 bin]# systemctl start nginx      
[root@ip-172-31-89-42 bin]# systemctl status nginx      # veo NginX ( Encendido )
● nginx.service The nginx HTTP and reverse proxy server
    Loaded: loaded (/usr/lib/systemd/system/nginx.service; disabled; preset: disabled)
    Active: active (running) since Thu 2023-07-20 21:34:04 UTC; 4s ago
    Process: 59543 ExecStartPre=/usr/bin/rm -f /run/nginx.pid (code=exited, status=0/SUCCESS)
    Process: 59547 ExecStartPre=/usr/sbin/nginx -t (code=exited, status=0/SUCCESS)
    Process: 59554 ExecStart=/usr/sbin/nginx (code=exited, status=0/SUCCESS)
    Main PID: 59563 (nginx)
    Tasks:  2 (limit: 1114)
    Memory: 2.2 M
    CPU:    55 ms
    CGroup: /system.slice/nginx.service
            59563 "nginx: master process /usr/sbin/nginx"
```

<<<<<<< HEAD
#### Analisis de EC2 desde web amazon
=======
### Analisis de EC2 desde web amazon
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

https://console.aws.amazon.com/ec2/home#Instances  (Datos del EC2 de docente)

**Details**     Instance summary :
    Instance ID             i-**********d449
    IPv6 address             -
    Public IPv4  address    34.226.123.102
    Private IPv4 addresses  172.31.89.42
    Instance state          Running
    Public IPv4 DNS         ec2-34-226-123-102.compute-     1 open address


**Security**   
    IAM Role            AmazonSSMRole Forinstances         Quick Setup
    Owner ID            ***********7
    Launch time         Wed Jul 19 2023 23:24:43 GMT-0300 (hora Argentina )
    Security groups     sg-0519929e8fe912a37              (launch-wizard-3)
    Inbound rules     <----------------------------------- firewall
        Name                -
        Secur Group rule... sgr-********61dd
        IP version          IPv4
        Type                SSH
        Protocol            TCP
        Port range          22
        Source              0.0.0.0/0
        Description         -


**New rule** 

Inbound rules

Sec Rule ID     Type    Protocol    Port range  Source      Description - optional
sgr-******dd    SSH     TCP         22          0.0.0.0/0 
                HTTP    TCP         80          0.0.0.0/0   http



```sh
[root@ip-172-31-89-42 bin]# cat   /etc/enginx/eginx.conf
server {
    listen          80;
    listen          [::1]:80;
    server name     ;
    root            /usr/share/nginx/html;
    # Load configuration files for the default server block. include /etc/nginx/default.d/*.conf;
    error_page 404 /404.html;
    location =/404.html {
    }
    error_page 500 502 503 504 /50x.html;
    location =/50x.html {
    }
}
#Settings for a TLS enabled server.
#
# server {
#       listen          443 ssl http2;
#       listen          [::]:443 ssl http2;
#       server name     root /usr/share/nginx/html;
#
#       ssl certificate "/etc/pki/nginx/server.crt";
#       ssl certificate key "/etc/pki/nginx/private/server.key
#       ssl session cache shared: SSL:1m;
#       ssl_session_timeout 10m;
#       ssl_ciphers PROFILE-SYSTEM;
#       ssl_prefer_server_ciphers on;
#
#       Load configuration files for the default server bloc
#       include /etc/nginx/default.d/*.conf
#
#       error page 404 /404.html;
#       location - /404.html {
#       }
#
#       error_page 500 502 503 504 /50x.html;
#       location = /50x.html {
#       }
#   }
#
```

Verificado puerto 80  mismo que habilitamos en EC2 desde la pagina de Amazon
Public IPv4 DNS   era     ec2--34-226-123-102
Por lo que poniendo  34.226.123.102 como URL nn el navegador vemos ENGINX

Welcome to nginx!
If you see this page, the nginx web server is successfully installed and working.
Further configuration is required.
For online documentation and support please refer to nginx.org. 
Commercial support is available at nginx.com.
Thank you for using nginx.


<<<<<<< HEAD
####  IP & Jump Server
=======
###  IP & Jump Server
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

Publica : axesible desde internet
Privada : axesible desde LAN (red loca)

Privada 198.162.xxx.xxx  (default)

**Bastion host o Jump Server**  puerta de entrada

sin Applicaiciones Nginex o cualquier servidor es solo para connccion desde fuera de la red
es el unico que usa la ip publica, el resto de nuestra red es privada


###  Terminología de AWS

●  **CloudWatch**: permite a los desarrolladores, 
cloud architects y
administradores el monitoreo de aplicaciones
basadas en la nube de AWS.

●  **EBS** ( Elastic Block Store):
servicio de almacenamiento de bloques de alto
rendimiento con facilidad de uso, diseñado
para su uso con EC2, tanto en cargas de
trabajo intensivas de rendimiento como de
transacciones a cualquier escala.

● **EC2** ( Elastic Compute Cloud): 
servicio web que proporciona capacidad informática
 en la nube segura y de tamaño modificable.
 Está diseñado para
facilitar a los desarrolladores el uso de la
informática en la nube a escala de la Web.

● EC2 **Auto Scaling**: nos ayudará a
garantizar que tenga la cantidad correcta de
instancias de  EC2 disponibles para
manejar la carga de su aplicación.

● **EFS** ( Elastic File Storage):
proporciona capacidad de almacenamiento
elástica, que escala para adaptarse a las
cargas de trabajo que se ejecutan en
instancias de Elastic Compute Cloud (EC2) y
acceder a archivos a través de solicitudes de
la API (interfaz de programación de
aplicaciones).

● **RDS** ( Relational Database Service): 
servicio administrado de base de datos en la nube de AWS.

● **S3**: es el servicio principal de AWS
para el almacenamiento y recuperación de
`archivos (objetos) `mediante un API (Application
Programming Interface).

●  S3 Glacier: servicio orientado a
proporcionar almacenamiento de objetos
duradero para archivos de datos a un precio
muy reducido.

● **Block Storage** (almacenamiento en bloques):
divide los datos en bloques como `discos duro` y los almacena
separados. Cada bloque de datos recibe un
identificador único, que permite que el sistema
de almacenamiento coloque los datos más
pequeños donde sea más conveniente.


● **Bucket**: en  S3 no es más que un
directorio lógico de alto nivel en el que se
encuentran los objetos, cada uno de ellos
identificado con una clave.

● **Cloud Computing** (computación en nube):
significa que el hardware y software es
proporcionado como un servicio de otra
empresa a través de Internet.

● **DynamoDB:** base de datos sin servidor NoSQL
proporcionada por AWS. Sigue una estructura
de tienda de valor clave y adopta una
arquitectura distribuida para alta
disponibilidad y escalabilidad.


● **(ELB)**Elastic Load Balancing : tiene la
capacidad de escalar automáticamente los
balanceadores de carga y las aplicaciones,
según el tráfico en tiempo real.

● **(IAM)** Identity and Access Management:
herramienta que AWS pone a nuestra
disposición para garantizar la seguridad de
nuestra infraestructura y su contenido.

● **(VPC)** Nube privada virtual de Amazon : 
permite a los clientes lanzar recursos de
AWS en una red virtual dedicada a la cuenta
del cliente.


● Object-based Storage (almacenamiento de
objetos): término general que se refiere a la
forma en que organizamos y trabajamos con
las unidades de almacenamiento a las que
llamamos objetos.

● Región: conjunto de zonas de disponibilidad,
las regiones se encuentran alrededor de todo
el mundo.

● Zona de disponibilidad: es un conjunto de
Data Centers donde se almacenan los miles y
miles de servidores físicos. Se encuentran
aislados entre sí, se interconectan mediante
redes de alta frecuencia.


https://aws.amazon.com/about-aws/global-infrastructure/

Aviaviliry Zone **AZ** = DataCen1 + DataCent2 + ...

 **REGION** =  AZ1 + AZ1 + AZ3
                                    
Availability Zone 1  -------------  Data Center
Data Center                         Data Center
Data Center                         Data Center
      \      Coneccion de fibra   / Availability Zone 3
       \        baja latencia    /
        \                       /
         \  Data Center        /
            Data Center       /
            Availability Zone 2


South America (São Paulo) Region        Availability Zones: 3*

AWS Edge Locations          Launched 2011
        Edge locations 
        Rio de Janeiro, Brazil; 
        São Paulo, Brazil; 
        Bogota, Colombia; 
        Buenos Aires, Argentina;
        Santiago, Chile;

Lo ideal es poner contenido critico de baja latencia en la edge location



<<<<<<< HEAD
####  Región y AZ
=======
###  Región y AZ
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

Una región es un grupo de zonas de
disponibilidad que están aisladas de forma
física, con un suministro independiente de luz,
refrigeración, seguridad física y conexión de
baja latencia (el tiempo de respuesta que hay
entre que se realiza físicamente una acción
y un dispositivo la lleva a cabo) y redundante
para asegurar la alta disponibilidad y la alta
tolerancia a errores.

Al estar físicamente separadas, incluso si
alguna de las zonas es afectada por una
catástrofe, el servicio puede continuar
funcionando en otra zona de disponibilidad
donde se encuentran los respaldos necesarios.

Diferenciemos los dos conceptos clave:

**Región**
Es un conjunto de Zonas de Disponibilidad.
Las regiones se encuentran alrededor de
todo el mundo.

**(AZ) Aviability Zone**
Es un conjunto de Data Centers, donde
se almacenan los miles y miles de
servidores físicos. Se encuentran
aislados entre sí, se interconectan
mediante redes de alta frecuencia.


Amazon recomienda considerar desplegar los
productos y/o servicios `en al menos 2 zonas`
diferentes de la misma región para garantizar
la `redundancia` y la alta `tolerancia a errores`.
De esa manera, nosotros como clientes podemos
asegurarnos de que, incluso ante diferentes
incidencias, nuestro producto pueda ser siempre
accesible para el usuario final.

### Responsabilidades 

Quién es responsable y de qué en la nube de AWS

La Cloud Security Alliance identifica 12
amenazas relacionadas con la seguridad en la nube. 
Se clasifican de acuerdo al orden de gravedad:

**12 amenazas:**

1. Incumplimiento de datos.
2. `Identidad, credencial` y gestión de acceso `débiles`.
3. `APIs` inseguras.
4. Vulnerabilidades `de sistema y aplicación`.
5. Secuestro de cuenta.
6. Inicio de sesión malintencionado.
7. Amenazas persistentes avanzadas.
8. Pérdida de datos.
9. Evaluación Insuficiente.
10. Abuso de los servicios en la nube.
11. Denegación de Servicio.
12. Vulnerabilidades de tecnología compartida.

Los proveedores importantes, como Amazon,
Google y Microsoft, ya han resaltado que la
seguridad es una responsabilidad compartida,
donde ellos se hacen cargo de lo que está fuera
de la nube y los usuarios son, en gran parte,
responsables de la seguridad en la nube.



**Cuadro de Responsabilidad Compartida en AWS**

https://aws.amazon.com/compliance/shared-responsibility-model/

```
----------------------------------------------------------------------------------
CLIENTE                            DATOS DE CLIENTES
dentro de la nube
por la seguridad          Plataforma, aplicaciones, identidad y gestión de accesos
Responsabilidades
                            Configuración de Sistema operativo, red y firewall

                  Encrip.    Encript :Server     Protecc. d Network 
            Auth & Acout     Data & FileSyst.    Trasnf integrity
--------------------------------------------------------------------------------
AWS                                     SOFTWARE
Responsabilidades
fuera de la nube     Cómputo     Almacenamiento  Base-de-Datos   Red
     
                             HARDWARE / INFRAESTRUCTURA GLOBAL AWS   

                       Regiones     Zonas_Disponibles  Ubicaciones_Fronterizas 
-------------------------------------------------------------------------------------
```


### Servicios Centrales AWS


Servicios Core

Servicios muy importantes:
● EC2.
● S3.
● S3 Glacier.
● EBS.
● EFS.



Introducción a los Servicios Core de AWS
En este módulo estudiaremos los llamados
Servicios Core o servicios esenciales de AWS.

El nombre Core proviene del hecho de que son la
oferta principal de AWS a sus
clientes, siendo estos servicios los más populares
de la plataforma online y los más utilizados por
todos sus clientes. Entre ellos encontraremos

servicios como **EC2,S3, EBS,EFS,** etc.
En el desarrollo de este módulo analizaremos
las características de cada servicio así
como su integración con los otros servicios
de AWS que no son
comprendidos dentro de este módulo.

● Ahondaremos, en primer lugar, en la capacidad de
cómputo (`EC2` o Elastic Cloud Compute) explicando
qué nos brinda, cuáles son sus opciones y cómo elegir
lo mejor para cubrir diferentes necesidades.

● Seguiremos con los servicios de `almacenamiento`,
analizando cuáles son sus ventajas, usos comunes
y qué diferencia nos ofrecen para poder determinar
el mejor producto disponible.

● Finalmente, tendremos las herramientas para elegir
con conocimiento la mejor opción que nos puede
ofrecer Amazon, en base a nuestros objetivos o los
de nuestra empresa/clientes.

AWS ofrece a sus clientes
decenas de servicios agrupados según la
naturaleza o solución que aporta cada uno de
ellos (computación, almacenamiento, bases de
datos, redes, mensajería, análisis, inteligencia
artificial o internet de las cosas, entre otros).
A continuación, enumeramos aquellos que
consideramos muy importantes y que
deberíamos conocer si queremos plantearnos
el cloud computing como una alternativa dentro
de nuestro proyecto o finalidades personales:


<<<<<<< HEAD
### S3 - Simple Srorage Service

####  S3 - Storage Classes
=======


###  S3 - Storage Classes
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

https://aws.amazon.com/s3/storage-classes/
https://zesty.co/blog/the-ultimate-guide-to-s3-costs/

https://console.aws.amazon.com/s3/home



**S3 Standard**

S3 Standard is the default storage class for S3 and offers high durability,
high availability, `low latency`, and high throughput. 
This is suitable for applications that need `frequent access` to data. 
Examples are  online gaming, big data workloads, or SaaS .


**S3 Intelligent Tiering**

designed to `optimize S3` storage costs without sacrificing the durability, availability, 
ow latency, and throughput of the S3 Standard. 

With Intelligent Tiering, objects are stored in `two access tiers`:
 one for `frequent` access, the other for `infrequent` access.
The infrequent access tier costs less than the frequent access tier. 
S3` automatically monitors access` patterns for objects and dynamically moves objects 
that have `not been accessed for 30 days` in a row to the infrequent access tier. 
If an object is accessed again, it’s moved back to the frequent access timer. 

With this model, users only pay for the monitoring and automation fee for the objects.
There’s `no cost for moving data between the two tiers.`

**S3 Glacier**
S3 Glacier is mainly designed for `data archival` workloads.
Many organizations need `long-ter`m data storage for `regulatory compliance.`
This data may not be operationally active but needs archival storage with competitive pricing.

AWS customers can either `directly upload their legacy` data to S3 Glacier, 
or `create S3 lifecycle policies` to transition data to Glacier. 
The time for data `retrieval from Glacier` can range from a `few minutes to twelve hours`, 
depending on the tier used.

**S3 Glacier Deep Archive**
S3 Glacier Deep Archive is the `lowest-cost storage` class in S3. 
It’s also designed for data archival scenarios, but unlike S3 Glacier, 
its retrieval time is `within twelve hours`, whereas S3 Glacier allows you to urgently retrieve data
within minutes using expedited retrieval. 

S3 Glacier Deep Archive `can be an ideal` data retention solution for enterprises that need to access 
archived data only `once or twice a year`.


https://aws.amazon.com/s3/pricing/


```j
SERVICE      ( AZ = Oregon)    | Monthly Storage pricing
===============================|=========================
S3 Standard                    | $0.023   per GB 
S3 Intelligent                 | 
    Frequent Access            | $0.023   per GB / Month
    Infrequent Access          | $0.0125  per GB / Month
                               | 
S3 Intelligent AsynchArchive   | 
    Archive                    | $0.0036  per GB / Month
    Deep Archive               | $0.00099 per GB / Month
                               |
S3 Glacier                     |     
    Instant Retrieval          | $0.004   per GB
    Flexible Retrieval         | $0.0036  per GB
                               | 
S3 Glacier Deep Archive        | $0.00099 per GB
```

 Deep Archive storage classes, AWS charges for 40 KB of additional metadata

```j
Standard   | Intelligent| Standard-I  |  One Zone   |   Glacier   |  Gla Deep   |
===========|============|=============|=============|=============|=============|
• frequent | • variable |• Low freq   |  • Less     | • Archive   | • Archive   |
access     | frequency  |  access     |  access     |             |             |
           |            |             |             |             |             |
• access   | • access   |  • access   |  • access   |  •minutes   | • hours     |
Millisec   |  Millisec  |  Millisec   |  Millisec   |  to hours   |             |
           |            |             |             |             |             |
• > 3 AZ   | • > 3 AZ   |  > 3 AZ     | • 1 AZ      |  • > 3 AZ   |  • > 3 AZ   |
           |            |             |             |             |             |
$ 0.021    |$0.01~0.021 | • $0.0125~  | • $0.01~    | • $0.004~   | • $0.001~   |
                        |             |             |             |             |
          •Min storage  |•Min storag  |• Min storag |• Min storag |• Min storag |
             duration   |  duration   | duration    | duration    | duration    |
                        |             |             |             |             |
          • Monitoring  |• Min object |• Min object |• Min object |• Min object |  
            fee         |  size       |  size       |   size      |  size       |
                        |             |             |             |             |
                         • Retrival   | •Retrival   |• Retrival   |• Retrival   | 
                           fee  x GB  | fee x GB    | fee x GB    | fee x GB    |
```

<<<<<<< HEAD
#### S3 - Crear desde web



#### Crear S3 bucket (instancia )desde Web
=======
### S3 - Crear desde web



### Create bucket  desde Web
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75


https://console.aws.amazon.com/s3/bucket/create

Buckets are containers for data stored in S3.

General configuration
AWS Region                  US West (Oregon) us-west-2
**Bucket type**
```j
    'General purpose'
    Recommended for as do  while return main in `most use cases` and access patterns. 
    General purpose buckets are the original S3 bucket type. 
    They allow a mix of storage classes that redundantly store objects across multiple Availability Zones.

    'Directory'
    Recommended for `low-latency` use cases. 
    These buckets use only the `S3 Express One Zone` storage class, 
    which provides faster processing of data within a single Availability Zone.
```
**Bucket name**

    Bucket name must be unique within the global namespace and follow the bucket naming rules. 
    `Copy settings` from existing bucket - optional         -> Choose bucket <-

**AWS Region**


**Object Ownership**
Control ownership of objects written to this bucket from other AWS accounts 
and the use of access `control lists` (ACLs). Object ownership determines who can specify access to objects.

    ▣ ACLs disabled (recommended)
    All objects in this bucket are owned by this account. 
    Access to this bucket and its objects is specified using only policies.

    □ ACLs enabled
    Objects in this bucket can be owned by other AWS accounts. 
    Access to this bucket and its objects can be specified using ACLs.

**Object Ownership**

Bucket owner enforced
Block Public Access settings for this bucket
Public access granted to buckets & objects through `access control lists` (ACLs), 

AWS recommends that you turn on Block all public access, 
but before applying any of these settings, 
ensure that your applications will work correctly without public access. 


**Block all public access**

Turning this setting on is the same as turning on all four settings below.

▣ Block public access to buckets and objects granted through new access control lists (ACLs)
▣ Block public access to buckets and objects granted through any access control lists (ACLs)
▣ Block public access to buckets & objects through new public bucket or access point policies
▣ Block public & cross-account access to buckets & objects through any public bucket or access point policies

**Bucket Versioning**

Versioning is a means of keeping multiple variants of an object in the same bucket.
You can use versioning to preserve, retrieve, and restore every version 
of every object stored in your Amazon S3 bucket. 
 
Bucket Versioning
 □ Disable
 ▣ Enable



==============

myawsbucket
Bucket with the same name already exists

este bucket ya fue utilizado por otra cuenta

ariel-s3.first-test  valido

https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html
Bucket name must not contain `uppercase` characters
Bucket name must not contain `space`     characters
Bucket name must not `end` with dash or period `- . `
Bucket name contains `invalid` characters: `! @ # $ % ^ & * > ( ) _ + ,`
Bucket name must not contain dash next to period `.-   -.`

<<<<<<< HEAD
#### S3 - Ver nuestro bucket
=======
### S3 - Ver nuestro bucket
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

para ver todos los buckets
https://console.aws.amazon.com/s3/buckets/

podemos ver uno en especifico
https://console.aws.amazon.com/s3/buckets/ariel-s3.first-test

y acceder a algun tab de este para mas informacion:
Objects     Properties  Permissions     Metrics     Management  Access Points
https://console.aws.amazon.com/s3/buckets/ariel-s3.first-test?&tab=properties


**Bucket overview**

    AWS Region
    US West (Oregon) us-west-2

    Amazon Resource Name (ARN)
    arn:aws:s3:::ariel-s3.first-test

    Creation date
    October 26, 2024, 03:50:49 (UTC-03:00)

**Bucket Versioning**

**Tags (0)**                Edit
    You can use bucket tags to track storage costs and organize buckets.

    Key                     Value

### S3 - Suir archivos

https://console.aws.amazon.com/s3/upload/ariel-s3.first-test

Files and folders (1 Total, 3.2 KB)     Add files       Add folder

Destination details

    Bucket Versioning
            Enabled
    Default encryption type
            S3 managed keys (SSE-S3)
    Object Lock
            Disabled

Storage class Info

    □ S3 Express OneZone
    ▣ Standard
    □ Intelligent-Tiering
    .....

Server-side encryption 
    ▣ Don't specify an encryption key
    □ Specify an encryption key

Additional checksums 
    □ On
    ▣ Off

Tags - optional

Metadata

-> UPLOAD <-


https://console.aws.amazon.com/s3/object/ariel-s3.first-test?&prefix=45+Networking+commands.md

Edit Block Public Access settings :
https://console.aws.amazon.com/s3/settings/edit


https:/console.aws.amazon.com/s3/bucket/ariel-s3.first-test/property/policy/edit
Policy examples     Policy generator


No npoos deja...Hay que hacer :
Edit Object Ownership:
https://console.aws.amazon.com/s3/bucket/ariel-s3.first-test/property/oo/edit

    □ ACLs disabled (recommended)
    ▣ ACLs enabled

I acknowledge that ACLs will be restored.
    ▣ Bucket owner preferred

-> SAVE changes<-

Editar permisos del archivo
https://console.aws.amazon.com/s3/buckets/ariel-s3.first-test/object/edit_acl?&prefix=45+Networking+commands.md


Grantee             Objects                 Object ACL

Object owner        ▣ Read                  ▣ Read
(your AWS account)                          ▣ Write

Everyone            □ Read                  □ Read
(public access)                             □ Write


Canonical ID: 5*********d
Group: http://acs.amazonaws.com/groups/global/AllUsers


Add grantee                         SAVE changes

**Intelligent-Tiering Archive configurations (0)**


<<<<<<< HEAD
### S3 - Vaciar y Eliminar bucket 

https://console.aws.amazon.com/s3/bucket/ariel-s3.first-test/empty

Nos hara escribit : `permanently delet`

https://console.aws.amazon.com/s3/bucket/ariel-s3.first-test/delete

Nos hara escribit : `ariel-s3.first-test`
 
Nos hace hacerlo en 2 pasos y con requisitos de entrada para evitar accidentes.


#### EC2 Conecct SSH Client 
https://console.aws.amazon.com/ec2/home#ConnectToInstance:instanceId=i-**************b

1. Open an SSH client.
2. Locate your private key file. The key used to launch this instance is lab-key-pair.pem
3. Run this command, if necessary, to ensure your key is not publicly viewable.
    chmod 400 "lab-key-pair.pem"
4. Connect to your instance using its Public DNS:
ssh -i "lab-key-pair.pem" ec2-user@ec2-***-***-***-***.us-west-2.compute.amazonaws.com

Note: In most cases, the guessed `user nam`e is correct. However, 
read your AMI usage instructions to check if the AMI owner 
has changed the default AMI user name.

#### MEJORAR LA SEGURIDAD

https://console.aws.amazon.com/ec2/home#InstanceDetails:instanceId=i-***********b

**SECURITY -> Inbound rules**


Name    Sec.Rule ID     Port range    Protocol    Source     Security groups   Description
–       sgr-*******5    22            TCP         0.0.0.0/0  allow_SSH_HTTP    SSH  from VPC
–       sgr-*******4    80            TCP         0.0.0.0/0  allow_SSH_HTTP    HTTP from VPC
 
CAMBIAMOS    0.0.0.0/0  ->  a IP_PUBLICA de nuestra casa

Esta IP es DINAMICA y tendremos que cambiarla cuando se pierda la coneccion

[ec2-user@ip-10-0-1-220 ~]$ lsblk
NAME    MAJ:MIN RM SIZE RO TYPE MOUNTPOINT
xvda    202:0    0  10G  0 disk 
└─xvda1 202:1    0  10G  0 part /
[ec2-user@ip-10-0-1-220 ~]$ lsblk -f
NAME    FSTYPE LABEL UUID                                 MOUNTPOINT
xvda                                                      
└─xvda1 xfs    /     1377e573-627c-46ee-b7ca-9b86138b39db /

https://console.aws.amazon.com/ec2/home?#InstanceDetails:instanceId=i-**********b
IAM Role
https://console.aws.amazon.com/iam/home#/roles/details/ROL_NAME?section=permissions

### EBS - Elastic Block Service  (Disco EC2)



https://console.aws.amazon.com/ec2/home#Volumes:

https://console.aws.amazon.com/ec2/home#CreateVolume:

Create volume 
Create an Amazon EBS volume to attach to any EC2 instance in the same Availability Zone.

Volume settings

    Volume type                 General Purpose SSD (gp2)
    Size (GiB)                  2         Min 1 Max 16384 must be an integer.
    IOPS                         100 / 3000
    Baseline 3 IOPS/GiB  minimum 100 IOPS, burstable to 3000 IOPS.
    Throughput (MiB/s)          Not applicable
    Availability Zone           us-west-2a
    Snapshot ID - optional      Don't create volume from a snapshot
    Encryption                  □  Encrypt this volume 
    Tags - optional Info




https://console.aws.amazon.com/ec2/home#AttachVolume:volumeId=vol-**********


Attach volume Info
Attach a volume to an instance to use it as you would a regular physical hard disk drive.

Basic details
    Volume ID           vol-**********  ( this EBS )
    Availability Zone   us-west-2       ( Only instances in same Availability Zone)
    Instance            i-************  (select an EC2 to atach)
    
    Device name         /dev/sdf  ( Device Name for EBS : "/sdb"  "/sdc"  "/sde" )

Recommended device names for Linux: /dev/xvda for root volume. /dev/sd[f-p] for data volumes.
Newer Linux kernels may rename your devices to /dev/xvdf through /dev/xvdp internally, even when the device name entered here (and shown in the details) is /dev/sdf through /dev/sdp.

#### Montar el EBS desde EC2

```sh
ssh -i "lab-key-pair" ec2-user@ec2-***-***-***-***.us-west-2.compute.amazonaws.com

[ec2-user@ip-10-0-1-220 ~]$ lsblk
NAME    MAJ:MIN RM SIZE RO TYPE MOUNTPOINT
xvda    202:0    0  10G  0 disk 
└─xvda1 202:1    0  10G  0 part /

[ec2-user@ip-10-0-1-220 ~]$ lsblk -f
NAME    FSTYPE LABEL UUID                                 MOUNTPOINT
xvda                                                      
└─xvda1 xfs    /     1377e573-627c-46ee-b7ca-9b86138b39db /

# WE ATACH EBS  to EC2 :
# https://console.aws.amazon.com/ec2/home#AttachVolume:volumeId=vol-**********

[ec2-user@ip-10-0-1-220 ~]$ lsblk
NAME    MAJ:MIN RM SIZE RO TYPE MOUNTPOINT
xvda    202:0    0  10G  0 disk 
└─xvda1 202:1    0  10G  0 part /
xvdf    202:80   0   2G  0 disk 

[ec2-user@ip-10-0-1-220 ~]$ sudo mkfs -t ext4 /dev/xvdf
    mke2fs 1.42.9 (28-Dec-2013)
    Filesystem label=
    OS type: Linux
    Block size=4096 (log=2)
    Fragment size=4096 (log=2)
    Stride=0 blocks, Stripe width=0 blocks
    131072 inodes, 524288 blocks
    26214 blocks (5.00%) reserved for the super user
    First data block=0
    Maximum filesystem blocks=536870912
    16 block groups
    32768 blocks per group, 32768 fragments per group
    8192 inodes per group
    Superblock backups stored on blocks: 
        32768, 98304, 163840, 229376, 294912

    Allocating group tables: done                            
    Writing inode tables: done                            
    Creating journal (16384 blocks): done
    Writing superblocks and filesystem accounting information: done 

[ec2-user@ip-10-0-1-220 ~]$  lsblk -f
    NAME    FSTYPE LABEL UUID                                 MOUNTPOINT
    xvda                                                      
    └─xvda1 xfs    /     1377e573-627c-46ee-b7ca-9b86138b39db /
    xvdf    ext4         7f60b523-1013-4a55-bff3-a4e1a577fb55 

[ec2-user@ip-10-0-1-220 ~]$ sudo cat /etc/fstab 
UUID=1377e573-627c-46ee-b7ca-9b86138b39db   /          xfs   defaults,noatime  1   1

[ec2-user@ip-10-0-1-220 ~]$ nano cat /etc/fstab 
UUID=7f60b523-1013-4a55-bff3-a4e1a577fb55    /test-ebs  ext4  defaults 0 0

[ec2-user@ip-10-0-1-220 ~]$ sudo mount  UUID=7f60b523-1013-4a55-bff3-a4e1a577fb55
    mount: /test-ebs: mount point does not exist.
[ec2-user@ip-10-0-1-220 ~]$ sudo mkdir /test-ebs
[ec2-user@ip-10-0-1-220 ~]$ sudo mount  UUID=7f60b523-1013-4a55-bff3-a4e1a577fb55

[ec2-user@ip-10-0-1-220 ~]$  lsblk
    NAME    MAJ:MIN RM SIZE RO TYPE MOUNTPOINT
    xvda    202:0    0  10G  0 disk 
    └─xvda1 202:1    0  10G  0 part /
    xvdf    202:80   0   2G  0 disk /test-ebs       # EXITO..  otra alternativa
                                                    # sudo mount -a (-ALL=todos)
```

mi ip local es     10-0-1-220   
la del docente   172-31-89-42
Vemos como lo realizo el docente


```sh
[ssm-user@ip-172-31-89-42 bin]$ sudo su
[root@ip-172-31-89-42 bin]# mkfs -t ext4 /dev/xvdf
    mke2fs 1.46.5 (30-Dec-2021)
    Creating filesystem with 524288 4k blocks and 131072 inodes
    Filesystem UUID: be554cab-1c23-4302-95c2-7d024d03fd95
    Superblock backups stored on blocks:
    32768, 98304, 163840, 229376, 294912
    Allocating group tables: done
    Writing inode tables: done
    Creating journal (16384 blocks): done
    Writing superblocks and filesystem accounting information: done

[root@ip-172-31-89-42 bin]# lsblk -f
NAME    FSTYPE FSVER LABEL UUID                             FSAVAIL FSUSE   MOUNTPOINTS
xvda    
xvda1     xfs     /2ff7d06a-8371-4341-9745-e4c445473fd8     6.4G    19%     /
 ├xvda127 vfat    FAT16   BDF7-66F9   
 ├xvdf    ext4/   1.0 be554cab-1c23-4302-95c2-7d024d03fd95
xvda128

[root@ip-172-31-89-42 bin]# vim /etc/fstab

    UUID=2ff7d06a-8371-4341-9745-e4c445473fd8     / xfs defaults,noatime 1 1      
    UUTD=BDF7-66F9           /boot/efi  vfat     defaults, noatime, uid-0,gid-0, umask-0077,shortname-winnt,x-systemd.automount 02
    UUID=be554cab-1c23-4302-95c2-7d024d03fd95   /test-ebs ext4  defaults 0 0

[root@ip-172-31-89-42 bin]# mount -f be554cab-1c23-4302-95c2-7d024d03fd95
[root@ip-172-31-89-42 bin]# mount -a
[root@ip-172-31-89-42 bin]# lsblk

[root@ip-172-31-89-42 bin]# lsblk 
NAME    FSTYPE FSVER LABEL UUID                             FSAVAIL FSUSE   MOUNTPOINTS
xvda    
xvda1     xfs     /2ff7d06a-8371-4341-9745-e4c445473fd8     6.4G    19%     /
 ├xvda127 vfat    FAT16   BDF7-66F9   
 ├xvdf    ext4/   1.0 be554cab-1c23-4302-95c2-7d024d03fd95  2G      0       /test-ebs
xvda128

NAME        MAJ:MIN RM SIZE RO  TYPE  MOUNTPOINTS
xvda        202:0   0   8G  0   disk
xvdal       202:1   0   8G  0   part  /
├xvda127    259:0   0   1M  0   part 
├xvda128    259:1   0   10M 0   part  /boot/efi
xvdf        202:8   0   2G  0   disk  /test-ebs
[root@ip-172-31-89-42 bin]#
```

#### Generar y ver Snapshot 

https://console.aws.amazon.com/ec2/home#CreateSnapshotFromVolume:volumeId=vol-*********

Create snapshot Info
Create a point-in-time snapshot to back up the data on an Amazon EBS volume to Amazon S3.

Source volume
Volume ID               vol-0ceb78aca13fb6b5f
Availability Zone       us-west-2a

Snapshot details
Description             Add a description for your snapshot     255 characters maximum.
Encryption              Not encrypted
Tags Info               A tag is a label that you assign to an AWS resource. Each tag consists of a key and an optional value. You can use tags to search and filter your resources or track your AWS costs.

No tags associated      Add tag You can add 50 more tags.

Cancel                  Create snapshot



https://console.aws.amazon.com/ec2/home#Snapshots:
=======

# EBS 1:50:00 



>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

### Almacenamiento  : Objeto vs Bloque

**Almacenamiento en objetos**
El almacenamiento de objetos (también conocido
como Object-based Storage) es un término
general que se refiere a la forma en que
organizamos y trabajamos con las unidades de
almacenamiento, a las que llamamos objetos.
Este es el caso del servicio S3 y S3 Glacier.
Cada objeto contiene tres cosas:

1. Los datos en sí: pueden ser cualquier cosa
que desee almacenar, desde una foto familiar
hasta un manual de desarrollo de software.

1. Una cantidad expansible de metadatos. Los
metadatos están definidos por quien crea el
almacenamiento de objetos.

1. Un identificador global único. El identificador
es una dirección dada al objeto para que el
objeto se encuentre sobre un sistema
distribuido. De esta forma, es posible
encontrar los datos sin tener que conocer la
ubicación física de los datos (que podrían
existir en diferentes partes de un centro de
datos o en diferentes partes del mundo).

Amazon EBS
Amazon S3
Bloque Bloque
Datos Objeto
Datos
ID Meta
Datos
Atributos
Objeto

**Almacenamiento en bloques**

El almacenamiento en bloques divide los datos
en bloques y los almacena en partes separadas.
Cada bloque de datos recibe un identificador
único, lo cual permite que el sistema de
almacenamiento coloque los datos que son
más pequeños, donde sea más conveniente.
Veremos este concepto en tiempo real en cómo
Windows 10 (cualquier sistema Windows) organiza
con su sistema de archivos `NTFS`, los datos en Bloques.

El almacenamiento en bloques, a menudo, se
configura para desacoplar los datos del entorno
del usuario y distribuirlos en múltiples entornos
para aprovechar mejor esos datos.
Eso significa que algunos datos se pueden
almacenar en un entorno de Linux y otros se
pueden almacenar en una unidad de Windows.

Distribución de los datos

Distribución de los Datos de un Sistema
de Almacenamiento de Bloques.

Distribución de los Datos de un Sistema
de Almacenamiento de Objetos.


**Tipos de volúmenes en Elastic Block Storage**

Amazon EBS permite crear volúmenes de
almacenamiento y adjuntarlos a instancias
de Amazon EC2. Una vez adjuntados, es posible
crear un sistema de archivos sobre estos
volúmenes (como NTFS para Sistemas Windows)
y ejecutar una base de datos; o darles cualquier
otro uso que se le daría al almacenamiento en bloques.


Los volúmenes de Amazon EBS se colocan en
una zona de disponibilidad específica, donde
se replican automáticamente para protegerlo de
errores de componentes individuales. EBS hace
una triple replicación de los volúmenes, es decir,
al ser creado, se almacena en tres Availability Zones Diferentes.

Todos los tipos de volúmenes de EBS ofrecen
capacidades de instantáneas duraderas y están
diseñados para proporcionar una disponibilidad del 99,999 %



<<<<<<< HEAD
## Clase 14
=======
## Clase 13
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75

### DESAFIO 6

**Prerrequisitos:**

1) Crear cuenta de AWS (si ya la tienen, no es necesario crear una nueva) 
    (pueden crearla siguiendo el instructivo enviado por mail previamente)
2) Crear un usuario con permisos de administrador (admin full access)
3) Loguearse a la cuenta como este usuario
4) Definir una serie de tags que agreguen información a nuestros recursos, por ejemplo:
*   a) Owner: Zdenko
*   b) Email: zdenko.hraste@educacionit.com
*   c) Team: Cloudops
*   d) Proyect: Desafio-M6
5) Todos los recursos los crearemos en la región us-east-1 en la AZ us-east-1a 
    a menos que se especifique lo contrario
6) Todos los recursos que crearemos tendrán que tener los tags que definimos más arriba,
    además de un nombre descriptivo.

**Elastic Cloud Compute (EC2)**

1) Crear una instancia EC2 dentro de los parámetros de free tier
2) Configurar la conexión remota, la misma podrá ser a través de SSM,
    utilizando la Ilave de SSH y conectarnos desde nuestra VM con linux, etc. 
    A elección de ustedes.  Una vez configurado, verifiquen la conexión.

**Simple Storage Service (S3)**

1) Crear bucket S3, tengan en cuenta que el nombre del bucket debe ser único.
2) Subir este pdf como prueba al bucket s3 y verificación de que funciona de forma correcta

**Elastic Block Store (EBS)**

1) Crear un volumen de EBS y linkearlo a la instancia que creamos previamente 
    (recuerden verificar que ambos estén en la misma región y AZ), 
    usar valores por default y un tamaño de 2gb
2) Una vez que verificamos que el volumen se agregó de forma correcta a nuestro sistema, 
    formatear el EBS como ext4, agregarlo al FSTAB y que el FS se monte en el directorio /desafíos.
    Montar el FS y verificar que se puede escribir en el mismo.
3) Una vez montado el FS, descargar el desafío que subimos al bucket de S3 
    y mover el archivo al directorio/desafíos (Para la descarga, 
    se pueden utilizar diferentes formas como por ejemplo usar la AWS CLI, usar wget, etc 
    en base a la forma que utilicen tendrán que cambiar los permisos del bucket).

**IMPORTANTE**

<<<<<<< HEAD
4) Por último, una vez documentado todo en el instructivo, 
   realizar una limpieza de recursos eliminando todo lo creado



https://explore.skillbuilder.aws/learn/
https://explore.skillbuilder.aws/learn/course/14050/play/86728/official-practice-question-set-aws-certified-cloud-practitioner-clf-c02-english
https://awscertificationpractice.benchprep.com/app/aws-certified-cloud-practitioner-official-practice-question-set-clf-c02

AWS Certified Cloud Practitioner  (CLF-C02)  Official Practice Question Set


Domain NameComplete                                                                     % Correct
1.0 Cloud Concepts                                                                      not taken   0%
1.1 Define the benefits of the AWS Cloud.                                               not taken   0%
1.2 Identify design principles of the AWS Cloud.                                        not taken   0%
1.3 Understand the benefits of and strategies for migration to the AWS Cloud.           not taken   0%
1.4 Understand concepts of cloud economics.                                             not taken   0%

2.0 Security and Compliance                                                             not taken   0%
2.1 Understand the AWS shared responsibility model.                                     not taken   0%
2.2 Understand AWS Cloud security, governance, and compliance concepts.                 not taken   0%
2.3 Identify AWS access management capabilities.                                        not taken   0%
2.4 Identify components and resources for security.                                     not taken   0%

3.0 Cloud Technology and Services                                                       not taken   0%
3.1 Define methods of deploying and operating in the AWS Cloud.                         not taken   0%
3.2 Define the AWS global infrastructure.                                               not taken   0%
3.4 Identify AWS database services.                                                     not taken   0%
3.5 Identify AWS network  services.                                                     not taken   0%
3.6 Identify AWS storage  services.                                                     not taken   0%
3.7 Identify AWS AI and machine learning (AI/ML) services and analytics services.       not taken   0%
3.8 Identify services from other in-scope AWS service categories.                       not taken   0%

4.0 Billing, Pricing, and Support                                                       not taken   0%
4.1 Compare AWS pricing models.                                                         not taken   0%
4.2 Understand resources for billing, budget, and cost management.                      not taken   0%
4.3 Identify AWS technical resources and AWS Support options.                           not taken   0%



https://kodekloud.com/    PRACTICAR   KUBERNETES
https://engineer.kodekloud.com/        (subscripcion gratuita)
https://kodekloud.com/playgrounds/playground-aws#list-of-services


https://www.youtube.com/@KodeKloud

Mumshad Udemy :
Kubernetes Certified Application Developer (CKAD) with Tests 18,99 US$
Linux Foundation Certified Systems Administrator-LFCS         13,99 US$


S3
OJO CON **OBJECT LOCK**  Puede producir costos elevados sean inevitables
con unica solucion disponible eliminar la cuenta de AWS 



### Creamos S3

Create bucket Info
Buckets are containers for data stored in S3.

**General configuration**

AWS Region          US West (Oregon) us-west-2
Bucket name         zenko-bootcamp-devops-2023

Bucket type :

▣ General purpose
Recommended for most use cases and access patterns.  the original S3 bucket type.

□ Directory
Recommended for low-latency use cases. use only the S3 Express One Zone storage class,


**Object Ownership Info**
Control ownership of objects written to this bucket 
With Access control lists (ACLs)  &  policies.

▣ ACLs disabled (recommended)
objects in bucket owned by this account. Access is specified using only 

□ ACLs enabled
Objects in bucket owned by other AWS accounts. Access is specified using ACLs.

Object Ownership    Bucket owner enforced



**Block Public Access settings for this bucket**
Public access is granted to buckets and objects through access control lists (ACLs), bucket policies, access point policies, or all. In order to ensure that public access to this bucket and its objects is blocked, turn on Block all public access. These settings apply only to this bucket and its access points. AWS recommends that you turn on Block all public access, but before applying any of these settings, ensure that your applications will work correctly without public access. If you require some level of public access to this bucket or objects within, you can customize the individual settings below to suit your specific storage use cases. Learn more 

Block all public access     This setting  is the same as turning on all four settings below.
▣ Block public access to buckets and objects granted through NEW access control lists (ACLs)
▣ Block public access to buckets and objects granted through ANY access control lists (ACLs)
▣ Block public access to buckets and objects granted through NEW public bucket or access point policies
▣ Block public and cross-account access to objects   through ANY public bucket or access point policies

***Bucket Versioning***
keeping multiple variants of object.  to preserve, retrieve, and restore every version 
□ Disable
▣ Enable


**Tags** - optional
You can use bucket tags to track storage costs and organize buckets. Learn more 

Key         Value - optional        Remove Key
owner       ariel
project     modulo7


**Default encryption**
Server-side encryption is automatically applied to new objects stored in this bucket.

    Encryption type
▣ Server-side encryption            with Amazon S3 managed keys          (SSE-S3)
□ Server-side encryption            with AWS Key Management Service keys (SSE-KMS)
□ Dual-layer server-side encryption with AWS Key Management Service keys (DSSE-KMS)
Secure your objects with two separate layers of encryption.  

    Bucket Key
Using an S3 Bucket Key for SSE-KMS reduces encryption costs by lowering calls to AWS KMS.
□ Disable
▣ Enable

**Advanced settings**
    Object Lock
Store objects using a write-once-read-many (WORM) model to help you prevent object deletiono
▣ Disable
Enable


### Creamos EC2

**Name and tags**   ->(Advanced)

Key         Value           Select  Resource types
owner       ariel           Instances     Volumes    Network Interface
project     modulo7         Instances     Volumes    Network Interface

 Add new tag    Remove 


**Application and OS Images** (Amazon Machine Image) 

Amazon Machine Image (AMI)      Ubuntu Server 24.04 LTS (HVM), SSD Volume Type
Architecture                    64-bit (x86)

**Instance type** 

▣ t2.micro              ree tier eligible
Family: t2              1 vCPU  1 GiB Memory
Current generation:     true
On-Demand Linux base pricing: 0.0116 USD per Hour

**Key pair (login)**    (required)

Key pair name           lab-key-pair

**Network settings**


▣ Allow SSH   traffic from        Anywhere 0.0.0.0/0
▣ Allow HTTP  traffic from the internet
▣ Allow HTTPS traffic from the internet

**Configure storage**

1x 8GiB      gp3

**Advanced details  Info**


Allow tags in metadata    Excelente pero lo veremos mas adelante

User data - optional      Choose file
    
    El archivo que subams nos permite realizar tareas de arranque
    podria ser un script de bash que resuelva
    ● crear y modificar usuarios
    ● instalar y configurar servidor web
    ● intalar agente de monitoreo
    ● configurar variables de entorno

    En este caso solo intalamos apache y hacemos un archivo de prueba
    #!/bin.bash
    apt-get install apache2 -y
    systemclt enable apache2
    systemclt start apache2
    echo "funcione"  >> /prueba.txt


Cancel         -> Launch instance <-

https://console.aws.amazon.com/ec2/home#ConnectToInstance:instanceId=i-**********

```sh
> ssh -i "lab-key-pair" ubuntu@ec2-***.***.***.***us-west-2.compute.amazonaws.com
Enter passphrase for key 'lab-key-pair': 

    Welcome to Ubuntu 24.04.1 LTS (GNU/Linux 6.8.0-1016-aws x86_64)

    * Documentation:  https://help.ubuntu.com
    * Management:     https://landscape.canonical.com
    * Support:        https://ubuntu.com/pro

    System information as of Tue Oct 29 12:23:13 UTC 2024

    System load:  0.32              Processes:             103
    Usage of /:   22.9% of 6.71GB   Users logged in:       0
    Memory usage: 20%               IPv4 address for enX0: 172.31.9.197
    Swap usage:   0%

    Expanded Security Maintenance for Applications is not enabled.
    0 updates can be applied immediately.

    Enable ESM Apps to receive additional future security updates.
    See https://ubuntu.com/esm or run: sudo pro status


    The list of available updates is more than a week old.
    To check for new updates run: sudo apt update


    The programs included with the Ubuntu system are free software;
    the exact distribution terms for each program are described in the
    individual files in /usr/share/doc/*/copyright.

    Ubuntu comes with ABSOLUTELY NO WARRANTY, to the extent permitted by
    applicable law.

    To run a command as administrator (user "root"), use "sudo <command>".
    See "man sudo_root" for details.

> ubuntu@ip-172-31-9-197:~$ ls
> ubuntu@ip-172-31-9-197:~$ touch hola
> ubuntu@ip-172-31-9-197:~$ ls
hola
> ubuntu@ip-172-31-9-197:~$ pwd
/home/ubuntu

> ubuntu@ip-172-31-9-197:~$ systemctl status apache2
Unit apache2.service could not be found.

> ubuntu@ip-172-31-9-197:~$ ls /var/log
README            apport.log  btmp                   cloud-init.log  dpkg.log  landscape  syslog               wtmp
alternatives.log  apt         chrony                 dist-upgrade    journal   lastlog    sysstat
amazon            auth.log    cloud-init-output.log  dmesg           kern.log  private    unattended-upgrades
ubuntu@ip-172-31-9-197:~$ tail -f /var/log/cloud-init.log
2024-10-29 12:16:08,604 - main.py[DEBUG]: Ran 10 modules with 1 failures
2024-10-29 12:16:08,604 - util.py[DEBUG]: Reading from /proc/uptime (quiet=False)


> ubuntu@ip-172-31-9-197:~$ sudo apt-get install apache2


```

https://console.aws.amazon.com/ec2/home#EditUserData:instanceId=i-************
podemos acceder a la configuracion de la maquina si quisieramos copiarla a otra


```sh
> ubuntu@ip-172-31-9-197:~$ sudo apt-get install apache2
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following additional packages will be installed:
  apache2-bin apache2-data apache2-utils libapr1t64 libaprutil1-dbd-sqlite3 libaprutil1-ldap libaprutil1t64 liblua5.4-0 ssl-cert
Need to get 2084 kB of archives.
After this operation, 8094 kB of additional disk space will be used.
Do you want to continue? [Y/n] y
# (...salida cortada...)  #############################################
Running kernel seems to be up-to-date.
No services   need to be restarted.
No containers need to be restarted.
No user sessions are running outdated binaries.
No VM guests are running outdated hypervisor (qemu) binaries on this host.

> ubuntu@ip-172-31-9-197:~$ systemctl status apache
apache-htcacheclean.service  apache2.service              

>ubuntu@ip-172-31-9-197:~$ systemctl status apache2
● apache2.service - The Apache HTTP Server
     Loaded: loaded (/usr/lib/systemd/system/apache2.service; enabled; preset: enabled)
     Active: active (running) since Tue 2024-10-29 12:39:46 UTC; 7min ago
  Docs: https://httpd.apache.org/docs/2.4/
   Main PID: 1792 (apache2)


> ubuntu@ip-172-31-9-197:~$ curl localhost 80
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
  <!--
    Modified from the Debian original for Ubuntu
    Last updated: 2022-03-22
    See: https://launchpad.net/bugs/1966004
  -->
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
# (...salida cortada...)  #############################################

> ubuntu@ip-172-31-9-197:~$ cd /var/www/html/
> ubuntu@ip-172-31-9-197:/var/www/html$ vim prueva.html
> ubuntu@ip-172-31-9-197:/var/www/html$ sudo vim prueva.html
> ubuntu@ip-172-31-9-197:/var/www/html$ cat prueva.html 
<h1> esto es una prueba <h1>
```

### instalamos AWS CLI

https://docs.aws.amazon.com/es_es/cli/latest/userguide/getting-started-install.html

```
$ curl "https://awscli.amazonaws.com/awscli-exe-linux-x86_64.zip" -o "awscliv2.zip"
unzip awscliv2.zip
sudo ./aws/install
```

```sh
> osboxes@osboxes:~$ curl "https://awscli.amazonaws.com/awscli-exe-linux-x86_64.zip" -o "awscliv2.zip"
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
100 63.4M  100 63.4M    0     0  7966k      0  0:00:08  0:00:08 --:--:-- 8794k

> osboxes@osboxes:~$ unzip awscliv2.zip
Archive: awscliv2.zip
creating: aws/
creating: aws/dist/
inflating: aws/install
inflating: aws/README.md
inflating: aws/THIRD_PARTY_LICENSES

> osboxes@osboxes:~$ ls
aws           Desktop    Downloads  Pictures  snap       usr_passwd.txt
awscliv2.zip  Documents  Music      Public    Templates  Videos

> osboxes@osboxes:~$ sudo ./aws/install
You can now run: /usr/local/bin/aws --version

> osboxes@osboxes:~$  rm awscliv2.zip 

>  type aws
aws is /usr/local/bin/aws

> osboxes@osboxes:~$ man aws
No manual entry for aws

> osboxes@osboxes:~$ aws help
NAME      aws       A Comand Line Interface  to manage your AWS  services.
SYNOPSIS  aws  [options] <command> <subcommand> [parameters]

    aws <command> help     for information on a  specific  command. 

> osboxes@osboxes:~$ aws --version
aws-cli/2.18.16 Python/3.12.6 Linux/5.15.0-122-generic exe/x86_64.ubuntu.20

> usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:

  aws help
  aws <command> help
  aws <command> <subcommand> help

>osboxes@osboxes:~$ aws s3 list
aws: error: argument subcommand: Invalid choice, valid choices are:
ls            | website         | presign                        
cp            | mv                                      
rm            | sync                                    
mb            | rb                                      
                
>osboxes@osboxes:~$ aws s3 ls
Unable to locate credentials. You can configure credentials by running "aws configure".
```

https://us-east-1.console.aws.amazon.com/iam/home?region=us-west-2#/users/create

**Specify user details**
User name       read-only
 □ Provide user access to the AWS Management Console - optional

**Permissions options**
 □ Add user to group
 □ Copy permissions from an existing user.
 ▣ Attach policies directly


Set permissions boundary - optional
 □ Set a permissions boundary to control the maximum permissions for this user. 

**Tags** 
Key         Value          
owner       ariel          
project     modulo7        

create

https://console.aws.amazon.com/iam/home/users/details/read-only/create-access-key

**Use case**
Command Line Interface (CLI)


 https://docs.aws.amazon.com/es_es/cli/latest/userguide/cli-services-ec2.html


 ```sh
> osboxes@osboxes:~$ aws configure
AWS Access Key ID [None]: A************Y
AWS Secret Access Key [None]:  e********************************T
Default region name [None]: us-west-2
Default output format [None]: 

> osboxes@osboxes:~$ aws s3 ls
2024-10-22 08:35:05 aws-quick-setup-config-recording-315509528759-7f489
2024-10-29 03:07:13 zenko-bootcamp-devops-2023

>osboxes@osboxes:~$ aws s3 cp Desktop/ssh-key.txt   zenko-bootcamp-devops-2023
usage: aws s3 cp <LocalPath> <S3Uri>   or    <S3Uri> <LocalPath>  or   <S3Uri> <S3Uri>
Error: Invalid argument type

> osboxes@osboxes:~$ aws s3 cp Desktop/ssh-key.txt   s3://zenko-bootcamp-devops-2023
upload failed: Desktop/ssh-key.txt to s3://zenko-bootcamp-devops-2023/ssh-key.txt 
An error occurred (AccessDenied) when calling the PutObject operation: 
User: arn:aws:iam::315509528759:user/read-only is not authorized 

> osboxes@osboxes:~$ aws s3 cp s3://zenko-bootcamp-devops-2023/Mic-hear  Desktop/
download: s3://zenko-bootcamp-devops-2023/Mic-hear to Desktop/Mic-hear
 ```

como podemos obserbar con la key read only nos permitio descargar desde el bucket 
pero no nos deja subir archivos o borrar

```sh
osboxes@osboxes:~$ aws ec2 describe-instances
{
    "Reservations": [
        {
            "ReservationId": "r-**********",
            "OwnerId": "***********",
            "Groups": [],
            "Instances": [
                {
                    "Architecture": "x86_64",
                    "BlockDeviceMappings": [
                        {
                            "DeviceName": "/dev/xvda",
                            "Ebs": {
                                "AttachTime": "2024-10-01T19:49:02+00:00",


> osboxes@osboxes:~$ cd .aws
> osboxes@osboxes:~/.aws$ ls
config  credentials
> osboxes@osboxes:~/.aws$ cat config 
[default]
region = us-west-2

> osboxes@osboxes:~/.aws$ cat credentials 
[default]
aws_access_key_id = A************Y
aws_secret_access_key = e********************************T

> osboxes@osboxes:-$ aws ec2 run-instances --image-id ami-053b0d53c279acc90 count 1 ins
tance-type t2.micro-subnet-id subnet-0ad3afbb8b0b038c4
An error occurred (Unauthorized Operation) 
when calling the RunInstances operation: 
     You ar e not authorized to perform this operation. 
Encoded authorization failure message: DumJeA jqW7UFICn0nmjhhnWyUm0h-cQoAIjSDRJMupdJ9gyzr4YN0rN
```

Aniadimos permisos especificos a EC2 para poder crear una instancia

https://us-east-1.console.aws.amazon.com/iam/home?region=us-west-2#/users/details/read-only/add-permissions


**ADD Permissions**
User name       read-only
**Permissions options**
 □ Add user to group
 □ Copy permissions from an existing user.
 ▣ Attach policies directly

**User details**
Name                    Type            Used as
AmazonEC2FullAccess     AWS managed     Permissions policy

  -> Add Permissions <-

### BEANSTOCK

Para deploy rapido 
Para clientes chicos con desarrolladores pero poco o nungun sysadmin/infra

Step 1          Configure environment
Step 2          Configure service access
Step 3-optional Modify worker
Step 4-optional Set up networking, database, and tags
Step 5-optional Configure instance traffic and scaling
Step 6-optional Configure updates, monitoring, and logging
Step 7          Revuiew


  https://us-west-2.console.aws.amazon.com/elasticbeanstalk/home?region=us-west-2#/welcome
  https://us-west-2.console.aws.amazon.com/elasticbeanstalk/home?region=us-west-2#/create-environment


**Environment tier**
Amazon Elastic Beanstalk has two types of environment tiers to support different types of web applications.

▣ Web server environment
Run a website, web application, or web API that serves HTTP requests. Learn more 
□  Worker environment
Run a worker application that processes long-running workloads on demand or performs tasks on a schedule. Learn more 

**Application code**
 ▣ Sample application
 □ Existing version     Application versions that you have uploaded.
 □ Upload your code     Upload a source bundle from your computer or copy one from Amazon S3.


**Application information**
Application name
zenko-bootcamp-devops

**Environment information**
Choose the name, subdomain and description for your environment. These cannot be changed later.
zenko-bootcamp-devops-emv

Environment name
Zenko-bootcamp-devops-env



**Presets Info**
Start from a preset that matches your use case or choose custom configuration to unset recommended values and use the service's default values.

Configuration presets
▣  Single instance (free tier eligible)
□  Single instance (using spot instance)
□  High availability
□  High availability (using spot and on-demand instances)
□  Custom configuration


**Service access**
IAM roles, assumed by Elastic Beanstalk as a service role, and EC2 instance profiles allow Elastic Beanstalk to create and manage your environment. Both the IAM role and instance profile must be attached to IAM managed policies that contain the required permissions. Learn more 

Service role
▣  Create and use new service role
□  Use an existing service role

Service role name       aws-elasticbeanstalk-service-role
EC2 key pair            lab-key-pair


**Virtual Private Cloud (VPC)**

Launch your environment in a custom VPC instead of the default VPC. 
You can create a VPC and subnets in the VPC management console. Learn more 

    vpc-07ee70b9a3904436c | (172.31.0.0/16)

Public IP address
Assign a public IP address to the Amazon EC2 instances in your environment.

    ▣ Activated

Instance subnets :

Availability Zone      Subnet           CIDR                Name
□ us-west-2b  subnet-039ada3ecf1881581  172.31.32.0/20
□ us-west-2d  subnet-050c2e75bfded2beb  172.31.48.0/20
□ us-west-2c  subnet-06655e38501bc8111  172.31.0.0/20
▣ us-west-2a  subnet-0a3679ad26a872a93  172.31.16.0/20

**Database**

 subnets 
▣ us-west-2a  subnet-0a3679ad26a872a93  172.31.16.0/20

Restore a snapshot - optional
    None

Database settings

Engine              mysql
Engine version      8.0.39
Instance class      db.t3.micro
Storage             5GB
Username            ariel
Password            ariel123
Availability        Low (one AZ)

Database deletion policy

□ Create snapshot     Elastic Beanstalk saves a snapshot and then deletes it. 
□ Retain              The decoupled database will remain available 
▣ Delete

Key         Value          
owner       ariel          
project     modulo7        
type        database


Capacity Info
Configure the compute capacity of your environment and auto scaling settings to optimize the number of instances used.

Auto scaling group
Environment type
Select a single-instance or load-balanced environment.

    Single instance

    Instances
    Min     1
    Max     1

Fleet composition
Spot instances are launched at the lowest available price.
▣ On-Demand instance
□ Spot instance

**Monitoring**
Health reporting System
▣ Basic
□ Enhanced

Email notifications Info
Enter an email address to receive email notifications for important events from your environment. Learn more 

Email
ariel@gmail.com

**Rolling updates and deployments**
Deployment policy       All at once
Batch size type
▣ Percentage
□ Fixed


**Platform software**

Proxy server        Apache

S3 log storage
Rotate logs (standard S3 charges apply.)
□ Activated


Environment properties
The following properties are passed in the application as environment properties.
Name                    Value
PYTHONPATH              /var/app/venv/staging-LQM1lest/bin
ADD       Remove

    SUBMIT

## Clase 15   50:00

### BeanStock

https://console.aws.amazon.com/elasticbeanstalk/home/environments
https://console.aws.amazon.com/cloudformation/home/stackse



### RDS

https://console.aws.amazon.com/rds/home
https://console.aws.amazon.com/rds/home#launch-dbinstance:

Choose a database 

**creation method**

▣ Standard create     You set all of the configuration options
□ Easy create         Use recommended best-practice configurations.

**Configuration**

Engine type

    □ Aurora (MySQL      Compatible)  AWS Aurora
    □ Aurora (PostgreSQL Compatible)
    ▣ MySQL
    □ MariaDB
    □ PostgreSQL
    □ Oracle
    □ Microsoft SQL Server
    □ IBM Db2


    Edition             MySQL Community
    Engine version      MySQL 8.0.39


**Templates**       Choose a sample template to meet your use case.

□  Production    For high availability and fast, consistent performance.
□  Dev/Test      For development use outside of a production environment.
▣  Free tier     To develop new applications, test existing applications, & Learn  RDS.


Availability and durability
Deployment options

□  Multi-AZ DB Cluster   3 instances in a different (AZ).
□  Multi-AZ DB instance  2 instances in a different (AZ).
▣  Single DB instance   (not supported for Multi-AZ DB cluster snapshot)

**Settings**

DB instance identifie   Name for your DB instance. 
myswl-db-bootcamp

Master username         Login ID for the master user of your DB.
admin

Credentials Settings
Master password         ******


Credentials management

□  Managed in AWS Secrets Manager - most secure
RDS generates a password for you and manages it throughout its lifecycle using AWS Secrets Manager.

▣  Self managed
Create your own password or have RDS create a password that you manage.


**Instance configuration**

Are limited to those supported by the engine that you selected above.

DB instance class

□  Show instance classes that support Amazon RDS Optimized Writes
Improves write throughput by up to 2x at no additional cost.

□  Include previous generation classes

□  Standard classes (includes m classes)
□  Memory optimized classes (includes r and x classes)
▣  Burstable classes (includes t classes)

db.t4g.micro

    2 vCPUs
    1 GiB RAM
    Network: Up to 2,085 Mbps

**Storage**

    Storage type        General Purpose SSD (gp3)
    Allocated storage   20 GiB

Advanced settings

    Provisioned IOPS        3000 IOPS
    Storage throughput      125  MiBps

Storage autoscaling

    ▣  Enable storage autoscaling


**Connectivity**

Compute resource

    □ Don’t connect to an EC2 compute resource
    You can manually set up a connection to a compute resource later.

    □ Connect to an EC2 compute resource
    Set up a connection to an EC2 compute resource for this database.

Virtual private cloud (VPC)

    Default VPC (vpc-************)
    4 Subnets, 4 Availability Zones


VPC security group (firewall)

    □  Choose existing
    ▣  Create new


**Database authentication**

▣ Password authentication
□ Password and IAM database authentication
□ Password and Kerberos authentication

**Monitoring**

□ Enable Enhanced Monitoring

**Additional configuration**

▣ Enable automated backups
Backup retention period     1 day

Encryption
▣ Enable encryption
AWS KMS key         (default) aws/rds

Log exports
□ Audit log
□ Error log
□ General log
□ Slow query log

**Estimated monthly costs**
The Amazon RDS Free Tier is available to you for 12 months.
750 hrs of Amazon RDS.
20 GB of General Purpose Storage (SSD).

Cancel                          Create database


###  LAMBDA 

Muy utilizado para Aplicaciones en Microservicios

AWS Lambda
lets you run code without thinking about servers.

https://console.aws.amazon.com/lambda/home/begin


How it works                             Run

.NET    Java    ▣ Node.js     Python      Ruby    Custom runtime

exports.handler = async (event) => {
  console.log(event);
  return 'Hello from Lambda!';
};


**Lambda responds to events**
Once you create Lambda functions, 
you can configure them to respond to events from a variety of sources. 
Try sending a mobile notification, streaming data to Lambda,
or placing a photo in an S3 bucket.

**Pricing (US)**

First 1M requests / month   Free
First 400K GB-sec / month   Free
Requests / month    $ 0.20 per 1M
GB-sec / month      $16.67 per 1M

https://aws.amazon.com/lambda/pricing/

**Related services**
Amazon SNS     pub/sub messaging and mobile notifications service 
Amazon Kinesis makes collect/process, real-time, streaming data

**Use cases**
Mobile backends web applications and backends using AWS Lambda,
real-time data processing systems             using AWS Lambda,


### Create Lambda
https://console.aws.amazon.com/lambda/home/create/function?firstrun=true


Basic information

Function name       my-first-lambda
RuntimeInfo         Node.js 20.x

ArchitectureInfo

    x86_64
    arm64


Execution role

    Create a new role with basic Lambda permissions
    Use an existing role
    Create a new role from AWS policy templates


Additional Configurations
set up code signing, function URL, tags, and Amazon VPC access.

□ Enable Code signingInfo
▣ Enable function URLInfo
□ Enable tagsInfo
□ Enable VPCInfo


Cancel      Create function

## Clase 16

### DESAFIO 7:

Servidor web

1) Crear una instancia EC2 dentro de los parámetros de free tier
2) Configurar la conexión remota, la misma podrá ser a través de SSM, 
   utilizando la Ikave de SSH y coneclamos desde nuestra VM con linux, etc. 
   A elección de ustedes Una vez configurado, verifiquen la conexión
3) Instalar un grebserver (utilizando userdata o conectandose a la instancia), 
   habilitar el servicio y venticar que el webserver funciona de forma local 
   (utilizando curl por ejemplo) y de forma remota 
   (accediendo desde el navegador de nuestra pc o celular). 
   Es importante verificar security groups y firewalls para asegurarse de 
   poder acceder de forma remota al puerto que expone el webserver

Base de datos

1) Crear una iristancia de RDS (free tier)
2) Configurarla de forma tal que sólo lengamos acceso desde la instancia de webserver,
    que no esté abierta al público
3) En este caso, nuestra aplicación no accedera a la base de datos pero simularemos 
   el mismo ejecutando un comando para conectarnos a la base de datos Por ejemplo,
   on caso de utilizar MySQL como motor de la instancia de RDS, usaremos el comando

`mysql -h <endpoint -P 3306-u <usuario> -p`


Al final del desafío, deberían contar con 
una arquitectura similar a la diagramada al principio del desafío:
    Un webserver (accesible a todo público)
    Una base de datos (accesible solamente a través de la instancia del webserver)


### VPS  - Virtual Private CLoud

Amazon nos crea recursos por defecto en cada AZ tenemos VPC y Subnets
Nosotros desplegamos los recursos desde una Subnet
Organisamos las subnets y su trafico desde la VPC medisnte tablas de ruteo

https://docs.aws.amazon.com/vpc/latest/userguide/how-it-works.html

https://console.aws.amazon.com/vpcconsole/home

Details     Resource map     CIDRs     Flow logs     Tags        Integrations

Details    :
    VPC ID              vpc-********
    Default VPC             Yes
    Network Usage metrics   Disabled
    State               Available
    DNS resolution      Enabled
    IPv4 CIDR
    Main route table    rtb-********
    Main network ACL    acl-********

Resource map  :
    VPC
    Subnets (4)
    Route tables (1)
    Network connections (1)

Tags :
    Key     Value

Integrations
    CloudWatch Internet Monitor (0)


https://www.calculadora-redes.com/

**Route tables**   Mapeo de rutas
https://console.aws.amazon.com/vpcconsole/home#RouteTables:

**Internet gateways**  Acceso a internet
https://console.aws.amazon.com/vpcconsole/home#igws:


https://docs.aws.amazon.com/es_es/vpc/latest/userguide/create-vpc.html
https://docs.aws.amazon.com/es_es/vpc/latest/userguide/create-subnets.html
https://docs.aws.amazon.com/es_es/vpc/latest/userguide/subnet-route-tables.html


### Creando VPC 
https://console.aws.amazon.com/vpcconsole/home#CreateVpc:createMode=vpcWithResources



VPC settings
Resources to create

    □ VPC only
    ▣ VPC and other networking resources.

Name tag auto-generation

    ▣ Auto-generate
    bootcamp-devops         bootcamp-devops-vpc

IPv4 CIDR block     Starting IP & size of your VPC .

    10.0.0.0/16         65,536 IPs  CIDR can be from /16 to /28.

IPv6 CIDR block

    No IPv6 CIDR block     

Tenancy     Default

Number of Availability Zones (AZs)

    □  1
    □  2
    □  3

Customize AZs 

    First availability zone
    us-east-1a

    Second availability zone
    us-east-1b

    Third availability zone
    us-east-1c

Number of public subnets

    □  0
    □  3

Number of private subnets

The number of private subnets to add to your VPC. Use private subnets to secure backend resources that don't need public access.

    □  0
    □  3
    □  6

Customize subnets CIDR blocks

    Public subnet CIDR block in us-east-1a      10.0.0.0/20     4,096 IPs
    Public subnet CIDR block in us-east-1b      10.0.16.0/20    4,096 IPs
    Public subnet CIDR block in us-east-1c      10.0.32.0/20    4,096 IPs
    Private subnet CIDR block in us-east-1a     10.0.128.0/20   4,096 IPs
    Private subnet CIDR block in us-east-1b     10.0.144.0/20   4,096 IPs
    Private subnet CIDR block in us-east-1c     10.0.160.0/20   4,096 IPs

NAT gateways ($)
        
    □  None
    □  In 1 AZ
    □  1 per AZ

VPC endpoints   (can help reduce NAT gateway charges and improve security) 

    □  None
    □  S3 Gateway

DNS options

    Enable DNS hostnames
    Enable DNS resolution

Additional tags

    Key     Value - optional
    owner   ariel
    Add new tag



**Network ACL  - Access Control List** :
https://console.aws.amazon.com/vpcconsole/home#NetworkAclDetails:networkAclId=acl-**********

Rule number	    Type	Protocol	Port range	Source	    Allow/Deny
100         All traffic All         All         0.0.0.0/0   Allow
`*`         All traffic All         All         0.0.0.0/0   Deny


**NAT Gataway  - Network Address Translation** 
https://medium.com/@sanjuthamke9699/nat-gateway-with-s-698e8bb3f477
https://console.aws.amazon.com/vpcconsole/home#NatGateways:


### AWS Direct Connect
https://console.aws.amazon.com/directconnect/v2/home#

nos sirve para conectar un DataCener con AWS


https://aws.amazon.com/es/cloudfront/

## 18



### Arquitecturas ejemplos

https://aws.amazon.com/architecture/well-architected/?wa-lens-whitepapers.sort-by=item.additionalFields.sortDate&wa-lens-whitepapers.sort-order=desc&wa-guidance-whitepapers.sort-by=item.additionalFields.sortDate&wa-guidance-whitepapers.sort-order=desc
https://aws.amazon.com/es/architecture/
https://aws.amazon.com/es/blogs/aws-spanish/well-architected-transformando-una-arquitectura-tradicional-a-una-optimizada-para-computo-en-la-nube/


 En ambientes on-premises, o en Centros de Datos, las organizaciones tenían que elegir entre
 Mantener el control sobre su infraestructura y servicios o innovar de manera más rápida. 
 Esto, porque no existía la forma de tener visibilidad completa al interior de los componentes

El control a través de los servicios de AWS de Management and Governance 

Escala: administración de recursos de cómputo dinámico,
Simplicidad: al ofrecer una interfaz única de administración para servicios
Optimización de Costos: ver costo de recursos, e identificar formas de reducir costos.


#### original

Una arquitectura simple en `dos capas`, 
una migración tipo lift and shift desde un Centro de Datos tradicional.

    ● Servidor Web, 
    ● Base de datos  Relacional (MySQL), 
    ● Gateway hacia Internet.

Esta arquitectura, aunque funcional, no cumple con requisitos básicos de 
 escalabilidad, desempeño, seguridad, o visibilidad.


#### con visibilidad

Añadiremos identificadores (`tags`) a nuestros servicios.

usaremos AWS `SSM Systems Manager` para instalar agentes e nuestros equipos

Amazon` CloudWatch Logs` nos permite tomar los archivos 
de registro de nuestras aplicaciones y de nuestras instancias Amazon EC2

configurar Amazon `CloudWatch Alarms`, los cuales nos alertarán 
cuando sobrepasemos cualquier umbral

#### con Disponibilidad



#### con Servicios Administrados

#### con Seguridad Mejorada

#### con Escalabilidad





**Well Architected**
https://www.wellarchitectedlabs.com/reliability/
https://workshops.aws/categories/Well-Architected
https://aws.amazon.com/architecture/well-architected
https://catalog.workshops.aws/

https://catalog.workshops.aws/well-architected-reliability
https://console.aws.amazon.com/wellarchitected/home

**SOLUCIONES AWS**
https://aws.amazon.com/solutions
https://aws.amazon.com/solutions/app-development/
https://aws.amazon.com/solutions/networking/
https://aws.amazon.com/solutions/cloud-foundations/capabilities/network-connectivity/
AWS **Cloud WAN**
https://aws.amazon.com/cloud-wan/
https://console.aws.amazon.com/networkmanager/home/cwanhomepage
=======
1) Por último, una vez documentado todo en el instructivo, 
   realizar una limpieza de recursos eliminando todo lo creado
>>>>>>> f493ec3f41aea7b2f266c4e4b48fb5418e84ac75
