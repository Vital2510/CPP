//binarysearch

#include<iostream>
using namespace std;
int binarySearch(int a[], int n, int key){

    int s=0;
    int e=n-1;

    int mid = (s+e)/2;
    while(s<e){
        if