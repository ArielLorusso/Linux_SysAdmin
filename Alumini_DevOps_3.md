# Fase 3 - DevOps

## Clase 25 - DevOps - Módulo 11

### Historia Y Cultura Devops

#### Que es devops ? 

https://aws.amazon.com/es/devops/what-is-devops/

Una : cultura / filosofia / puesto laboral / una metodologia  ?  NO

DevOps es una `cultura` que busca mejorar la `colaboración` entre 
los `equipos` de `desarrollo` y `operaciones`.


Las epresas de IT constan con varias  `Areas o Departamentos` por ejemplo

    ● (PM) Project Management
    ● (HR) Human Resources
    ● (QA) Quality Assurance / Testing
    ● (UX) User Experience
    ● Technical Support / IT Support / Help Desk
    ● Business / Sales / Finance / Marketing
    ● Development / 
    ● Infrastructure / Operations

https://www.quora.com/What-are-the-departments-in-an-IT-company

Estos `3 Departamentos` son las que implementan DevOps como metodologia

    ● Negocios 
    ● Desarrolladores / Programadores     (DEV)
    ● Infraestructura / Operaciones       (OPS)


Objetivos de `desarrollo`: desarrollar `nuevas funcionalidades`.
Objetivos de `operaciones`: mantener todo `estatico` para `evitar errores`. 


Que pasa cuando un equipo no tiene buenas practicas : lastpass - Security Breach
https://www.theverge.com/2023/2/28/23618353/lastpass-security-breach-disclosure-password-vault-encryption-update


#### Cómo nace DevOps ?

conferencia  `O'Reilly  Velocity` en 2009.
En la charla `10+ Deploys a Day`: Dev and Ops Cooperation at Flickr
de  46:22 minutos  Realzada por : John Allspaw  &  Paul Hammond

https://www.youtube.com/watch?v=LdOe18KhtT4

`3:26` Traditional thinking
  - devs' job is to  add `new features` to the site
  -  ops' job is to  keep `site stable` and fast

`4:06` ops job is to enable business
`4:32` The business requires change

`5:30` lowering the risk of change via `tools` and `culture`

deploy logs:  who / when / what

`Tools ` | 7:50
- Automated Infrastructure  | 8:10
- Shared version control    | 9:52
- One step build & deploy   | 11:20
- Feature Flags             | 16:01
- Shared Metrics            | 22:00
- IRC and IM robots         | 28:00
 
`Culture` | 29:30
- Respect                        | 29:50
- Trust                          | 34:05
- Healthy attitude about failure | 39:30
- Avoiding Blame                 | 41:45

https://iswamik.medium.com/who-is-the-founding-father-of-devops-3447b520a6db


`Patrick Dubois`, admiro esta charla y fue alentado a rear una propia 
conferencia `Velocity` que se realizp Octubre 2009 en Belgica
decidió ponerle como nombre a la charla `DevOpsDays`

https://devopsdays.org/blog/
DevOps 13 years and 120+ presentations later :  https://www.youtube.com/watch?v=zwb9r1n-Ut4
Velocity 2011:`Jon Jenkins` "Velocity Culture"  https://www.youtube.com/watch?v=dxk8b9rSKOo
Velocity 09:`Steve Souders` "State Performance" https://www.youtube.com/watch?v=KZREfS-PCVA


####  Qué asociamos a DevOps ?

    ● Desarrollo y operaciones.
    ● Automatización.
    ● La nube.
    ● CI/CD.
    ● Jenkins.
    ● Comunicación. 

#### Infinito (ciclo de DevOps )


  **Comunicación**

Crear un `canal de comunicación` entre 
el área de `desarrollo` y el área de `operaciones`.

  **Alinear los objetivos**

Utilizar el `canal` para `Alinear objetivos` de ambos equipos, 
de esta manera, alinearlos con los objetivos a nivel organización será más fácil.

  **Comunicación organizacional**

mismo canal de comunicación pero `a nivel organización`,
que todos equipos tenga comunicación con los demás `sin intermediarios`.

  **Mejorar procesos**

`implementar herramientas` para solucionar problemas 
`o mejorar` los procesos ya creados.


#### Objetivo de cultura DevOps

Es `romper las barreras` entre las distintas áreas 
y que los de `operaciones` participen de forma activa
 en lograr los `objetivos` de la organización.


#### ventajas de  DevOps en una organización

● Objetivos alineados en toda la empresa.
● División de `responsabilidades` de forma clara. 
● Experiencia de desarrollo más agradable.
● Deployments sin importar el día u hora ni otras cuestiones.
● Procesos más `automatizados`.
● Testing automatizado.
● Experiencia de `troubleshooting` más eficaz.


### Responsabilidades y Herramientas

Entre los distintos puestos de DevOps se repiten ciertos tipos de herramientas 
 y dentro de ellas hay cierto stack estándar. 


Este tipo de herramientas o `tareas` son:

    ● Infraestructura como Código.
    ● Integración continua.
    ● Distribución continua.
    ● Deployment continuo.
    ● Configuration Management.
    ● Provisioning automatizado


#### Infraestructura como código


Herramientas para `definir` en archivos los `recursos de infraestructura`.
En este curso utilizaremos dos estándares de la industria, `Terraform` y `Vagrant`,
aunque en el mercado se pueden encontrar otras 


#### Integración continua

integrar continuamente cambios realizados por los desarrolladores, de forma escalonada
 y así aislar culpables de errores y evitar futuras complicaciones durante los deployments. 

opciones : 
algunas ya integradas en el repositorio de código (`GitHub Actions`), 
servicios de la nube como (`AWS Codedeploy`) o  (`bitbucket pipelines`)
o herramientas externas altamente configurables (`Jenkins`), que se utilizará en el curso

#### Distribución continua

se `almacena`, en algún repositorio de `artefactos`, nuestro artefacto resultado 
del proceso de integración continua que utilizaremos para realizar el deployment. 

`Artefacto` se refiere a todo elemento que utilizaremos para el `deployment`, 
ya sean archivos .jar, archivos .zip con nuestro código,

Existen herramientas para artefactos `específicos`, como es el caso de `Docker Hub` 
con las imágenes de Docker y existen otros repositorios más `generales` como lo es `Nexus`. 

utilizaremos `Docker Hub`


tambien existe GitHub `Artifacs` integrado en `Github Actions`
https://docs.github.com/en/actions/managing-workflow-runs-and-deployments/managing-workflow-runs/downloading-workflow-artifacts



#### Deployment continuo

Buscamos que el código ya integrado y testeado se lance rapido y de `forma automática`. 
ahorando tiempo y esfuerzo tento en el `deploy`, como en correccion de `errores`

suelen incluir mecánicas de `rollback` automático, 
en caso de que el deployment no pase las pruebas

se suele usar la `misma herramienta` que se utiliza para el CI, como Jenkins, 
hay otros casos en los que se utiliza otra herramienta para el CD, 
como `ArgoCD` o `Flux` cuando se trabaja con `Kubernetes`. 

#### Configuration Management 

Proceso de automatizar la `configuración` de `servidores` u otros elementos,
facilitar la `replicación` de una configuración realizada,
`distinguir` la configuración de distintos servidores.
 Un ejemplo claro de esto sería la configuración de `Jenkins` y sus agentes.

Con una herramienta de Configuration Management podríamos automatizar 
la configuración del `Jenkins master` y de sus respectivos agentes por separado.

Estas herramientas 
solían tratarse de configuraciones `master-agent` (como `Puppet`),
actualmente se usa del tipo `Agentless`          (como `Ansible`) 

`Ansible` herramienta que veremos en el curso.
requiere solo de conectarse por ssh al servidor  
y se le pasa una receta de configuracion que puede ser YAML

#### Provisioning automatizado

automatización de la creación de entornos de trabajo, desde un
entorno local hasta uno productivo o de pruebas.

Al comienzo suelen ser un conjunto de herramientas, scripts o programas separados. 
El objetivo final es llegar al `1-clic deploy`, mediante el cual se pueda 
crear un `ambiente listo` para ser utilizado con un `pipeline`

una herramienta común suele ser `Jenkins` por sus opciones para `configurar` los `pipelines`
permite ejecutar acciones de `IaC`, `Config management`, `deployments`, y otras.

###  Nuevos procesos, metodologías y roles


## Clase 26 - SRE , SLA , SLO

### Fayos en Deploy

cambios en el codigo o configuracion de servidores web para los nuevos servicios
deben testearse en varios entornos antes de produccion
Por ejemplo : Sandbox , Desarrollo, QA y finalmente Produccion
Estos entornos deben ser lo mas parecido posible a produccion 
para evitar sorpresas desagradables en el Deploy
Podemos aplicar `medidas de Testing` par evitar esto
Los servidores veb tienen herramientas para `validar configuraciones`
En general habriaque implementar un `Pipeline CI CD`


Ejemplo de CI / CD      https://www.researchgate.net/figure/Example-of-CI-CD-pipeline_fig1_355588293

■ Commit `change`
. ▶ Trigger build
■ `Build` Artifact
. ▶ Notify of build outcome 
■ Run `tests`
. ▶ Notify of test outcome
. ▶ Deliver build to environment
■ `Deploy` where necessary


### SRE vs DevOps  -  Rol vs Cultura

#### SRE - Site Reliability Engineering

SRE 101 - Nerdearala https://www.youtube.com/watch?v=c5WI3qEPnLs

#### SRE  Puesto laboral

Site Reliability Engineer
`DevOps` se refiere a una `cultura` más que a un puesto laboral,
hay ofertas laborales o puestos en organizaciones de DevOps Engineer,
teóricamente el `puesto laboral` más acertado es `Site Reliability Enginee`

Un `SRE` tiene background de Desarrollo o background de Operaciones 
y aplica cultura DevOps para `solucionar problemas de operaciones` 
`con soluciones de desarrollo de software`.


#### SRE Historia

SRE nace dentro de `Google`, aproximadamente en el año `2003`

para cumplir con las necesidades del producto, el director Ben Treynor Sloss 
crea un `equipo de Operaciones` de una forma distinta a la habitual. 

En vez de contratar `Sys Admin` , contrata `Ingenieros de Software` 
que apliquen sus conocimientos a resolución de problemas del mundo de Operaciones.


#### responsabilidades de  DevOps

■ Desarrollar y mantener `pipelines de CI/CD`.
■ `Infraestructura` como código.
■ `Config Management`. 

Implementar herramientas ya creadas para agilizar el proceso de desarrollo 
y para facilitar a los desarrolladores sus tareas cotidianas, 

DevOps, si bien `no suelen tocar código de la aplicación` principal,
`si suelen desarrollar aplicaciones` 
(son Desarrolladores realizando `tareas de operaciones`) 
que permitan mejorar procesos o agilizar desarrollos.


#### Responsabilidades  de SRE 

■ `Observability` / Monitoreo.
■ `Incident` Management.
■ `Desarrollo` de Plataformas.

Los SRE no suelen estar tan al día con los Desarrolladores 
sino que ven una imagen más general de la organización. 

Esto les da una perspectiva que sirve para que se logren objetivos, 
son los responsables de los `SLOs` (`Service Level Objectives`)


#### SLA , SLO

SLA : Service Level `Agreement`   ( Contrato Legal )
SLO : Service Level `Objectives`  ( Objetivo de covertura)

SLA es cuanta disposicion del servicio se ofrece legalmente
hay tablas preestablecidas    https://sre.google/sre-book/availability-table/
        `Availability` level	`Allowed` unavailability window 
	
Available Year         quarter     month        week          day            hour
90%       36.5 days    9 days      3 days       16.8 hours    2.4 hours      6 minut
95%       18.2 days    4.5 day     1.5 days     8.4  hours    1.2 hours      3 minut
99%       3.65 days    21.6 hour   7.2 hours    1.68 hours    14.4 minut     36 second 
99.5%     1.83 days    10.8 hour   3.6 hours    50.4 minut    7.20 minut     18 second 
99.9%     8.76 hours   2.16 hour   43.2 minut   10.1 minut    1.44 minut     3.6 second 
99.95%    4.38 hours   1.08 hour   21.6 minut   5.04 minut    43.2 second    1.8 second 
99.99%    52.6 minut   12.9 minut  4.32 minut   60.5 second   8.64 second    0.36 second 
99.999%   5.26 minut   1.30 minut  25.9 second  6.05 second   0.87 second    0.04 second 

`SLO` va a apuntar a ser `superior` a `SLA` 
para tener margen de seguridad y no quebrantar el acuerdo
Los SLOs permiten medir y mantener la calidad de un servicio.

Ej :   SLA -> 95%     SLO -> 99% 

#### Manejo de incidentes

Como tareas de Manejo los SRE :

Implementación de `herramientas` que permitan esta administración hasta ser los
“Capitanes” o encargados de enviar las `comunicaciones` internas y externas.

Definen a quién hay que mandar el `page` para que colabore en la `solución del problema`,
realizan el `análisis` de por qué sucedió y estudian cómo `evitar que vuelva a suceder`, 
entre otras tareas.

#### Desarrollo de plataformas

los SRE son los encargados de desarrollar plataformas  que faciliten
tareas de infraestructura para simplificar la actividad de los desarrolladores. 

Por ejemplo, una plataforma que les permita la creación de recursos de infraestructura
de forma más sencilla y que sirva de capa de abstracción



### Infromes

**Encavezados**  - Ficha tecnica

https://www.ejemplos.co/ficha-tecnica/

-------------┬-----------------------------┬---------------┬-------------------┐
             | Materia:                    | Docente:      | Fecha             |
             | Bootcamp de Devops Engineer | Zdenko Hraste | 24-7-23           |
             |-----------------------------┴---------------┴-------------------┤
educación IT | Alumno:                                                         |
             | Tutor: Facundo Miglio     Comisión: 3     Αño: 2023             |
             |---------------------------------------------┬-------------------|
             |  DESAFIO N° 5                               | Versión 1         |
-------------┴---------------------------------------------┴-------------------┘

**Indices**

TITULO                                                  HOJA                                                              
1-  Configuración de discos nuevos al sistema operativo    3
2-  Partición de disco como LVM                            3
3-  Creación de volúmenes fisicos (pv)                     4
4-  Creación de grupo de volúmenes (vg)                    4 
5-  Creación de volúmenes lógicos (lv)                     4
6-  Creación de FS ext4 con Iv-2                           5
7-  Creación de FS ext3 con lv-5                           5
8-  Montar FS Iv-2                                         5
9-  Montar FS IV-5                                         6


**Diagramas de arquitectura**
┌───┐      ┌───┐     ┌───┐
│PVC├──┬──▶|EC2│────▶│S3 │
└───┘  |   └───┘     └───┘ 
       |    ┌───┐
       └───▶│RDS│
            └───┘

**Cuadros de Indicaciones**

Senialamientos con flecha y resaltador en las imagenes de step by step

**Testing**

Caso de Prueba
    Requisirto de Prueva
    Comando 
    Argumentos
Resultados
    Comando 1
    Comando 2

### Mas Terminologia

SOAP REST
https://aws.amazon.com/es/compare/the-difference-between-soap-rest/


## Clase 27 - Agile ,Srum, Sprint 

###  procesos y metodologías

####  Tickets - Asignacion de Tareas

Se asignan `Tickets` Tareas con distintas `prioridades` segun entornos y plazos
`Scrum` son reunienes donde se realizan `Boards` con  onjetivos metodos y plazos
hacindo `Kanban boards` con herramientas como `Jira`, `Click-Up`, `Azure-Boards` 
`Trello`, InvGate, ServiceNow, etc

Tickets de `Mantenimiento` : Problemas, Alertas, monitoreos, caidas de servidores
Tickets de `Desarrollo`    : Creacion de base de datos, Levantar instancias nuevas

Tareas -> Tickets  Ya sean internas del equipo o asignadas desde o hacia otro equipo

Tambien existe `Agile` como principio y `Srcum` metodologia y sus `Sprints` y `Dailys`


#### Ágile - Management philosophy

Las metas son mejorar la `comunicación` y alinear las metas 
entre los equipos de `desarrollo` y los de `infraestructura`. 
mediante la entrega constante a través de un `ciclo de retroalimentación`


#### Kanban board - Herramienta

https://en.wikipedia.org/wiki/Kanban_board

Es una herramienta que utilizan, principalmente, los equipos de Infraestructura.
Para tener control sobre las tareas en curso y su estado.
Esta herramienta consiste en un tablero con al menos cuatro columnas: 
    ● `Backlog` o `To do` (tareas pendientes), 
    ● `In progress` (tareas en proceso),
    ● `Blocked` (tareas bloqueadas por un tercero) y
    ● `Done` (tareas ya terminadas).

#### Scrum - Metodología 

Scrum` es una `metodologia` para aplicar `principios Agile`

`Antes de DevOps`, los grupos de IT o de Infraestructura trabajaban, 
con una `lista de tareas`, según su prioridad `sin diferenciarlas`,  
Esta forma de trabajar acarreaba algunas problemáticas:

● Los de `desarrollo` siempre están `esperando` al equipo de Infraestructura.
● `Sin estimativo de plazos` de entrega de la parte del equipo de Infraestructura.
● Las `tareas urgente quedarm olvidadas` o en la lista, por mucho tiempo.
● `No existen entregas intermedias`.  No se entrega nada hasta que esté terminada. 
Los demás equipos no tienen novedades hasta la entrega


#### Sprint - Periodos para Objetivos

En la metodología `Scrum` se divide el trabajo en períodos de `dos semanas` 
lammados `Sprint` y se cuenta con un `scope limitado` de `tareas` planeadas previamente 
para terminar todas las tareas planeadas en el `tiempo establecido`

El sprint, se plantea de forma tal que esté alineado con los sprints de los otros equipos

Es responsabilidad de los miembros del equipo notificar a sus compañeros 
y al `Scrum Master`/ `Project Owner` cuando alguna tarea se vea comprometida 
y no llegue a completarse al fin del Sprint. P

Para esta comunicación interna se realizan las `reuniones diarias (Dailies)`
donde cada miembro comunica al resto del equipo `en que está trabajando`, 
que planea `realizar ese día` y si tiene `algún bloqueo`.

Luego de haber visto la Sprint Planning y el concepto de reuniones diarias, 
queda la reunión llamada `Retro`, que suele ser mensual (`cada 2 sprints`).


#### Daily Standup - Feedback de Progreso

Realizan` Reuniones` llamadas `Daily` o `Ceremonias`  
Se suele usar  `Zoom`, Microsoft `Teams`, Google `Meet`,
en raras ocasiones llamadas de Slack, Discord o  ,Skipe , 
 
Tambien hay herramientas como `Status Herp` que permiten crear Dailys Asincronicas
Tienen actualisaciones de estados tareas formularios y organigramas
Permite al Scrum Master `ver todo` lo que hace cada miembro del equipo `sin llamadas`

Tiene como lado `negativo` que al no haber cara a cara puede llegar a ser ignorado
resultando en `informes y preguntas que no son escuchadas`


###  Roles de Soporte

Roles `complementarios`, cumplen la función de actuar de soporte 
para que los desarrolladores puedan `cumplir sus objetivos`.

Asegurar que el equipo logre los objetivos pactados, logrando desbloquear `dependencias`

#### Scrum Master

El rol primero y principal es el del Scrum Master.
Persona encargada de promover el uso de Scrum y de las ceremonias de esta metodología. 

Además, hace de nexo entre el equipo de desarrollo y los equipos de producto
que crean las tareas 

#### Product Owner

Encargado de la aplicación de cara `al cliente`.
tiene el `conocimiento sobre el producto` y que se encargará de traer:
los `requerimientos` y los problemas a resolver
Al finalizar una tareas , dará el visto bueno

###  Roles técnicos

#### Ingeniero DevOps

Ya mencionamos sus responsabilidades ,
el cargo tiene` distintos nombres` -pero las `mismas responsabilidades`-, 
como por ejemplo: `Automation Engineer`. 

#### Cloud Engineer

Este rol nace con la principal responsabilidad de `administrar la nube`,
desde una perspectiva de `seguridad, costos, administrativa`, y otras.
Suelen trabajar codo a codo con el resto del equipo de DevOps

#### Cloud Architect

Encargado de diseñar los patrones y de `decidir la implementación` 
de `la infraestructura` de la organización en la nube.
Trabaja junto a los Ingenieros Cloud.

#### DevSecOps

Manejan información cuya seguridad es de alta importancia,  como pueden ser
`bancos`,  establecimientos de `salud`, instituciones `gubernamentales`, y otras.

Por su nombre, se puede inferir que es similar al Ingeniero DevOps 
pero con un `enfoque en seguridad`

#### Release manager

Se encarga de la organización de las distintas entregas que tendrá la aplicación
DevOps para lograr la entrega de cada versión de forma exitosa. 
Se los encuentra en organizaciones de gran tamaño. 


#### Platform Engineering


2010s
Companias tecnologicas como `Netflix, Google, Facebook, and Airbnb `
began building platforms  to help developers

2018
`Evan Bottcher` defined a digital platform as a foundation of 
`self-service APIs, tools, services, knowledge, and support`. 
`Martin Fowler`'s article on digital platforms identified `five key areas `
for successful transformation.

2022
Gana popularidad entre moresas de software en 

la ideqa es construir `plataformas para los desarrolladores` 
para que no pierdan tiempo en la parte operativa y se consentren en la aplicacion

https://platformengineering.org/blog/what-is-platform-engineering
https://platformengineering.org/state-of-platform-engineering-vol-3


####  FinOps - Finantial Operations

### Unidad 12 - Infraestructura en la nube On Premise: Servicio en la Nube


#### On Premise: Servicio en la Nube

antes de hablar de la nube, hablemos de la infraestructura On-Premise. 
Consiste en alquilar servidores o espacio en un Data Center,
o tener servidores físicos propios de los que somos responsables. 

**Desventajas de On-Premise**

    Espacio

Previo a la nube, algunas organizaciones no contaban con sus servidores,
los `alquilaban directamente en el Data Center`. 

● Podemos llegar a un `límite de espacio / servidores` muy fácil.
● Estos pedidos suelen llevar cierto proceso y `tiempo`.
● `Migración o integración` entre distintos proveedores puede ser `difícil o imposible`. 

    Capacidad momentánea

Cuabdo sea necesaria una mayor capacidad para un momento en particular como,
por `ejemplo`, un día de descuentos en productos como el `Black Friday`. 
Generalmente, `no tenemos la posibilidad de alquilar` capacidad de cómputo
`solo por un par de días`. 
 
  Geolocalización

Si por latencia necesitamos que los servidores estén ubicados en otra parte del mundo,
será difícil de lograr porque tendremos que acudir a distintos proveedores


**Ventajas del modelo de servicios en la nube**

Acceso a servicios en la nube `vía web via consola gráfica` 
o con `llamados a API vía comandos` en una terminal o aplicaciones más complejas.

● acceso a Data Centers en `todas partes del mundo`
● `plataformas` completas listas para la distribución o utilización de código. 
● modelo de `responsabilidad compartida`
● `configuraciones de alta disponibilidad` preestablecidas.

**Desentajas del modelo de la nube**

Desventajas del modelo de la nube 
Existen ciertos casos de uso en los que la nube no es conveniente. 
Por ejemplo: si necesitamos una solución bastante sencilla, 
tal vez un proveedor local con un servicio básico termina siendo 
mucho más económico y fácil de adoptar


#### Modelos de negocios en la nube (IaaS, PaaS y SaaS)

**On-Premise**

Es el método tradicional. 
Se necesitaba comprar servidores y conectarlos de forma local en nuestra red. 

**IaaS (Infrastructure as a Service)**

Brindan los recursos de cómputo, memoria y red 
ya listos para ser utilizados ypodemos configurar el servidor a gusto 
para así poder correr las aplicaciones.

**PaaS (Platform as a Service)**

sería un servidor configurado de forma tal que nosotros
solo tengamos que poner la aplicación

Un ejemplo de estas plataformas en la nube de AWS es Elastic Beanstalk

**SaaS (Software as a Service)**

Brinda un servicio ya listo para consumir.
ejemplos, los de streaming, almacenamiento de storage, y otros. 

#### Nube privada  vs  Nube pública

**Nube privada**

**Nube Pública**


#### Proveedores de servicios en la nube
#### Responsabilidad compartida


### OpenStack, Proxmox, VMware,TrueNAS, etc...

Armar `nuestro propio AWS`

Softwere Opensource para hacer una `pull de recursos`
Para `brindar servicios` a nuestros desarolladores mediante terraform

https://docs.openstack.org/2024.2/install/
https://docs.openstack.org/2024.2/user/

UBUNTU  https://ubuntu.com/training/contact-us?product=openstack-training-onsite
SDK     https://developer.openstack.org/

## clase 28 - Ansible, Terraform, Vagrant, OpenStack

**Conseguir entrevistas lavorales**

    LinkedIN, Twiter X
    
    Eventos:
        Ekoparty
        SantanDev
        Nerdearla

    FinTech :
        MercadoLibre
        Wala
        Brubank
        TarjetaNaranja
        Pomelo
        Belo

    Internacional :
        PayPal
        Venmo 

    Cripto :
        Lemon
        Nexo
        Satoshi Tango
        BuenBit
        Binance

### Config Managment

nos permite hacer configuraciones luego de la inicialisacion del servidor

Cuando se configura un servidor, se instala una `imagen y las dependencias`
tendremos que configurar parámetros como 
la red, los discos, acceso a otros servidores, bases de datos

Si nos piden que configuremos `tres servidores iguales más` para poder lidiar con la carga. 
Esta metodologia se convierte en un `problema`

creando una `imagen customizada` para nuestro uso de forma tal que
creamos un nuevo servidor utilizando dicha imagen.

**Config. Management**

usamos `herramientas de Config. Management` como `Puppet, Ansible, Salt`,  nos permita:
● Configurar uno o `más servidores` de forma dinámica.
● Realizar distintas `configuraciones` en base a distintos `parámetros`. 

**Beneficios**

● Actualización de paquetes de forma masiva
(un parche de seguridad, aplicar una nueva versión de un paquete, y otros).
● `Deployments en una flota` de servidores.
● `evitamos` el problema de `snowflake servers`
donde cada servidor es completamente distinto a los demás, `todosserán iguales`.

**Cuidados Necesarios**

Una buena práctica es aplicar medidas de testing que puedan prevenir que un
cambio dañino se aplique a la flota completa, por ejemplo mediante tags. 
Se tiene un servidor de“pruebas” o “testing” con un tag específico 
y una vez que se prueba en ese servidor, pasar a la flota de servidores con un tag de “producción”

### Agent vs Agentless (Puppet y Ansible)

Ansible es mucho mas popular y extendida actualmente
pupet se creo primero y se usa  menos en la actualidad
sobre todo con prollectos legacy

**Agent-Server  Puoet**

`puppet agents` que estaban instalados dentro de cada servidor que,
cada determinado tiempo, se comunicaba con el `puppet master` (principal)
para hacer un `Pull` y traer los `cambios` (en caso de que los hubiera).

Importante `probar los cambios` antes de llevarlos al puppet server 
ya que sino corremos el riesgo de que los agentes se `traigan código roto`

**Agentless Ansible**

Suelen `comunicarse` mediante `protocolos` ya preestablecidos como por ejemplo SSH

arquitectura mucho más sencilla y fácil de mantener,
desarrollada en Python lo cual hace que las modificaciones o plugins
Al ser Agentless, es un proceso menos en los servidores y consumiendo recursos. 

instrucciones suele ser desde un servidor principal 
pero podremos ejecutar Ansible desde cualquier servidor que tengamos acceso por SSH


**Playbooks**

playbooks son instrucciones escritos en `YAML` 
para dejar listos los servidores con `instalaciónes y configuraciones`
tendremos algunos `génericos` (para todos) y algunos más `específicos`, 
por ejemplo, los de configuración de servidor de base de datos. 

**Inventories**

son archivos donde `definidos los servidores` que configuraremos, 

pueden ser tan simples como una `lista de IPs` 

a algo más complejo como una `especificación de grupos` de servidores 
con determinado nombre, donde `cada IP` tiene su `nombre de host, etc`.


al ejecutar una configuración le pasaremos a Ansible
uno o más `playbooks` junto a uno o más `inventarios`. 


### Infraestructura (On prem y Nube)

hay una API o herramientas que interactúan con la nuve
de forma `distinta a la consola web`. 

Podremos acceder desde nuestra terminal a través de `AWS CLI`,
o con de librerías de lenguajes quw comunicarnos con la API de la nube 
(`Boto3 para Python`, por ejemplo). 

seguimos con un `problema de escala` y en muchos casos
tenemos que hacer una herramienta nosotros mismos. 

Esta solución es muy útil para equipos grandes 
que buscan `soluciones muy puntuales` y particulares

**Infraestructura como Códig**

hay APIs que nos brindan los proveedores, desde opciones creadas por los proveedores 
(Como `Cloudformation` o `CDK` desde el lado de AWS)
o por organizaciones aparte (como `Terraform` de Hashicorp o `Pulumi` de Pulumi)

crear infraestructura mediante código 
(ya sea algo más amigable para equipos de operaciones como Yaml,
 por ejemplo, en el caso de Cloudformation)

**Ventajas**
Infraestructura
■ replicable.
■ documentada.
■ Pipelines en deploys
○ Infinito Devops
○ Testing
○ CI/CD
■ Revisión y aprobación de cambios

### Terraform

Terraform es una `herramienta de infraestructura` creada por `Hashicorp` y en julio de 2014. 


Terraform por sí solo no es más que solo un esqueleto, 
necesitamos valernos de providers que agregarán funcionalidades 
para así poder crear los recursos EJ AWS CLI


#### Terraform Core

core al núcleo de Terraform, es decir, el binario
que utilizaremos para interactuar con la herramienta, 

#### Ejemplos

configura la herramienta para utilizar el provider de AWS
descargado del registry de Terraform :

```t
terraform {
    required_providers {
        aws = {
            source = "hashicorp/aws"
            version = "~> 1.0.4"
        }
    }
}
```

configurar el backend de Terraform para que utilice un bucket de S3 (AWS)
para almacenar el estado ( con un bucket de S3 ya previamente creado )

```t
terraform {
    backend "s3" {
        bucket = "<nombre del bucket>"
        key = "< path donde queremos almacenar
                 el estado dentro del bucket >"
        region = "us-east-1"
    }
}
```

#### Terraform providers

También conocidos como plugins de Terraform
son componentes que podremos agregar al
código para agregar funcionalidades

```t
terraform {
    required_providers {
        aws = {
            source = "hashicorp/aws"
            version = "~> 1.0.4"
        }
    }
}
provider "aws" {            # PROVIDER
    region = "us-west-2"
    access_key = "<my-access-key>"
    secret_key = "<my-secret-key>"
}
```

Esta forma `no es segura` de configurar el provider 
ya que estamos `exponiendo las credenciales`

#### Estado


Guardará una `relación` entre nuestros archivos de `configuración de Terraform`
con los `recursos de infraestructura que creamos`.

En caso de `perder, borrar o corromper este archivo`, 
Terraform no manejara más la infraestructura que fue creada en la nube
y tendremos que pasar a `manejarla a mano`

Se Recomienda trabajar con un `Backend remoto`,puede usarse un Bucket S3
Junto con un `Sistema de bloqueo` que puede implementarse en DinamoDb
Es fundamental para `evitar sobreescrbir infraestructura` al trabajar en equipo


```json
{
    "version": 4,
    "terraform_version": "1.2.3",
    "serial": 1,
    "lineage": "86545604-7463-4aa5-e9e8-a2a221de98d2",
    "outputs": {},
    "resources": [
    {
        "mode": "managed",
        "type": "aws_instance",
        "name": "example",
        "provider": "provider[\"registry.terraform.io/...\"]",
        "instances": [{
            "schema_version": 1,
            "attributes": {
                "ami": "ami-0fb653ca2d3203ac1",
                "availability_zone": "us-east-2b",
                "id": "i-0bc4bbe5b84387543",
                "instance_state": "running",
                "instance_type": "t2.micro",
              //  "(...)": "(truncated)"
            }
        }
        ]
    }
    ]
}
```

Este código fue recortado para mejorar su lectura
vemos en formato json los distintos recursos creados

https://blog.gruntwork.io/an-introduction-to-terraform-f17df9c6d180

1) Set up your AWS account
2) Install Terraform
3) Deploy a single server
4) Deploy a single web server
5) Deploy a configurable web server
6) Deploy a cluster of web servers
7) Deploy a load balancer
8) Clean up

https://blog.gruntwork.io/how-to-manage-terraform-state-28f5697e68fa

1) What is Terraform state?
2) Shared storage for state files
3) Limitations with Terraform’s Backends
4) Isolating state files
5) The terraform_remote_state data source

#### Archivos de configuración
Si bien no son un componente en sí mismo sino un conjunto que engloba a varios archivos

están escritos en `lenguaje HCL` y tienen la terminación `.tf`

El nombre de archivo es indistinto para la herramient, 
en reglas generales, se suele trabajar con un archivo llamado `main.tf`

Por prolijidad, lo dividiremos en varios archivos con funciones bien claras,
por ej : un archivo `backend.tf` donde tendremos toda la configuración del backend,
o un archivo `providers.tf` donde configuraremos los proveedores

ejemplo un archivo de configuración :

```t
resource "aws_instance" "web" 
{
  ami = “ami-0dcc1e21636832c5d”
  instance_type = "t3.micro"
  tags = {
    Name = "Prueba"
  }
}
```

#### Terraform Registry 

Registro de Terraform es su repositorio principal de código, 
donde podremos encontrar tanto proveedores como módulos.

Encontramos código sino y documentación de cómo usar los proveedores. 

Los módulos son paquetes de código HCL 


https://registry.terraform.io/
https://registry.terraform.io/providers/hashicorp/aws/latest/docs/resources/
https://registry.terraform.io/providers/hashicorp/aws/latest/docs/resources/ec2_fleet
https://registry.terraform.io/providers/hashicorp/aws/latest/docs/resources/ami

#### Módulos de Terraform

Los módulos básicamente son código de Terraform estandarizado
que nos permite parametrizarlo para que pueda ser fácilmente reutilizable.

Por ejemplo:
Que nuestra aplicación principal conste de una instancia EC2,
una base de datos RDS y una VPC con sus respectivas Subnets



#### Terraform Workflow  ( Init,  Plan,  Apply,  Destroy)

INIT, PLAN, APPLY :

1. `Instalar` los `proveedores` y módulos (`Terraform Init`).
2. Hacer un dry-run (`Terraform plan`, este paso es opcional).
3. Applicarlo (`Terraform apply`).
4. De ser necesario `Eliminar` la infraestructura (`Terraform Destroy`).

#### Terratest 

https://terratest.gruntwork.io/

Suported:

    ● AWS 
    ● Terraform  
    ● Docker 
    ● Kubernetes 
    ● Packer
    ● Terragrunt 

Test infrastructure code with Terratest in 4 steps

● Write test code using Go
● Use Terratest to deploy infrastructure
● Validate infrastructure with Terratest
● Undeploy


```go
package test

import (
	"testing"
	"github.com/gruntwork-io/terratest/modules/terraform"
	"github.com/stretchr/testify/assert"
)

func TestTerraformHelloWorldExample(t *testing.T) {
	// retryable errors in terraform testing.
	terraformOptions := terraform.WithDefaultRetryableErrors(t, &terraform.Options{
		TerraformDir: "../examples/terraform-hello-world-example",
	})

	defer terraform.Destroy(t, terraformOptions)

	terraform.InitAndApply(t, terraformOptions)

	output := terraform.Output(t, terraformOptions, "hello_world")
	assert.Equal(t, "Hello, World!", output)
}
```

#### Ventajas de Terraform

● Poder trabajar con `cualquier proovedor` de nube no solamente con AWS
● Poder utilizar la herramienta sin necesidad de  experiencia o conocimientos profundos
● cuenta con una comunidad gigante que está constantemente aportando.

#### Desventajas de Terraform

● HCl es sencillo, preo no contamos con todas las capacidades de un lenguaje de programación 
● El manejo del estado nos da libertad de manejarlo a nuestro gusto, 
pero es una carga operacional muy grande 
● Tiene una curva de aprendizaje un poco empinada para equipos inexpertos


### Vagrant

Vagrant tiene `ventajas sobre` utilizar `máquinas virtuales` directamente 
como `Virtualbox`, además de beneficios de la `infraestructura como código`,
también podremos:

● Utilizar una `imagen base` para ejecutar `scripts de instalación` 
que configuren la máquina virtual a nuestro gusto.
● `Asignar recursos` de forma más `simple`.
● Configurar recursos de red (`redes de Maquinas Virtualews` dentro del proveedor,
 es decir, el virtualizador que utilicemos).


#### Instalar Vagrant 

https://developer.hashicorp.com/vagrant/downloads
https://developer.hashicorp.com/vagrant/install


```sh
wget -O - https://apt.releases.hashicorp.com/gpg | sudo gpg --dearmor -o /usr/share/keyrings/hashicorp-archive-keyring.gpg
echo "deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/hashicorp.list
sudo apt update && sudo apt install vagrant
```

`$(lsb_release -cs)`  == victoria  (Linux `Mint`)
Debemos reemplazar por la version de `Ubuntu` correspondiente
Ubuntu 22.04 LTS `jammy jellyfish`<=== repository 'https://apt.releases.hashicorp.com Jammy Release' does not have a Release file.
Ubuntu 20.04 LTS `focal`.         <===  SUCCESS

INSTALLATION :

```sh
wget -O - https://apt.releases.hashicorp.com/gpg | sudo gpg --dearmor -o /usr/share/keyrings/hashicorp-archive-keyring.gpg
echo "deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com focal main" | sudo tee /etc/apt/sources.list.d/hashicorp.list
sudo apt update && sudo apt install vagrant
```

OUTPUT :

```sh
wget -O - https://apt.releases.hashicorp.com/gpg | sudo gpg --dearmor -o /usr/share/keyrings/hashicorp-archive-keyring.gpg
    [sudo] password for ariel: --2024-11-25 07:15:34--  https://apt.releases.hashicorp.com/gpg
    Resolving apt.releases.hashicorp.com (apt.releases.hashicorp.com)... 3.160.90.44, 3.160.90.33, 3.160.90.102, ...
    Connecting to apt.releases.hashicorp.com (apt.releases.hashicorp.com)|3.160.90.44|:443... connected.
    HTTP request sent, awaiting response... 200 OK
    Length: 3980 (3,9K) [binary/octet-stream]
    Saving to: ‘STDOUT’
    -                   100%[===================>]   3,89K  --.-KB/s    in 0s      
    2024-11-25 07:15:34 (188 MB/s) - written to stdout [3980/3980]


echo "deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com focal main" | sudo tee /etc/apt/sources.list.d/hashicorp.list
    deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com focal main


sudo apt update && sudo apt install vagrant
    Get:2 https://deb.nodesource.com/node_20.x jammy InRelease [4.563 B]           
    Hit:3 https://dl.google.com/linux/chrome/deb stable InRelease                  
    Hit:4 https://packages.microsoft.com/repos/edge stable InRelease               
    Hit:1 https://packages.microsoft.com/repos/code stable InRelease               
    Hit:5 https://download.docker.com/linux/debian bookworm InRelease              
    Hit:6 https://brave-browser-apt-release.s3.brave.com stable InRelease          
    Hit:7 https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2204/x86_64  InRelease
    Hit:8 https://repo.steampowered.com/steam stable InRelease                     
    Ign:9 http://packages.linuxmint.com victoria InRelease                               
        Reading  package lists...     Done
        Building dependency tree...   Done
        Reading  state information... Done
    0 upgraded, 1 newly installed, 0 to remove and 359 not upgraded.
    Need to get 153 MB of archives.
    After this operation, 393 MB of additional disk space will be used.
        Get:1 https://apt.releases.hashicorp.com focal/main amd64 vagrant amd64 2.4.3-1 [153 MB]
        Fetched 153 MB in 13s (11,9 MB/s)                                                                                                                                                                              
    Selecting previously unselected package vagrant.
    (Reading database ... 661306 files and directories currently installed.)
    Preparing to unpack .../vagrant_2.4.3-1_amd64.deb ...
    Unpacking vagrant (2.4.3-1) ...
    Setting up vagrant (2.4.3-1) ...

vagrant -v
    Vagrant 2.4.3
```

Mas Documentacion :

https://developer.hashicorp.com/vagrant/docs/installation
https://developer.hashicorp.com/vagrant/tutorials/getting-started

```sh
vagrant -h
    Usage: vagrant [options] <command> [<args>]
# Common commands:
     box             manages boxes: installation, removal, etc.
     cloud           manages everything related to Vagrant Cloud
     destroy         stops and deletes all traces of the vagrant machine
     halt            stops the vagrant machine
     help            shows the help for a subcommand
     init            initializes a new Vagrant environment by creating a Vagrantfile
     login           
     package         packages a running vagrant environment into a box
     port            displays information about guest port mappings
     powershell      connects to machine via powershell remoting
     provision       provisions the vagrant machine
     push            deploys code in this environment to a configured destination
     rdp             connects to machine via RDP
     reload          restarts vagrant machine, loads new Vagrantfile configuration
     resume          resume a suspended vagrant machine
     serve           start Vagrant server
     snapshot        manages snapshots: saving, restoring, etc.
     ssh             connects to machine via SSH
     ssh-config      outputs OpenSSH valid configuration to connect to the machine
     status          outputs status of the vagrant machine
     suspend         suspends the machine
     up              starts and provisions the vagrant environment
```


#### Vagrant Boxes 

llamamos `Boxes` a las `imágenes base` que podremos `descargar de Vagrant Cloud` 
y que utilizaremos para levantar nuestras máquinas virtuales.


```sh
# CREAR  Vagranfile
vagrant init ubuntu/focal64
vagrant init hashicorp/bionic64
```

Haremos una instanciación del box bionic64, que `creará un Vagrantfile` 

```ruby
Vagrant.configure("2") do |config|
  config.vm.box = "hashicorp/focal64"
  config.vm.provider "virtualbox" do |vb|
    vb.memory = "2048"
    vb.cpus   = "2"
  end
  # Enable provisioning with a shell script. Additional provisioners such as
  # Ansible, Chef, Docker, Puppet and Salt are also available. Please see the
  # documentation for more information about their specific syntax and use.
  

#   PROVISION INLINE
  # config.vm.provision "shell", inline: <<-SHELL
  #   apt-get update
  #   apt-get install -y apache2
  # SHELL

#   PROVISION PATH
  config.vm.provision :shell, path: ".vagrant/nginx.sh"

end
```


```sh
# CREAR Maquina
sudo vagrant up
    Bringing machine 'default' up with 'virtualbox' provider...
    ==> default: Checking if box 'ubuntu/focal64' version '20240821.0.1' is up to date...
    ==> default: Preparing network interfaces based on configuration...
        default: Adapter 1: nat
    ==> default: Forwarding ports...
        default: 22 (guest) => 2222 (host) (adapter 1)
    ==> default: Booting VM...
        default: SSH address: 127.0.0.1:2222
        default: SSH username: vagrant
        default: SSH auth method: private key
    ==> default: Machine booted and ready!
    ==> default: Checking for guest additions in VM...
    ==> default: Mounting shared folders...
        default: /home/ariel/Documents/Linux_SysAdmin => /vagrant
    ==> default: Machine already provisioned. Run `vagrant provision` or use the `--provision`
    ==> default: flag to force provisioning. Provisioners marked to run always will still run.
```

.vagrant/enginx.sh:

```sh
#/!bin/bash 

sudo apt-get update                # Old  Stable
sudo apt-get install -y nginx       

# sudo apt update                  # New (unstable)
# sudo apt install -y nginx
```

```sh
# DESTROY
[ariel @ ariel-All-Series] $  sudo vagrant destroy 557ffae    
    default: Are you sure you want to destroy the 'default' VM? [y/N] y
    ==> default: Destroying VM and associated drives...

# GLOVAL-STATE
[ariel @ ariel-All-Series] $  sudo vagrant global-status
    id       name   provider state  directory                           
    --------------------------------------------------------------------
    There are no active Vagrant environments on this computer! Or,
# CREAR Maquina
sudo vagrant up
    Bringing machine 'default' up with 'virtualbox' provider...
    ==> default: Checking if box 'ubuntu/focal64' version '20240821.0.1' is up to date...
    ==> default: Preparing network interfaces based on configuration...
        default: Adapter 1: nat
    ==> default: Forwarding ports...
        default: 22 (guest) => 2222 (host) (adapter 1)
    ==> default: Booting VM...
        default: SSH address: 127.0.0.1:2222
        default: SSH username: vagrant
        default: SSH auth method: private key
    ==> default: Machine booted and ready!
    ==> default: Checking for guest additions in VM...
    ==> default: Mounting shared folders...
        default: /home/ariel/Documents/Linux_SysAdmin => /vagrant
    ==> default: Machine already provisioned. Run `vagrant provision` or use the `--provision`
    ==> default: flag to force provisioning. Provisioners marked to run always will still run.
```

Le damos un nuevo  nombre en vez de default en el  vagrantfile

```ruby
Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/focal64"
  config.vm.define = "VirtualBox_nginx_test"    # ERROR
  config.vm.hostname = "ariel_nginx_host"       # ERROR 
  config.vm.provider :virtualbox do |vb|
    vb.name     = "vagrant.nginx-test"
  end
```

```sh
sudo vagrant destroy f2ef60b
    default: Are you sure you want to destroy the 'default' VM? [y/N]  y
    There are `ERRORS` in the configuration of this machine. 
    Please fix the following errors and try again:

    vm:
    * The following settings shouldn't exist: define
    * The hostname set for the VM  'default' should only contain 
        letters, numbers, hyphens or dots. Can't start with a hyphen or dot.

```
Arreglo el Vagrantfile segun peara evitar el error 

```ruby
Vagrant.configure("2") do |config|

  config.vm.box = "ubuntu/focal64"         # OS  
  config.vm.hostname = "ariel.nginx.host"  # Host NAME

  config.vm.define "vagrant.nginx-test" do |machine|
    machine.vm.box = "ubuntu/focal64"

    machine.vm.provider "virtualbox" do |vb|
      vb.name     = "vagrant.nginx-test"    # VM NAME
      vb.memory = "2048"                    # RAM
      vb.cpus   = "2"                       # CPU
      vb.customize ["modifyvm", :id, "--name", "Test-new-name"]  # ID NAME
    end
  config.vm.provision :shell, path: ".vagrant/nginx.sh"   # SCRIPT
  end
end

```

Ya puedo destruir y volver a probar

```sh
# DESTROY
sudo vagrant destroy f2ef60b
        default: Are you sure you want to destroy the 'default' VM? [y/N] y
    ==> default: Forcing shutdown of VM...
    ==> default: Destroying VM and associated drives...

sudo vagrant up
    Bringing machine 'default' up with 'virtualbox' provider...
    ==> default: Importing base box 'ubuntu/focal64'...
    ==> default: Machine booted and ready!
    ==> default: Checking for guest additions in VM...
    ==> default: Setting hostname...
    default:    # SCRIPT       sudo apt update
    default: WARNING: apt does not have a stable CLI interface. Use with caution in scripts.
    default: Hit:1 http://archive.ubuntu.com/ubuntu focal InRelease
    default: Get:2 http://security.ubuntu.com/ubuntu focal-security InRelease [128 kB]
    default:   # SCRIPT       sudo apt install -y nginx
    default: WARNING: apt does not have a stable CLI interface. Use with caution in scripts.
    default: Reading package lists...
    default: Building dependency tree...
```

```sh
vagrant@ariel:~$ hostname -f
ariel.nginx.host


[vagrant@ariel:]~$ systemctl status nginx.service 
    ● nginx.service - A high performance web server and a reverse proxy server
        Loaded: loaded (/lib/systemd/system/nginx.service; enabled; vendor preset: enabled)
        Active: active (running) since Thu 2024-11-28 03:57:30 UTC; 36s ago

```





```sh
# VALIDATE
[ariel @ ariel-All-Series] $  sudo vagrant validate
    Vagrantfile validated successfully.

```


```sh
# VER STATUS
> sudo vagrant status
    Current machine states:
        default                   running (virtualbox)
    The VM is running. To stop this VM, you can run `vagrant halt` to
    shut it down forcefully, or you can run `vagrant suspend` to simply
    suspend the virtual machine. In either case, to restart it again,
    simply run `vagrant up`.
```
```sh
# CONECTARSE  SSH
> sudo vagrant ssh
    Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-200-generic x86_64)

    * Documentation:  https://help.ubuntu.com
    * Management:     https://landscape.canonical.com
    * Support:        https://ubuntu.com/pro

    System information as of Wed Nov 27 05:57:01 UTC 2024

    System load:  0.08              Processes:               122
    Usage of /:   3.8% of 38.70GB   Users logged in:         0
    Memory usage: 13%               IPv4 address for enp0s3: 10.0.2.15
    Swap usage:   0%


    Expanded Security Maintenance for Applications is not enabled.

    0 updates can be applied immediately.

    Enable ESM Apps to receive additional future security updates.
    See https://ubuntu.com/esm or run: sudo pro status


    The list of available updates is more than a week old.
    To check for new updates run: sudo apt update
    New release '22.04.5 LTS' available.
    Run 'do-release-upgrade' to upgrade to it.

```

Viendo los recursos

```sh
[vagrant@ubuntu-focal]:~$ sudo apt update
    Hit:1 http://archive.ubuntu.com/ubuntu focal InRelease                       
    Get:2 http://archive.ubuntu.com/ubuntu focal-updates InRelease [128 kB] 
    ....
[vagrant@ubuntu-focal]:~$ sudo apt install neofetch
    After this operation, 76.0 MB of additional disk space will be used.
    Do you want to continue? [Y/n] y
    ....

[vagrant@ubuntu-focal]:~$  neofetch
            -/+oossssoo+/-.               vagrant@ubuntu-focal 
        `:+ssssssssssssssssss+:`           OS:      Ubuntu 20.04.6 LTS x86_64 
      -+ssssssssssssssssssyyssss+-         Host:    VirtualBox 1.2 
    .ossssssssssssssssssdMMMNysssso.       Kernel:  5.4.0-200-generic 
   /ssssssssssshdmmNNmmyNMMMMhssssss/      Uptime:  3 hours, 26 mins 
  +ssssssssshmydMMMMMMMNddddyssssssss+     Packages: 629 (dpkg), 4 (snap) 
 /sssssssshNMMMyhhyyyyhmNMMMNhssssssss/    Shell:   bash 5.0.17 
.ssssssssdMMMNhsssssssssshNMMMdssssssss.   Resolution: 1024x768 
+sssshhhyNMMNyssssssssssssyNMMMysssssss+   Terminal: /dev/pts/0 
ossyNMMMNyMMhsssssssssssssshmmmhssssssso   CPU:     AMD Ryzen 5 2600 (2) @ 3.399GHz 
ossyNMMMNyMMhsssssssssssssshmmmhssssssso   GPU:     VirtualBox Graphics Adapter 
+sssshhhyNMMNyssssssssssssyNMMMysssssss+   Memory:  202MiB / 1971MiB 
.ssssssssdMMMNhsssssssssshNMMMdssssssss.   


[vagrant@ubuntu-focal]:~$  df -ah |sort -k 2,2 -r
    Filesystem      Size  Used Avail Use% Mounted on
    /dev/sda1        39G  1.7G   37G   5% /
    vagrant         159G  149G   11G  94% /vagrant
    /dev/loop1       92M   92M     0 100% /snap/lxd/29619
    /dev/loop0       64M   64M     0 100% /snap/core20/2434
    /dev/loop2       39M   39M     0 100% /snap/snapd/21759
    binfmt_misc        0     0     0    - /proc/sys/fs/binfmt_misc
    securityfs         0     0     0    - /sys/kernel/security
    hugetlbfs          0     0     0    - /dev/hugepages
    systemd-1          -     -     -    - /proc/sys/fs/binfmt_misc
    tmpfs           986M     0  986M   0% /sys/fs/cgroup
    tmpfs           986M     0  986M   0% /dev/shm
    tmpfs           5.0M     0  5.0M   0% /run/lock
    tmpfs           198M  980K  197M   1% /run/snapd/ns
    tmpfs           198M  980K  197M   1% /run
    tmpfs           198M     0  198M   0% /run/user/1000
    configfs           0     0     0    - /sys/kernel/config
    udev            969M     0  969M   0% /dev
```
/dev/sda1 (39G): This is the VM's primary hard disk partition. 
It holds the operating system (Ubuntu in your case), installed applications, 
and any data you create within the VM.

/vagrant (159G): This is a shared folder between your local machine and the VM.
It's likely configured in your Vagrantfile to map a directory on your local machine
to this folder inside the VM.

```sh
[vagrant@ubuntu-focal]:~$  ls /vagrant/
  '45 Networking commands.md'          Alumini_DevOps_2.md   Glosario.md                                 LinuxSysAdmin.md        Vagrantfile   rootkey.csv
  'AWS Policy - ReadOnlyAccess.json'   Alumini_DevOps_3.md   Hands-on-Linux-for-DevOps-Cloud-Engineers   LinuxSysAdminiCS.md     fib.c
   Alumini_DevOps.Md                   Alumni                Instalation_Troubleshooting_with_Angel.md  'Ofertas_Linked In.md'   my_tools

[vagrant@ubuntu-focal]:~$ exit
    logout
```
```sh
[ariel @ ariel-All-Series] $ du -cha --threshold=1k --max-depth=1 . | sort -h -r | head -n 25
    5,6M	.
    4,3M	./.git
    456K	./Hands-on-Linux-for-DevOps-Cloud-Engineers
    336K	./Alumini_DevOps.Md
    148K	./Alumini_DevOps_2.md
    112K	./AWS Policy - ReadOnlyAccess.json
    60K	    ./.vagrant
    56K	    ./Alumini_DevOps_3.md
```

```sh
# HALT
[ariel @ ariel-All-Series] $ sudo vagrant halt
    ==> default: Attempting graceful shutdown of VM...
    ◣ 12.328s  ◣  Last command OK  

[ariel @ ariel-All-Series] $ sudo vagrant status
    Current machine states:
    default                   poweroff (virtualbox)
```

Encontremos la VM de Vagrant en nuestra pc 
se crea  donde este `configurado por defecto en Virtual box`
en nuestro caso `~/VirtualBox\ VMs`

```sh
[ariel @ ariel-All-Series] ls ~/VirtualBox\ VMs
    bootcamp   Lubuntu  'Ubuntu 20 Openbox'  'Ubuntu Server'
```
Tenemos 4 maquinas virtuales ... cual es la creada por vagrant ?

```sh
[ariel @ ariel-All-Series]  grep -r vagrant ~/VirtualBox\ VMs
    grep: ./bootcamp/Snapshots/2024-10-30T00-26-52-566209000Z.sav: binary file matches
    grep: ./Ubuntu Server/Snapshots/2024-10-11T23-32-01-659976000Z.sav: binary file matches
```

Encontramos 2 durectorios que contiene `vagrant` enre sus archivos
por lo que usamos algo mas especifico como la `id` de la VM

```sh
[ariel @ ariel-All-Series]  sudo vagrant global-status 
    id       name    provider   state   directory                            
    -------------------------------------------------------------------------
    557ffae  default virtualbox running /home/ariel/Documents/Linux_SysAdmin
```
buscando `557ffae` encontramos que es el  directorio `Ubuntu Server`

```sh
[ariel @ ariel-All-Series]  grep -r 557ffae ./*
    grep: ./Ubuntu Server/Snapshots/2024-10-11T23-32-01-659976000Z.sav: binary file matches
```

Analizemos el peso de los archivos que contiene

```sh
du -cha --threshold=500k ./Ubuntu\ Server/  
    608K	./Ubuntu Server/Logs
    947M	./Ubuntu Server/Snapshots/2024-10-11T23-32-01-659976000Z.sav
    947M	./Ubuntu Server/Snapshots
    948M	./Ubuntu Server/
    948M	total
```

En total es menos de 1GB :  
947M de snapshot  (la maquina virtual en si)
0.6M de Logs      ( VBox.log.1, VBox.log.2  .... etc )


https://portal.cloud.hashicorp.com/vagrant/discover


```j
Box name        |Last Version | Downloads | Last Release  | Providers | Architectures
================|=============|===========|===============|===========|======================
ubuntu/trusty64	|20191107.0.0 |30,796,969 | 263 weeks ago |virtualbox | unknown
centos/7        |2004.01      |6,063,400  | 236 weeks ago |libvirt hyperv vmware_desktop virtualbox vmware_fusion  vmware_workstation  unknown
debian/jessie64 |8.11.1	      |2,424,448  | 284 weeks ago |libvirt lxc virtualbox | unknown
```

LXC : LinuX Containers



#### Vagrantfile


Una vez ejecutado el comando vagrant init,
obtendremos un vagrantfile del estilo:

```ts
Vagrant.configure("2") do |config|
    config.vm.box = "<box>"
end
```

Donde `<box>` es el box que utilizamos al ejecutar el comando vagrant init.
A continuacion un ejemplo con `Ubuntu focal`

```ts
    config.vm.box = "ubuntu/focal64"
    config.vm.provision :shell, path:
"bootstrap.sh"
    config.vm.network "private_network",
ip:"192.168.100.10", :name => 'VirtualBox
Host-Only Ethernet Adapter #3', :adapter => 3
        config.vm.provider "virtualbox" do |v|
        v.memory = 4096
        v.cpus = 2
    end
    config.vm.hostname = "k8smaster"
```

#### Vagrant provisioner

Los provisioners son funciones que se ejecutan la
primera vez que ejecutamos el comando Vagrant
UP, el provisioner más sencillo es el del tipo shell 

Ejemplo
```t
config.vm.provision "ansible" do |ansible|
    ansible.playbook = "playbook.yml"
```
Es importante tener en cuenta que el código del
provisioner solo se ejecutara con el primer
Vagrant up, a menos que utilicemos el flag
“--provision”.

#### Carpetas compartidas y configuración extra

Carpetas compartidas y configuración extra
Por defecto, Vagrant nos comparte el contenido del
directorio donde está el vagrantfile con el directorio
/vagrant/ dentro del box. Esto nos permite guardar
material de forma más permanente, ahora, ¿qué pasa si
queremos usar directorios distintos? En dicho caso, en el
vagrantfile podremos usar la siguiente configuración:

config.vm.synced_folder "apache_config/", "/etc/apache/conf.d/"

#### Beneficios de Vagrant en entornos de desarrollo


## clase 29 - Vagrant Ansible Terraform

### Ejemplo Vagrant Cluster

Vagrant files  con mmultiples maquinas :

https://developer.hashicorp.com/vagrant/docs/multi-machine

cada maquina con su vagrantfile :
orquestado con 1 master y 2 nodos
con ip estatica en el vagrantfile

https://github.com/zdenkotraste/K8s-virtualbox

### EC2 para Ansible

Instrance:
    name : Bootcamp-Ansible
    type : T2.micro
    AMI  : Amazon Linux 2

key pair :
    name   : vagrant-key-ssh
    type   : RSA
    format : .pem

Network :
    SSH  : Allow            from : 0.0.0.0  (any)
    HTTP : Allow

Storage:
    1 x 8gb gp3


### Ansibke

https://docs.ansible.com/ansible/latest/inventory_guide/intro_inventory.html

Archivos necesarios para todo proyecto Ansible
    playboock.yaml
    inventory.yaml

inventory-aws.yaml

```yaml
EC2-instances:
  hosts:
    AWS:
      instancia-bootcamp: 35.168.10.81
```

usamos la opcion -vvvv para ver mas informacion sobre errores

```sh
vagrant@ubuntu-focal:/vagrant$ ansible  all  -m ping  -i inventory-aws.yaml
  -u ec2-user   --private-key /home/vagrant/vagrant-key-ssh.pem   -vvvv
```

Nos tira error:

```sh
<AWS> ESTABLISH SSH CONNECTION FOR USER: ec2-user
<AWS> SSH: EXEC ssh -vvv -C-o ControlMaster=auto -o ControlPersist=60s 
-o IdentityFile="/home/vagrant/vagrant-key-ssh.pem" 
-o KbdInteractiv eAuthentication=no 
-o PreferredAuthentications=gssapi-with-mic,gssapi-k eyex, hostbased, publickey 
-o PasswordAuthentication=no 
-o 'User="ec2-use r" -o ConnectTimeout=10 -0 '
ControlPath="/home/vagrant/.ansible/cp/6f5 f7d8116" 
AWS '/bin/sh -c echo ec2-user && sleep 0'
f7d8116 AWS /bin/sh -c echo ~ec2-user && sleep  <AWS> (255, b, b
OpenSSH_8.2p1 Ubuntu-4ubuntu0.9, OpenSSL 1.1.1f 31 Mar 2020
debug1: Reading configuration data /etc/ssh/ssh_config
debug1: /etc/ssh/ssh_config 
        line 19: include /etc/ssh/ssh_config.d/*.con f matched no files
debug1: /etc/ssh/ssh_config 
        line 21: Applying opt ions for *
debug1: auto-mux: Trying existing master
debug1: Control socket "/home/vagrant/.ansible/cp/6f5f7d8116" does not exist
debug2: resolving "aws" port 22
ssh: Could not resolve hostname aws: Tem porary failure in name resolution

AWS | UNREACHABLE! => {
    "changed": false,
    "msg": "Failed to connect to the host via ssh: OpenSSH_8.2p1 Ubuntu
    -4ubuntu0.9, OpenSSL 1.1.1f 31 Mar 2020
    debug1: Reading configurati on data /etc/ssh/ssh_config
    debug1: /etc/ssh/ssh_config 
            line 19: inc lude /etc/ssh/ssh_config.d/*.conf  matched no files
    debug1: /etc/ssh/ ssh_config line 21: Applying options for *
    debug1: auto-mux: Trying existing master
    debug1: Control socket \"/home/vagrant/.ansible/cp/6 f5f7d8116\" does not exist
    debug2: resolving \"aws\" port 22
    ssh: Could not resolve hostname aws: Temporary failure in name resolution",
    "unreachable": true
}
```
Modificamos el inventory-aws.yaml

```yaml
EC2-instances:
  hosts:
    AWS:
      ansible_host: 35.168.10.81  # el  ERROR  estaba  ACA
```


Playbook :

https://www.middlewareinventory.com/blog/ansible-playbook-example/#Example_Ansible_Playbook_to_Setup_LAMP_stack

```yaml
---
- name: Setting up LAMP Website
  user: vagrant
  hosts: testserver
  become: yes               # SUDO
  tasks:
    - name: latest version of all required packages installed
      yum:
        name:
          - firewalld
          - httpd
          - mariadb-server
          - php
          - php-mysql
        state: latest

    - name: firewalld enabled and running
      service:
        name: firewalld
        enabled: true
        state: started

    - name: firewalld permits http service
      firewalld:
        service: http
        permanent: true
        state: enabled
        immediate: yes

    - name: Copy mime.types file
      copy:
        src: /etc/mime.types
        dest: /etc/httpd/conf/mime.types
        remote_src: yes

    - name: httpd enabled and running
      service:
        name: httpd
        enabled: true
        state: started

    - name: mariadb enabled and running
      service:
        name: mariadb
        enabled: true
        state: started

    - name: copy the php page from remote using get_url
      get_url:
        url: "https://www.middlewareinventory.com/index.php"
        dest: /var/www/html/index.php
        mode: 0644

    - name: test the webpage/website we have setup
      uri:
        url: http://{{ansible_hostname}}/index.php
        status_code: 200
```

### Terraform 

Terraform Workflow
    -> Init 
    -> plan 
    -> apply : manifest (.tf) 
    -> Core  : Providers  Provisioners  State file (.tfstate)


https://registry.terraform.io/browse/providers?tier=partner
https://registry.terraform.io/browse/providers?tier=official
https://registry.terraform.io/providers/hashicorp/aws/latest

    Documentacion Terraform AWS
https://registry.terraform.io/providers/hashicorp/aws/latest/docs

Tiene un lidado extenso en orden alfabetico  con un buscador integrado

    Guides

    ACM (Certificate Manager)
    Amplify
    App Mesh
    App Runner
    ....
    Web Services Budgets
    WorkLink
    WorkSpaces
    X-Ray

Cada Categoria tiene anidado sus recursosque podemos ver al  al dar click vemos un submenu :

    CloudWatch
        Resources
            aws_cloudwatch_composite_alarm
            aws_cloudwatch_dashboard
            aws_cloudwatch_metric_alarm
    EC2 (Elastic Compute Cloud)
        Resources
            aws_ami
            aws_ami_copy
            aws_ami_from_instance
        Data Sources
            aws_ami
            aws_ami_ids
    S3 (Simple Storage)
        Resources
            aws_s3_bucket
            aws_s3_bucket_accelerate_configuration
            aws_s3_bucket_acl
            aws_s3_bucket_inventory


    Ejemplo de USO
https://registry.terraform.io/providers/hashicorp/aws/latest/docs#example-usage

```t
terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "~> 5.0"
    }
  }
}

# Configure the AWS Provider
provider "aws" {
  region = "us-east-1"
}

# Create a VPC
resource "aws_vpc" "example" {
  cidr_block = "10.0.0.0/16"
}
```

https://registry.terraform.io/providers/hashicorp/aws/latest/docs#authentication-and-configuration


#### MODULOS

AWS
https://registry.terraform.io/search/modules?namespace=terraform-aws-modules

AWS_VPC
https://registry.terraform.io/modules/terraform-aws-modules/vpc/aws/latest

AWS_VPC -> Github
https://github.com/terraform-aws-modules/terraform-aws-vpc

    /examples
    /modules/vpc-endpoints
    README.md
    UPGRADE-4.0.md
    main.tf
    outputs.tf
    variables.tf
    versions.tf
    vpc-flow-logs.tf


El siguente ejemplo seria codigo de un tipico  `repositorio Terraform live`
este hace `llamadas a los modulos` y 
a diferenci de estos se le puede hacer un `terraform apply`


```t
Usage
module "vpc" {
  source = "terraform-aws-modules/vpc/aws"      # MODULO A USAR

  name = "my-vpc"
  cidr = "10.0.0.0/16"

  azs             = ["eu-west-1a", "eu-west-1b", "eu-west-1c"]
  private_subnets = ["10.0.1.0/24", "10.0.2.0/24", "10.0.3.0/24"]
  public_subnets  = ["10.0.101.0/24", "10.0.102.0/24", "10.0.103.0/24"]

  enable_nat_gateway = true
  enable_vpn_gateway = true

  tags = {
    Terraform = "true"
    Environment = "dev"
  }
}
```

AWS_VPC -> (Ejemplo : Simple)
https://registry.terraform.io/modules/terraform-aws-modules/vpc/aws/latest/examples/simple


AWS_VPC -> (Ejemplo : Simple) -> Github
https://github.com/terraform-aws-modules/terraform-aws-vpc/tree/v5.16.0/examples/simple

    contiene 5 archivos :

    README.md           (Instrucciones de uso)
    main.tf             (Codigo Principal)
    outputs.tf          (mapeo salidas)
    variables.tf        (Vacio)
    versions.tf         (requisitos : version AWS & tf )

README.md
```md
# Simple VPC

Configuration in this directory creates set of VPC resources 
which may be sufficient for development environment.

There is a public and private subnet created per availability zone 
in addition to single NAT Gateway shared between all 3 availability zones.

This configuration uses Availability Zone IDs and Availability Zone names 
for demonstration purposes. Normally, you need to specify only names or IDs.

## Usage

To run this example you need to execute:

$ terraform init
$ terraform plan
$ terraform apply

## Requirements
Name       Version
terraform  >= 1.0
aws        >= 5.46

## Providers
Name  Version
aws	  >= 5.46

## Modules
Name  Source   Version
vpc	  ../..    n/a

```

main.tf
```t
provider "aws" {
  region = local.region
}

data "aws_availability_zones" "available" {}

locals {
  name   = "ex-${basename(path.cwd)}"
  region = "eu-west-1"

  vpc_cidr = "10.0.0.0/16"
  azs      = slice(data.aws_availability_zones.available.names, 0, 3)

  tags = {
    Example    = local.name
    GithubRepo = "terraform-aws-vpc"
    GithubOrg  = "terraform-aws-modules"
  }
}

################################################################################
# VPC Module
################################################################################

module "vpc" {
  source = "../../"

  name = local.name
  cidr = local.vpc_cidr

  azs             = local.azs
  private_subnets = [for k, v in local.azs : cidrsubnet(local.vpc_cidr, 4, k)]

  tags = local.tags
}
```

outputs.tf
```t
# Mapeo y Descripcion de salidas
output "vpc_id" {
  description = "The ID of the VPC"
  value       = module.vpc.vpc_id
}

output "vpc_arn" {
  description = "The ARN of the VPC"
  value       = module.vpc.vpc_arn
}

output "vpc_cidr_block" {
  description = "The CIDR block of the VPC"
  value       = module.vpc.vpc_cidr_block
}
# Truncado  (el archivo tiene 535 lineas con la misma esructura)
```

variables.tf

versions.tf
```t
terraform {
  required_version = ">= 1.0"

  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = ">= 5.46"
    }
  }
}
```

## clase 31 - Terraform

### DESAFIO

**Objetivo**
probar todas las herramientas vistas durante este modulo (`Vagrant, Ansible y Terraform`).
Deberan crear una instancia EC2 en AWS utilizando `terraform` y configurando una llave privada,
esto deberan hacerlo desde una maquina virtual creada utilizando `Vagrant`. 
Por ultimo, utilizar `Ansible` desde la maquina virtual para instalar un servidor web
 (recomendamos Apache o Nginx).

**Vagrant**

1) Deberan crear un entorno de Vagrant (utilicen el Box que quieran,
   recomendamos alguno de Ubuntu, 18.04 0 20.04).

2) Utilizando un provisioner (pueden utilizar inline pero recomendamos un script) 
   deberan instalar y configurar las herramientas necesarias para el desafio 
   (instalacion de Terraform y de Ansible). 
   No recomendamos configurar las credenciales del provider de AWS dentro del bootstrap,
   recomendamos hacerlo con variables de entorno o alguna otra configuración segura

Consideraciones: 
Pueden automatizar muchos pasos adicionales aunque no es un requisito.
como por ejemplo la creacion de las llaves SSH para la instancia EC2 

**Terraform**

NOTA: Esta parte del desafio es la mas importante 
por lo tanto la que mayor impacto tendra sobre la nota.

1) Ya teniendo terraform instalado en la VM, 
   tendrán que crear un entomo de trabajo de terraform 
   el cual constara del provider de AWS, un backend local 
   y los archivos de configuración requeridos para la practica

2) Hay múltiples formas de hacer lo solicitado en el desafio: 
   se pueden utilizar modulos, se puede hardcodear valores,
   se pueden utilizar mültiples variables, 
   pueden utilizarla VPC default o una VPC creada por ustedes, etc. 
   La complejidad de la solución y documentacion de la misma 
   tendra impacto directo en la nota del desafio.

Consideraciones: Tendrán que basarse en la documentacion de los
recursos para ciertos aspectos de configuración como por ejemplo la
cantidad de storage asignada al volumen root de la instancia, la
configuración de la llave para conectarnos por ssh, etc. 
Asegurense de prestar atencion a la salida del terraform plan para ver
las caracteristicas de lo que van a crear y asegurarse de que se mantienen
dentro del free tier. 
Ante cualquier duda pueden consultar a su tutor o instructor.

**Ansible**
1) El primer paso sera crear un inventario agregando la IP publica de nuestra instancia.
2) ejecutar el comando ping para probar la conexion de ansible a la instancia,
    tengan en cuenta que tendrán que usar la llave SSH para la conexion,
     como asi tambien confirmar el usuario que usaran (ec2-user, ubuntu, etc)
3) crear un playbook que instale un servidor web, pueden utilizar el utilizado en clase,
    cambiar el html para que al probar el servidor web nos muestre otro mensaje, etc.

Consideraciones: Tengan en cuenta el usuario a utilizar para la conexion,
los tipos de tareas (apt si es basado en ubuntu, yum si es basado en centos, etc). 
Además, tengan en consideracion la llave a utilizar para la conexion 
(recuerden lo aprendido en la fase 1).

Documentacion:
Deben documentar todos los archivos utilizados en cada una de las herramientas,
todos los comandos utilizados y cualquier problema que hayan tenido y como lo


### Terraform 

```sh
[ariel-All-Series]  terraform -v
Terraform v1.9.6
on linux_amd64
```


#### Credenciales Terraform AWS

https://console.aws.amazon.com/iam/home/users/create



User name : full-admin
  up to 64 characters. 
  Valid characters: A-Z, a-z, 0-9, and + = , . @ _ - (hyphen)

□  Provide user access to the AWS Management Console - optional

Permissions options
    □  Add user to group
    Add user to an existing group, or create a new group. 
    We recommend using groups to manage user permissions by job function.

    □  Copy permissions
    Copy all group memberships, attached managed policies, 
    and inline policies from an existing user.

    ▣  Attach policies directly
    Attach a managed policy directly to a user. 
    As a best practice, we recommend attaching policies to a group instead. 
    Then, add the user to the appropriate group.

Permissions policies (1/1315) :
  Policy name             Type            Attached entities
  AdministratorAccess     job function    1


https://console.aws.amazon.com/iam/home/users/details/full-admin/create-access-key


Use case

□ Command Line Interface (CLI)
You plan to use this access key to enable the AWS CLI to access your AWS account.

□ Local code
You plan to use this access key to enable application code 
in a local development environment to access your AWS account.

□ Application running on an AWS compute service
You plan to use this access key to enable application code running on an AWS
compute service like Amazon EC2, Amazon ECS, or AWS Lambda to access your AWS account.

□ Third-party service
You plan to use this access key to enable access for a third-party application 
or service that monitors or manages your AWS resources.

□ Application running outside AWS
You plan to use this access key to authenticate workloads running in your data center
 or other infrastructure outside of AWS that needs to access your AWS resources.

▣  Other
Your use case is not listed here.


Access key            CP5A2EHWOE8WWDC9VRC			  FAKE for obvious reasons
Secret access key     SUmZ9FcK7NEd3X1sJz9dFn3rJCkblrntmf9TJyfL	  FAKE for obvious reasons


https://registry.terraform.io/providers/hashicorp/aws/latest/docs
https://registry.terraform.io/providers/hashicorp/aws/latest/docs/resources/ami

providers.tf :
```ruby
terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "~> 5.0"
    }
  }
}

# Configure the AWS Provider
provider "aws" {
  region     = "us-east-1"
  access_key = "CP5A2EHWOE8WWDC9VRC"				#  FAKE for obvious reasons
  secret_key = "SUmZ9FcK7NEd3X1sJz9dFn3rJCkblrntmf9TJyfL"	#  FAKE for obvious reasons
}
```

Podemos crear la instancia desde segun el ejemplo usando la AMI de Canonical Ubuntu

instance.tf :
```ruby
data "aws_ami" "ubuntu" {
  most_recent = true
  filter {
    name = "name"
    values = ["ubuntu/images/hvm-ssd/ubuntu-focal-20.04-amd64-server-*"]
  }
  filter {
    name = "virtualization-type"
    values = ["hvm"]
  }
  owners = ["099720109477"] # Canonical
}

resource "aws_instance" "web" {
  ami           = data.aws_ami.ubuntu.id
  instance_type = "t2.micro"
  
  tags = {
    Name = "Free-Tier-Terraform-Test"
  }
}
```

una opcion mas sencilla usando el AMI desde https://uconsole.aws.amazon.com/ec2

```ruby
resource "aws_instance" "web" {
  ami           = "ami-05d38da78ce859165"
  instance_type = "t2.micro"
  
  tags = {
    Name = "Free-Tier-Terraform-Test"
  }
}
```




 [ ariel-All-Series]  terraform validate
╷
│ Error: registry.terraform.io/hashicorp/aws: 
│  Cached `package` for registry.terraform.io/hashicorp/`aws 5.81.0` (in .terraform/providers) 
│  does `not match` any of the `checksums` recorded in the dependency lock file

[ ariel-All-Series] terraform plan
╷
│ Error: Required plugins are not installed
│ 
│ The installed provider plugins are not consistent with the `packages` 
│ selected in the `dependency lock file`:
│   - registry.terraform.io/hashicorp/aws: the cached package 
│     for registry.terraform.io/hashicorp/`aws 5.81.0` (in .terraform/providers) 
│     does `not match` any of the `checksums` recorded in the dependency lock file


EXPLICACION :

estos errores provienen de aplicar el commando `terraform init` en direcrtorio `vacio`
al crear  `providers.tf` hay diferencias en el archivo `terraform-provider-aws_v5.81.0_x5`
(`dependency lock file` ) generado durante el init

Este error es un mismatch en los ckecksum de los packetes con el lock file
se genera por vulnerabilidades de segfuridad que podrian existir entre distintas versiones

Para evirar el error devemos hacer el init teniendo el archivo providers.tf listo

https://developer.hashicorp.com/terraform/language/files/dependency-lock

### INIT
```sh
[ ariel-All-Series]  terraform init
  Initializing the backend...
  Initializing provider plugins...
  - Finding hashicorp/aws versions matching "~> 5.0"...
  - Installed  hashicorp/aws v5.81.0 (signed by HashiCorp)
  Terraform has created a lock file |.terraform.lock.hcl  to record the provider
  selections it made above. Include this file in your version control repository
  so that Terraform can guarantee to make the same selections by default when
  you run "terraform init" in the future.

  Terraform has been successfully initialized!

  Try running "terraform plan" to see any changes that are required for your infrastructure.

terraform validate
Success! The configuration is valid.

```


### PLAN
```sh
[ariel-All-Series] terraform plan
  data.aws_ami.ubuntu: Reading...
  data.aws_ami.ubuntu: Read complete after 1s [id=ami-0cd202468248306f2]

  Terraform used the selected providers to generate the following execution plan.
  Resource actions are indicated with the following symbols:
    + create

  Terraform will perform the following actions:

  # aws_instance.web will be created
  + resource "aws_instance" "web" {
      + ami                                  = "ami-05d38da78ce859165"
      + associate_public_ip_address          = (known after apply)
      + availability_zone                    = (known after apply)
      + cpu_core_count                       = (known after apply) # IMPORTANTE
      + cpu_threads_per_core                 = (known after apply) # IMPORTANTE
      + disable_api_stop + disable_api_termination + ebs_optimized   + enable_primary_ipv6 
      + get_password_data                    = false
      + host_id                              = (known after apply) # IMPORTANTE
      + host_resource_group_arn              = (known after apply)
      + iam_instance_profile                 = (known after apply)
      + id                                   = (known after apply)
      + ipv6_addresses                       = (known after apply)
      + key_name                             = (known after apply)
      + private_dns                          = (known after apply) # IMPORTANTE
      + private_ip                           = (known after apply) # IMPORTANTE
      + public_dns                           = (known after apply) # IMPORTANTE
      + public_ip                            = (known after apply) # IMPORTANTE
      + secondary_private_ips                = (known after apply)
      + security_groups                      = (known after apply) # IMPORTANTE
      + source_dest_check                    = true
      + spot_instance_request_id             = (known after apply)
      + subnet_id                            = (known after apply)
      + tags                                 = {
          + "Name" = "Free-Tier-Test"
        }
      + user_data                            = (known after apply)
      + vpc_security_group_ids               = (known after apply)

      + cpu_options                         (known after apply)
      + metadata_options                    (known after apply)
      + network_interface                   (known after apply)
      + private_dns_name_options            (known after apply)
      + root_block_device                   (known after apply)
      + ephemeral_block_device              (known after apply)
    }

Plan: 1 to add, 0 to change, 0 to destroy.
# Marque como importante los que serian interesantes de configurar en el archivo tf
```
### APPLY

```sh
[ariel-All-Series] terraform Apply
Plan: 1 to add, 0 to change, 0 to destroy.

Do you want to perform these actions?
  Terraform will perform the actions described above.
  Only 'yes' will be accepted to approve.

  Enter a value: yes

aws_instance.web: Creating...
aws_instance.web: Still creating... [10s elapsed]
aws_instance.web: Creation complete after 16s [id=i-0ea38cb2c66119582]

Apply complete! Resources: 1 added, 0 changed, 0 destroyed.

```

se genera un archivo llamado terraform.tfstate que contiene el estado de nuestra infra

terraform.tfstate :

```ruby
"id": "i-0ea38************",
"instance_initiated_shutdown_behavior": "stop",
"instance_state": "running",
"instance_type": "t2.micro",
"ipv6_address_count": 0,
"key_name": "",
"metadata_options": [
  {
    "http_endpoint":      "enabled",
    "http_protocol_ipv6": "disabled",
  }
],
"monitoring": false,
"primary_network_interface_id": "eni-057df***********",
"private_dns": "ip-172-***-***-***.us-west-2.compute.internal",
"private_dns_name_options": [
  {
    "enable_resource_name_dns_a_record": false,
    "enable_resource_name_dns_aaaa_record": false,
    "hostname_type": "ip-name"
  }
],
"private_ip": "172.***.***.***",
"public_dns": "ec2-34-***-***-***.us-west-2.compute.amazonaws.com",
"public_ip": "34.***.***.***",
"root_block_device": [
  {
    "delete_on_termination": true,
    "device_name": "/dev/sda1",
    "encrypted": false,
    "iops": 300
    "throughput": 125,
    "volume_id": "vol-02403***********",
    "volume_size": 8,      # 8GB
    "volume_type": "gp3"
  }
],
```

### SSH

```sh
 ssh-keygen -f ./terra-key-pair   -C "free-tier"

The key fingerprint is:
SHA256:SO7o5************************************ free-tier
The keys randomart image is:
+---[RSA 3072]----+
# recortado por seguridad
```

Ademas nos crea un archivo terra-key-pair.pub
No tiene configurado SSH en Inbound rules en security groups 
https://console.aws.amazon.com/ec2/home#SecurityGroup:groupId=sg-061d**********


```sh
sudo ssh   -i  terra-key-pair    ubuntu@ec2-34-***-***-***.us-west-2.compute.amazonaws.com
ubuntu@ec2-34-***-***-***.us-west-2.compute.amazonaws.com: Permission denied (publickey).
```


https://console.aws.amazon.com/ec2/home#ConnectToInstance:instanceId=id=i-0ea38cb2c66119582


```sh
Welcome to Ubuntu 24.04.1 LTS (GNU/Linux 6.8.0-1018-aws x86_64)

System information as of Tue Dec 17 02:50:39 UTC 2024
  System load:  0.24              Processes:             106
  Usage of /:   24.7% of 6.71GB   Users logged in:       0
  Memory usage: 20%       

[ubuntu@ip-172-31-17-198]:~$   top |grep Mem
MiB Mem :    957.4 total,    468.3 free,    331.2 used,    309.6 buff/cache     
MiB Swap:      0.0 total,      0.0 free,      0.0 used.    626.2 avail Mem 

[ubuntu@ip-172-31-17-198]:~$ sudo apt update
[ubuntu@ip-172-31-17-198]:~$ sudo apt install screenfetch
[ubuntu@ip-172-31-17-198]:~$ screenfetch 
                          ./+o+-       ubuntu@ip-172-31-17-198
                  yyyyy- -yyyyyy+      OS:       Ubuntu 24.04 noble
               ://+//////-yyyyyyo      Kernel:   x86_64 Linux 6.8.0-1018-aws
           .++ .:/++++++/-.+sss/`      Uptime:   40m
         .:++o:  /++++++++/:--:/-      Packages: 727
        o:+o+:++.`..```.-/oo+++++/     Shell: bash 5.2.21
       .:+o:+o/.          `+sssoo+/    Disk: 2.1G / 7.7G (28%)
  .++/+:+oo+o:`             /sssooo.   CPU: Intel Xeon E5-2686 v4 @ 2.3GHz
 /+++//+:`oo+o               /::--:.   RAM: 347MiB / 957MiB
 \+/+o+++`o++o               ++////.  
```

https://developer.hashicorp.com/terraform/cli/commands/import


### terraformer

Exportar a terraform infraestructura que previamente creamos a mano

https://github.com/GoogleCloudPlatform/terraformer


### MAN  -HELP

```sh
terraform -help
#Usage: terraform [global options] <subcommand> [args]
#
#The available commands for execution are listed below.
#The primary workflow commands are given first, followed by
#less common or more advanced commands.
#
#Main commands:
  init          #  Prepare your working directory for other commands
  validate      #  Check whether the configuration is valid
  plan          #  Show changes required by the current configuration
  apply         #  Create or update infrastructure
  destroy       #  Destroy previously-created infrastructure

#All other commands:
#  console       Try Terraform expressions at an interactive command prompt
#  fmt           Reformat your configuration in the standard style
#  force-unlock  Release a stuck lock on the current workspace
#  get           Install or upgrade remote Terraform modules
#  graph         Generate a Graphviz graph of the steps in an operation
   import     #  Associate existing infrastructure with a Terraform resource
#  login         Obtain and save credentials for a remote host
#  logout        Remove locally-stored credentials for a remote host
#  metadata      Metadata related commands
#  output        Show output values from your root module
#  providers     Show the providers required for this configuration
#  refresh       Update the state to match remote systems
   show      #   Show the current state or a saved plan
   state     #   Advanced state management
#  taint         Mark a resource instance as not fully functional
#  test          Execute integration tests for Terraform modules
#  untaint       Remove the 'tainted' state from a resource instance
#  version       Show the current Terraform version
#  workspace     Workspace management
#
#Global options (use these before the subcommand, if any):
#  -chdir=DIR    Switch to a different working directory before executing the
#                given subcommand.
#  -help         Show this help output, or the help for a specified subcommand.
#  -version      An alias for the "version" subcommand.


terraform -help show
#Usage: terraform [global options] show [options] [path]
#
#  Reads and outputs a Terraform state or plan file in a human-readable
#  form. If no path is specified, the current state will be shown.
#
# Options:
#
#  -no-color           If specified, output won't contain any color.
#  -json               If specified, output the Terraform plan or state in
#                      a machine-readable form.


```sh
terraform -help state list
# Usage: terraform [global options] state list [options] [address...]

#   List resources in the Terraform state.

#   This command lists resource instances in the Terraform state. The address
#   argument can be used to filter the instances by resource or module. If
#   no pattern is given, all resource instances are listed.

#   The addresses must either be module addresses or absolute resource
#   addresses, such as:
#       aws_instance.example
#       module.example
#       module.example.module.child
#       module.example.aws_instance.example
```


### PROYECTO y Estructura 

info de proveedor en `.terraform.log.hcl` (hecho por terraform init)
`providers.tf` + `instance.tf` + terraform apply nos crea el `state`
info de recursos  en `terraform.state`


Archivos tipicos de encontrar en un modulo de terraform
https://github.com/terraform-aws-modules/terraform-aws-vpc

main.tf     :
outputs.tf  :
variables.tf:
versions.tf :
vpc-flow-logs.tf :

https://spacelift.io/blog/terraform-best-practices#how-to-structure-your-terraform-projects

### DESTRUIR Recursos

```sh
terraform state -rm

terraform -help state
# Usage: terraform [global options] state <subcommand> [options] [args]
# 
#   This command has subcommands for advanced state management.
# 
#   These subcommands can be used to slice and dice the Terraform state.
#   This is sometimes necessary in advanced cases. For your safety, all
#   state management commands that modify the state create a timestamped
#   backup of the state prior to making modifications.
# 
#   The structure and output of the commands is specifically tailored to work
#   well with the common Unix utilities such as grep, awk, etc. We recommend
#   using those tools to perform more advanced state tasks.
# 
# Subcommands:
     list                # List resources in the state
     mv                  # Move an item in the state
     pull                # Pull current state and output to stdout
     push                # Update remote state from a local state file
     replace-provider    # Replace provider in the state
     rm                  # Remove instances from the state
     show                # Show a resource in the state

```

```sh
[ariel-All-Series] terraform destroy
data.aws_ami.ubuntu: Reading...
aws_instance.web: Refreshing state... [id=i-0ea38cb2c66119582]
data.aws_ami.ubuntu: Read complete after 1s [id=ami-0cd202468248306f2]

Terraform used the selected providers to generate the following execution plan. Resource actions are indicated
with the following symbols:
  - destroy

Terraform will perform the following actions:

  # aws_instance.web will be destroyed
  - resource "aws_instance" "web" {
      - ami                                  = "ami-05d38da78ce859165" -> null
      - arn                                  = "arn:aws:ec2:us-west-2:315509528759:instance/i-0ea38cb2c66119582" -> null
      - associate_public_ip_address          = false -> null
      - availability_zone                    = "us-west-2a" -> null
      - cpu_core_count                       = 1 -> null
      - cpu_threads_per_core                 = 1 -> null


Plan: 0 to add, 0 to change, 1 to destroy.

Do you really want to destroy all resources?
  Terraform will destroy all your managed infrastructure, as shown above.
  There is no undo. Only 'yes' will be accepted to confirm.

  Enter a value: yes

aws_instance.web: Destroying... [id=i-0ea38cb2c66119582]
aws_instance.web: Still destroying... [id=i-0ea38cb2c66119582, 10s elapsed]
aws_instance.web: Destruction complete after 15s
```

### Vatiables

https://developer.hashicorp.com/terraform/language/values/variables
https://developer.hashicorp.com/terraform/language/modules
https://blog.gruntwork.io/an-introduction-to-terraform-f17df9c6d180#4c88


Cada recurso tiene variables que pueden ser obligatorias u opcionales, o sea
pueden tener un valor por default o no, en cullo caso es obligatorio proporcionar uno


vars.tf :
```ruby
variable "instance_type_freetier" {
  type        = string
  description = "tipo de instancia EC2 con free tier"
  default     = "t2.micto"                    # DECLARO
}

variable "instance_ami_ubuntu" {
  type        = string
  description = "AMI (Amason Machine Image) Ubuntu as OS "
  default     = "ami-0261755bbcb8c4a84"       # DECLARO
}
```

otra forma es con  infra.tfvars
```ruby
instance_type_freetier = "t2.micto"        # DECLARO
instance_ami_ubuntu    = "ami-0261755bbcb8c4a84"       # DECLARO
```

instance.tf
```ruby
resource "aws_instance" "web" (
  instance_type = var.instance_type_freetier  # UTILIZO
  ami           = var.instance_ami_ubuntu     # UTILIZO
  tags = {
```

### Variables de Entorno

https://developer.hashicorp.com/terraform/language/values/variables#environment-variables

```sh
$ export TF_VAR_image_id=ami-abc123
$ terraform plan
```

### Modulos


Normalmente se utiliza una combinacion de modulos de la comunidad y privados
El modulo pricado contiene llamdas a modulos de la comunidad

Algunos ejemplos de modulos de la comunidad :

MODULOS AWS  : https://registry.terraform.io/namespaces/terraform-aws-modules
S3  : https://registry.terraform.io/modules/terraform-aws-modules/s3-bucket/aws/latest
EC2 : https://registry.terraform.io/modules/terraform-aws-modules/ec2-instance/aws/latest
VPC : https://registry.terraform.io/modules/terraform-aws-modules/vpc/aws/latest
ELB : https://registry.terraform.io/modules/terraform-aws-modules/elb/aws/latest
IAM : https://registry.terraform.io/modules/terraform-aws-modules/iam/aws/latest


Pueden usarse varios modulos publicos para cada entorno de trabajo
desde un sandbox hasta produccion cada una con distinto valor environment = "name"

se puede nombrar los archivos segun en entorno ej
  sandbox.tf  quality_a.tf  production.tf  live.tf
y que a su ves estos llamen a otros modulos,  recursos, variables eyc

Otra diferencia clave en que el codigo en los modulos no tiene estado
o sea que no tiene infraestructura creada a diferencia de los entornos

### Data Sources

nos sirve para leer y validar los recirsos de aws a travez de la api desde terraform

https://developer.hashicorp.com/terraform/language/data-sources



48:00

## clase 32 - Terrafrom Docker

### Repaso de Terrafrom 

tenemos codigo live y modulos
el terrafomr  apply se hace desde live y estos llaman modulos

providers.tf : 
```ruby
terraform {
  required_providers {
    aws = {
      1
      source  = "hashicorp/aws"
      version = "~> 5.0"
    }
  }
}
```

main.tf :
```ruby

# LOCALS : los utilizamos para crear valores default para variables
# en caso de estar vacia NULL la variable toma el valor que sigue a `?`
locals {
  mongodb_instance_type = (var.mongodb_instance_type == null
    ? "t3.micro"
    : var.mongodb_instance_type
  )
  #Readhat UBI 8 AMI https://access.redhat.com/solutions/15356#us_east_1
  mongodb_instance_ami (var.mongodb_instance_ami == null
    #? "ami-075ed2fafb0c1aa69"
    ? "ami-06640050dc3f556bb"
    : var.mongodb_instance_ami
  )

  opsmanager_instance_type = (var.opsmanager_instance_type == null
    ? "t3.micro"
    : var.opsmanager_instance_type
  )
  
  mongodb_opsmanager_user = (var.mongodb_opsmanager_user == null
    ? "admin"
    : var.mongodb_opsmanager_user
  )

  mongodb_vansocscan_user = (var.mongodb_vansocscan_user == null
    ? "vansocscan"
    : var.mongodb_vansocscan_user
  )

  mongodb_opsmanager_major_version = (var.mongodb_opsmanager_majc
    ? "6"
    : var.mongodb_opsmanager_major_version
  )

  mongodb_opsmanager_minor_version = (var.mongodb_opsmanager_minc
    ? "0"
    : var.mongodb_opsmanager_minor_version
  )
  
  mongodb_opsmanager_patch_version = (var.mongodb_opsmanager_patc
    ? "0"
    : var.mongodb_opsmanager_patch_version
  )

  ec2_instance_profile = (var.ec2_instance_profile == null
    ? aws_iam_instance_profile.this["embedded"].name
    : var.ec2_instance_profile
  )
}

resource "aws_iam_role" "this" {
  for_each            = tosetz(var.ec2_instance_profile == null ?
  name                = format("%v-ec2-mongo-opsmanager", var.env
  managed_policy_arns = ["arn:aws:iam::aws:policy/AmonSSMManage"
  assume_role_policy  = <<EOF
  {
    "Version": "2012-10-17",
    "Statement": [
    {
      "Action": "sts: AssumeRole",
      "Principal": {
        "Service": "ec2.amazonaws.com"
      },
      "Effect": "Allow",
      "Sid": ""
      "Sid":
    }
  ]
}
EOF
}

#Profile para el systems manager de AWS
resource "aws_iam_instance_profile" "this" {
  for_each = toset(var.ec2_instance_profile=null? ["embedded"
  name     = aws_iam_role.this["embedded"].
  role     = aws lam_role.this["embedded"].id
}

#Mongodb instances for OpsManager
resource "aws_instance" "mongodb_instance_ops_manager" {
  for_each                    = var.mongodb_subnets 
  # para cada una de las 3 mongodb_subnets definidas en el live.tf
  # configuramos la infra con el valor de variables en vars.tf 
  ami                         = local.mongodb_instance_ami
  instance_type               = local.mongodb_instance_type
  subnet_id                   = each.value  # each = subnet
  private_ip                  = var.mongodb_opsmanager_ips[each.key]
  security_groups             = var.mongodb_instance_ops_manager_security_group
  user_data_replace_on_change = true
  root_block_device {
    volume_size = var.root_block_size
    volume_type = "gp3"
  }
  iam_instance_profile = local.ec2_instance_profile
  user_data = templatefile("${path.module)/templates/user_data_mc"
    va-environment  = var.va_environment,
    replicaset-name = var.mongodb_opsmanager_replicas_name
    create-ssh-user = templatefile("${path.module}/templates/crea"
    groupname       = var.groupname
    username        = var.username
    userid          = var.userid
    groupid         = var.groupid
    user_description= var.user_description
    public_key      = var.public_key
    })
    mongo-installation = templatefile("${path.module)/templates/n"
      keyfile             = base64encode(random_password.mongodb_
      mongo-major-version = local.mongodb_opsmanager_major_versic
      mongo-minor-version = local.mongodb_opsmanager_minor_versic
      mongo-patch-version = local.mongodb_opsmanager_patch_versic
    }),
    mongo-data-volume = file("$[path.module)/Files/mongo_data_vol"
    Firewall.cmd     = file("$[path.module)/Files/firewall_cmd.s"
    create-mongo-user = templatefile("${path.modules/templates/cr"
    mongodb-opsmanager-user     = local.mongodb_opsmanager_user
    mongodb-opsmanager-password = random_password.mongodb_opsma
    mongodb-vansocscan-user     = local.mongodb_vansocscan_user
    mongodb-vansocscan-password = random_password.mongodb_vansc
    }),
    initiate-replicaset = templatęfile("${path.module}/templates/"
    mongodb-opsmanager-user     = local.mongodb_opsmanager_user
    mongodb-opsmanager-password = random_password.mongodb_opsma
    mongodb-secondary-ip        = var.mongodb_opsmanager_ips [1]
    mongodb-tertiary-ip         = var.mongodb_opsmanager_ips [2]
    })
  })
  metadata_options {
    instance_metadata_tags = "enabled"
    http_endpoint          = "enabled"
  }
  metadata_options {
    instance_metadata_tags = "enabled"
    http_endpoint          = "enabled"
  }
  tags = {
    Name = format("%v-opsmanager-mongodb-%v", var.environment, ea
  }
}

resource "aws_ebs_volume" "mongo-data" {
# nos crea una volumen EBS por cada AZ
  for_each          = var.mongodb_availability_zones
  availability_zone = each.value
  size              = var.mongodb_opsmanager_ebs_size
  type              = "gp3"      # Harcodeado porque no se piensa utilizar otro formato
  tags              = {
    Name = format("%v-opsmanager-mongodb-data-%v", var.environmer
  }
}

resource "aws_volume_attachment" "mongo_data_att" {
# Vincula las instancias con los volumenes EBS
  for_each = var.mongodb_availability_zones
  ## Note The device names that you specify for NVMe EBS volumes i
  #  are renamed using NVMe device names (/dev/nvme[0-26]n1)
  device_name = "/dev/sdh"
  volume_id   = aws_ebs_volume.mongo-data[each.key].id
  instance_id = aws_instance.mongodb_instance_ops_manager[each.key].id
}

resource "random_password" "mongodb_key" {
  # recurso de terraform que crea una contrasenia de 512 caracteres
  length = 512
}

resource "aws_ssm_parameter" "mongodb_opsmanager_password" {
  # recurso de aws para guardar credemciales y contrasenias
  name  = format("/environment/va/%v/mongodb-opsmanager-password"
  value = random_password.mongodb_opsmanager_password.result
  type  = "SecureString"
}

# OpsManager Application Load Balancer (ALB)
module "alb" {
  source   = "terraform-aws-modules/alb/aws"
  version  = "5.16.0"
  internal = var.opsmanager_alb_internal
  name     = format("%v-OM", var.environment)
  load_balancer_type = "application"
  vpc_id   = var.opsmanager_alb_vpc
  subnets  = var.opsmanager_alb_subnets
  security_groups = var.opsmanager_security_groups
  # Listeners
  http_tcp_listeners = [
    {
      port               = 8080
      protocol           = "HTTP"
      target_group_index = 0
    }
  ]
  # Target Groups
  target_groups = [
    # App1 Target Group
    {
    name_prefix      = "OM-"
    backend_protocol = "HTTP"
    backend_port     = 8080
```

live.tf :
```ruby
# este archivo es el que llama al modulo 
module "fusion-va-mongodb"
{
  environment = "live"
  groupname = ""
  username  = ""
  userid    = ""
  groupid   = ""
  user_description = ""
  public_key = file("")

  source = "./../../../fusion-helm/terraform/modules/mongo-opsmanager"
  
  mongodb_instance_type = "t3a.medium"

  # Mongodb instances config
  mongodb_subnets = {             
  # inicialisacion del MAPA de strings usado para FOR_EACH
  # key = value
    "0" = module.vpc.private_subnets[0], # configurada con el modulo vpc
    "1" = module.vpc.private_subnets[1], #           y con el main.tf
    "2" = module.vpc.private_subnets[2] 
  }

  mongodb_availability_zones = {
    "0" = module.vpc.azs[0]
    "1" = module.vpc.azs[1]
    "2" = module.vpc.azs[2]
  }

  mongodb_opsmanager_ips = {
  "0" = "192.168.250.9"
  "1" = "192.168.250.72"
  "2" = "192.168.250.155"
  }

  #mongodb_fusion_ips = {
  # "0" = "192.168.250.8"
  # "1" = "192.168.250.123"
```

variables.tf :
```ruby
  variable "opsmanager_alb_subnets" {
    type = list(string)
    default = null
    description = "subnets for the OpsManager ALB"
  }
    variable "opsmanager_security_groups" {
    type = list(string)
    default = null
    description = "security groups for the OpsManager ALB"
  }
  variable "opsmanager_name_tag"{
    type = string
    default = null
    description = "opsmanager instance name"
  }

  variable "mongodb_instance_ops_manager_security_groups" {
    type         = list(string)
    default null = {}
  }

  variable "mongodb_subnets" {  # DECLARACION de variable tipo Mapa
    type = map(string)  # MAPA usado para  FOR_EACH  de  subnets
    default = {}
    description = "Set the SubnetID for mongodb instances"
  }

  variable "mongodb_availability_zones" {
    type = map(string)   # MAPA usado para  FOR_EACH  de  availability_zone
    default = {}
    description = "Set the AZs for mongodb instances and EBS volume"
  }

```




outputs.tf :
```ruby
output "mongodb_opsmanager_replicaset_primary_ip" {
  value = var.mongodb_opsmanager_ips [0]
}

output "mongodb_vansocscan_password" {
  value = random_password.mongodb_vansocscan_password.result
  sensitive = true
}
```

#### FOR_EACH

realiza iteraciones sobre mapas 
https://developer.hashicorp.com/terraform/language/meta-arguments/for_each





### Docker -  Modulo 14 

#### Componentes adicionales de Docker

Con Docker, podemos `crear imágenes y contenedores`. 
Además, vamos a crear `redes para interconectar` estos contenedores 
y también recursos de storage llamados `volúmenes`. 

#### Recursos de Networking
Sin hacer ninguna modificación a la red, los
contenedores se crearán en la red default que
utiliza Docker llamada “Bridge”. Esta red provee
comunicación entre contenedores. En caso de
que se deseen otras características, tendremos
que primero crear una red y después, a la hora de
crear el contenedor, agregar como parámetro al
comando la red a utilizar


## Docker

```sh
systemctl list-unit-files | grep dock
docker.service                                enabled         enabled
docker.socket                                 enabled         enabled

systemctl status docker.socket 
 
systemctl -help
    start   stop      list-units     set-property    list-unit-files
    kill    freeze    set-property   list-machines   list-dependencies   
    show    restart   list-sockets   list-jobs       help 

sudo docker ps
CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

sudo docker build . -t mockup-app-rembg 
    [+] Building 88.9s (11/11) FINISHED                          docker:default

sudo docker ps -a
CONTAINER ID   IMAGE              COMMAND           CREATED         STATUS                     PORTS     NAMES
b1654e8c9b89   mockup-app-rembg   "python app.py"   5 minutes ago   Exited (1) 5 minutes ago             gallant_pasteur

sudo docker rmi -f mockup-app-rembg 
Untagged: mockup-app-rembg:latest
Deleted: sha256:f42f8aad235997ae17dafdcaccdc52afa14b3e4a5b5e8bcbeafed0669b87e911


sudo docker ps -a
CONTAINER ID   IMAGE          COMMAND           CREATED          STATUS                      PORTS     NAMES
78b28c8e3ddc   f42f8aad2359   "python app.py"   42 minutes ago   Exited (1) 42 minutes ago             strange_perlman
b1654e8c9b89   f42f8aad2359   "python app.py"   48 minutes ago   Exited (1) 48 minutes ago             gallant_pasteur


sudo docker stop $(sudo docker ps -q)
sudo docker rm   $(sudo docker ps -a -q)
sudo docker rmi  $(sudo docker images -a -q)

man docker build |grep -e'-t ' -a3 -b6
    11803-       The -t/--tag flag is used to rename an image. Here are some examples:

sudo docker run -p 8080:5000 mockup-app-rembg
```


## Laboratorio Ansible

Objetivo 
El objetivo de esta práctica es el de automatizar el despliegue 
de un servidor web + una página sencilla en un servidor externo 
mediante la herramienta Ansible (utilizando ssh). 

Resolución 

Para esta práctica tendremos como requisito tener por un lado nuestro
laboratorio principal (ya sea de forma local o una máquina virtual)
y una segunda máquina Linux a la cual tengamos acceso por ssh
desde nuestro laboratorio principal, esto es fundamental 
ya que ansible utilizar ssh de fondo para enviar las instrucciones.

En nuestro caso, utilizaremos la máquina en AWS creada en el laboratorio de Terraform,
pero es indistinta la ubicación de la máquina.


Para esta práctica tendremos como requisito tener por un lado nuestro laboratorio principal (ya sea de forma local o una máquina virtual) y una segunda máquina Linux a la cual tengamos acceso por ssh desde nuestro laboratorio principal, esto es fundamental ya que ansible utilizar ssh de fondo para enviar las instrucciones. En nuestro caso, utilizaremos la máquina en AWS creada en el laboratorio de Terraform, pero es indistinta la ubicación de la máquina.

 Empezaremos por la instalación de Ansible: 

1) Primero, tenemos que asegurarnos de que tenemos python3 instalado,
 en caso de no tenerlo lo instalamos con 
    a) sudo apt-get install python3
2) Una vez con python3 instalado, instalamos pip 
    a) curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py 
    b) python3 get-pip.py --user 
3) Una vez que tengamos pip instalado, instalamos ansible 
    a) python3 -m pip install --user ansible 
4) El último paso es añadir el path donde instalamos ansible 
a nuestro path de ejecutables, una forma de hacer esto es agregar
 el path que nos da el output de la instalación a nuestro .bashrc 
 (o archivo de configuración de la shell que utilicemos


```sh
WARNING: The scripts ansible, ansible-config, anstble-connection, ansible-console,
ansible-doc, ansible-galaxy, anstble-inventory, ansible-playbook,anstble-pull and anstble-vault
are installed in /home/zdenko/.local/bin' 
which is not on PATH. Consider adding this directory to PATH or, if you prefer to suppress this warning,
   use-no-warn-script-location. 
WARNING: The script ansible-community is installed in /home/zdenko/.local/bin 
which is not on PATH. Consider adding this directory to PATH or,
if you prefer to suppress this warn ing, use-no-warn-script-location.
```

Para esto, agregaremos la siguiente línea al final del archivo.bashrc 
   
a) export PATH="/home/zdenko/.local/bin:$PATH" (reemplazar el usuario) 
b) source.bashrc 

5) Y listo, ya tendremos ansible listo para utilizar, 
para verificar su correcto funcionamiento corremos: 
a) ansible --version 
Ya con Ansible instalado, ahora crearemos un inventario donde configuraremos 

6) Para esto, crearemos un archivo de configuración con terminación .yaml,
en nuestro caso lo llamamos inventario.yaml aunque el nombre es indistinto.
En nuestro caso de nuevo, estamos utilizando una máquina virtual 
que corre en AWS por eso la IP pública y no una IP privada de una red 192.168.χ.χ.
 maquinas-virtuales: hosts: AWS: ansible_host: 3.82.119.30 
 
 7) Una vez creado el inventario, podremos verificar el correcto acceso desde ansible
  hacia nuestro host con el siguiente comando 
  a) ansible all-m ping -i inventario.yaml -u ubuntu --private-key 
  ../Terraform/AWS/terra-keys 


```sh
~Desktop/Cloud-devops/Laboratorios/Ansibles 
[zdenko@z] $ ansible all ping -i inventario.yaml -u ubuntu --privete key .../Terraform/AWS/terra-keys 
  [WARNING]: Invalid characters wer found in group names but not replaced.
  use -vvvv to see details 
  AWS | SUCCESS => {
    ansiblr_facts{
        "discovered+insrptreter_python": "/usr/bin/python3"
    }. 
    "changed" : false , 
    "ping": "pong"
  }  
~/Desktop/Cloud-devops/Laboratorios/Ansibles 
[zdenko@z] $ 
```


Si configuramos bien nuestro servidor, el comando nos devolverá un pong,
en este caso fue necesario pasarle un usuario específico y la llave privada 
para poder conectarnos.

8) Ya creado el inventario y verificado el acceso a través de Ansible,
 pasaremos a crear el playbook.
```yaml
- hosts: all 
become: yes 
vars: 
  server_name: "{{ ansible_default_ipv4.address }}"
  document_root: /var/www 
  app_root: app tasks: 
  tasks:

- name: Update apt cache and install Nginx 
apt: 
  name: nginx 
  state: latest 
  update_cache: yes 
 
- name: Copy website files to the server's document root
copy: 
  src: "{{ app_root }}" 
  dest: "{{ document_root }}" 
  mode: preserve 

- name: Apply Nginx template 
template: 
  src: nginx.conf.j2
  dest: /etc/nginx/sites-available/default 
  notify: Restart Nginx 

- name: Enable new site 
 file: 
  src: /etc/nginx/sites-available/default
    dest: /etc/nginx/sites-enabled/default
    state: 
    link notify: Restart Nginx 
  
- name: Allow all access to tcp port 80 
  ufw: 
    rule: allow
    allow port: '80' 
    proto: tcp handlers: 
  
- name: Restart Nginx 
    service: 
    name: nginx   
    state: restarted 48:46/2:36:35 
```

  Adicional al playbook, necesitamos crear 2 archivos más: 
  • Un archivo de configuración de nginx:

nginx.conf.j2 :

```conf
server {
  listen 80; 

  root {{ document_root }}/{{ app_root }};
  index index.html index.htm;
  
  server_name {{ server_name }};

  location / { 
  default_type "text/html";
  try_files $uri.html $uri $uri/ =404;
  } 
}
```

Un directorio llamado app que dentro tenga los archivos para nuestro servidor web,
en este caso solo vamos a usar un index.html bastante sencillo con un
` <H1>  Probando Nginx con Ansible!  </H1> `
 
9) Ya con el playbook y los archivos adicionales creados, 
pasaremos a ejecutar el playbook: 

a) ansible-playbook playbook.yaml -i inventario.yaml -u ubuntu --private-key ../Terraform/AWS/terra-keys 

10) Una vez aplicado el playbook, solo es cuestión de acceder a la IP pública de nuestra máquina virtual
 en AWS para ver nuestra aplicación web corriendo
