# Fase 2 - Cloud Specialist   

## Clase 12 -  AWS certif + New Account + 2FA + EC2 + IAM 

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

## Clase 13  - S3 Buckets + EBS Mount + SSM

### EC2 - Elastic Cloud Computing

####  Analisis de EC2 desde  ssm
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

#### Analisis de EC2 desde web amazon

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


####  IP & Jump Server

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



####  Región y AZ

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
                     AWS                     SOFTWARE
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


### S3 - Simple Srorage Service

####  S3 - Storage Classes

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

#### S3 - Crear desde web



#### Crear S3 bucket (instancia )desde Web


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

#### S3 - Ver nuestro bucket

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

### S3 - Subir archivos

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



## Clase 14  - AWS CLI + Beanstock + LightSail

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

## Clase 15 - RDS + Lambda

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

## Clase 16   VPS + ACL + Security Group

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



### Network ACL  - Access Control List :
https://console.aws.amazon.com/vpcconsole/home#NetworkAclDetails:networkAclId=acl-**********

Rule number	    Type	Protocol	Port range	Source	    Allow/Deny
100         All traffic All         All         0.0.0.0/0   Allow
`*`         All traffic All         All         0.0.0.0/0   Deny


### NAT Gataway  - Network Address Translation 
https://medium.com/@sanjuthamke9699/nat-gateway-with-s-698e8bb3f477
https://console.aws.amazon.com/vpcconsole/home#NatGateways:


### AWS Direct Connect
https://console.aws.amazon.com/directconnect/v2/home#

nos sirve para conectar un DataCener con AWS


https://aws.amazon.com/es/cloudfront/

## 18  Architectures +  Cloud Watch + Backup + ELB



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


#### original   -  EC2 

Una arquitectura simple en `dos capas`, 
una migración tipo lift and shift desde un Centro de Datos tradicional.

● `Servidor Web`, 
● `Base de datos`  Relacional (MySQL), 
● `Gateway` hacia Internet.

Esta arquitectura, aunque funcional, no cumple con requisitos básicos de 
 escalabilidad, desempeño, seguridad, o visibilidad.

`Servidor Web`  esta en la `Subnet Publica` para que los usuarios accedan
`Base de Datos` esta en la `Subnet Privada` para que solo el servidor acceda



#### con visibilidad  -  SSM + Tags

Añadiremos identificadores (`tags`) a nuestros servicios.

usaremos AWS `SSM Systems Manager` para instalar agentes e nuestros equipos

Amazon` CloudWatch Logs` nos permite tomar los archivos 
de registro de nuestras aplicaciones y de nuestras instancias Amazon EC2

configurar Amazon `CloudWatch Alarms`, los cuales nos alertarán 
cuando sobrepasemos cualquier umbral

#### con Disponibilidad  -  ELB + AZ

Para comenzar, usaremos múltiples zonas de disponibilidad, 
y configuraremos subredes (tanto públicas como privadas) en ellas.

ejecución de nuestras instancias en distintas localidades dentro de una Región

utilizaremos Balanceadores Elásticos de Carga `(Elastic Load Balancers) EBL`
servicio sisponible en `Lightsale` o immplementable en `Nginx / Apache`


El `Load Balancer` conecta los usuarion a la `subnet publica`
Pudiendo alojar  `servidores web` en `varias subnet Privadas` en cada AZ
Conectando cada uno de ellos a las `bases de datos` auque esten `en otro AZ`


#### con Servicios Administrados  - RDS + EFS

Utilizaremos 3 servicios: 

● `AWS Backup`,      
● `Amazon EFS` (Elastic File System)  
● `Amazon RDS` (Relational Database Service).

AWS Backup util para centralizar y automatizar la protección de datos
EFS es uril en ambientes on-premises, y puede crecer y compactarse de manera automática
RDS yuda a administrar la base de datos redimensionable Automatizando 
aprovisionamiento de hardware, configuración de la base de datos, parcheo y respaldos


#### con Seguridad Mejorada  -  ACL + Security Groups

bloquearemos el tráfico indeseado hacia nuestra Nube Privada Virtual (Virtual Private Cloud) 
utilizando Listas de Control de Acceso` ACL (Network - Access Control Lists)`

bloquear puertos indeseados con Grupos de Seguridad (`Security Groups`)

bloquearemos los accesos a nivel Sistema Operativo utilizando los `Firewalls` de `Linux` por ej.

`AWS Config` es un servicio que nos permite evaluar las configuraciones 
de nuestros recursos, monitoreándolos continuamente.

Usaremos `Amazon GuardDuty` para detección de intrusiones 
que monitorea continuamente actividad maliciosa

habilitaremos `AWS WAF` (Web Application Firewall) y `AWS Shield`.



#### con Escalabilidad    -  Awsautoscaling + EC2 AutoScalingGroups

● utilizaremos `Auto Scaling Groups` en nuestros equipos `Amazon EC2`

Nuestros grupos de autoescalado permiten el crecimiento de nuestra infraestructura 
de manera `proactiva o reactiva`, y también facilita el uso de 
pruebas de salud en nuestras instancias, escalando y recuperando instancias dañadas fácilmente.

● La `automatización del despliegue`, lo cual nos traerá múltiples beneficios:

1) Generar ambientes de prueba, y evaluar nuestras estrategias de recuperación de desastres.
2) Generar ambientes de aseguramiento de la calidad, o cualquier otra etapa de despliegue.
3) Multiplicar nuestros ambientes de producción en múltiples Regiones de AWS, y operar a nivel global.

`AWS CloudFormation` o  Terraform  es una forma sencilla de crear recursos. 
Basado en `Infrastructure as a Code` automatizando, reducioendo tiempo y errores

`AWS OpsWorks` nos provee con instancias administradas de Chef y Puppet,  
con lo que podemos automatizar la configuración de componentes 

Es posible utilizar AWS CloudFormation, AWS OpsWorks, 
o una combinación de ambas tecnologías al momento de desplegar nuestra infraestructura.


https://console.aws.amazon.com/awsautoscaling/home#wizard
https://console.aws.amazon.com/ec2/home#AutoScalingGroups:
https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html

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


Operational Excellence Pillar

Security Pillar

Reliability Pillar

Performance Efficiency Pillar

Cost Optimization Pillar

Sustainability Pillar

## clase 19 -  ELB + Quotas + Cloud Formation

### DESAFIO 8

Objetivo
El objetivo de este desafio será crear una VPC junto a los recursos necesarios 
para tener redes públicas y privadas. Además, crearemos un Autoscalling group, 
Launch Template y Load Balancer. Por último, en el Launch template configuraremos 
un servidor web sencillo en la sección de userdata para que 
en un Header nos de el hostname de la instancia
```
                            Users
------------------------------┼------------------------------------
AWS Cloud                 HTTP/S requests
------------------------------┼------------------------------------
    Region                    |
------------------------------▼------------------------------------
        VPC                Application Load Balancer
                              ▼
                     Auto Scaling group
           ┌------------------┼------------------------┐
    Avallubility Zone 1    Availability Zone 2      Availability Zone 3
    Subnet 1               Subnet 2                 Subnet 3    subnet 4
    Instances              Instances                Instances   Instances
                 Amazon EC2 security group
         
```

DESAFIO:

**VPC**

1) Crear una VPC con 3 sutinets públicas y 3 privadas (3 AZs), 
   sin NATGW ni VPC Endpoints, Pero habilitar las 2 opciones de DNS.
1) Una vez creada la VPC, crear una tabla con la información de las subnets 
   (Subnet-ID, tipo de subnet ya sea privada o pública y CIDR).

**Launch Template**

1) Debe utilizar la imagen de ubuntu
2) El instance type debe ser de tipo free tier (t2.micro)
3) Deben incluir un keypair que les permita conectarse a las instancias
4) Deben utilizar un SG que les permita acceder por SSH y HTTP a las instancias creadas.
5) En la sección de configuración avanzada, tendrán que configurar el userdata 
   para instalar el webserver, y agregar una línea del tipo 
   `"echo "<h1>Hola desde $(hostname -f)</h1>" > /var/www/html/index.html" `
   para ver desde el navegador o output de la consola a que Instancia nos estamos conectando.
6) En la sección de configuración avanzada, además tendrán que configurar la sección

**Autoscaling Group**

1) Configurar el Launch Template creado en el punto anterior
2) Usar las subnets públicas
3) Crear un nuevo loadbalancer (application) de tipo internet-facing
4) Crear un target group
5) Habilitar health-checks en el loadbalancer
6) Capacidad deseada = 3
7) Capacidad mínima = 1
8) Scaling policy (opcional)

Definir con sus palabras en el instructivo cual es el propósito de 
un Load Balancer, un Launch Template, un Autoscaling Group y un Target Group.

El instructivo además debe contener screenshots demostrando acceso a cada instancia 
(ya sea a través de terminal usando alguna librería o comando como curl) o por navegado

Recordar documentar todos los pasos principalmente las medidas de seguridad 
y security groups creados para configurar de forma correcta los accesos a los servicios.

Documentar también la eliminación de los recursos creados una vez finalizado el desafío.

###  ELB - 4 Elastic Load Balancers

https://console.aws.amazon.com/ec2/home#SelectCreateELBWizard:

https://aws.amazon.com/elasticloadbalancing/faqs/





**Application ELB**

 Operating at the `request level`, Application Load Balancers provide 

 advanced routing   
 advanced visibility features 

 flexible feature set for your applications with HTTP and HTTPS traffic. 

targeted at application architectures, including `microservices` and containers.

**Network ELB**

Operating at the `connection level`, 
Network Load Balancers are capable of handling `millions of requests per second `
securely prividing :

`ultra-low latencies`.
ultra-high performance, 
TLS offloading at scale, 
centralized certificate deployment, 
support for UDP,
`static IP` addresses 


**Gateway  ELB**

to deploy and manage a fleet of third-party virtual appliances that `support GENEVE`. 
`improve security`, compliance, and `policy controls`.


***Classic Load Balance (OLD)***

Choose when you have an existing application running in the EC2-Classic network


### ELB - Prices

https://aws.amazon.com/elasticloadbalancing/pricing/

**AWS Free Tier**

`750 hours per month` shared between Classic and Application load balancers
`15 GB of data processing` for Classic load balancers 
and `15 LCUs` for Application Load Balancers.


**Application** Load Balancers :

$0.0225 per Application Load Balancer-hour
$0.008  per LCU-hour Load Capacity Unit
$0.005  per TLS-hour Transport Layer Security 

Each LCU includes :
• 25      New connections     per second 
• 3,000   Aactive connections per minute 
• 1,000   Rule evaluations    per second 
• 0.4 GB  Processed bytes     per hour    for Lambda targets 
• 1.0 GB  Processed bytes     per hour    for other  targets, like Amazon EC2

**Network** Load Balancers :

$0.0225 per Network Load Balancer-hour (or partial hour)
$0.006  per NLCU-hour

NLCU contains:
• 800      New TCP connections     per second.
• 100,000  Active TCP connections  per minute.
• 1 GB     for Amazon (EC2)        per hour 

**Gateaway** Load Balancers :

$0.0125 per Gateway Load Balancer-hour per AZ
$0.004  per GLCU-hour 

LCU Details :  GLCU Traffic measurments
• 600     New connections   /flows                per second. 
• 60,000  Active connections/flows                per minute. 
• 1 GB    For EC2 instances, containers, and IP   per hour




### Create Network Load Balancer

**Basic configuration**

Load balancer name      ariel-network-load-balancer-1

Scheme      Scheme can't be changed after the load balancer is created.
▣ Internet-facing       rout requests from clients over internet to targets. Requires public subnet.
□ Internal              rout requests from clients to targets using private IP addresses.

Load balancer IP address type       IP address type to assign to the load balancer.

□ Only IPv4
□ Dualstack


**Network mapping**

The load balancer routes traffic to targets in the selected subnets, and in accordance with your IP address settings.

VPC
vpc-**************      IPv4 VPC CIDR: 172.31.0.0/16


Enable prefix for IPv6 source NAT

□ Off (no source NAT)
    ● No source NAT will occur.
    ● No load balancer support for UDP traffic over IPv6.
    ● No support for UDP listeners for the load balancer.

□ On (source NAT prefixes per subnet)
    ● Assigns an 80-bit CIDR block prefix (/80) to allow for source NAT in each enabled subnet. Alternatively you can specify them.
    ● Allows load balancer support for UDP traffic over IPv6.
    ● Required for load balancers using UDP listeners.

**Security groups**
 
 Select up to 5 security groups

sg-******    VPC: vpc-**********


**Listeners and routing**

A listener is a process that checks for connection requests 
The rules that you define for a listener determine how the load balancer routes requests to targets.

    ListenerTCP:80      Remove

    Protocol    Port    Default action
    TCP         80      Forward to          Select a target group
    Add listener tag

Add listener

**AWS Global Accelerator**

Optimizes:  Performance, Availability
□  Apply global load balancing across multiple regions

### Service Quotas

Nos permitira Administrar las limitaciones de Rendimiento y escalabilidad
debemos seleccionar algun **servicio** EC2, VPC, S3, EBS, EFS, RDS, ELB, IAM,  
Tambien podemos elejit un **Feature**  EC2-ESG,  EC2-SecurityGroups, EC2-AMIs
VPC-Subnet, VPC-NetworkACLs, VPC-NATgateways, CloudWatch-Alarms, 
EFS-AccessPoint, S3-AccessPoint, S3-LambdaAccessPoints.

Una vez seleccionado el servicio o feature nos aparecera un muy largo listado
de todas las Quotas `ordenadas alfabeticamente`, tambien podemos `buscar por nombre`
y nos indicara el numero de veces enconrtrado
Por ejemplo si buscamos `Instance` en `Amazon EC2` nos dira `21 matches`
y veremos estas 21 quotas ordenadas alfabeticamente

Amazon EC2 Auto Scaling 

Request increase at account level
View your applied quota values, default quota values, and request quota increases for quotas. Learn more 

**EJEMPLO DE SERVIVICIO**
https://console.aws.amazon.com/servicequotas/home/services/ec2/quotas
Amazon **EC2** Elastic Compute Cloud                        Request increase at account level
  
Quota name             Applied quota   Default quota      Utilization     Adjustability
All Standard Instance   32             5                  0               Account level
AMI sharing             1,000          1,000              Not available   Account level   
AMIs                    50,000         50,000             Not available   Account level 
Attachments x gateway   5,000          5,000              Not available   Account level  
Attachments x VPC       5              5                  Not available   Not adjustable
......search Quota by name

**EJEMPLO DE FEATURE** 
https://console.aws.amazon.com/servicequotas/home/services/autoscaling/quotas
Amazon **EC2 Auto Scaling Group**    ASG                Request increase at account level

Quota name             Applied quota   Default quota      Utilization     Adjustability
ASG  x region           500             500                0               Account level
Classic Load Balancers  Not available   50                 Not available   Not adjustable
Launch config. x ASG    200             200                Not available   Account level
Lifecycle hooks x ASG   Not available   50                 Not available   Not adjustable
......search Quota by name



### Cloud Fromation

https://console.aws.amazon.com/cloudformation/home/stacks

Funciona con JSON o YAML
JSON : JavaScript  Object Notation
YAML : Yet Another Markup Language


**GUIA RAPIDA** Google : ec2 cloudformation template example 
https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/quickref-ec2-instance-config.html
```json
"Ec2Instance": {
    "Type": "AWS::EC2::Instance",
    "Properties": {
        "AvailabilityZone": "aa-example-1a",
        "ImageId": "ami-1234567890abcdef0"
    }
}
```

**GUIA EXAUSTIVA** Google :  ec2 instance cloudformation documentation
https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-ec2-instance.html
```json
{
  "Type" : "AWS::EC2::Instance",
  "Properties" : {
      "AdditionalInfo" : String,
      "Affinity" : String,
      "AvailabilityZone" : String,                  //  "us-west-2a"
      "BlockDeviceMappings" : [ BlockDeviceMapping, ... ],
      "CpuOptions" : CpuOptions,
      "CreditSpecification" : CreditSpecification,
      "DisableApiTermination" : Boolean,
      "EbsOptimized" : Boolean,
      "ElasticGpuSpecifications" : [ ElasticGpuSpecification, ... ],
      "ElasticInferenceAccelerators" : [ ElasticInferenceAccelerator, ... ],
      "EnclaveOptions" : EnclaveOptions,
      "HibernationOptions" : HibernationOptions,
      "HostId" : String,
      "HostResourceGroupArn" : String,
      "IamInstanceProfile" : String,
      "ImageId" : String,                           //  AMI-*****   OBLIGATORIO
      "InstanceInitiatedShutdownBehavior" : String,
      "InstanceType" : String,                      //  T2.micro
      "Ipv6AddressCount" : Integer,
      "Ipv6Addresses" : [ InstanceIpv6Address, ... ],
      "KernelId" : String,
      "KeyName" : String,
      "LaunchTemplate" : LaunchTemplateSpecification,
      "LicenseSpecifications" : [ LicenseSpecification, ... ],
      "Monitoring" : Boolean,                       // true
      "NetworkInterfaces" : [ NetworkInterface, ... ],
      "PlacementGroupName" : String,
      "PrivateDnsNameOptions" : PrivateDnsNameOptions,
      "PrivateIpAddress" : String,                  //  198.168.0.1
      "PropagateTagsToVolumeOnCreation" : Boolean,
      "RamdiskId" : String,
      "SecurityGroupIds" : [ String, ... ],         //  SG-*****
      "SecurityGroups" : [ String, ... ],
      "SourceDestCheck" : Boolean,
      "SsmAssociations" : [ SsmAssociation, ... ],
      "SubnetId" : String,                          // subnet-*****
      "Tags" : [ Tag, ... ],
      "Tenancy" : String,
      "UserData" : String,
      "Volumes" : [ Volume, ... ]
    }
}
```


Cloud Formation **Infrastructure Composer**
https://console.aws.amazon.com/composer/canvas?srcConsole=cloudformation#

Cloud Formation **Designer**
https://console.aws.amazon.com/cloudformation/designer/home?srcConsole=cloudformation#


Buscar AMI
https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html
https://aws.amazon.com/ec2/home#LaunchInstances:

Amazon Linux 2023 AMI
ami-06b21ccaeff8cd686 (64-bit (x86), uefi-preferred)
ami-02801556a781a4499 (64-bit (Arm), uefi)

Amazon Linux 2 AMI (HVM) - Kernel 5.10, SSD
ami-0ddc798b3f1a5117e (64-bit (x86))
ami-05f16f3539e999b77 (64-bit (Arm))


Tambuen Podemos Buscar imagenes E2 Ubuntu en 
https://cloud-images.ubuntu.com/locator/ec2/
FILTROS
Zone	    Name	Version	  Arch	 Instance Type	Release	AMI-ID	AKI-ID
us-west-2   Focal   20.04LTS  amd64  Any      Any   Any     Any     Any

Nos quedaria algo asi
```yaml
Resources:
  EC2-cloudfront-test:
    Type: 'AWS::EC2::Instance'
    Properties: 
        AvailabilityZone: 'us-west-2a'
        ImageId: 'ami-06b21ccaeff8cd686'
        InstanceType": 't2.micro'
```

nos da la opcion de guardar el template en un bucket S3 o en nuestra PC
el archivo sera un .template que contendra el yaml + metadata

```yaml
AWSTemplateFormatVersion: 2010-09-09
Metadata:
  'AWS::CloudFormation::Designer':
    a46309f2-85a1-411d-a782-c6db56333f1c:
      size:
        width: 60
        height: 60
      position:
        x: 198
        'y': 215
      z: 0
Resources:
  EC2test:
    Type: 'AWS::EC2::Instance'
    Properties:
      AvailabilityZone: us-west-2a
      ImageId: ami-06b21ccaeff8cd686
      InstanceType": t2.micro
    Metadata:
      'AWS::CloudFormation::Designer':
        id: a46309f2-85a1-411d-a782-c6db56333f1c
```


### CDK - Cloud Development kit

https://docs.aws.amazon.com/cdk/v2/guide/home.html          QUE ES ?
https://docs.aws.amazon.com/cdk/v2/guide/work-with.html     COMO INSTALO ?

https://github.com/aws/aws-cdk                                          REPOSITORIO
https://docs.aws.amazon.com/cdk/api/v2/docs/aws-construct-library.html  DOCUMENTACION


https://pypi.org/project/aws-cdk-lib/
https://www.go-on-aws.com/infrastructure-as-go/cdk-go/
https://docs.aws.amazon.com/cdk/api/v2/python/aws_cdk.aws_ec2.html

The CDK is available in the following languages:

JavaScript  ( Node.js ≥ 14.15.0)     LTS recommended
TypeScript  ( Node.js ≥ 14.15.0)
Python      ( Python ≥ 3.8)
Java        ( Java ≥ 8 and Maven ≥ 3.5.4)
.NET        ( .NET ≥ 6.0)
Go          ( Go ≥ 1.16.4)


aws-cdk-lib.aws_ec2 module
```j
Language	| Package
============|=================================
 .NET	    | Amazon.CDK.AWS.EC2
 Go	        | github.com/aws/aws-cdk-go/awscdk/v2/awsec2
 Java	    | software.amazon.awscdk.services.ec2
 Python	    | aws_cdk.aws_ec2
 TypeScript	| aws-cdk-lib » aws_ec2
```

**JavaScript**
```sh
npm i aws-cdk                       # Install	
const cdk = require('aws-cdk-lib'); # Import
```

**Python**    
```sh
python -m pip install aws-cdk-lib # Install	
import aws_cdk as cdk             # Import	
```

**GO**
```sh
go get github.com/aws/aws-cdk-go/awscdk/v2          # install
import ( "github.com/aws/aws-cdk-go/awscdk/v2" )    # import
```
 
**CDK CLI**   Creating a project

```sh
npm i -g aws-cdk  
mkdir my-project            
cd my-project
cdk init app --language go              # CDK init Project for go
```


#### IAM - Policies & Resources 

A la hora de hacer una policy podemos `Acetar o denegar`
la realisacion de `Acciones` para ciertos `Recursos`

Estas policies las podremos Administrar en `Grupos` y `Roles`
y a estos grupos le podemos agregar `Usuarios` que trabajen en el prollecto

Groups <- Roles <-- Users
            ^------ Policies

**Policy Editor**

```json
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Sid": "Statement1",
            "Effect": "Allow",
            "Action": [
                "ec2:Create",       // ESTO NO HACE NADA
                "s3:ListBucket",
                "s3:GetObject"
            ],
            "Resource": [
                "arn:aws:s3::: desarrollo"
            ] 
        }
    ]
}
```

en el ejemplo anterior la accion permitir de `crear instancia EC2`
`no va a funcionar` dado que esta aplicada a un `bucket S3`



## Clase 20 - Support - Billing - Cloud Trail

### AWS Support

https://support.console.aws.amazon.com/support/home


Account and Billing
Technical

Topics:
    Billing
    Free Tier
    Account
    Account Management
    Getting Started
    Education


### Crear un caso (support ticket)

https://support.console.aws.amazon.com/support/home#/case/create

AWS Support > Your support cases > Create case


1) How can we help?
2) Additional information
3) Solve now or contact us

1) How can we help? :

    ▣ Account and billing      billing, pricing, and reserved instances.
    □ Technical                Amazon EC2, Amazon S3 and more.

    service         search for a service
    Category        search for a category
    Severity        General question


Ejemplos

service         Free Tier
Category        Why was I billed?

Service         Billing
Category        Dispute a Charge

Service         Domains
Category        Restoration

Service         General Info and Getting Started
Category        How Will I Be Charged?

Service         Training and Certification
Category        Skill Builder – Learner Inquiry

2) Additional information

Subject:
    Sumarize your question

Description:
    Describe your question or issue in detail

Attach files :
        Podemos aniadir `screenshots` archivos de `configuracion` etc... 


**CUIDADO** si en el paso 1 seleccionamos  `▣ Technical` 

    NO ES GRATIS : 
    Business Support Trial
    Get a 2 month Business Support trial 

https://aws.amazon.com/premiumsupport/pricing/

Developer   Business    Enterprise On-Ramp
$29         $100.00     $5,500.00


Es recomendable incluir informacion de nuestra `factura del mes` en cuestion

### Billing Managment

https://console.aws.amazon.com/billing/home1#/bills?year=2024&month=10


Total active services       12

**1 SERVICIO QUE NOS COBRO** : ( AWS Config )

Description     `Usage Quantity`                    Amount in USD
Config                                              USD 0.31
 └--US West (Oregon)                                USD 0.31
     └--AWS Config USW2-ConfigurationItemRecorded   USD 0.31
            $0.003 per Configuration Item recorded in US West (Oregon) region
            `102 USW2-ConfigurationItemRecorded`    USD 0.31

**11 SERVICIOS QUE RESPETARON FREE TIER**

`CloudFormation`  US West (Oregon)
 └--AWS CloudFormation ProcessResourceHandlers
      $0.0 per  Resource-Invocation-Count: ProcessResourceHandlers usage     `12 Count`

`CloudWatch`    
 ├--US East (Ohio)
 |    $0.00 per request - first 1,000,000 requests    `11 Requests`
 └--US West (Oregon)
      $0.0 per metric-month - first 10 metrics       `0.001 Metrics`
      $0.0 per request - first 1,000,000 requests    `10 Requests`

`Data Transfer`   US West (Oregon)
 ├--AWS Data Transfer USW2-APS2-AWS-Out-Bytes
 |    $0.02 per GB - data transfer to Asia Pacific (Sydney)      `0.001 GB`
 └--Bandwidth
      $0.000 per GB - data transfer in per month                  `0.148 GB`


`EC2 Elastic Compute Cloud`   US West (Oregon)                          USD 0.00
 ├--EC2  running Linux/UNIX                                              USD 0.00
 |    $0.00 per Linux t2.micro instance-hour free tier    `505.006 Hrs` 
 └--EBS                                                                  USD 0.00
      $0.00 GB-month (gp3) free tier                  `0.645 GB-Mo` 
      $0.00 GB-month (SSD) free tier                  `9.97  GB-Mo`
      $0.00 GB-Month snapshot data  free tier         `0.011 GB-Mo`

`VPC Virtual Private Cloud`   US West (Oregon)                          USD 0.00
└-- Amazon Virtual Private Cloud Public IPv4 Addresses                  USD 0.00
      $0.00 In-use public IPv4 for EC2 Free Tier      `505.078 Hrs`

### Free tier use %
https://console.aws.amazon.com/billing/home?#/freetier


### Cloud Trail

Segimiento de actividad de usuarios y servicios en nuestra cuenta

https://console.aws.amazon.com/cloudtrailv2/home#/welcome
https://console.aws.amazon.com/cloudtrailv2/home#/dashboard


https://console.aws.amazon.com/cloudtrailv2/home#/events

Event history (50+)
Event history shows you the last 90 days of management events.
```j
EventName      |EventTime  | UserName   Event source    Resource type   Resource name
===============|===========|===========================================================
SendMessage    |Nov06 12:55|root      q.amazonaws.com     -               -
StartConversati|Nov06 12:55|root      q.amazonaws.com     -               -
CreateStack    |Nov06 01:14|root  cloudformation.aws.com  AWS::CloudFormation::Stack
               |           |                                            arn:aws:cloudformation:us-east-1:315509528759:stack/cloudfront-ec2-test/a2b66550-9bf5-11ef-b2fa-0e2513589565
PutBucketEncryp|Nov06 00:53|root    s3.amazonaws.com      AWS::S3::Bucket
               |           |                                            cf-templates-1ownesb3eg0mm-us-east-1
```

Tambien podemos filtrar por ejemplo


Lookup attributes   : Event source        ec2.amazonaws.com
```j
EventName       EventTime  |UserName | Event source      Resource type   Resource name
===========================|=========|===================================================
DescribeRegions|Nov06 13:55| root    |ec2.amazonaws.com   -             -
DescribeInstanceStatu      |         |
               |Nov06 13:55| root    |ec2.amazonaws.com   -             -
DescribeSnapshot           |         |
               |Nov06 13:55| root    | ec2.amazonaws.com   -             -
```

https://docs.aws.amazon.com/whitepapers/latest/aws-overview/amazon-web-services-cloud-platform.html



### Planes de Intancia y Reduccion de costos


**On Demand**
https://aws.amazon.com/ec2/pricing/on-demand/
https://console.aws.amazon.com/ec2/home#Instances:

Pay for computing capacity `by the hour` or second, with no long-term commitment.
Instances `automatically scale` up or down based on workload. 


**Spot**
https://aws.amazon.com/ec2/spot/pricing/
https://console.aws.amazon.com/ec2/home#SpotInstances:
https://console.aws.amazon.com/ec2/home#SpotInstancesLaunch:

Rent an instance for a fixed period at a `21% ~ 38%  discounted` monthly rate. 
pay for the duration of the contract, `even if you're not using` them all. 


**Reservadas**
https://aws.amazon.com/ec2/pricing/reserved-instances/pricing/
https://console.aws.amazon.com/ec2/home#ReservedInstances:


Offers a `High discount`, but instances can be interrupted at short notice. 
best for non-time-critical workloads that can `tolerate interruptions`. 





Podemos ver que la mayoria de las instancias estan basados en 2 CPU de servidor
AMD EPYC 7571           Apenas inferior a   AMD Ryzen 5 2600    424 vs 407  https://valid.x86.fr/bench/lqq9fh
Skylake E5 2686 v5                                          
AWS Graviton2           Apenas superior a   AMD EPYC 7571 34    vs 32     https://www.anandtech.com/show/15578/cloud-clash-amazon-graviton2-arm-against-intel-and-amd/5)

https://www.cpu-world.com/Compare/653/AMD_EPYC_7571_vs_Intel_Xeon_E5-2686_v4.html

Manufacturer	AMD	            Intel           
Family	        EPYC	        Xeon
Model number	7571	        E5-2686 v4
CPU part number	PS7571BDVIHAF	CM8066002685800
Introduction    November 2018	November 2016
Cores	        32	            18
Threads	        64	            36
Frequency (MHz)	2200	        2300
Turbo Frequency 3000	        3000
L1 cache (KB)	3072	        1152
L2 cache (KB)	16384	        4608
L3 cache (KB)	65536	        46080
Memory channels 8	            4


                                                                                      EBS Baseline   EBS Max     EBS Optimized
API Name    Memory  vCPUs     Physical Processor       Clock GHz    Network Perf      IOPS           Throughput  Max IOPS   On Demand       Spot Minimum    Linux SQL Web Reserved cost

t2.micro	1.0 GiB	1 vCPUs   Intel Xeon Family         3.3 GHz      Low to Moderate    0 IOPS	    0      MB/s	0     IOPS  $0.0116/hour    $0.0019/hour    $0.0748 hourly
t4g.small	2.0 GiB	2 vCPUs   AWS Graviton2 Processor   2.5 GHz      Up to 5 Gigabit    1000 IOPS	21.75  MB/s 11800 IOPS  $0.0168/hour    $0.0074/hour    unavailable
t3a.small	2.0 GiB	2 vCPUs   AMD EPYC 7571	            2.5 GHz      Up to 5 Gigabit    1000 IOPS	21.875 MB/s 11800 IOPS  $0.0188/hour    $0.0059/hour    $0.0794 hourly
t1.micro	0.6 GiB	1 vCPUs   Variable                  unknown      Very Low           0 IOPS	    0      MB/s 0     IOPS  $0.0200/hour    $0.0020/hour    unavailable
t3.small	2.0 GiB	2 vCPUs   Intel Skylake E5 2686 v5  3.1 GHz      Up to 5 Gigabit    1000 IOPS	21.75  MB/s 11800 IOPS  $0.0208/hour    $0.0055/hour    $0.0806 hourly
t2.small	2.0 GiB	1 vCPUs   Intel Xeon Family	Up to   3.3 GHz      Low to Moderate    0 IOPS      0      MB/s 0     IOPS  $0.0230/hour    $0.0068/hour    $0.0820 hourly
a1.medium	2.0 GiB	1 vCPUs	  AWS Graviton Processor    2.3 GHz      Up to 10 Gigabit   2500 IOPS   37.5   MB/s 20000 IOPS  $0.0255/hour    $0.0079/hour    unavailable
t4g.medium	4.0 GiB	2 vCPUs   AWS Graviton2 Processor   2.5 GHz      Up to 5 Gigabit    2000 IOPS   43.375 MB/s 11800 IOPS  $0.0336/hour    $0.0092/hour    unavailable
c6g.medium	2.0 GiB	1 vCPUs	  AWS Graviton2 Processor   2.5 GHz      Up to 10 Gigabit	2500 IOPS   39.375 MB/s 20000 IOPS  $0.0340/hour    $0.0100/hour    unavailable
c7g.medium	2.0 GiB	1 vCPUs	  AWS Graviton3 Processor   2.5 GHz      Up to 12.5 Gigabit	2500 IOPS   39.375 MB/s 40000 IOPS  $0.0363/hour    $0.0097/hour    unavailable
t3a.medium	4.0 GiB	2 vCPUs   AMD EPYC 7571	            2.5 GHz      Up to 5 Gigabit    2000 IOPS   43.75  MB/s 11800 IOPS  $0.0376/hour    $0.0110/hour    $0.0912 hourly
c6gd.medium	2.0 GiB	1 vCPUs	  AWS Graviton2 Processor   2.5 GHz      Up to 10 Gigabit	2500 IOPS   39.375 MB/s 20000 IOPS  $0.0384/hour    $0.0038/hour    


https://instances.vantage.sh

API Name    Memory	vCPUs     Physical Processor	  Clock GHz	  Network Perform     On Demand       Linux Spot Minimum cost
t4g.nano    0.5 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 5 Gigabit     $0.0042 hourly    $0.0015 hourly
t3a.nano    0.5 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 5 Gigabit     $0.0047 hourly    $0.0014 hourly
t3.nano     0.5 GiB 2 vCPUs   Skylake E5 2686 v5      3.1 GHz     Up to 5 Gigabit     $0.0052 hourly    $0.0005 hourly -
t2.nano     0.5 GiB 1 vCPUs   Xeon Family             3.3 GHz     Low to Moderate     $0.0058 hourly    unavailable
t4g.micro   1.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 5 Gigabit     $0.0084 hourly    $0.0023 hourly
t3a.micro   1.0 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 5 Gigabit     $0.0094 hourly    $0.0033 hourly
t3.micro    1.0 GiB 2 vCPUs   Skylake E5 2686 v5      3.1 GHz     Up to 5 Gigabit     $0.0104 hourly    $0.0027 hourly  -
t2.micro    1.0 GiB 1 vCPUs   Xeon Family             3.3 GHz     Low to Moderate     $0.0116 hourly    $0.0019 hourly
t4g.small   2.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 5 Gigabit     $0.0168 hourly    $0.0074 hourly
t3a.small   2.0 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 5 Gigabit     $0.0188 hourly    $0.0059 hourly  -
t1.micro    0.6 GiB 1 vCPUs   Variable                unknown     Very Low            $0.0200 hourly    $0.0020 hourly
t3.small    2.0 GiB 2 vCPUs   Skylake E5 2686 v5	  3.1 GHz     Up to 5 Gigabit     $0.0208 hourly    $0.0055 hourly  -
t2.small    2.0 GiB 1 vCPUs   Xeon Family             3.3 GHz     Low to Moderate     $0.0230 hourly    $0.0068 hourly
a1.medium   2.0 GiB 1 vCPUs   AWS Graviton2           2.3 GHz     Up to 10 Gigabit    $0.0255 hourly    $0.0079 hourly
t4g.medium  4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 5 Gigabit     $0.0336 hourly    $0.0092 hourly
c6g.medium  2.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0340 hourly    $0.0100 hourly
c7g.medium  2.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0363 hourly    $0.0097 hourly
t3a.medium  4.0 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 5 Gigabit     $0.0376 hourly    $0.0110 hourly
c6gd.medium 2.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0384 hourly    $0.0038 hourly
m6g.medium  4.0 GiB 1 vCPUs   AWS Graviton2           unknown     Up to 10 Gigabit    $0.0385 hourly    $0.0115 hourly
c8g.medium  2.0 GiB 1 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0399 hourly    $0.0058 hourly
m7g.medium  4.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0408 hourly    $0.0107 hourly
t3.medium   4.0 GiB 2 vCPUs   SkylakeE5 2686 v5       3.1 GHz     Up to 5 Gigabit     $0.0416 hourly    $0.0144 hourly
c6gn.medium 2.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 16 Gigabit    $0.0432 hourly    $0.0055 hourly
m1.small    1.7 GiB 1 vCPUs   Intel Xeon Faily        unknown     Low                 $0.0440 hourly    $0.0057 hourly
m8g.medium  4.0 GiB 1 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0449 hourly    $0.0059 hourly
m6gd.medium 4.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0452 hourly    $0.0127 hourly
c7gd.medium 2.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0454 hourly    $0.0054 hourly
t2.medium   4.0 GiB 2 vCPUs   Intel Xeon              3.3 GHz     Low to Moderate     $0.0464 hourly    $0.0114 hourly
r6g.medium  8.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0504 hourly    $0.0152 hourly
a1.large    4.0 GiB 2 vCPUs   AWS Graviton2           2.3 GHz     Up to 10 Gigabit    $0.0510 hourly    $0.0490 hourly
c7a.medium  2.0 GiB 1 vCPUs   AMD EPYC 9R14 Processor 3.7 GHz     Up to 12.5 Gigabit  $0.0513 hourly    $0.0138 hourly
m7gd.medium 4.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0534 hourly    $0.0066 hourly
r7g.medium  8.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0536 hourly    $0.0171 hourly
r6gd.medium 8.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0576 hourly    $0.0259 hourly
m7a.medium  4.0 GiB 1 vCPUs   AMD EPYC 9R14 Processor 3.7 GHz     Up to 12.5 Gigabit  $0.0580 hourly    $0.0167 hourly
r8g.medium  8.0 GiB 1 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0589 hourly    $0.0093 hourly
c7gn.medium 2.0 GiB 1 vCPUs   AWS Graviton2           2.6 GHz     Up to 25 Gigabit    $0.0624 hourly    $0.0062 hourly
m3.medium   3.7 GiB 1 vCPUs   Intel Xeon E5-2670 v2   2.5 GHz     Moderate            $0.0670 hourly    $0.0138 hourly
t4g.large   8.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 5 Gigabit     $0.0672 hourly    $0.0132 hourly
r7gd.medium	8.0 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0680 hourly    $0.0252 hourly
c6g.large   4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0680 hourly    $0.0224 hourly
c7g.large   4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0725 hourly    $0.0283 hourly
t3a.large   8.0 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 5 Gigabit     $0.0752 hourly    $0.0191 hourly
r7a.medium  8.0 GiB 1 vCPUs   AMD EPYC 9R14           3.7 GHz     Up to 12.5 Gigabit  $0.0761 hourly    $0.0199 hourly
c6a.large   4.0 GiB 2 vCPUs   AMD EPYC 7R13           3.6 GHz     Up to 12.5 Gigabit  $0.0765 hourly    $0.0232 hourly
c6gd.large  4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0768 hourly    $0.0226 hourly
c5a.large   4.0 GiB 2 vCPUs   AMD EPYC 7R32           3.3 GHz     Up to 10 Gigabit    $0.0770 hourly    $0.0284 hourly
m6g.large   8.0 GiB 2 vCPUs   AWS Graviton2           unknown     Up to 10 Gigabit    $0.0770 hourly    $0.0213 hourly
c8g.large   4.0 GiB 2 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0798 hourly    $0.0107 hourly
m7g.large   8.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0816 hourly    $0.0214 hourly
t3.large    8.0 GiB 2 vCPUs   Skylake E5 2686 v5      3.1 GHz     Up to 5 Gigabit     $0.0832 hourly    $0.0245 hourly
x2gd.medium  16 GiB 1 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0835 hourly    $0.0096 hourly
c7i-flex.large 4GiB 2 vCPUs   Xeon Scalable Sapphire  3.2 GHz     Up to 12.5 Gigabit  $0.0848 hourly    $0.0236 hourly
c5.large    4.0 GiB 2 vCPUs   Xeon Platinum 8124M     3.4 GHz     Up to 10 Gigabit    $0.0850 hourly    $0.0324 hourly
c6i.large   4.0 GiB 2 vCPUs   Xeon 8375C (Ice Lake)   3.5 GHz     Up to 12.5 Gigabit  $0.0850 hourly    $0.0235 hourly
c5ad.large  4.0 GiB 2 vCPUs   AMD EPYC 7R32           3.3 GHz     Up to 10 Gigabit    $0.0860 hourly    $0.0321 hourly
m5a.large   8.0 GiB 2 vCPUs   AMD EPYC 7571           2.5 GHz     Up to 10 Gigabit    $0.0860 hourly    $0.0288 hourly
m6a.large   8.0 GiB 2 vCPUs   AMD EPYC 7R13           3.6 GHz     Up to 12.5 Gigabit  $0.0864 hourly    $0.0293 hourly
c6gn.large  4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 25 Gigabit    $0.0864 hourly    $0.0195 hourly
m1.medium   3.7 GiB 1 vCPUs   Xeon Faily	          unknown     Moderate            $0.0870 hourly    $0.0221 hourly
c7i.large   4.0 GiB 2 vCPUs   Xeon Scalable Sapphire  3.2 GHz     Up to 12.5 Gigabit  $0.0892 hourly    $0.0306 hourly
m8g.large   8.0 GiB 2 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0898 hourly    $0.0131 hourly
m6gd.large  8.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.0904 hourly    $0.0274 hourly
c7gd.large  4.0 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 12.5 Gigabit  $0.0907 hourly    $0.0180 hourly
t2.large    8.0 GiB 2 vCPUs   Xeon Faily              3.3 GHz     Low to Moderate     $0.0928 hourly    $0.0278 hourly
m7i-flex.large 8GiB 2 vCPUs   Xeon Sclable Sapphire   3.5 GHz     Up to 12.5 Gigabit  $0.0958 hourly    $0.0291 hourly
c5d.large   4.0 GiB 2 vCPUs   Xeon Pltinum 8124M      3.4 GHz     Up to 10 Gigabit    $0.0960 hourly    $0.0320 hourly
m5.large    8.0 GiB 2 vCPUs   Xeon Pltinum 8175       3.1 GHz     Up to 10 Gigabit    $0.0960 hourly    $0.0327 hourly
m6i.large   8.0 GiB 2 vCPUs   Xeon 835C (Ice Lake)    3.5 GHz     Up to 12.5 Gigabit  $0.0960 hourly    $0.0300 hourly
x8g.medium   16 GiB 1 vCPUs   AWS Graviton2           2.7 GHz     Up to 12.5 Gigabit  $0.0977 hourly    $0.0098 hourly
m4.large    8.0 GiB 2 vCPUs   Xeon E52676 v3          2.4 GHz     Moderate            $0.1000 hourly    $0.0336 hourly
c4.large    3.7 GiB 2 vCPUs   Xeon E52666 v3          2.9 GHz     Moderate            $0.1000 hourly    $0.0323 hourly
c6id.large  4.0 GiB 2 vCPUs   Xeon 835C (Ice Lake)    3.5 GHz     Up to 12.5 Gigabit  $0.1008 hourly    $0.0304 hourly
m7i.large   8.0 GiB 2 vCPUs   Xeon Sclable Sapphire   3.2 GHz     Up to 12.5 Gigabit  $0.1008 hourly    $0.0333 hourly
r6g.large    16 GiB 2 vCPUs   AWS Graviton2           2.5 GHz     Up to 10 Gigabit    $0.1008 hourly    $0.0261 hourly


             On Demand                  Reserved                    Spot Minimum cost
t3.nano      $0.0052 hour $3.74/month   $0.0059/hour $4.25/month    $0.0005 hour  `$0.36/month`    0.5GB
`t3.micro`   $0.0104 hour $7.5 /month   $0.0065/hour $4.68/month    $0.0027 hour  `$1.94/month`    1GB
t3a.small    $0.0188 hour`$13.5/month`  $0.0118/hour $8.50/month    $0.0059 hour   $4.25/month     2GB 
t3.small     $0.0208/hour $15/month     $0.0130/hour $9.36/month    $0.0055/hour  `$3.96/month`    2GB
t3a.medium   $0.0376/hour $27/month     $0.0236/hour $17.0/month    $0.0110/hour  `$7.92/month`    4GB

como vemos combiene `t3a.small on demand` o `t3.small On Spot `
si qeremos 4GB Obtener el doble de RAM nos costara el doble con `t3a.medium`


https://console.aws.amazon.com/ec2/home#ReservedInstances:

Platform    Tenancy     Offering     Instance    Term        Payment     
Linux/UNIX  Default     any          `t3.micro`  Any         Any    


Term       Eff-rate   Upfront   Hourly  Payment-opt     Offering    available  Desired  Normalized units per hour
36 month   `$0.004`  `$103.00`  $0.000  `All upfront`   Standard    Unlimited  1        `0.5`   Add to cart
12 month   $0.006     `$27.00`  $0.003  `Part-upfront`  Standard    Unlimited  1        `0.5`
5 month    $0.007      `$1.01`  $0.007  `No upfront`    Standard           2   1        `0.5`


https://console.aws.amazon.com/ec2/home#SpotInstancesLaunch:

AMIs :
    Amazon Linux 2 AMI (HVM) - Kernel 5.10,

EBS Volumes :
    /dev/xvdba      8GB     SSD (gp2)

Network
    vpc-********    172.31.0.0/16  Default

Availability Zone
    No preference (balance across all Availability Zones)


otal target capacity :
    `1 instances`

Instance requirements :
    no  vCPU  minimum
    2  `vCPU  maximum`
    no    Mib minimum
    2048 `Mib maximum`
    Additional instance attribute -optional

Instance type
    Additional instance attribute
        Allowed instance families
            T
    matching instance    `t1.micro`



Fleet strength :
    Weak
    1 matching instance types
    6 Availability Zones

Estimated hourly price
    ~`$0.002` per hour at target capacity       `$1.44/month`
    `90% savings` compared to On-Demand

        Launch

### Load Balancer Gateaway

https://aws.amazon.com/elasticloadbalancing/
https://aws.amazon.com/elasticloadbalancing/features/#Details_for_Elastic_Load_Balancing_Products

### CloudWatch y fork bomb

## Clase 20

### Repaso dl Desafio 8

###  Roadmap Devops  Pelado Nerd

### Disaster Recocvery Architecture

(https://www.linkedin.com/posts/semaan_cloudcomputing-aws-mendix-activity-7097923776239042560-uFtv/)
### paper con 4 soluciones




## 21

**Algoritmos para  Load Balancer**

Round Robin, 
Sticky Round Robin,
Weighted round robin,
IP/URL Hash,
least connection, 
least response time

**Como los usa AWS**


Application Load Balancers :

Round Robin: Distributes traffic evenly across targets.   
  Least Connections:          Directs traffic to the target with the fewest active connections.   
  Weighted Least Connections: Similar to Least Connections, but considers the weight assigned to each target.   
  Weighted Round Robin:       Distributes traffic based on weights assigned to each target.   

Network Load Balancers :
  Least Connections:          Distributes traffic based on the number of active connections to each target.   


Gateway Load Balancers :
  Round Robin:                 Distributes traffic evenly across targets.1   


https://aws.amazon.com/elasticloadbalancing/features/#Details_for_Elastic_Load_Balancing_Products


### DESARIO 9

Objetivo

El objetivo de este desafío será poner a prueba todo lo aprendido durante el curso. 
Tendrán que crear recursos de red, recursos de cómputo, bases de datos, 
conectar distintos recursos entre sí de forma segura, crear usuarios 
y en algunos casos políticas específicas para los mismos. Además, tendrán que 
crear un diagrama de arquitectura inicial y final.

En este desafío realizaremos una arquitectura de 3 capas creando todos los recursos
(desde la red a utilizar hasta la base de datos), tendrán que verificar funcionamiento 
y accesos y luego plantear una configuración de alta disponibilidad y segura.

Este desafío contempla los últimos 2 módulos de la fase 2 (M9 y M10) y podrá ser realizado
en grupos de hasta 5 personas y un minimo de 3 personas.

Desafío:

El mismo consta de distintas fases (todas seran entregadas en la misma fecha).

Tendrán que realizar un diagrama de arquitectura de cómo se encuentra la aplicación
en este momento antes de pasar a la etapa de alta disponibilidad. 
Para ello, pueden utilizar la herramienta que quieran ya sea draw.io, lucidchart, etc.

**Fase 0:** En esta fase crearemos los recursos para nuestra red

1) Crear una VPC con 3 subnets públicas y 3 privadas (3 AZs). Documentar la información 
   de las subnets, puede ser una tabla o bulletpoints por ejemplo:
   `- <subnet-id>: Subnet publica, CIDR: 10.10.0.17/20`
2) Crear los recursos de red que crean necesarios para la arquitectura deseada,
    más detalles en la siguiente fase.

**Fase 1:** En esta fase crearemos las 3 capas de nuestra arquitectura
1) Crearemos una instancia EC2 que hará de servidor web (instalar algún 
   servicio web ya sea apache, nginx u otro). Realizarlo a través del userdata.
2) Crear una segunda instancia EC2 que hará de backend o servidor de aplicación 
   (instalar un agente para conectarse a la base de datos). Realizarlo a través del userdata.
3) Crear una base de datos RDS (Free tier)
4) Asegurarse de que las instancias tengan configurado SSM para poder conectarse 
   sin key ni de forma remota desde una VM o bastion.


**Fase 2:** En esta fase realizaremos las configuraciones de seguridad para que 
nuestros servicios se puedan conectar de forma correcta y segura. Además, 
crearemos distintos usuarios para distintas funciones.

Seguridad:
1) Cada capa tendrá que contar con un security group propio y único 
   ( no podrán tener más de 1 security group linkeado).
2) Al servidor web se debe poder acceder al puerto 80 desde Internet.
3) Al servidor del backend o la aplicación se debe poder acceder desde el servidor web al puerto 8300.
4) A la base de datos se debe poder acceder desde el backend al puerto default de la
   base de datos (por ejemplo 3306 en caso de ser MySQL).
5) Recuerden configurar el SSM de forma correcta para poder acceder al webserver y al backend

Permisos:

1) Desarrollador: Debe tener permisos Completos para EC2 y SSM
2) - DevOps: Debe tener permisos administradores (Full Admin)
3) QA: Debe tener solo permisos de lectura para EC2, RDS y SSM
   
Documentar en el instructivo los security groups y sus reglas (Inbound y Outbound)
y a que recurso están linkeados.

Además, conectarse a la consola como cada uno de los usuarios y demostrar los accesos
con cada usuario (por ejemplo, tratar de acceder a la consola de RDS como usuario Desarrollador
o a la consola de S3 como QA para demostrar la falta de accesos)

**Fase 3**: Alta disponibilidad, Escalabilidad y control de costos.

En este momento, la arquitectura en su gran mayoría está desplegada en una sola AZ, 
en caso de caerse una AZ, perderiamos nuestra aplicación. Que configuraciones
 harian para evitar esto?
 
- Qué servicios agregarian a la infraestructura?




###  4 estrategias Disaster Recovery 
https://www.linkedin.com/posts/semaan_cloudcomputing-aws-mendix-activity-7097923776239042560-uFtv/

Viktoria Semaan

1) 𝐁𝐚𝐜𝐤𝐮𝐩 & 𝐑𝐞𝐬𝐭𝐨𝐫𝐞:  𝐑𝐞𝐬𝐭𝐨𝐫𝐞 𝐛𝐚𝐜𝐤𝐮𝐩𝐬 𝐚𝐟𝐭𝐞𝐫 𝐞𝐯𝐞𝐧𝐭. 
data and systems are routinely backed up and can be restored in the event of a disaster. 


2) 𝐏𝐢𝐥𝐨𝐭 𝐋𝐢𝐠𝐡𝐭:        𝐏𝐫𝐨𝐯𝐢𝐬𝐢𝐨𝐧 𝐦𝐢𝐧 𝐫𝐞𝐬𝐨𝐮𝐫𝐜𝐞𝐬 𝐚𝐧𝐝 𝐬𝐜𝐚𝐥𝐞 𝐚𝐟𝐭𝐞𝐫 𝐞𝐯𝐞𝐧𝐭. 
maintaining essential components (minimal version) in a dormant state. 
During a disaster, you can scale up this minimal environment, reducing downtime


3) 𝐖𝐚𝐫𝐦 𝐒𝐭𝐚𝐧𝐝𝐛𝐲:    𝐀𝐥𝐰𝐚𝐲𝐬 𝐫𝐮𝐧𝐧𝐢𝐧𝐠 𝐛𝐮𝐭 𝐬𝐦𝐚𝐥𝐥𝐞𝐫 
maintains a partially active environment mirroring production setup.
 The pre-scaled environment is equipped to handle a portion of the production load. 
 With a significant portion of infrastructure already operational

3)  𝐀𝐜𝐭𝐢𝐯𝐞-𝐀𝐜𝐭𝐢𝐯𝐞: 𝐫𝐮𝐧𝐧𝐢𝐧𝐠 𝐢𝐧 𝐦𝐮𝐥𝐭𝐢𝐩𝐥𝐞 𝐫𝐞𝐠𝐢𝐨𝐧𝐬. 
running multiple instances simultaneously in different regions or availability zones.
if one region faces a disruption, traffic can be automatically routed to a healthy instance


https://docs.aws.amazon.com/pdfs/whitepapers/latest/disaster-recovery-workloads-on-aws/disaster-recovery-workloads-on-aws.pdf

### otras arquitecturas


https://aws.amazon.com/blogs/architecture/lets-architect-well-architected-systems/
https://docs.aws.amazon.com/pdfs/wellarchitected/latest/reliability-pillar/wellarchitected-reliability-pillar.pdf?did=wp_card&trk=wp_card
https://docs.aws.amazon.com/solutions/latest/media-services-application-mapper-on-aws/architecture-overview.html
https://aws.amazon.com/whitepapers/?whitepapers-main.sort-by=item.additionalFields.sortDate&whitepapers-main.sort-order=asc&awsf.whitepapers-content-type=*all&awsf.whitepapers-global-methodology=methodology%23well-arch-framework&awsf.whitepapers-tech-category=tech-category%23databases%7Ctech-category%23compute%7Ctech-category%23networking-content-dev&awsf.whitepapers-industries=*all&awsf.whitepapers-business-category=*all

### Chaos Ingeneering

https://shambhavishandilya.medium.com/netflixs-chaos-monkey-2380874637ab


**Chaos Ingeneering Workflow**

  1. Analysis
  2. Identify failures and build failure scenarios
  3. Chaos Testing
  4. Gather results
  5. Improvement
   
**Chaos Ingeneering Tools**

    Netflix Simian Army
    AWS Lambda Injection
    Traffic Control Toolset    on EC2 (Old method)
    Chaos-Lambda
    Chaos-Monkey
    KubeDoom
    ChAP
    Gremlin




Netflix’s **Simian Army**

https://medium.com/@chaosgears/chaos-engineering-30d095e5741f

Latency Monkey
Conformity Monkey
Doctor Monkey
Janitor Monkey
Security Monkey
10–18 Monkey
Chaos Gorilla




