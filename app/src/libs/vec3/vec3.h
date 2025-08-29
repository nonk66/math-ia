#ifndef VEC3_H
#define VEC3_H

class Vec3 {

    private:

        float x;
        float y;
        float z;
    
    public:

        Vec3(float x, float y, float z);

        float magnitude(const Vec3 v);

        friend dot(const Vec3& v1, const Vec3& v2);

        friend cross(const Vec3& v1, const Vec3& v2);

        friend Vec3 operator +(const Vec3& v1, const Vec3& v2);

        friend Vec3 operator -(const Vec3& v1, const Vec3& v2);

        friend Vec3 operator *(const Vec3& v, const float& s);

        friend Vec3 operator *(const float& s, const Vec3& v);

        friend Vec3 operator /(const Vec3& v, const float& s);

        friend Vec3 operator /(const float& s, const Vec3& v);

}

#endif