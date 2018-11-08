package com.vgalloy.graal;

public class Main {

    public static void main(String[] args) {
        final int input = Integer.valueOf(args[0]);
        final long result = fibo(input);
        System.out.println("Result " + result);
    }

    private static long fibo(int rank) {
        if (rank == 1 | rank == 0) {
            return rank;
        }
        return fibo(rank - 1) + fibo(rank - 2);
    }
}
