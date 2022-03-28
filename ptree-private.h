/*
*  File:        ptree-private.h
*  Description: Private functions for the PTree class
*  Date:        2022-03-06 03:30
*
*               DECLARE YOUR PTREE PRIVATE MEMBER FUNCTIONS HERE
*/

#ifndef _PTREE_PRIVATE_H_
#define _PTREE_PRIVATE_H_

/////////////////////////////////////////////////
// DEFINE YOUR PRIVATE MEMBER FUNCTIONS HERE
//
// Just write the function signatures.
//
// Example:
//
// Node* MyHelperFunction(int arg_a, bool arg_b);
//
/////////////////////////////////////////////////
void Clear(Node* subroot);
Node* copyhelper(Node* root);
Node* Copy2( Node* otherRoot);
HSLAPixel average(PNG& image, pair<unsigned int, unsigned int> ul, unsigned int w, unsigned int h);
void destoryhelper(Node* root);

int numLeaves(Node * root)const;
int size(Node* curroot) const;
bool prunable(double tolerance, Node * curroot, HSLAPixel avg);
void prune(double tolerance, Node* curroot);
void render(PNG& im, Node* root) const;
void flipHorizontal(Node * currroot) ;


#endif