# Contractions
BT, BST

# Glosary
Leaf node, node, root, heigh, left, binary tree, binary search tree, right, full BT, complete BT, perfect BT, infinite complete BT, balanced BT, degenerate BT, loop, parent node, child node, edge, traverse.

for (( i=1; i<=$1; i++))
do
        echo "Automatic commit $i" >> README.md &
        wait $!
        git add README.md &
        wait $!
        git commit -m "Automatic commit $i" &
        wait $!
        git push &
        wait $!
        echo "Commit $i done"
        sleep 10
done

