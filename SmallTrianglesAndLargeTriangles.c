#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
  int c;
};

typedef struct triangle triangle;
double calculate_area(triangle tr) { //for calculating the area of a triangle instance
    double pVal = (tr.a+tr.b+tr.c)/2.0;
    double diff1 = (pVal-tr.a);
    double diff2 = (pVal-tr.b);
    double diff3 = (pVal-tr.c);
    return sqrt(pVal*(diff1)*(diff2)*(diff3));
}

void sort_by_area(triangle* tr, int n) {
    triangle t;
    int k = 0;
    int l = 0;
    for (k=0; k<n; k++) { //go through the triangle array starting at 0th index
        for (l=(k+1); l<n; l++) { //go through the triangle array starting at (k+1)th index
            if(k!=l){ //no need to check same triangle instances
                double a1 = calculate_area(tr[k]); //calculate area of a triangle instance
                double a2 = calculate_area(tr[l]); // calculate area of an another triangle instance
                if (a1>a2) { //if the area of the prior triangle instance is bigger
                  
                         t = tr[k]; //do swap operation
                         tr[k] = tr[l];
                         tr[l] = t;
                }
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}