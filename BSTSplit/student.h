#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
    //your code here
    CP::map_bst<KeyT,MappedT,CompareT> result;
    int currentTree=0;
    node* ptr = mRoot;
    node* parentleft = NULL;
    node* parentright = NULL;

    while(ptr!= NULL) {
        if(currentTree == 0) {
            if(compare(val, ptr->data.first) <= 0) {
                parentleft = ptr->parent;
                child_link( parentleft, val ) = NULL;
                result.child_link(parentright, val) = ptr;
                ptr->parent = parentright;
                ptr = ptr->left;
                currentTree = 1;

            } else {
                ptr = ptr->right;
            }
        } else {
            if(compare(val, ptr->data.first) > 0) {
                    parentright = ptr->parent;
                if(parentright != NULL)parentright->left = NULL;
                child_link( parentleft, val ) = ptr;

                ptr->parent = parentleft;
                ptr = ptr->right;
                currentTree = 0;

            } else {
                ptr = ptr->left;
            }
        }
    }




    return result;
}

#endif
