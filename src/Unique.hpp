#ifndef UNIQUE_HEADER_GUARD
#define UNIQUE_HEADER_GUARD
template <typename T, typename V> struct Unique
{
	V value;
	Unique(const V& value = V())
	:value(value)
	{}
	operator V() const
	{
		return value;
	}
};

//The marker encoding struct represents a marker segregation pattern, encoded as a bitfield.
struct markerEncoding_imp;
typedef Unique<markerEncoding_imp, int> markerEncoding;

//The marker pattern ID struct represents a unique identifier, assigned to a particular marker encoding.
struct markerPatternID_imp;
typedef Unique<markerPatternID_imp, int> markerPatternID;

//The funnel encoding struct represents a particular funnel, encoded as a bitfield
struct funnelEncoding_imp;
typedef Unique<funnelEncoding_imp, int> funnelEncoding;

//The funnel ID struct representse a unique identifier, assigned to a particular funnel encoding
struct funnelID_imp;
typedef Unique<funnelID_imp, int> funnelID;
#endif