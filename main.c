# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <unistd.h>
# include <time.h>

void URLtoFile(){

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