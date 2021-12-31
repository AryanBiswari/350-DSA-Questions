// int aptr = 0;
//     int bptr = 0;
//     int maxi = 0;

//     unordered_set<char>set;
//     while(bptr < s.length())
//     {
//         if(set.find(s[bptr]) == set.end())
//         {
//             set.insert(s[bptr]);
//             bptr++;
//             maxi = max(maxi, set.size());
//         }
//         else
//         {
//             set.erase(s[aptr]);
//             aptr++;
//         }
        
//     }
//     return maxi;