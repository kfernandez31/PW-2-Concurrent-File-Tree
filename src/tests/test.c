#include "sequential_small.h"
#include "sequential_big_random.h"
#include "valid_path.h"
#include "deadlock.h"
#include "concurrent_same_as_some_sequential.h"
#include "liveness.h"

#include <stdio.h>

#define RUN_TEST(f) \
	fprintf(stderr, "Running test " #f "...\n"); \
	f()

int main() {
	fprintf(stderr, "Each test/subtest should run in less than 1 second.\n");
/*	sequential_small();
    valid_path();*/
    sequential_big_random();
//	deadlock();
//	concurrent_same_as_some_sequential();
//	liveness();
}