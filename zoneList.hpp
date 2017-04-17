#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {}      	, {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_RED, 		SPAWN_XRAY,     {3,4,5}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {6}      	, {4}   	, 1      , {}        , 0    , "Msta" },

{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {7}  		, {3,5}    , 1      , {}        , 0    , "Valley Road" },

{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {8}      	, {4}  	, 1      , {}        , 0    , "Tulga" },

{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {9}      	, {7}   , 1      , {}        , 0    , "Outpost North" },

{ 7, TEAM_BLUE,	 	SPAWN_NEVER,    {9}			, {6,8}   , 1      , {}        , 0    , "Outpost Centre" },

{ 8, TEAM_BLUE, 	SPAWN_NEVER,    {9}      	, {7}    ,1      , {}		 , 0    , "Outpost South" },

{ 9, TEAM_BLUE, 	SPAWN_NEVER,  	{1}			, {}    , 1      , {}    	 , 0    , "Three Valleys Base" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {6,7,8}   	 , 3    , "Base Vehicles" }
};