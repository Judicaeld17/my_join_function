
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include<string.h>
#include<stdlib.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* str_arr, char* sep)
{
    if(str_arr->size==0){
        return 0;
    }
    int len = str_arr->size;
    int arr_char_len;
    for(int j=0;j<len;j++){
        arr_char_len = arr_char_len + strlen(str_arr->array[j]);
    }
    int t_arr_char_len= arr_char_len+ (len-1)*strlen(sep);
    char* r_str=(char*)malloc(t_arr_char_len*sizeof(char));
    for(int i =0; i<len;i++){
        strcat(r_str,str_arr->array[i]);
        if(i!=len-1){
            strcat(r_str,sep);
        }
    }
    return r_str;

}