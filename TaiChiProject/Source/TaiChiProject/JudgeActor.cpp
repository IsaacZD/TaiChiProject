// Fill out your copyright notice in the Description page of Project Settings.

#include "JudgeActor.h"

#define DTWMAXNUM 2000
#define DTWVERYBIG 1000.f

// Sets default values
AJudgeActor::AJudgeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AJudgeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

float AJudgeActor::DTWDistance(TArray<FVector> A, TArray<FVector> B, int r)
{

	int I = A.Num(), J = B.Num();
	if (I > DTWMAXNUM || J > DTWMAXNUM)
		return -1.0;

	int i, j;
	double dist;
	int istart, imax;
	int r2 = r + abs(I - J);
	double g0, g1, g2, g3;

	static double distan[DTWMAXNUM][DTWMAXNUM];

	for (i = 0; i < I; i++)
	{
		for (j = 0; j < J; j++)
		{
			distan[i][j] = DTWVERYBIG;
		}
	}

	//动态规划求最小距离
	//distan[0][0] = (double)2 * Euclidean(A,B,0,0);
	distan[0][0] = FVector::Dist(A[0], B[0]);
	for (i = 1; i <= r2; i++) {
		distan[i][0] = distan[i - 1][0] + FVector::Dist(A[i], B[0]);
	}
	for (j = 1; j <= r2; j++) {
		distan[0][j] = distan[0][j - 1] + FVector::Dist(A[0], B[j]);
	}

	for (j = 1; j < J; j++) {
		istart = j - r2;
		if (j <= r2)
			istart = 1;
		imax = j + r2;
		if (imax >= I)
			imax = I - 1;
		for (i = istart; i <= imax; i++) {
			g0 = FVector::Dist(A[i], B[j]);
			g1 = distan[i - 1][j] + g0;
			g2 = distan[i - 1][j - 1] + 2 * g0;
			g3 = distan[i][j - 1] + g0;
			g2 = fmin(g1, g2);
			g3 = fmin(g2, g3);
			distan[i][j] = g3;
		}
	}
	dist = distan[I - 1][J - 1] / ((double)(I + J));
	return float(dist);
}/*end DTWDistance*/