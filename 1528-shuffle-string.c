#include <stdio.h>
#include <string.h>

char * restoreString(char * s, int* indices, int indicesSize){

    //It should be better to check indicesSize ..

    char result[indicesSize+1];
    for( int i=0; i<indicesSize; i++ ){
        result[indices[i]] = s[i];
    }
    result[indicesSize]='\0';
    s=result;
    return s;
}

int main()
{
    char input[] = "codeleet";
    size_t length = strlen(input); //get length wo '\0'
    int indices[] = {4,5,6,7,0,2,1,3};
    char *output;
    printf("%s\n",input);
    output = restoreString(input, indices, (int)length);
    printf("%s\n",output);
    return 0;
}
