#include<mpi.h>
#include<stdio.h>
int main(int argc,char* argv[]){
	int rank,size,i,provided;
	float A[10];
	//first line of mpi always
	MPI_Init_thread(&argc,%argv,MPI_THREAD_SINGLE,&provided);
	//gives how many no of processes
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	for(i=0;i<10;i++)
	A[i]=i*rank;
	printf("my rank is %d\n my size is %d",rank,size);
	for(i=0;i<10;i++){
		printf("%f",A[i]);
		
	}
	printf("\n");
	MPI_Finalize();
	
}
