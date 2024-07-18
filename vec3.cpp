#include "vec3.hpp"
#include <cmath>

vec3::vec3() : vals{0, 0, 0} {};
vec3::vec3(double x, double y, double z) : vals{x, y, z} {};

double vec3::x() const {
    return vals[0];
}

double vec3::y() const {
    return vals[1];
}

double vec3::z() const {
    return vals[2];
}

double vec3::r() const {
    return std::sqrt(vec3::r2());
}

double vec3::r2() const {
    return (vals[0]*vals[0] + vals[1]*vals[1] + vals[2]*vals[2]);
}

vec3 vec3::operator-() const {
    return vec3(-vals[0], -vals[1], -vals[2]);
}

vec3& vec3::operator+=(const vec3& otherVec) {
    this->vals[0] += otherVec.vals[0];
    this->vals[1] += otherVec.vals[1];
    this->vals[2] += otherVec.vals[2];
    return *this;
}

vec3& vec3::operator-=(const vec3& otherVec) {
    *this += -otherVec;
    return *this;
}

vec3& vec3::operator*=(const double t) {
    this->vals[0] *= t;
    this->vals[1] *= t;
    this->vals[2] *= t;
    return *this;
}

vec3& vec3::operator/=(const double t) {
    *this *= 1.0/t;
    return *this;
}

inline std::ostream& operator<<(std::ostream &out, const vec3 &vec) {
    return out << vec.x() << ' ' << vec.y() << ' ' << vec.z();
}

inline vec3 operator+(const vec3 &u, const vec3 &v) {
    return vec3(u.x() + v.x(), u.y() + v.y(), u.z() + v.z());
}

inline vec3 operator-(const vec3 &u, const vec3 &v) {
    return vec3(u.x() - v.x(), u.y() - v.y(), u.z() - v.z());
}

// Geometric product
inline vec3 operator*(const vec3 &u, const vec3 &v) {
    return vec3(u.x() * v.x(), u.y() * v.y(), u.z() * v.z());
}

inline vec3 operator*(const vec3 &u, double t) {
    return vec3(u.x() * t, u.y() * t, u.z() * t);
}

inline vec3 operator*(double t, const vec3 &u) {
    return u * t;
}


inline vec3 operator/(const vec3& u, double t) {
    return u * (1.0/t);
}

inline double dot(const vec3 &u, const vec3 &v) {
    return u.x() * v.x() + u.y() * v.y() + u.z() * v.z();
}

inline vec3 cross(const vec3 &u, const vec3 &v) {
    return vec3(u.y() * v.z() - u.z() * v.y(), u.z() * v.x() - u.x() * v.z(), u.x() * v.y() - u.y() * v.x());
}

inline vec3 unit_vector(const vec3& vec) {
    return (vec / vec.r());
}