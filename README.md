# cemx
We want to use tmux in MSYS2 in ConEmu. There is also [connector](https://conemu.github.io/en/CygwinMsysConnector.html), but when you run it, you cannot run interactive programs without winpty. (They are great programs)  
Then, ConEmu has a function that you can make panes and tabs.  
Therefore, I made a program which use this function, and you can use it easily in MSYS2.
## Usage
Make a tab.  
$ cemx  
Make a right pane.  
$ cemx s  
Make an under pane.  
$ cemx sV  
Please see other examples in [ConEmu official website](https://conemu.github.io/en/NewConsole.html)
## Compile
$ git clone git://github.com/TRSasasusu/cemx.git  
$ cd cemx  
$ make  
Then, set cemx.exe in your PATH. (e.g. /usr/local/bin)  
cemx.exe can find your bash.exe automatically from PATH.
Moreover, you can write the dot-file, .cemxrc in the same directory as cemx.exe  
e.g.  
bash:c:\msys64\usr\bin\bash.exe  
## License
GNU General Public License v3.0
