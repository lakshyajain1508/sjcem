# Experiment No. 2
### Shell Script 
#### To display opertion system name, release name & kernal name
script code:- 
```
echo "operation system name: ";
uname;
echo "Release name is: ";
uname -a;
echo "kernal name: ";
uname -r;
```
- save this code in .sh form
- example :- script1.sh
- terminal code :- sh script1.sh

output:-
```
operation system name: 
Linux
Release name is: 
Linux complab 5.15.0-139-generic #149~20.04.1-Ubuntu SMP Wed Apr 16 08:29:56 UTC 2025 x86_64 x86_64 x86_64 GNU/Linux
kernal name: 
5.15.0-139-generic
```
#### To display current working directory, types of shells and to see where bash is loacted 
script code:- 
```
echo "Current Working Directory: ";
pwd;
echo "Different Shells: ";
cat /etc/shells;
echo "Bash is located at: ";
which bash;
```
- save this code in .sh form
- example :- script2.sh
- terminal code :- sh script2.sh
output:
```
Current Working Directory: 
/home/student
Different Shells: 
# /etc/shells: valid login shells
/bin/sh
/bin/bash
/usr/bin/bash
/bin/rbash
/usr/bin/rbash
/bin/dash
/usr/bin/dash
Bash is located at: 
/usr/bin/bash
```
#### To display logged in user & number of logged in users
script code:- 
```
echo "Logged in Users: ";
who -u;
echo "Number of logged in users: ";
who -u | wc -l;
```
- save this code in .sh form
- example :- script3.sh
- terminal code :- sh script3.sh
ouput:-
```
Logged in Users: 
student  :0           2023-03-02 18:29   ?          2169 (:0)
Number of logged in users: 
1
```
#### To display processes with highest memory usage
commands :
man ps - ps displays information about a selection of the active processes.  If you want a repetitive update of the selection and the displayed information, use top(1) instead.

script:
```
echo "Processor with hightest memory usage: ";
ps aux --sort =-pmem,+pcpu;
```
- save this code in .sh form
- example :- script4.sh
- terminal code :- sh script4.sh
output:
```
Processor with hightest memory usage: 
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
student     5050  2.4  5.3 34506832 426812 ?     SLl  11:46   1:54 /opt/google/chrome/chrome
mysql       1131  0.8  5.0 2316988 398584 ?      Ssl  11:26   0:46 /usr/sbin/mysqld
student     5292  1.8  4.4 3241660 351324 ?      Sl   11:46   1:22 /usr/lib/firefox/firefox -new-window
student     2328  3.1  3.0 4188636 245264 ?      Ssl  11:27   2:58 /usr/bin/gnome-shell
student     8011  2.9  2.6 1187961424 211036 ?   Sl   12:42   0:35 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=5058 --ena
student     7535  0.7  2.3 1185844156 185396 ?   Sl   12:28   0:16 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=5058 --ena
student     6945  0.2  2.2 535908 181816 ?       SNl  12:01   0:07 /usr/bin/python3 /usr/bin/update-manager --no-update --no-focus-on-map
student     6635  1.3  2.2 1185849116 175200 ?   Sl   11:54   0:53 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=5058 --ena
student     5094  2.6  2.0 34145764 165656 ?     Sl   11:46   2:01 /opt/google/chrome/chrome --type=gpu-process --crashpad-handler-pid=5058 --
student     5397  0.0  1.9 2512404 156176 ?      Sl   11:47   0:02 /usr/lib/firefox/firefox -contentproc -isForBrowser -prefsHandle 0 -prefsLe
student     5550  0.1  1.6 2515984 133952 ?      Sl   11:47   0:05 /usr/lib/firefox/firefox -contentproc -isForBrowser -prefsHandle 0 -prefsLe
student     5171  0.0  1.4 1187946592 111484 ?   Sl   11:46   0:01 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=5058 --ena
```










