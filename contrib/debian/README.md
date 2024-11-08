
Debian
====================
This directory contains files used to package cunnid/cunni-qt
for Debian-based Linux systems. If you compile cunnid/cunni-qt yourself, there are some useful files here.

## cunni: URI support ##


cunni-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cunni-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cunni-qt binary to `/usr/bin`
and the `../../share/pixmaps/cunni128.png` to `/usr/share/pixmaps`

cunni-qt.protocol (KDE)

