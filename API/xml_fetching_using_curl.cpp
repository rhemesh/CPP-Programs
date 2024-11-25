#include<iostream>
#include<curl/curl.h>
#include<fstream>

#define XML_LINK ""
#define DES_PATH "C:\Users\hemes\OneDrive\Desktop\Start_preparing_for_new_job\Git\C++_Programs\API\output.txt"
using namespace std;

int main()
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

    if(curl)
    {
        curl_easy_setopt(curl,CURLOPT_URL,XML_LINK);

        FILE *fp = fopen(DES_PATH,"w");

        if(fp == NULL)
        {
            cout<<"file open failed"<<endl;
            curl_easy_cleanup(curl);
            return NULL;
        }

        curl_easy_setopt(curl,CURLOPT_WRITEDATA,fp);

        res = curl_easy_perform(curl);
        if(res != CURLE_OK)
        {
            cout<<"Xml file download failed"<<endl;
        }
        else{
            cout<<"xml file downloaded"<<endl;
        }
        fclose(fp);
        curl_easy_cleanup(curl);
    }
    else{
        cout<<"Failed to initialize curl"<<endl;
    }


}


