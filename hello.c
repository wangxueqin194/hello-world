#include<stdio.h>
#include<curl/curl.h>

int main(void)
{
CURL *curl;
CURLcode res;

curl=curl_easy_init();
if(curl){
curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
res=curl_easy_perform(curl);
if(res!=CURL_OK)
fprintf(stderr,"curl_easy_perform() failed:%s\n",curl_easy_strerror(res));
curl_easy_cleanuo(curl);
}
return 0;
}
