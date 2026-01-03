
   #include <stdio.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];

    
    scanf("%c", &ch);

    
    getchar(); 

    
    scanf("%s", s);

   
    getchar(); 
    
    fgets(sen, sizeof(sen), stdin);

    
    size_t len = strlen(sen);
    if(len > 0 && sen[len - 1] == '\n') {
        sen[len - 1] = '\0';
    }

    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}