//This function will return true if the little trees are the same
bool subTreeOf( Node * t, Node * s){

    if((t == NULL) && (s == NULL)){
        return true;
    }
    if (t == NULL || s == NULL) {
        return false;
    }
    if(( t->value) != (s -> value )){
        return false;
    }
    else{
        return subTreeOf(t -> left, s ->left) && subTreeOf(t ->right, s ->right);
    }
}
