#include <stdio.h>
#include <stdlib.h>

int * createArr(int size) {
  int* p = (int*)calloc(size, sizeof(int));
  return p;
}
int** create(int n, int m) {
  int** ptr = (int**)calloc(n, sizeof(int*));
  for (int i = 0; i < n; ++i) {
    ptr[i] = (int*)calloc(m, sizeof(int));
  }
  return ptr;
}


void scan(int** ptr, int n, int m) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", (*(ptr + i) + j));
    }
  }
}
void print(int* p, int size) {
  for (int i = 0; i < size; ++i) {
      printf("%d", *(p + i));
    }
    printf("\n");
  }
void foo(int** ptr, int*p, int n, int m) {
  for (int i = 0; i < m; ++i) {
    int max = 0;
    for (int j = 0; j < n; ++j) {
      if (*(*(ptr + j) + i) > max) {
        max = *(*(ptr + j) + i);
      }
    }
    *(p + i) = max;
  }
}

void delete(int** ptr, int* p, int n) {
  for (int i = 0; i < n; ++i) {
    free(ptr[i]);
  }
  free(ptr);
  ptr = NULL;
  free(p);
  p = NULL;
}

int main() {
  int n, m;
  scanf("%d%d", &n,&m);
  int size = n;
  int* p = createArr(size);
  int** ptr = create( n,  m);
  
  scan(ptr, n,  m);
  foo(ptr, p,  n,  m);
  delete(ptr, p,  n);
  print( p,  size);
}