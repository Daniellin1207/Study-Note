#include<iostream>
using namespace std;
// #include "Math/math_function.cc"

void print(){
  cout<<"hello daniel cpp"<<endl;
}

int max(int a,int b)
{
    return a>b?a:b;
}



int main(){
  cout<<"first input"<<endl;
  cout<<"second input"<<endl;
  cout<<"third input"<<endl;
  cout<<"fourth input"<<endl;
  int a=10;
  int b=2.7;
  cout<<"a: "<<a<<" b: "<<b<<endl;
  // cout<<"sum: "<<Add(a,b)<<endl;
  // cout<<"multi: "<<Multi(a,b)<<endl;
  return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include <time.h>
// #include <iostream>
// #include "http.h"
// using namespace std;
// int main(int argc, char *argv[])
// {
//   cout<<"hello\n";
//   cout<<"daniel\n";
//   CurlHttp curl_http;
//   string str_url = "https://www.baidu.com";  // 地址、端口号
//   string str_test = "Hello World!";
 
//   while (1) {
//     cout << "Post data ...\n";
//     string result;
//     int res = curl_http.http_get(str_url.c_str(),&result);
//     cout << "[Response]: " << result << '\n';
//     sleep(1);
//   }
  
//   return 0;
// }