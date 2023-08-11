// O(N)

std::string solution(std::string &S) {
    
    std::string::const_iterator it = S.begin();
    char ch = *(it+1);

    while(it != S.end()){

        if(*it == ch){

            S.erase(it);
            S.erase(it);

            if(it != S.begin()){
                it = it-1;
            }

        }
        else{
            it = it + 1;
        }
        ch = *(it+1);

    }

    return S;
}