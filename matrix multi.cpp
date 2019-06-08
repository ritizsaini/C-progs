// Read matrices A, and B
for (i=0; i<m; i=i+1) {
for (j=0; j<p; j=j+1) {
C[i][j]=0;
for (k=0; k<n; k=k+1) {
C[i][j]=C[i][j] + A[i][k]*B[k][j];
}
}
}
// Output result matrix C