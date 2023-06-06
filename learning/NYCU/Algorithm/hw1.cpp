#include <bits/stdc++.h>
using namespace std;

double distance(pair<double, double> a, pair<double, double> b){
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

bool cmp_x(pair<double, double> a, pair<double, double> b){
    return a.first < b.first;
}

bool cmp_y(pair<double, double> a, pair<double, double> b){
    return a.second < b.second;
}

double partition(vector<pair<double, double>> points){
    if(points.size() == 1) return 0xFFFFFF;
    if(points.size() == 2) return distance(points[0], points[1]);
    
    vector<pair<double, double>> left_part(points.size() / 2);
    vector<pair<double, double>> right_part(points.size() - left_part.size());
    for(size_t i = 0; i < left_part.size(); ++i){
        left_part[i] = points[i];
    }
    // cout << left_part.size() << endl;
        
    for(size_t i = 0; i < right_part.size(); ++i){
        right_part[i] = points[left_part.size() + i];
    }
    // cout << right_part.size() << endl;
        

    double d = min(partition(left_part), partition(right_part));
    // double x_sum = 0, x_middle;
    // for(size_t i = 0; i < points.size(); ++i){
    //     x_sum += points[i].first;
    // }
    // x_middle = x_sum / points.size();
    double x_middle = points[points.size() / 2].first;
    // cout << "x_middle: " << x_middle << endl;

    vector<pair<double, double>> select;
    for(size_t i = 0; i < points.size(); ++i){
        if(fabs(points[i].first - x_middle) <= d){
            select.push_back(points[i]);
        }
    }

    sort(select.begin(), select.end(), cmp_y);

    double d_min = d;
    for(size_t i = 0; i < select.size(); ++i){
        for(size_t j = i + 1; j < select.size() && j < i + 10; ++j){
        // for(size_t j = i + 1; j < select.size(); ++j){
            d_min = min(d_min, distance(select[i], select[j]));
        }
    }

    return d_min;
}

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<pair<double, double>> points(n);

        double x, y;
        while(n--){
            cin >> x >> y;
            points[n].first = x;
            points[n].second = y;
            // cout << points[n].first << " " << points[n].second << endl;
        }

        sort(points.begin(), points.end(), cmp_x);
        cout << fixed << setprecision(6) << partition(points) << endl;
    }
    return 0;
}