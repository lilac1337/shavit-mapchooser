#if defined _smc_included_
	#endinput
#endif
#define _smc_included_

/**
 * Called when a player RTV's.
 *
 * @param client					Client index.
 * @noreturn
 */
forward void SMC_OnRTV(int client);

/**
 * Called when a player UNRTV's.
 *
 * @param client					Client index.
 * @noreturn
 */
forward void SMC_OnUnRTV(int client);

/**
 * Called when the map changes from an RTV.
 *
 * @noreturn
 */
forward void SMC_OnSuccesfulRTV();

/**
 * Called when the map changes from an RTV.
 * @param teamname1					Value that mp_teamname1 will be set to.
 * @param teamname2					Value that mp_teamname2 will be set to.
 * @noreturn
 */
forward Action SMC_OnTeamNameChange(char teamName1[64], char teamName2[64]);

/**
 * Native used to get the nextmap set by the mapchooser
 * @param mapName					Buffer to store the next map.
 * @param mapLength					Maximum Length of the mapName buffer
 * @param id						Buffer to store the workshop id.
 * @param idLength					Maximum Length of the id buffer
 * @noreturn
 */
native void SMC_GetNextMap(char[] mapName, int mapLength, char[] id = "", int idLength = 0);

public SharedPlugin __pl_smc =
{
	name = "Workshop - MapChooser",
	file = "workshop-mapchooser.smx",
	#if defined REQUIRE_PLUGIN
	required = 0,
	#else
	required = 0,
	#endif
};