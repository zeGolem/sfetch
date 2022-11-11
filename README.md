<p align="center">
  <b>sfetch (prev simplefetch), a simple and minimal system information tool. </b><br>
  <br><br>
  <img src="https://github.com/omxr4216/sfetch/blob/main/asset.png?raw=true">
</p>

sfetch (prev simplefetch) is a simple and minimal system information tool written in C++.

You can get the source code by downloading the tar.xz archive or using git clone command.

## Update
To check for updates for sfetch run this command:
```
sfetch-update
```
## Install
if you wanted to reinstall sfetch run this command.
```
sudo make reinstall
```
Make sure you have the  /usr/local/bin/ directory
```
ls /usr/local/bin
```
if it doesn't exist make the directory.
```
sudo mkdir /usr/local/bin
```
Clone this repo. (or download the .tar.xz file from releases)
```
git clone https://github.com/omxr4216/sfetch
```

NOTE: the repo might have bug fixes that are NOT in the tar.xz file

List options.
```
make
```
Install sfetch 
```
sudo make install
```
(Optional) Execute the GUI installer and install sfetch.
```
sudo make gui
```

ASCII logos are from [ufetch](https://gitlab.com/jschx/ufetch)
