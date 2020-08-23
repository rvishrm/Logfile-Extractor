#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int main(int argc, char* argv[]){
	
	

    //defining USAGE for the user
    if (argc < 7) {
        cout << "Usage: " << argv[0] << " -f \"From Time\" -t \"To Time\" -i \"Log file directory location\" " << endl;
        return 1;
    }

    //taking arguments from command line
    int from, to, file;
    for (int i = 1; i < argc; i++){
        if (string(argv[i]) == "-f"){
            if (i + 1 < argc) // Make sure we aren't at the end of argv!
                from = ++i; // Increment 'i' to capture the From Time.
            else{ //There was no argument to the From option.
                cout << "-f option requires one argument." << endl;
                return 1;
            }
        }
        else if(string(argv[i]) == "-t"){
            if (i + 1 < argc) // Make sure we aren't at the end of argv!
                to = ++i; // Increment 'i' to capture the To Time.
            else{ //There was no argument to the To option.
                cout << "-t option requires one argument." << endl;
                return 1;
            }
        }
        else if(string(argv[i]) == "-i"){
            if (i + 1 < argc) // Make sure we aren't at the end of argv!
                file = ++i; // Increment 'i' to capture the Log file directory location.
            else{ //There was no argument to the Log file directory option.
                cout << "-i option requires one argument." << endl;
                return 1;
            }
        }
        else{ //Give error and define the usage
            cout << "Usage: " << argv[0] << " -f \"From Time\" -t \"To Time\" -i \"Log file directory location\" " << endl;
            return 1;
        }
    }

    //read from the file
//    cout<<file<<"****";
	double time_spent = 0.0;

//	clock_t begin = clock();
//cout<<"5461615645151";
  for(int k = 0;k<4;k++)
  {
		  	char c = '0';
		  	argv[file][7] = char(c+k+1);
		    ifstream source(argv[file]);
		    string line;
		
		    //If the time substring lies between FROM TIME and TO TIME, print it
		    while (getline(source, line)){
		         if(line.substr(0, 25) >= argv[from] && line.substr(0, 25) <= argv[to])
		            cout << line << endl;
		    }
  }
  
//  	clock_t end = clock();
//	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//	cout<<endl<<endl;
//    cout << "time taken to fetch lines" << time_spent << endl;
    return 0;
}


