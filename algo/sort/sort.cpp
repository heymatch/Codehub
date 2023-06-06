#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr){
    for(int i = 0; i < arr.size(); ++i){
        int min = arr[i], min_idx = i;
        for(int j = i+1; j < arr.size(); ++j){
            if(arr[j] < min){
                min = arr[j];
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

// void insertion_sort(vector<int> &arr){
//     for(int i = 1; i < arr.size(); ++i){
//         for(int j = i; j >= 0; --j){
//             if(arr[i] < arr[j]){
                
//             }
//         }
//     }
// }

void bubble_sort(vector<int> &arr){
    for(int i = 0; i < arr.size(); ++i){
        for(int j = 0; j < arr.size() - i; ++j){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

void merge_sort(vector<int> &arr){
    if(arr.size() == 0 || arr.size() == 1) return;
    if(arr.size() == 2){
        if(arr[1] < arr[0]) swap(arr[1], arr[0]);
        return;
    }

    vector<int> left_part(arr.size() / 2), right_part(arr.size() - left_part.size());
    for(int i = 0; i < left_part.size(); ++i)
        left_part[i] = arr[i];
    for(int i = 0; i < right_part.size(); ++i)
        right_part[i] = arr[left_part.size()+i];
    
    merge_sort(left_part);
    merge_sort(right_part);

    int max_item = max(left_part[left_part.size()-1], right_part[right_part.size()-1]) + 1;
    left_part.push_back(max_item);
    right_part.push_back(max_item);

    int l = 0, r = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(left_part[l] < right_part[r]){
            arr[i] = left_part[l++];
        }
        else{
            arr[i] = right_part[r++];
        }
    }
}

void counting_sort(vector<int> &arr){
    int max_value = 0;
    for(int i = 0; i < arr.size(); ++i){
        max_value = max(max_value, arr[i]);
    }

    vector<int> counting(max_value+5);
    for(int i = 0; i < arr.size(); ++i){
        counting[arr[i]] += 1;
    }

    int j = 0;
    for(int i = 0; i < counting.size(); ++i){
        while(counting[i]--){
            arr[j++] = i;
        }
    }
}

void heap_sort(vector<int> &arr){
    vector<int> heap(1);

    // build min heap
    for(int i = 0; i < arr.size(); ++i){
        heap.push_back(arr[i]);
        int j = heap.size() - 1;
        while(j && j / 2){
            if(heap[j] < heap[j/2]){
                swap(heap[j], heap[j/2]);
                j /= 2;
            }
            else break;
        }
    }

    // sort
    for(int i = 0; i < arr.size(); ++i){
        arr[i] = heap[1];

        swap(heap[1], heap[heap.size()-1]);
        heap.pop_back();
        int j = 1;
        while((j*2 < heap.size() && heap[j] > heap[j*2]) || (j*2+1 < heap.size() && heap[j] > heap[j*2+1])){
            if(j*2 < heap.size() && j*2+1 < heap.size()){
                if(heap[j*2] < heap[j*2+1]){
                    swap(heap[j], heap[j*2]);
                    j = j*2;
                }
                else{
                    swap(heap[j], heap[j*2+1]);
                    j = j*2+1;
                }
            }
            else if(j*2 < heap.size()){
                swap(heap[j], heap[j*2]);
                j = j*2;
            }
            else{
                swap(heap[j], heap[j*2+1]);
                j = j*2+1;
            }
            
        }
    }

}

void radix_sort(vector<int> &arr){
    int base = 16;
    int digit = 7;

    for(int d = 0; d < digit; ++d){
        vector<vector<int>> counting(base);
        for(int i = 0; i < arr.size(); ++i){
            counting[(arr[i] >> (d * 4)) % base].push_back(arr[i]);
        }
        int i = 0;
        for(int b = 0; b < base; ++b){
            for(int j = 0; j < counting[b].size(); ++j){
                arr[i] = counting[b][j];
                ++i;
            }
        }
    }
}

int main(){
    vector<int> arr;
    
    int N; cin >> N;
    arr.reserve(N);
    while(N--){
        int i; cin >> i;
        arr.push_back(i);
    }

    // for(int i = 0; i < unsorted_arr.size(); ++i){
    //     cout << unsorted_arr[i] << " ";
    // }
    // cout << endl;

    // merge_sort(arr);
    // selection_sort(arr);
    // bubble_sort(unsorted_arr);
    // counting_sort(arr);
    heap_sort(arr);
    // radix_sort(arr);

    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}