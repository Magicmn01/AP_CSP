//AP silliy sentences
#include <stdio.h> 
#include <string.h>
int main(){
    char adjective[100];
    char noun[100];
    char adverb[100];
    char another_AD[100];
    char another_noun[100];
    char verb[100];
    char space[] = " ";

    strcat(adjective, space);
    strcat(adverb, space);
    strcat(another_AD, space);

    printf("can you give me a adjective? \n");
    scanf("%s", &adjective);
    
    printf("can you give me a noun?\n");
    scanf("%s", &noun);
     
    printf("can you give me a verb in past tense?\n");
    scanf("%s", &verb);
    
    printf("can you give me a adverb?\n");
    scanf("%s", &adverb);
    
    printf("can you give me another adjective?\n");
    scanf("%s", &another_AD);
    
    printf("can you give me another noun?\n");
    scanf("%s", &another_noun);


    






}