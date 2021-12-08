#include <string>

class MerkleNode{
    public:

    MerkleNode(){};
    ~MerkleNode(){};

    // Syncronize / Balance
    void Synctree(MerkleNode *root);

    // Insert 
    void Insertnode(MerkleNode *addme);

    // Delete 
    void Deletenode(MerkleNode *removeme);

    // Check size
    int Returnsize(){return size;};

    private:

    // Size counter for the tree
    int size;

    // Data and hash 
    
    std::string Data;
    std::string Keyhash;

    // Point to parent
    MerkleNode *Parent;
    // Pointer to children left and right
    MerkleNode *ChildL;
    MerkleNode *ChildR;
};


int main(){

    MerkleNode *j;

    return 0;
}