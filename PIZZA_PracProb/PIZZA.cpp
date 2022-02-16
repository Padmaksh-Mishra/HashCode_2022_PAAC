//Name.Redacted || Coding_Duck || PM

// CASE C performed +1 on prv version of code


# include <bits/stdc++.h>	//iostream already included 

using namespace std;
typedef long long ll;

int main() {

    ofstream myfile;
    myfile.open("D.txt");

    ifstream inFile;
    inFile.open("d_difficult.in.txt");

    ios_base::sync_with_stdio(0);

    ll Case,GPC,temp;
    inFile >> Case;
    map<string,int> Ingredients;
    while(Case--){
        //Likes Loop
        inFile >> temp;
        string s;
        while(temp--){
            inFile >> s;
            Ingredients[s]++;
        }
        inFile >> temp;
        while(temp--){
            inFile >> s;
            
            Ingredients[s]--;
        }
    }
    ll count = 0;
    for(auto val : Ingredients){
        if(val.second >= 0){
            count++;
        }
    }
    myfile << count << " ";
    for(auto val : Ingredients){
        if(val.second >= 0){
            myfile << val.first << " ";
        }
    }
    return 0;
}