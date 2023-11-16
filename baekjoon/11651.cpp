//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Coord {
//    public:
//    int x;
//    int y;
//    Coord(int x_, int y_) {
//        x = x_;
//        y = y_;
//    }
//};
//
//bool compare(Coord a, Coord b) {
//    if(a.y == b.y) return (a.x < b.x) ;
//    return (a.y < b.y) ;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N;
//    vector<Coord> coords;
//    cin >> N;
//    for(int i = 0; i < N; i++) {
//        int x, y;
//        cin >> x >> y;
//        coords.push_back(Coord(x, y));
//    }
//    sort(coords.begin(), coords.end(), compare);
//    for(auto c : coords) {
//        cout << c.x << " " << c.y << "\n";
//    }
//}