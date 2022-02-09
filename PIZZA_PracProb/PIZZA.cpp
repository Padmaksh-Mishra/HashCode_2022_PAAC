//Name.Redacted || Coding_Duck || PM

# include <bits/stdc++.h>	//iostream already included 

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll Case,GPC,temp;
    cin >> Case;
    map<string,int> Ingredients;
    while(Case--){
        //Likes Loop
        cin >> temp;
        string s;
        while(temp--){
            cin >> s;
            Ingredients[s]++;
        }
        cin >> temp;
        while(temp--){
            cin >> s;
            
            Ingredients[s]--;
        }
    }
    ll count = 0;
    for(auto val : Ingredients){
        if(val.second > 0){
            count++;
        }
    }
    cout << count << " ";
    for(auto val : Ingredients){
        if(val.second > 0){
            cout << val.first << " ";
        }
    }
    return 0;
}