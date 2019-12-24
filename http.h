#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <curl/curl.h>
#include <curl/easy.h>
// 复制过来的代码需要将库包的include重新输入一遍
#include <string>
using namespace std;

class CurlHttp
{
  public:
    CurlHttp()
    {
        curl_global_init(CURL_GLOBAL_ALL);  
        curl = curl_easy_init();
    }
 
    ~CurlHttp()
    {
      curl_easy_cleanup(curl);
    }
 
    static int write_data(void *ptr, size_t size, size_t nmemb, string& data)  
    {
      data = string((char *)ptr);
      return 0;
    }
 
    int http_get(const char* url, string* result)
    {
      curl_easy_setopt(curl, CURLOPT_URL, url);  
      curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
      curl_easy_setopt(curl, CURLOPT_WRITEDATA, result);  
      return curl_easy_perform(curl);
    }
 
    int http_post(const char* url, const char* post_data, string* result)
    {
      curl_easy_setopt(curl, CURLOPT_URL, url);  
      curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data);
      curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);  
      curl_easy_setopt(curl, CURLOPT_WRITEDATA, result);  
      return curl_easy_perform(curl);
    }
 
  private:
    CURL *curl;
};