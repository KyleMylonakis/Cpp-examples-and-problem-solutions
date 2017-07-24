// mpiSendReceive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mpi.h"
#include <iostream>

int main(int argc, char* argv[])
{
	MPI_Init(&argc, &argv);

	int worldRank;
	MPI_Comm_rank(MPI_COMM_WORLD, &worldRank);

	int worldSize;
	MPI_Comm_size(MPI_COMM_WORLD, &worldSize);

	int number;
	if (worldRank == 0)
	{
		number = -1;
		MPI_Send(&number, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
	}
	else if (worldRank == 1)
	{
		MPI_Recv(&number, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
		std::cout << "Process 1 received number " << number << " from process 0\n";
	}

	MPI_Finalize();

    return 0;
}

