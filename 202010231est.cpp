class RandomizedCollection {
public:
    mutable mt19937 _re;
    unordered_multimap<int, int> _map;
    vector<unordered_multimap<int, int>::iterator> _vec;

    /** Initialize your data structure here. */
    RandomizedCollection() : _re(random_device()()) {}

    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) {
        bool ret = _map.find(val) == _map.end();
        _vec.push_back(_map.insert({ val,_vec.size() }));
        return ret;
    }

    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        const auto it = _map.find(val);
        if (it == _map.end()) return false;
        _vec.back()->second = it->second;
        _vec[it->second] = _vec.back();
        _vec.pop_back();
        _map.erase(it);
        return true;
    }

    /** Get a random element from the collection. */
    int getRandom() const {
        uniform_int_distribution<int>
            ud(0, _vec.size() - 1);
        return _vec[ud(_re)]->first;
    }
};
