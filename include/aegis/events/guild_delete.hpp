//
// guild_delete.hpp
// ****************
//
// Copyright (c) 2018 Sharon W (sharon at aegis dot gg)
//
// Distributed under the MIT License. (See accompanying file LICENSE)
//

#pragma once

#include "aegis/config.hpp"
#include "aegis/snowflake.hpp"
#include "base_event.hpp"
#include <string>
#include <vector>

namespace aegis
{

namespace gateway
{

namespace events
{

/**\todo Needs documentation
 */
struct guild_delete : public base_event
{
    snowflake guild_id; /**<\todo Needs documentation */
    bool unavailable; /**<\todo Needs documentation */
};

/**\todo Needs documentation
 */
inline void from_json(const nlohmann::json& j, guild_delete& m)
{
    m.guild_id = j["id"];
    m.unavailable = j["unavailable"];
}

}

}

}
