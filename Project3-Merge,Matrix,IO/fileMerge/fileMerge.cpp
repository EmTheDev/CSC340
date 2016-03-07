#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//function called in main to pass the address of the files through to be read.
void merge(ifstream &read1, ifstream &read2){
    
    string string1;
    string string2;
    string newName;

    //merge file, later to be renamed
    ofstream newFile("mergeFile.txt");
    
    //reading file one and outputting the contents into merge file
    while(getline(read1, string1, '\n')){
        newFile <<string1 <<endl;
    }
    
    //reading file two and outputting the contents into merge file
    while(getline(read2, string2, '\n')){
        newFile << string2 << endl;
    }
    
    //prompt the user that the files have been merged
    cout << "Your files have merged."<<endl;
    cout << "They are now brothers." << endl;
    cout << "What would you like to name the new file?"<<endl;
    getline(cin, newName);
    
    //adding extension into the file in which they name the merge file.
    newName += ".txt";
    rename("mergeFile.txt", newName.c_str());
    
    //prompts the user that the file has been successfully made
    cout << "The file name has been named " << newName << endl;
    
    //close the 3 files
    read1.close();
    read2.close();
    newFile.close();
}

int main(){
    
    //using string to ask the user for the filename.
    string filename1;
    string filename2;
    
    //prompt the user to enter the name of file one
    cout << "Please type the name of file1 without '.txt' extension." << endl;
    getline( cin, filename1);
    
    //prompt the user to enter the name of file two
    cout << "Now enter the name of file2 without the '.txt' extension." << endl;
    getline( cin, filename2);
    
    //adding extension, may not be necessary, especially if it is not a .txt file
    filename1 += ".txt";
    filename2 += ".txt";

    //open file one and two
    ifstream read1;
    read1.open(filename1);
    if(read1.fail()){
        cout<< "Failed to open file1. Please input the correct file name.\n";
        return(-1);
    }
    
    ifstream read2;
    read2.open(filename2);
    if(read2.fail()){
        cout<< "Failed to open file2. Please input the correct file name.\n";
        return(-1);
    }
    
    //pass the newly opened files through the merge function
    merge(read1, read2);

    return 0;
    
}


