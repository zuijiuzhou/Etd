#pragma once

#include "etd_ge_export.h"

namespace etd
{
    namespace ge
    {
        class Vector3d;
        class Line3d;
        class Plane;
        class ETD_GE_EXPORT Point3d
        {
        public:
            Point3d();
            Point3d(double xx, double yy, double zz);

        public:
            double distanceTo(const Point3d &pt) const;
            double distanceTo(const Line3d &pt) const;
            double distanceTo(const Plane &pt) const;

            Vector3d toVector() const;
            const Vector3d &asVector() const;

        public:
            bool operator==(const Point3d &right) const;
            bool operator!=(const Point3d &right) const;
            Vector3d operator-(const Point3d &right) const;
            Point3d operator+(const Vector3d &right) const;
            Point3d &operator+=(const Vector3d &right);
            Point3d &operator-=(const Vector3d &right);

        public:
            double x;
            double y;
            double z;
        };
    }
}