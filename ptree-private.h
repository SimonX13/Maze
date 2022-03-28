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
void Clear1(Node* subroot);
Node* Copy1(Node* otherRoot);
HSLAPixel average(PNG& image, pair<unsigned int, unsigned int> ul, unsigned int w, unsigned int h);
void deshelper(Node* root);
void Render1(PNG& im, Node *root) const;
void Prune1(double tolerance, Node *root);
bool checkPrune(double tolerance, Node *root, HSLAPixel avg);
int Size1(Node *root) const;
int NumLeaves1(Node *root) const;
void FlipHorizontal1(Node *root);
void FlipVertical1(Node *root); 
#endif