class Solution {
public:
	int countPrimes(int n) 
    {
		vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
        
		for (int i = 2; i * i <= n; i++) 
        {
			if (prime[i] == true) 
            {
				for (int j = i * i; j <= n; j += i) 
                {
					prime[j] = false;
				}
			}
		}
        
		//counting prime numbers
		int countPrime = 0;
		for (int i = 2; i < n; i++) 
        {
			if (prime[i] == true) 
            {
				countPrime++;
			}
		}
		return countPrime;
	}
};
//     bool is_prime(int n)
//     {
//         int count = 0;
        
//         for(int i = 1; i <= n/2; i++)
//         {
//             if(n % i == 0)
//             {
//                 count++;
//             }
//         }
//         if(count == 1)
//         {
//             return true;
//         }
//         return false;
//     }
    
//     int countPrimes(int n) 
//     {
//         int count = 0;
//         while(n != 0)
//         {
//             int temp = n-1;
//             if(is_prime(temp) == true)
//             {
//                 count++;
//             }
//             n--;
//         }
//         return count;
//     }
// };