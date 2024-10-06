# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <unistd.h>
# include <regex.h>

void URLtoFile(){
    regex_t rx; //var to create regex
    int status; // to store value if regex compile was successfull or not

    char inputURL[100];

    status = regcomp(&rx, "^((https?://)?[[:alnum:]]+[.]+com|((https?://)?[[:alnum:]]+[.]+com/|[.]/)?[[:alnum:]]+(/?[[:alnum:]]+)*([/]|[.]html))$", 0);
    if (status == 0){
        printf("Regex compile success\n");
    } else {
        printf("Regex compile no good\n");
    }

    printf("Enter URL to retrieve information\n");
    scanf("%s", &inputURL);
    printf("%s\n", inputURL);

    status = regexec(&rx, &inputURL, 0, NULL, 0); //does the comparison to check for valid URL that ends with html
    if (status == 0){
        printf("Regex matches URL\n");
    } else {
        printf("Regex no match with URL\n");
    }
}

int main(){
    int option = 9;

    while (option != 2){
        printf("Enter '1' to input URL.\nEnter '2' to quit.\n");
        scanf("%d", &option);

        if (option == 1){
            URLtoFile();
        } else if (option == 2) {
            break;
        } else {
            printf("\nThat was not a valid option.\n");
        }
        
        
    }
    
    return 0;
}