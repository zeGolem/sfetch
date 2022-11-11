<p align="center">
  <b>sfetch. a simple and minimal system information tool.</b><br>
  <br><br>
<img src="https://github.com/omxr4216/sfetch/blob/main/screenshot.png?raw=true">
</p>

for the next release v1.1.0
- [X] Modify chkversion.sh to make sfetch-update output: "New update is available!"
- [ ] Create patch files (instead of having to copy new code to custom config file)
- [ ] Make sfetch support BSD/Unix and their ascii systems (if possible)
- [ ] Pipe it to cowsay (if possible)

You might be wondering. "Why doesn't sfetch determine OS names?"
There's no binary file included that runs for every single distro so the "OS: " just prints "Linux"

sfetch is a simple and minimal system information tool written in `C++`.

You can get the source code by downloading the tar.xz archive or using `git clone` command.

NOTE: it's better to run `git clone` because the tar.xz archive might have things that are not in the code or the app doesn't match the ss

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

## Contributors

In order to maintain code consistency, please run

```console
 $ clang-format -i *.cpp
```

before committing anything
