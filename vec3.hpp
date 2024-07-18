#ifndef VEC3_H
#define VEC3_H

#include <iostream>
class vec3 {

    public:
        vec3();

        vec3(double x, double y, double z);

        double x() const;

        double y() const;

        double z() const;

        double r() const;

        double r2() const;

        vec3 unit() const;

        vec3 operator-() const;

        vec3& operator+=(const vec3& otherVec);
        vec3& operator-=(const vec3& otherVec);
        
        vec3& operator*=(const double t);

        vec3& operator/=(const double t);


    private:

        double vals[3];

};

inline std::ostream& operator<<(std::ostream &out, const vec3 &vec);

inline vec3 operator+(const vec3 &u, const vec3 &v);
inline vec3 operator-(const vec3 &u, const vec3 &v);

inline vec3 operator/(const vec3 &u, const vec3 &v);
inline vec3 operator*(const vec3 &u, const vec3 &v);

inline double dot(const vec3 &u, const vec3 &v);
inline vec3 cross(const vec3 &u, const vec3 &v);

inline vec3 unit_vector(const vec3& vec);

#endif