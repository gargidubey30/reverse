// reverse string using stack

#include <iostream >
#include <stack>

using namespace std;





int main(){

    string str="gargi";
    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch=str[i];// character nikalo 
        s.push(ch);// stack me push kardo

    }

    string ans="";// create an empty string

    while(!s.empty()){
        char ch=s.top();//top niaklo 
        ans.push_back(ch);// ans string me dalo 
        s.pop();// stack ko khali karo
    }

    cout<<"answer is "<<ans<<endl;
    return 0;
}