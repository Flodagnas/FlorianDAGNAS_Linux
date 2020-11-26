# PowerShell

Bienvenue dans la communauté PowerShell GitHub!
PowerShell Core est un outil / cadre d'automatisation et de configuration multiplateforme (Windows, Linux et macOS) qui fonctionne bien avec vos outils existants et est optimisé
pour traiter des données structurées (par exemple JSON, CSV, XML, etc.), des API REST et des modèles d'objets.
Il comprend un shell de ligne de commande, un langage de script associé et un cadre de traitement des applets de commande.

[logo]: https://raw.githubusercontent.com/PowerShell/PowerShell/master/assets/ps_black_64.svg?sanitize=true

## Windows PowerShell contre PowerShell Core

Bien que ce référentiel ait commencé comme une fourchette de la base de code Windows PowerShell, les modifications apportées à ce référentiel ne reviennent pas automatiquement à Windows PowerShell 5.1.
Cela signifie également que [problèmes suivis ici] [problèmes] ne concernent que PowerShell Core 6 et supérieur.
Les problèmes spécifiques à Windows PowerShell doivent être ouverts sur [UserVoice] [].

[problèmes]: https://github.com/PowerShell/PowerShell/issues
[UserVoice]: https://windowsserver.uservoice.com/forums/301869-powershell

## Nouveau sur PowerShell?

Si vous ne connaissez pas PowerShell et souhaitez en savoir plus, nous vous recommandons de consulter la documentation [mise en route] [].

[pour commencer]: https://github.com/PowerShell/PowerShell/tree/master/docs/learning-powershell

## Obtenez PowerShell

Vous pouvez télécharger et installer un package PowerShell pour l'une des plates-formes suivantes.

| Plateforme prise en charge | Télécharger (LTS) | Téléchargements (stable) | Téléchargements (aperçu) | Comment installer |
| ------------------------------------------- | ------------------------ | ------------------------ | ---------------------- | ------------------------------ |
| [Windows (x64)] [corefx-win] | [.msi] [lts-windows-64] | [.msi] [rl-windows-64] | [.msi] [pv-windows-64] | [Instructions] [dans Windows] |
| [Windows (x86)] [corefx-win] | [.msi] [lts-windows-86] | [.msi] [rl-windows-86] | [.msi] [pv-windows-86] | [Instructions] [dans Windows] |
| [Ubuntu 20.04] [corefx-linux] | | [.deb] [rl-ubuntu20] | [.deb] [pv-ubuntu20] | [Instructions] [in-ubuntu20] |
| [Ubuntu 18.04] [corefx-linux] | [.deb] [lts-ubuntu18] | [.deb] [rl-ubuntu18] | [.deb] [pv-ubuntu18] | [Instructions] [in-ubuntu18] |
| [Ubuntu 16.04] [corefx-linux] | [.deb] [lts-ubuntu16] | [.deb] [rl-ubuntu16] | [.deb] [pv-ubuntu16] | [Instructions] [in-ubuntu16] |
| [Debian 9] [corefx-linux] | [.deb] [lts-debian9] | [.deb] [rl-debian9] | [.deb] [pv-debian9] | [Instructions] [in-deb9] |
| [Debian 10] [corefx-linux] | [.deb] [lts-debian10] | [.deb] [rl-debian10] | [.deb] [pv-debian10] | [Instructions] [in-deb9] |
| [Debian 11] [corefx-linux] | | [.deb] [rl-debian11] | [.deb] [pv-debian11] | |
| [CentOS 7] [corefx-linux] | [.rpm] [lts-centos] | [.rpm] [rl-centos] | [.rpm] [pv-centos] | [Instructions] [en centos] |
| [CentOS 8] [corefx-linux] | [.rpm] [lts-centos8] | [.rpm] [rl-centos8] | [.rpm] [pv-centos8] | |
| [Red Hat Enterprise Linux 7] [corefx-linux] | [.rpm] [lts-centos] | [.rpm] [rl-centos] | [.rpm] [pv-centos] | [Instructions] [in-rhel7] |
| [openSUSE 42.3] [corefx-linux] | [.rpm] [lts-centos] | [.rpm] [rl-centos] | [.rpm] [pv-centos] | [Instructions] [in-opensuse] |
| [Fedora 30] [corefx-linux] | [.rpm] [lts-centos] | [.rpm] [rl-centos] | [.rpm] [pv-centos] | [Instructions] [in-fedora] |
| [macOS 10.13 +] [corefx-macos] | [.pkg] [lts-macos] | [.pkg] [rl-macos] | [.pkg] [pv-macos] | [Instructions] [in-macos] |
| Docker | | | | [Instructions] [dans le docker] |

Vous pouvez télécharger et installer un package PowerShell pour l'une des plates-formes suivantes, ** qui sont prises en charge par la communauté. **

| Plateforme | Téléchargements (stable) | Téléchargements (aperçu) | Comment installer |
| ------------------------- | ------------------------ | ----------------------------- | ------------------------------ |
| Arch Linux | | | [Instructions] [in-archlinux] |
| Kali Linux | [.deb] [rl-ubuntu16] | [.deb] [pv-ubuntu16] | [Instructions] [in-kali] |
| De nombreuses distributions Linux | [Snapcraft] [rl-snap] | [Snapcraft] [pv-snap] | |

Vous pouvez également télécharger les archives binaires PowerShell pour Windows, macOS et Linux.

| Plateforme | Téléchargements (stable) | Téléchargements (aperçu) | Comment installer |
| --------------- | -------------------------------------------------- - | ------------------------------------------------ | ----------------------------------------------- |
| Windows | [32 bits] [rl-winx86-zip] / [64 bits] [rl-winx64-zip] | [32 bits] [pv-winx86-zip] / [64 bits] [pv-winx64-zip] | [Instructions] [in-windows-zip] |
| macOS | [64 bits] [rl-macos-tar] | [64 bits] [pv-macos-tar] | [Instructions] [in-tar-macos] |
| Linux | [64 bits] [rl-linux-tar] | [64 bits] [pv-linux-tar] | [Instructions] [in-tar-linux] |
| Windows (bras) | [64 bits] [rl-winarm64] (aperçu) | [64 bits] [pv-winarm64] | [Instructions] [dans le bras] |
| Raspbian (bras) | [32 bits] [rl-arm32] / [64 bits] [rl-arm64] | [32 bits] [pv-arm32] / [64 bits] [pv-arm64] | [Instructions] [in-raspbian] |

[lts-windows-86]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/PowerShell-7.0.3-win-x86.msi
[lts-windows-64]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/PowerShell-7.0.3-win-x64.msi
[lts-ubuntu18]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts_7.0.3-1.ubuntu.18.04_amd64.deb
[lts-ubuntu16]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts_7.0.3-1.ubuntu.16.04_amd64.deb
[lts-debian9]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts_7.0.3-1.debian.9_amd64.deb
[lts-debian10]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts_7.0.3-1.debian.10_amd64.deb
[lts-centos]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts-7.0.3-1.rhel.7.x86_64.rpm
[lts-centos8]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts-7.0.3-1.centos.8.x86_64.rpm
[lts-macos]: https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/powershell-lts-7.0.3-osx-x64.pkg

[rl-windows-64]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/PowerShell-7.1.0-win-x64.msi
[rl-windows-86]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/PowerShell-7.1.0-win-x86.msi
[rl-ubuntu20]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.ubuntu.20.04_amd64.deb
[rl-ubuntu18]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.ubuntu.18.04_amd64.deb
[rl-ubuntu16]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.ubuntu.16.04_amd64.deb
[rl-debian9]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.debian.9_amd64.deb
[rl-debian10]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.debian.10_amd64.deb
[rl-debian11]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell_7.1.0-1.debian.11_amd64.deb
[rl-centos]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-1.rhel.7.x86_64.rpm
[rl-centos8]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-1.centos.8.x86_64.rpm
[rl-macos]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-osx-x64.pkg
[rl-winarm64]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/PowerShell-7.1.0-win-arm64.zip
[rl-winx86-zip]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/PowerShell-7.1.0-win-x86.zip
[rl-winx64-zip]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/PowerShell-7.1.0-win-x64.zip
[rl-macos-tar]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-osx-x64.tar.gz
[rl-linux-tar]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-linux-x64.tar.gz
[rl-arm32]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-linux-arm32.tar.gz
[rl-arm64]: https://github.com/PowerShell/PowerShell/releases/download/v7.1.0/powershell-7.1.0-linux-arm64.tar.gz
[rl-snap]: https://snapcraft.io/powershell

[pv-windows-64]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/PowerShell-7.2.0-preview.1-win-x64.msi
[pv-windows-86]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/PowerShell-7.2.0-preview.1-win-x86.msi
[pv-ubuntu20]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.ubuntu.20.04_amd64.deb
[pv-ubuntu18]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.ubuntu.18.04_amd64.deb
[pv-ubuntu16]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.ubuntu.16.04_amd64.deb
[pv-debian9]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.debian.9_amd64.deb
[pv-debian10]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.debian.10_amd64.deb
[pv-debian11]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview_7.2.0-preview.1-1.debian.11_amd64.deb
[pv-centos]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview-7.2.0_preview.1-1.rhel.7.x86_64.rpm
[pv-centos8]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-preview-7.2.0_preview.1-1.centos.8.x86_64.rpm
[pv-macos]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-7.2.0-preview.1-osx-x64.pkg
[pv-winarm64]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/PowerShell-7.2.0-preview.1-win-arm64.zip
[pv-winx86-zip]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/PowerShell-7.2.0-preview.1-win-x86.zip
[pv-winx64-zip]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/PowerShell-7.2.0-preview.1-win-x64.zip
[pv-macos-tar]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-7.2.0-preview.1-osx-x64.tar.gz
[pv-linux-tar]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-7.2.0-preview.1-linux-x64.tar.gz
[pv-arm32]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-7.2.0-preview.1-linux-arm32.tar.gz
[pv-arm64]: https://github.com/PowerShell/PowerShell/releases/download/v7.2.0-preview.1/powershell-7.2.0-preview.1-linux-arm64.tar.gz
[pv-snap]: https://snapcraft.io/powershell-preview

[dans-windows]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-windows
[in-ubuntu16]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#ubuntu-1604
[in-ubuntu18]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#ubuntu-1804
[in-ubuntu20]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#ubuntu-2004
[in-deb9]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#debian-9
[in-deb10]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#debian-10
[in-centos]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#centos-7
[in-rhel7]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#red-hat-enterprise-linux-rhel-7
[in-opensuse]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#opensuse
[in-fedora]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#fedora
[in-archlinux]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#arch-linux
[in-macos]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-macos
[in-docker]: https://github.com/PowerShell/PowerShell-Docker
[in-kali]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#kali
[in-windows-zip]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-windows#zip
[in-tar-linux]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#binary-archives
[in-tar-macos]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-macos#binary-archives
[in-raspbian]: https://docs.microsoft.com/powershell/scripting/install/installing-powershell-core-on-linux#raspbian
[dans le bras]: https://docs.microsoft.com/powershell/scripting/install/powershell-core-on-arm
[corefx-win]: https: //github.com/dotnet/core/blob/master/release-notes/3.0/3.0-supported-os.md#windows
[corefx-linux]: https: //github.com/dotnet/core/blob/master/release-notes/3.0/3.0-supported-os.md#linux
[corefx-macos]: https: //github.com/dotnet/core/blob/master/release-notes/3.0/3.0-supported-os.md#macos

Pour installer une version spécifique, visitez [releases] (https://github.com/PowerShell/PowerShell/releases).

## Tableau de bord de la communauté

[Tableau de bord] (https://aka.ms/psgithubbi) avec des visualisations pour les contributions de la communauté et l'état du projet à l'aide de PowerShell, Azure et PowerBI.

Pour plus d'informations sur comment et pourquoi nous avons créé ce tableau de bord, consultez cet [article de blog] (https://devblogs.microsoft.com/powershell/powershell-open-source-community-dashboard/).

## Chat

Vous souhaitez discuter avec d'autres membres de la communauté PowerShell?

Nous avons une salle Gitter que vous pouvez rejoindre ci-dessous.

[! [Rejoignez le chat] (https://img.shields.io/static/v1.svg?label=chat&message=on%20gitter&color=informational&logo=gitter)] (https://gitter.im/PowerShell/PowerShell? utm_source = badge & utm_medium = badge & utm_campaign = pr-badge & utm_content = badge)

Il existe également le groupe d'utilisateurs virtuels PowerShell géré par la communauté, auquel vous pouvez vous joindre:

* [Slack] (https://aka.ms/psslack)
* [Discord] (https://aka.ms/psdiscord)

## Modules complémentaires et bibliothèques

[Awesome PowerShell] (https://github.com/janikvonrotz/awesome-powershell) a une excellente liste de modules complémentaires et de ressources.

## Construction du référentiel

| Linux | Windows | macOS |
| -------------------------- | ---------------------- ------ | ------------------------ |
| [Instructions] [bd-linux] | [Instructions] [bd-windows] | [Instructions] [bd-macOS] |

Si vous rencontrez des problèmes de construction, veuillez consulter le développeur [FAQ] [].

### État de compilation des compilations nocturnes

| Azure CI (Windows) | Azure CI (Linux) | Azure CI (macOS) | État de la couverture du code | CodeFactor Grade |
|: ----------------------------------------- |: ----- ------------------------------------------ |: ------ ----------------------------------------- |: ------- ------------------ |: ------------------------- |
| [! [windows-nightly-image] []] [windows-nightly-site] | [! [image-nuit-linux] []] [site-nuit-linux] | [! [macOS-nightly-image] []] [macos-nightly-site] | [! [image-cc] []] [site-cc] | [! [image-cf] []] [site-cf] |

[bd-linux]: https://github.com/PowerShell/PowerShell/tree/master/docs/building/linux.md
[bd-windows]: https://github.com/PowerShell/PowerShell/tree/master/docs/building/windows-core.md
[bd-macOS]: https://github.com/PowerShell/PowerShell/tree/master/docs/building/macos.md

[FAQ]: https://github.com/PowerShell/PowerShell/tree/master/docs/FAQ.md

[windows-nightly-site]: https://powershell.visualstudio.com/PowerShell/_build?definitionId=32
[site linux-nightly]: https://powershell.visualstudio.com/PowerShell/_build?definitionId=23
[macos-nightly-site]: https://powershell.visualstudio.com/PowerShell/_build?definitionId=24
[windows-nightly-image]: https://powershell.visualstudio.com/PowerShell/_apis/build/status/PowerShell-CI-Windows-daily
[linux-nightly-image]: https://powershell.visualstudio.com/PowerShell/_apis/build/status/PowerShell-CI-linux-daily?branchName=master
[macOS-nightly-image]: https://powershell.visualstudio.com/PowerShell/_apis/build/status/PowerShell-CI-macos-daily?branchName=master
[site cc]: https://codecov.io/gh/PowerShell/PowerShell
[cc-image]: https://codecov.io/gh/PowerShell/PowerShell/branch/master/graph/badge.svg
[cf-site]: https://www.codefactor.io/repository/github/powershell/powershell
[cf-image]: https://www.codefactor.io/repository/github/powershell/powershell/badge

## Téléchargement du code source

Vous pouvez simplement cloner le référentiel:

`` sh
git clone https://github.com/PowerShell/PowerShell.git
''

Consultez [utilisation du référentiel PowerShell] (https://github.com/PowerShell/PowerShell/tree/master/docs/git) pour plus d'informations.

## Développer et contribuer

Veuillez consulter le [Guide de contribution] [] pour savoir comment développer et contribuer.
Si vous développez des applications .NET Core C # ciblant PowerShell Core, veuillez [consultez notre FAQ] [] pour en savoir plus sur le package NuGet du SDK PowerShell.

Assurez-vous également de consulter notre [référentiel PowerShell-RFC] (https://github.com/powershell/powershell-rfc) pour les documents de demande de commentaires (RFC) à soumettre et à faire des commentaires sur les conceptions proposées et futures.

[Guide de contribution]: https://github.com/PowerShell/PowerShell/blob/master/.github/CONTRIBUTING.md
[consultez notre FAQ]: https://github.com/PowerShell/PowerShell/tree/master/docs/FAQ.md#where-do-i-get-the-powershell-core-sdk-package

## Soutien

Pour obtenir de l'aide, veuillez consulter la [Section d'assistance] [].

[Section d'assistance]: https://github.com/PowerShell/PowerShell/tree/master/.github/SUPPORT.md

## Juridique et licences

PowerShell est concédé sous la [licence MIT] [].

[Licence MIT]: https://github.com/PowerShell/PowerShell/tree/master/LICENSE.txt

### Fichiers et images Windows Docker

Licence: en demandant et en utilisant l'image Container OS pour les conteneurs Windows, vous reconnaissez, comprenez et acceptez les conditions de licence supplémentaires disponibles sur Docker Hub:

- [Windows Server Core] (https://hub.docker.com/r/microsoft/windowsservercore/)
- [Nano Server] (https://hub.docker.com/r/microsoft/nanoserver/)

### Télémétrie

Par défaut, PowerShell collecte la description du système d'exploitation et la version de PowerShell (équivalent à `$ PSVersionTable.OS` et` $ PSVersionTable.GitCommitId`) à l'aide de [Application Insights] (https://azure.microsoft.com/services/application- insights /).
Pour désactiver l'envoi de télémétrie, créez une variable d'environnement appelée `POWERSHELL_TELEMETRY_OPTOUT` définie sur une valeur de` 1` avant de démarrer PowerShell à partir de l'emplacement d'installation.
La télémétrie que nous collectons relève de la [Déclaration de confidentialité Microsoft] (https://privacy.microsoft.com/privacystatement/).