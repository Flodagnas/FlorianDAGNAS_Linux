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

Possibilité de télécharger et installer un package PowerShell pour l'une des plates-formes suivantes.

| Plateforme | Téléchargements (stable) | Téléchargements (aperçu) | Comment installer |
| ------------------------- | ------------------------ | ----------------------------- | ------------------------------ |
| Arch Linux | | | [Instructions] [in-archlinux] |
| Kali Linux | [.deb] [rl-ubuntu16] | [.deb] [pv-ubuntu16] | [Instructions] [in-kali] |
| De nombreuses distributions Linux | [Snapcraft] [rl-snap] | [Snapcraft] [pv-snap] | |

Possibilité d'également télécharger les archives binaires PowerShell pour Windows, macOS et Linux.