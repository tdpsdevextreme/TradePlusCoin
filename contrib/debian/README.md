
Debian
====================
This directory contains files used to package tradeplus_coind/tradeplus_coin-qt
for Debian-based Linux systems. If you compile tradeplus_coind/tradeplus_coin-qt yourself, there are some useful files here.

## tradeplus_coin: URI support ##


tradeplus_coin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install tradeplus_coin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tradeplus_coin-qt binary to `/usr/bin`
and the `../../share/pixmaps/tradeplus_coin128.png` to `/usr/share/pixmaps`

tradeplus_coin-qt.protocol (KDE)

