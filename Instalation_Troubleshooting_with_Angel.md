/etc :  path absoluto
etc  :  path relativo

sudo apt-get update  : refresca indice de paquetes
sudo apt-get upgrade : actualiza paquetes a ultima version con el indice local


las fuentes dode se buscan los indices:
/etc/apt/sources.list.d
    archivo.list : fuentes de apt. (paquetes)

https://hirazone.medium.com/install-terraform-and-docker-in-linux-mint-victoria-21-2-70b15e89abce

https://www.hashicorp.com/official-packaging-guide
https://developer.hashicorp.com/terraform/tutorials/aws-get-started/install-cli


# Pakage Source Warings & Errors :

sudo apt-get update | grep err
sudo apt-get update | grep E:

Package list for repository can have 4 results:
    
1)   Hit: ( up-to-date ) no changes are needed.
        Hit:10 http://archive.ubuntu.com/ubuntu jammy InRelease                                                                                                                                                          
    
2)  Ign:  ( Ignored )  Repository unavailable or configuration issue.
        ign:7 http://www.geogebra.net/linux stable InRelease                                                                                                                                                             

    Err:  ( Error )  during the update process
        Err:22 https://apt.releases.hashicorp.com ulyana Release            
        Err:12 http://repo.mysql.com/apt/ubuntu bionic InRelease                    
            404  Not Found [IP: 3.160.90.44 443]
    
    Get:  ( Updating ) is being fetched from the network.
        Get:12 http://repo.mysql.com/apt/ubuntu bionic InRelease [20,0 kB]                                                                                                                                              

We can also recive final mensages like :

W: Skipping acquire of configured file '|/cnf/Commands-amd64' as repository 'https://repo.mongodb.org/apt/ubuntu jammy/mongodb-org/6.0 InRelease' doesn't have the component '|' (component misspelt in sources.list?)
W: Skipping acquire of configured file 'sudo/binary-amd64/Packages' as repository 'https://repo.mongodb.org/apt/ubuntu jammy/mongodb-org/6.0 InRelease' doesn't have the component 'sudo' (component misspelt in sources.list?)
E: The repository 'https://apt.releases.hashicorp.com ulyana Release' does not have a Release file.
N: Updating from such a repository can't be done securely, and is therefore disabled by default.
N: See apt-secure(8) manpage for repository creation and user configuration details.


# Pakages sources list

ls /etc/apt/sources.list.d 

brave-browser-release.list   geogebra.list       inkscape_dev-stable-jammy.list  mongodb-org-6.0.list  official-package-repositories.list  vscode.list
cuda-ubuntu2204-x86_64.list  google-chrome.list  microsoft-edge-dev.list         mysql.list            steam-beta.list
docker.list                  hashicorp.list      modular-installer.list          nodesource.list       steam-stable.list


We cam fix sources to search from a Ubuntu package :

```sh
sudo lsb_release -cs
victoria
```
victoria from Linux mint does not have pakage

```sh
sudo lsb_release -cs    
victoria
```


```sh
echo $UBUNTU_CODENAME
jammy

```
we can manually change "victoria" to an equivalent ubuntu version "jammy"

```sh
sudo nano /etc/apt/sources.list.d/hashicorp.list 
```

```ts
deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com victoria main
deb [signed-by=/usr/share/keyrings/hashicorp-archive-keyring.gpg] https://apt.releases.hashicorp.com jammy main
```

if we found strange commands we can comment them out
```sh
sudo nano /etc/apt/sources.list.d/mongodb-org-6.0.list
```

```ts
# deb [ arch=amd64,arm64 ] https://repo.mongodb.org/apt/ubuntu jammy/mongodb-org/6.0 multiverse | sudo tee /etc/apt/sources.list.d/mongodb-org-6.0.list
deb [ arch=amd64,arm64 ] https://repo.mongodb.org/apt/ubuntu jammy/mongodb-org/6.0 multiverse 

```

## GITHUB TOKEN
```sh
git push
Username for 'https://github.com': ArielLorusso
Password for 'https://ArielLorusso@github.com': 
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/ArielLorusso/Linux_SysAdmin.git/'
```

https://stackoverflow.com/questions/68775869/message-support-for-password-authentication-was-removed
https://github.com/settings/tokens
https://docs.github.com/en

Make sure to copy your personal access token now. You won’t be able to see it again!

GitHub Access Tokens  by  NeuralNine      https://www.youtube.com/watch?v=IuiH6cBtc58

this is the ckikest way to work :

git clone https://USER:TOKEN@github.com/USER/
once downloaded there wont be need to enter token again


```sh
neuralnine@pop-os:~/Desktop$ git clone https://NeuralNine:github_pat_11ALZ6IVA05xhGCnK8pWxM_kwhZ7Ky6dXK4MJF9D5mdpss6YAb4Kz8ExdRrPiV9PWMNLTN
62210283Xyh4@github.com/NeuralNine/secret-private-repo.git
Cloning into 'secret-private-repo'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (3/3), done.

neuralnine@pop-os:-/Desktop/secret-private-repo$ git add new_file.txt

neuralnine@pop-os:-/Desktop/secret-private-repo$ git push
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 16 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 298 bytes | 290.00 KiB/s, done. Total 3 (delta 0), reused 8 (delta 0), pack-reused 0
To https://github.com/NeuralNine/secret-private-repo.git
cfb155e..4b593a1 main -> main
neuralnine@pop-os:~/Desktop/secret-private-repo$
```