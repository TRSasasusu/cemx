# cemx
We want to use tmux in MSYS2 in ConEmu. There is also [connector](https://conemu.github.io/en/CygwinMsysConnector.html), but when you run it, you cannot run python without winpty. (They are great programs)  
Then, ConEmu has a function that you can make panes and tabs.  
Therefore, I made a program which use this function, and you can use it easily in MSYS2.
## Usage
Make a tab.  
$ cemx  
Make a right pane.  
$ cemx %  
Make an under pane.  
$ cemx "  
## Compile
$ git clone git://github.com/TRSasasusu/cemx.git  
$ cd cemx  
$ make  
Then, set cemx.exe in your Path. (e.g. /usr/local/bin)  
Moreover, write the dot-file, .cemxrc in the same directory as cemx.exe  
e.g.  
bash:c:\msys64\usr\bin\bash.exe
## License
GPLv3
