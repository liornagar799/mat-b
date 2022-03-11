#include <ostream>
#include <string>
#include "mat.hpp"
using namespace ariel;
using namespace std;


namespace ariel{

// revers the string    
string revers(string s){
string ans;
// iterator that goes over the string characters
std::string::reverse_iterator it;
for (it = s.rbegin(); it != s.rend(); it++){
    //Takes the value that the iterator points to
  ans +=*it;   }

return ans;  
}



string odd(int i, int cols,char a,char b){
// the mid of the line
int mid=cols/2;    
// if the line in size 1
if (mid==0){
    string ans;
    ans=a;
 return ans;
} 
string ans;
//add the first char 
ans = a;
// check who match ba we need to add
int count = i/2;
// count the number of the char that i add
int co=1;
int j=0;
// add ba      
for(j=0; j<count; j++){
    ans+=b;
    co++;
    // if i didnt passed the mid
    if(co<mid){
    ans+=a;
    co++;
    }

}
int t=0;
// the numbers of char that i add until now
t = 1+j+j;
// add the The rest of the characters to the middle are less than one
for(int w=t;w<mid;w++){
   ans+=b; 
}
string s;
// revers the string in the ans
s = revers(ans);
// add the mid
ans+= b;
// add the revers
ans+=s;
return ans ;
}


string even(int i, int cols,char a,char b){
// the mid of the line     
int mid=cols/2;
// if the line in size 1
if (mid==0){
  string ans;
  ans=a;  
 return ans;
}    
string ans;
//add the first char 
ans = a;
// check who match ba we need to add 
int count = i/2;
// count the number of the char that i add
int co=1;
int j=0;
// add ba     
for(j=0; j<count; j++){
    ans+=b;
    co++;
    // if i didnt passed the mid
    if(co<mid){
    ans+=a;
    co++;}
}
int t=0;
// the numbers of char that i add until now
t = 1+j+j;
// add the The rest of the characters to the middle are less than one
for(int w=t;w<mid;w++){
   ans+=a; 
}
string s;
// revers the string in the ans
s = revers(ans);
// add the mid
ans+= a;
// add the revers
ans+=s;
return ans;
    
}

// check every row if she a odd or even
string select_a_row(int cols, int row,char a,char b){
string ans; 
// y is the numbers of rows,we will only go over the first half (without the middle)
int mid = row/2;
// count the rows
int i=0;
string g;
// As long as I did not pass the half
while (i<mid)
{
// if the row is odd (e)    
if ((i+1)%2==0){
    g= odd(i,cols,a,b); 
   ans+=g+'\n';
// if the row is even (z)   
 }else{ 
    g= even(i,cols,a,b); 
   ans+=g+'\n';
 }
 i++;  
}

 string s;
 //Copies in reverse what exists in the ans
 s=revers(ans);
 // add the mid row
 if (cols>=row){
  if((i%2)==0){
  g= even(i,cols,a,b); 
   ans+=g;
  }else{
  g= odd(i,cols,a,b); 
   ans+=g;   
  }
 }else{
  ans+=g;
 }
 // add the reverse 
  ans+=s;


 return ans;    
}

  
string mat(int cols, int row, char a, char b){
// check if the input is good, not even , and big from 0 
  if(cols%2==0 || row%2==0 || cols<1 || row<1 ||isprint(a)==0 || isprint (b)==0 || a== ' ' || b== ' '|| (int)cols!=cols || (int)row !=row ){
      throw invalid_argument ("invalid argument");
    // return "invalid argument";       
  }
   return select_a_row(cols,row,a,b);  
  
 
} 
}
