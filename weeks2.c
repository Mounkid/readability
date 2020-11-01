#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int K=1;
    int SN=0;
    int W=1;
    int C=0;
    float L=0;
    float S=0;
    float index=0;
    string text= get_string("Please to give me your text for evaluation:");
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((int)text[i]==32)
        {
           W+=1; 
        }
        if ((int)text[i]==39 || (int)text[i]==44 || (int)text[i]==45 || (int)text[i]==34)
        {
           C+=1; 
        }
        if ((int)text[i]==33 || (int)text[i]==46 || (int)text[i]==63)
          {
            SN+=1;
          }
   }
K=strlen(text)-SN-W-C;
L=K;
S=SN;
//}


printf("the number of word is %i:\n",W);
printf("the number of Sentence is %i:\n",SN);       
printf("the number of Letter is %i:\n",K); 
printf("the average number of Letter is %.1f:\n",L); 
index=0.0588*100*L/W-0.296*100*S/W -15.8;
if (index>16)
 {
 printf("This is your result: Grade 16+ .\n");  
 }
 else if(index<1) 
 {
  printf("This is your result: Before Grade 1 .\n");    
 } 
 else 
 {
printf("This is your GRADE %i\n", (int) round(index));
 }
}
