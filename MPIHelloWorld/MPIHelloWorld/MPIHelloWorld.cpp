// MPIHelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mpi.h"
#include <iostream>
//#include <string>

int main(int argc, char* argv[])
{
	MPI_Init(NULL, NULL);

	int worldSize;
	MPI_Comm_size(MPI_COMM_WORLD, &worldSize);

	int worldRank;
	MPI_Comm_rank(MPI_COMM_WORLD, &worldRank);

	char procesorName[MPI_MAX_PROCESSOR_NAME];
	int nameLength;
	MPI_Get_processor_name(procesorName, &nameLength);

	std::cout << "Hello world from processor " << procesorName << ", rank " << worldRank << " of " << worldSize << " processors \n";

	MPI_Finalize();

	
}

