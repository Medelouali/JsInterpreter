#pragma once
#include <variant>
#include <string>
#include "../../node/node.h"

typedef std::variant< js::array<mixed>*, js::boolean*, js::number*, js::object<mixed>*, 
        js::string*, js::tuple<mixed>* > any;

any formatter(const std::string& type, const std::string& token);