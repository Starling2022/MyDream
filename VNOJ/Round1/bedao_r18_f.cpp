//EXAM SOLVE
#include <bits/stdc++.h>

using namespace std;

class Point {
    private:
        int x, y, idx;

    public:
        Point() {}
        Point(int x, int y) : x(x), y(y) {}
        Point(int x, int y, int idx) : x(x), y(y), idx(idx) {}

        int getX() const { return x; }
        int getY() const { return y; }
        int getIdx() const { return idx; }

        bool operator<(const Point &pt) const {
            if (x == pt.x) return y < pt.y;
            return x < pt.x;
        }
};

class Vector {
    private:
        Point start, end;

    public:
        Vector() {}
        Vector(Point start, Point end) : start(start), end(end) {}

        Point getStart() const { return start; }
        Point getEnd() const { return end; }

        long long getCCW(Point pt) {
            long long x1 = start.getX(), y1 = start.getY();
            long long x2 = end.getX(), y2 = end.getY();
            long long x3 = pt.getX(), y3 = pt.getY();

            long long ccw = (x1*y2 + x2*y3 + x3*y1) - (y1*x2 + y2*x3 + y3*x1);
            return ccw;
        }

        int getDirection(Point pt) {
            long long ccw = getCCW(pt);
            if (ccw > 0) return 1;
            else if (ccw < 0) return -1;
            else return 0;
        }
};

class Triangle {
    private:
        Point a, b, c;

    public:
        Triangle() {}
        Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

        long long getArea() {
            return abs(Vector(a, b).getCCW(c));
        }

        bool isInside(Point pt) {
            long long area1 = Triangle(a, b, pt).getArea();
            long long area2 = Triangle(b, c, pt).getArea();
            long long area3 = Triangle(c, a, pt).getArea();
            long long areaTotal = getArea();

            return (area1 + area2 + area3 == areaTotal);
        }
};

vector<Point> getConvexHull(vector<Point> points) {
    sort(points.begin(), points.end());

    vector<Point> upper;
    for (int i = 0; i < points.size(); ++i) {
        if (i == 0 || i == (int)points.size() - 1 
            || Vector(points[0], points.back()).getDirection(points[i]) > 0) {
                while (upper.size() >= 2 && Vector(upper[upper.size() - 2], upper.back()).getDirection(points[i]) >= 0) {
                    upper.pop_back();
                }

                upper.push_back(points[i]);
            }
    }

    vector<Point> lower;
    for (int i = 0; i < points.size(); ++i) {
        if (i == 0 || i == (int)points.size() - 1 
            || Vector(points[0], points.back()).getDirection(points[i]) < 0) {
                while (lower.size() >= 2 && Vector(lower[lower.size() - 2], lower.back()).getDirection(points[i]) <= 0) {
                    lower.pop_back();
                }

                lower.push_back(points[i]);
            }
    }

    vector<Point> hull;
    for (int i = 0; i < upper.size(); ++i) hull.push_back(upper[i]);
    for (int i = (int) lower.size() - 2; i > 0; --i) hull.push_back(lower[i]);

    return hull;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<Point> stakes(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        stakes[i] = Point(x, y, i);
    }

    int m; cin >> m;
    vector<Point> carrots(m);
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        carrots[i] = Point(x, y);
    }

    vector<vector<int> > ans(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0 ; j < n; ++j) {
            if (i == j) continue;

            Triangle triangle(stakes[i], stakes[j], Point(0, 0));
            for (int k = 0; k < m; ++k)
                if (triangle.isInside(carrots[k])) ++ans[i][j];
        }

    int q; cin >> q;
    while (q--) {
        int k; cin >> k;
        vector<Point> chosedStakes(k);
        for (int i = 0; i < k; ++i) {
            int x; cin >> x;
            chosedStakes[i] = stakes[x-1];
        }

        vector<Point> hull = getConvexHull(chosedStakes);
        int hullSize = hull.size();

        int res = 0;
        for (int i = 0; i < hullSize; ++i) {
            int j = (i+1) % hullSize;
            res += ans[hull[i].getIdx()][hull[j].getIdx()] * Vector(hull[i], hull[j]).getDirection(Point(0, 0));
        }

        cout << abs(res) <<'\n';
    }

    return 0;
}
