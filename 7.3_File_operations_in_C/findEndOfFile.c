#include <stdio.h>

int main(){
    FILE *file;

    double myStudents, otherStudents;
    int best = 1;
    int count = 1;

    file = fopen("gradeComparison.txt", "r");

    fscanf(file, "%lf", &myStudents);

    while ((fscanf(file, "%lf", &otherStudents) != EOF)){
        count += 1;
        if (myStudents < otherStudents) best = 0;
    }

    if (best) printf("Yes");
    else printf("No %d", count);

    fclose(file);

    return 0;
}