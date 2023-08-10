#include <vector>

int height = -1;

void PrintTree(tree* T, std::vector<int>& height_vec){

    if(T == NULL){
        height = height - 1;
        return;
    }



    height = height + 1;

    height_vec.push_back(height);

    PrintTree(T->l, height_vec);
    height = height + 1;
    PrintTree(T->r, height_vec);
    height = height - 1;
}

int solution(tree * T) {

    int temp_height = 0;
    std::vector<int> height_vec; 

    PrintTree(T, height_vec);

    for(int height_num : height_vec){
        if(height_num > temp_height)
            temp_height = height_num;
    }

    return temp_height;
}