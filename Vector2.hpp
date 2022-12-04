class Vector2 {

private:

  double _x, _y;

public:

  Vector2 () : _x (0), _y (0) {}

  Vector2 (double a, double b) : _x (a), _y (b) {}

  inline void Zero ();
  inline bool IsZero () const;
  inline double Length () const;
  inline double LengthSq () const;
  inline void Normalize ();
  inline double DotProduct (const Vector2& vector2) const;
  inline int Sign (const Vector2& vector2) const;
  inline Vector2 GetPerpendicular () const;
  inline void Truncate (double maxValue);
  inline double Distance (const Vector2& vector2) const;
  inline double DistanceSq (const Vector2& vector2) const;
  inline double GetReverse () const;

  const Vector2& operator += (const Vector2 &rhs);
  const Vector2& operator -= (const Vector2 &rhs);
  const Vector2& operator *= (const double &rhs);
  const Vector2& operator /= (const double &rhs);
  bool operator == (const Vector2& rhs);
  bool operator != (const Vector2& rhs);

};