#include <stdio.h>
#include <string.h>

int main() {
    char para[300];
    char search[100];
    int choice;

    printf("Enter a paragraph (max 300 characters):\n");
    fgets(para, sizeof(para), stdin);

    para[strcspn(para, "\n")] = '\0';

    printf("\nPress 0 to search for a word\n");
    printf("Press 1 to search for a sentence/substring\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();  

    if (choice == 0) {
        printf("Enter the word to search: ");
        scanf("%s", search);
    } else if (choice == 1) {
        printf("Enter the sentence/substring to search: ");
        fgets(search, sizeof(search), stdin);
        search[strcspn(search, "\n")] = '\0';
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    char *ptr = para;
    int found = 0;

    while ((ptr = strstr(ptr, search)) != NULL) {
        printf("Found at index: %ld\n", ptr - para);
        ptr++;
        found = 1;
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}