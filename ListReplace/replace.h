void replace(const T& x, list<T>& y) {
    //write your code here
    auto it = begin();
    for(it; it!=end(); it++) {
        if(*it == x) {


            for(auto e : y) {
                insert(it, e);
            }
            it = erase(it);
            it--;
        }


    }

}
