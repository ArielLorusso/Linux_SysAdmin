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


#### SLA y SLO

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



## clase 28

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

Terraform es una herramienta de
infraestructura creada por la organización
Hashicorp y lanzada al público en julio de 2014. 


Terraform por sí solo no es más que solo un
esqueleto, necesitamos valernos de providers
que agregarán funcionalidades para así poder
crear los recursos EJ AWS CLI


### Laboratorio Ansible

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

Nginx.j2 :

```c
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
