// #include <iostream>
// #include <cstring>
// using namespace std;
// void arr(char array[], int n){
//     for(int i = 0;i<n;i++){
//         if(array[i]>='a' && array[i]<='z'){
//             continue;
//         }
//         else{
//             array[i] = array[i]-'A'+'a';
//         }
//     }
// }
// int main(){
//     char arr1[] = "HeYh";
//     int n = strlen(arr1);
//     arr(arr1, n);
//     for(int i =0;i<n;i++){
//         cout<<arr1[i];
//     }
//     return 0;
// }
// #include <iostream>
// #include <cstring>
// using namespace std;
// void reverseString(char arr[], int n){
//     int st =0;
//     int end = n-1;
//     while(st<end){
//         swap(arr[st], arr[end]);
//         st++;
//         end--;
//     }
// }
// int main(){
//     char word[]="hello";
//     reverseString(word, strlen(word));
//     cout<<word;
//     return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;
bool str(char arr[], int n){
    int st =0;
    int end =n-1;
    while(st<end){
        if(arr[st]!=arr[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    char word1[]="racecar";
    char word2[]="huluuh";
    bool result =str(word1, strlen(word1));
    bool result1 =str(word2, strlen(word2));
    cout << result;
    cout<< result1;
    return 0;
}