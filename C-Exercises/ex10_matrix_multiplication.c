// matrix multiplication
#include<stdio.h>
#include<stdlib.h> // for calloc()

typedef struct Matrix{
	int **matrix;
	int rows;
	int columns;
} Matrix;

Matrix* getMatrix(int, int);
void inputMatrix(Matrix*);
Matrix* multiplyMatrix(Matrix*, Matrix*);
void displayMatrix(Matrix*);
void freeMatrix(Matrix*);

int main() {
	int r1, c1; // rows column
	printf("Enter rows & columns of first matrix\n");
	scanf("%d%d", &r1, &c1);
	int r2, c2;
	printf("Entee rows & columns for second matrix\n");
	scanf("%d%d", &r2, &c2);

	if (c1 != r2) {
		printf("Matrix can't be multiplied\n");
		return -1;
	}

	printf("Enter Matrix 1 Values:\n");
	Matrix *A = getMatrix(r1, c1);
	if (A == NULL) {
		return -1;
	}
	inputMatrix(A);

	printf("Enter Matrix 2 Values:\n");
	Matrix *B = getMatrix(r2, c2);
	if (B == NULL) {
		return -1;
	}
	inputMatrix(B);

	Matrix *C = multiplyMatrix(A, B);
	if ( C == NULL ) {
		return -1;
	}

	displayMatrix(C);

	freeMatrix(A);
	freeMatrix(B);
	freeMatrix(C);

	return 0;
}

Matrix* getMatrix(int r, int c) {
	int **rows = calloc(r, sizeof (int *));
	if ( rows == NULL) {
		printf("cant allcoate rows\n");
		return NULL;
	}
	for (int i = 0; i < r; i++) {
		int *columns = calloc(c, sizeof (int));
		if (columns == NULL) {
			printf("cant allocate columns\n");
			return NULL;
		}
		rows[i] = columns;
	}


	Matrix *m = malloc( sizeof (Matrix) );
	m->matrix = rows;
	m->rows = r;
	m->columns = c;

	return m;
}

void inputMatrix(Matrix *m) {
	int **rows = m->matrix;
	int r = m->rows;
	int c = m->columns;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &rows[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

Matrix* multiplyMatrix(Matrix *A, Matrix *B) {
	int r1 = A->rows;
	int c1 = A->columns;
	int c2 = B->columns;

	int **matrixA = A->matrix;
	int **matrixB = B->matrix;
	Matrix *C = getMatrix(r1, c2);
	int **matrixC = C->matrix;

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			for (int k = 0; k < c1; k++) {
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}

	return C;
				
}

void displayMatrix(Matrix *m) {
	int r = m->rows;
	int c = m->columns;
	int **rows = m->matrix;
	printf("\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d\t", rows[i][j]);
		}
		printf("\n");
	}
}

void freeMatrix(Matrix *m) {
	int r = m->rows;
	int **rows = m->matrix;
	for (int i = 0; i < r; i++) {
		free(rows[i]);
	}
	free(rows);
}
