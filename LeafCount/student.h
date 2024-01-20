#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count(node* n) {

    if(n->right == NULL and n->left == NULL)return 1;
    if(n->right != NULL and n->left == NULL)return leaves_count(n->right);
    if(n->right == NULL and n->left != NULL)return leaves_count(n->left);
    return leaves_count(n->right) + leaves_count(n->left);





}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count() {

  return leaves_count(mRoot);

  //write your code here
}


#endif
