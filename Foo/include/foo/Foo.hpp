#pragma once

#if defined(_MSC_VER)
#define GLOG_NO_ABBREVIATED_SEVERITIES
#endif

#include <glog/logging.h>

namespace foo {
  void hello();

	class Foo {
		public:
			void operator()() const;
	};
}

