#include <iostream>
#include <vector>

// vectorからindex番目の要素を削除する
template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}

int main()
{
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::cout << v[0] << v[1] << v[2] << std::endl;
    // "123"が出力される

    remove(v, 1);
    std::cout << v[0] << v[1] << std::endl;
    // "13"が出力される

    return 0;
}
