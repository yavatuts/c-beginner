#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* extract_characters(const char* input, int num_chars) {
    if (num_chars <= 0 || input == NULL) {
        return NULL;
    }

    int len = strlen(input);
    if (num_chars > len) {
        num_chars = len;
    }

    char* result = (char*)malloc((num_chars + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for(int i=0; i<num_chars; i++)
        result[i] = *input++;
    
    result[num_chars] = '\0';

    return result;
}

int main() {
    const char* original_string = "hello world!";
    int num_chars_to_extract = 5;

    char* extracted_string = extract_characters(original_string, num_chars_to_extract);

    if (extracted_string != NULL) {
        printf("Extracted String: %s\n", extracted_string);
        free(extracted_string);
    } else {
        printf("Failed to extract characters.\n");
    }

    return 0;
}