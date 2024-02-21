#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    int i,j,k,l,t,countingTrue;
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        /*
        cin.ignore();
        cin.getline(password,101,'\n');
        scanf("%s",hash);
        */
        char password[101]={00},hash[101]={00};
        int numAlphabet[26]={0},numCompAlphabet[26]={0};
        scanf("%s%s",password,hash);
        if (strlen(hash)>=strlen(password))
        {
            countingTrue=0;
            for (j=0; j < strlen(password); j++)
            {
                numAlphabet[password[j]-'a']++;
            }
            for (j=0; j < strlen(password); j++)
            {
                numCompAlphabet[hash[j]-'a']++;
            }
            j=strlen(password),k=0;
            for (l=0;l<26;l++)
                {
                    if (numAlphabet[l]==numCompAlphabet[l])
                    {
                        countingTrue++;
                    }else{
                        break;
                    }
                }
            while (countingTrue<26 && j<strlen(hash))
            {   
                countingTrue=0;
                numCompAlphabet[hash[j]-'a']++;
                numCompAlphabet[hash[k]-'a']--;
                for (l=0;l<26;l++)
                {
                    if (numAlphabet[l]==numCompAlphabet[l])
                    {
                        countingTrue++;
                    }else{
                        break;
                    }
                }
                j++;
                k++;
            }
 
            if (countingTrue==26)
            {
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("NO\n");
        }
    }
}
