
//============================================================================
// Name        : Emil Santos
// ID          : 913450400
// Date        : Feb. 10, 2015
// Description : Identifies and calculates the most frequent letter and word
//               of a user given paragraph.
//============================================================================

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
struct Word{
    string text;
    int frequency;
};

void countWordFrequency(string bb){
    
    vector<Word> vecword;
    vector<string> words;
    vector<int> counter;
    istringstream iss(bb);
    string token;
    
    while(iss >> token){
        words.push_back(token);
    }
    for(int i = 0; i<=words.size();i++){
       
        cout<<words[i]<<endl;
    }
}

void getLeastFrequentLetter(string aa){

    char letters[] = {'a','b','c','d','e','f',
        'g','h','i','j','k','l','m','n','o',
        'p','q','r','s','t','u','v','w','x','y','z'};
    
    int counts[26] ={0};
    
    for(int i=0;i<aa.size();i++){
        for(int j = 0; j<=26;j++){
            if(aa[i]==letters[j]){
                counts[j]++;
            }
        }
    }
    int a = 99;
    int z=0;
    
    for(int x=0; x<=26; x++){
        if(counts[x] < a && counts[x] != 0){
            z=counts[x];
        }
    }
    cout<< "Least Frequent Letters Are:" <<endl;
    for(int f = 0; f<=26; f++){
        if(z==counts[f]){
            cout<< letters[f] <<": " << z <<endl;
        }
    }
}

int main(int argc, const char * argv[]){
    string s;
    cout<< "Please enter a paragraph\n";
    getline(cin, s);
    
    getLeastFrequentLetter(s);
    countWordFrequency(s);
    
}