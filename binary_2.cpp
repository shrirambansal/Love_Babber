
#include <bits/stdc++.h>

int lowerBound(vector<int>& arr, int n,int target)

{

    int low = 0;

    int high = n - 1;

    int ans = n;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] >= target)

        {

            ans = mid;

            high = mid - 1;;

                } 

        else 

        {

            low = mid + 1;

        }

    }

    return ans;

}

int upperBound(vector<int>& arr, int n,int target)

{

    int low = 0;

    int high = n - 1;

    int ans = n;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] > target)

        {

            ans = mid;

            high = mid - 1;;

        } 

        else 

        {

            low = mid + 1;

        }

    }

    return ans;

}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)

{

    int first = lowerBound(arr,n,k);

    if(first==n || arr[first]!=k)

    {

        return {-1,-1};

    }

    int last = upperBound(arr,n,k)-1;

    return {first,last};

}
