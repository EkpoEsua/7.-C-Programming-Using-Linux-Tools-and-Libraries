#include <stdio.h>

int main(){
    int N, num;
    double total = 0.0;
    FILE *ifile;
    
    ifile = fopen("studentGrades.txt", "r");
    
    fscanf(ifile, "%d", &N);
    
    for( int i = 0; i < N; i++){
        fscanf(ifile, "%d", &num);
        total += num;
    }
    
    printf("%.2lf", total/N);

    fclose(ifile);
    
    return 0;
}