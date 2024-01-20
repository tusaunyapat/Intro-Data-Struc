void shift(int k) {
	// TODO: Add your code here
    int n = mSize;
    k %= n;
    if(k < 0)
        k = (k+n) % n;
	auto it = mHeader->next;

	for(int i=0;i<k;i++){
        it = it->next;
	}
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;

	mHeader->next = it;
	mHeader->prev = it->prev;

	it->prev->next = mHeader;
	it->prev = mHeader;

}
