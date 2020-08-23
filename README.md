# Logline-Extractor



 A tool that could extract the log lines from a given time range and print it to console in time effective manner.

 The command line (CLI) for the desired program is as below 
LogExtractor.exe -f "From Time" -t "To Time" -i "Log file directory location"


 Log file format 
1. The log file has one log per line. 
2. Every log line will start with TimeStamp in "ISO 8601" format followed by a comma (','). 
3. All the log lines will be separated by a single newline character '\n'. 
4. Example logline: 2020-01-31T20:12:38.1234Z, Some Field, Other Field, And so on, Till new line,... \n 

Assumption: From and To time are in ISO 8601 format.
		Log File is present in the present working directory
The logs file is properly prepared with time mentioned first.



Result:  Fetched all the approx (2000) log lines from 10 .txt files(each consisting 1K loglines) between time 2020-01-31T20:12:39.1234Z to 2020-01-31T20:12:40.1234Z
By using command:  
.\LogExtractor.exe -f 2020-01-31T20:12:38.1234Z -t 2020-01-31T20:12:40.1234Z -i logfile1.txt

 Here, “logfile1.txt” is the first file name from where we have to start scanning files.
 
 ![result](C:\Users\hp\Desktop\console_application\result.png)



 
