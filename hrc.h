/*!
 * @file hrc.h
 * Stuff for profiling C++11 code.
 * 
 * @author Rahul A. G.
 */

#include <chrono>

/* Usage:
 *
 * hrc::time start, end;
 *
 * start = hrc::now();
 * < code to profile >
 * end = hrc::now();
 *
 * cout << "It took " << hrc::span_ms(start, end) << " ms.";
 */

namespace hrc {

	typedef std::chrono::high_resolution_clock clock;
	typedef std::chrono::time_point<clock> time;

	inline time now()
	{
		return clock::now();
	}

	inline double span_ns(time start, time end)
	{
		return (double)std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
	}

	inline double span_us(time start, time end)
	{
		return (double)std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() / 1000;
	}

	inline double span_ms(time start, time end)
	{
		return (double)std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000;
	}

}
