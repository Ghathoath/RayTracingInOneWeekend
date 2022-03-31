#ifndef RAYTRACING_HITTABLE_H
#define RAYTRACING_HITTABLE_H

#include "rtweekend.h"
#include "ray.h"

class material;

struct hit_record{
    point3 p;           // 交点
    vec3 normal;        // 法线
    shared_ptr<material> mat_ptr;
    double t;           // 距离
    bool front_face;

    inline void set_face_normal(const ray& r,const vec3& outward_normal) {
        front_face = dot(r.direction(),outward_normal) <0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class hittable{
public:
    virtual bool hit(const ray& r,double t_min,double t_max,hit_record& rec) const = 0;
};

#endif //RAYTRACING_HITTABLE_H
