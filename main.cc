// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"hello"<<299<<endl;
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <iostream>
 
#include "http.h"
 
using namespace std;
 
int main(int argc, char *argv[])
{
  CurlHttp curl_http;
  string str_url = "https://www.baidu.com";  // 地址、端口号
  string str_test = "Hello World!";
 
  while (1) {
    cout << "Post data ...\n";
    
    string result;
    int res = curl_http.http_get(str_url.c_str(),&result);
    cout << "[Response]: " << result << '\n';
    
    sleep(1);
  }
  
  return 0;
}