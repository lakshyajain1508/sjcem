##Experiment No. 1
#### Aim:- To explore the commands of linux & write shell scripts.

#### Theory :- 
#####Commands-
1)List Commands - man ls
Description - List information about the FILEs (the current directory by default).  Sort entries alphabetically if none of -cftuvSUX nor --sort is speci‐
       fied.

intput- ls
output-
```
'2025-26 ML Assignment No. 2 Division A 70.pdf'   Mobile_Microprocessors_Report.pdf	     'Screenshot from 2025-09-18 12-11-43.png'	 snap
'2025-26 ML Assignment No. 2 Division A.pdf'	  report1.odt				     'Screenshot from 2025-09-29 11-32-30.png'
 Downloads					  Report_Advanced_Processors_1_4_18_23.docx  'Screenshot from 2025-09-29 11-37-04.png'
 FP
```	

input- ls -l
output-
```
total 528
-rw-rw-r-- 1 student student 127671 Sep 29 13:07 '2025-26 ML Assignment No. 2 Division A 70.pdf'
-rw-rw-r-- 1 student student 127560 Sep 29 12:30 '2025-26 ML Assignment No. 2 Division A.pdf'
drwx------ 2 student student   4096 Nov 19 12:43  Downloads
drwxrwxr-x 3 student student   4096 Nov 17 12:54  FP
-rw-rw-r-- 1 student student   3401 Sep 22 15:24  Mobile_Microprocessors_Report.pdf
-rw-rw-r-- 1 student student  24676 Sep 22 15:13  report1.odt
-rw-rw-r-- 1 student student   8329 Sep 22 15:19  Report_Advanced_Processors_1_4_18_23.docx
-rw-rw-r-- 1 student student   7663 Sep 22 15:41  report_Mobile_processors_1_4_18_23.docx
-rw-rw-r-- 1 student student   3859 Sep 18 12:11 'Screenshot from 2025-09-18 12-11-43.png'
-rw-rw-r-- 1 student student  83288 Sep 29 11:32 'Screenshot from 2025-09-29 11-32-30.png'
-rw-rw-r-- 1 student student  77355 Sep 29 11:37 'Screenshot from 2025-09-29 11-37-04.png'
-rw-rw-r-- 1 student student  44247 Nov 17 15:26 'Screenshot from 2025-11-17 15-26-14.png'
drwx------ 4 student student   4096 Nov 17 10:39  snap

```

2)Change Directory - this commands is use to change the current directory

input- cd /bin
output- student@complab:/bin$ 

3)Present Working Directory(pwd) - Print the full filename of the current working directory.
input- pwd
output- /home

4)cat: Concatenate FILE(s) to standard output.

input- cat > os.txt 	// Create a file os.txt
hello
hello  - text
clrt d  		// it save above text on that file

input- cat os.txt
output-
it shows the txt written on that file
hello- text

5)wc - Print  newline,  word, and byte counts for each FILE, and a total line if more than one FILE is specified.  A word is a non-zero-length se‐
       quence of characters delimited by white space.

input - wc os.txt
output- 
0 1 5  os.txt
 0- numbers of lines
1 - numbers of words
5 - numbers of character along with spaces.

6)Copy - man cp 
Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.

input - cp os.txt os1.txt
output - 

7)Move - man mv
Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.

input - mv os.txt os os2.txt
ouput - 

8)rm - This manual page documents the GNU version of rm.  rm removes each specified file.  By default, it does not remove directories.

input- rm os.txt
ouput- 


9) mkdir - man mkdir
Create the DIRECTORY(ies), if they do not already exist.

input- mkdir laksh(foldername)
output- 

10) remove directory - man rmdir
Remove the DIRECTORY(ies), if they are empty.

input- rmdir os2.txt
output - 

output phone meh hai