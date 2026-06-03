class Solution {
public:
    
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int n = position.size();
    vector<pair<int, double>> cars;  

    // Формуємо пари (позиція, час до фінішу)
    for (int i = 0; i < n; i++) {
        double time = (double)(target - position[i]) / speed[i];
        cars.push_back({position[i], time});
    }

    // Сортуємо машини за позицією у спадаючому порядку (від найдальшої)
    sort(cars.rbegin(), cars.rend());

    stack<double> stk;

    // Проходимо машини у порядку спадання позицій
    for (auto [pos, time] : cars) {
        if (stk.empty() || time > stk.top()) {
            stk.push(time);
        }
        // Інакше ця машина приєднується до флоту
    }

    return stk.size();
}

};
