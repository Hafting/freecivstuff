=================================
hh ruleset, based on Civ2Civ3 Ruleset for Freeciv v3.1
=================================
This ruleset is made for using extra terrrain types:
Savanna, arctic hills, forested hills, jungle hills, tundra hills,
desert hills and volcanoes.  The extra hill types allow more realistic
maps. A long hill don't need to end merely because it runs into a
desert or glacier area.  The volcanoes look nice, and
present a difficulty by not allowing roads.

The terrain may have big rivers. Unlike normal rivers, the big rivers
lets ships move on them.

Except for extra terrain, these rules are a copy of civ2civ3.
Remaining text from README.civ2civ3 describes the game:

OBJECTIVES:
-----------

- The main purpose is to get a gameplay more similar to civ3, keeping
  civ2 rules as reference.

- It tries to improve balance, reduce micromanagement, avoid
  counter-intuitive gameplay or hidden tricks, simplify the rules, and
  make it a bit more realistic, while keeping as many viable strategies
  as possible.

- Don't be afraid by the amount of changes, I think this ruleset is
  easier to learn than classic/civ2 rules, and it is designed so there is
  not a big disadvantage when you do not play optimally. I hope both
  rookies and experienced players can enjoy it.

- Rules that allowed a sudden boost were removed or redesigned. The
  result should be a simpler and more linear development of your cities,
  and a slower paced gameplay; with governments that keep a similar
  balance along the different ages; and smoother differences between
  terrains, units, buildings or wonders.

- All the new rules have been adapted so AI can play with them, and to
  avoid possible exploits by human players.

I wish to keep it updated and to improve it with the comments from the
players.


INFO:
-----

- Help texts have been updated (mainly buildings and wonders), so the
  info showed ingame already takes into account the changed rules. Some
  graphical tables from the manual might not match (mainly terrains and
  governments), so better use the tables in this Readme as reference.

- I suggest new players to start a game with 6 players or so, AI skill
  level Normal, and default ruleset options (small continental map with
  100 land tiles per player).

- For challenging games, you may place several AI players in the same
  team. For example, one team with 5 AIs together against you.

- Cheating AI level was adjusted for these rules, I suggest experienced
  players to use it (better than Hard AI). The "AI Love" effect reduces
  the amount of wars between the AIs, even when they are not in the same
  team, making them more hostile against the human players (or against
  other non cheating AIs).

CHEATING AI: +40% Science, Luxury, Gold and Production, +40 AI love,
  +40% Veteran chance, +40% Bribe and Incite costs, -20% Pollution, +1
  Content per city, no food penalty from units.

The following is a full list of changes compared to classic ruleset
(although it should be playable without reading it)...


CORE CHANGES:
-------------

- No Rapture Growth (celebration only causes additional Trade per tile,
  same as civ3). Foodbox readjusted to keep a constant city growth.

- Settlers cost 2 population (as in civ3). This way, the number of tiles
  worked in the original city are reduced by 2, equal to the number of
  tiles worked in the newly created city.

- Disabled national trade routes: it is still possible to create trade
  routes, but only to foreign cities that you are not at war with (trade
  routes are canceled when war breaks out). Each city can support a
  maximum of 2 trade routes. Removed the one time revenues, and reduced
  the ongoing revenues.

- Every unit (except Settlers, Migrants, and Fanatics, which cost
  population to build) pays some kind of upkeep cost. Some governments
  pay shields as upkeep, and others pay coins (similar to civ3), but not
  both.

- Most units also require upkeep in Food, except for Workers/Engineers,
  Diplomat/Spy, Caravan/Freight, Explorer/AWACS, and Cruise
  Missile/Nuclear.

  A city can support for free as many units (with upkeep in Food) as
  its population size (min 4, max 20). Additional units cause waste of
  Food. If the city shrinks due to starvation, one of those extra units
  will be disbanded.

- Units lose one veteran level when upgraded.

- Enabled tired attack: units that attack with less than a single move
  point will have their attack power reduced accordingly.
  If they have 2/3 movement points, they will attack with 2/3 strength.
  If they have 1/3 movement points, they will attack with 1/3 strength.

- Unlimited movement on rails delayed to maglev (available with
  Superconductors). Movement bonus on railroads x6, on roads x3, on
  rivers x3 (non diagonal).

- Added Fort and Airstrip bases, required before you can build Fortress
  or Airbase, respectively. It prevents the construction of full bases
  in one single turn. The bases no longer protect full stacks from being
  killed when one unit is defeated.

- All military infantry units can build fortresses. All worker units can
  build airbases. The working time required to build a base is 2 times
  the movement cost of the terrain.

- Specialists output reduced to 2 (same as civ2). There are wonders that
  increase it to 3 for all players.

- Enabled Tech Leakage: technologies are cheaper if already discovered
  by other nations you have embassy with.

- The cost of each tech is equal to the number of steps needed to get
  the tech (Tech Cost = Base Cost * Number of Parents). It is a linear
  formula more similar to civ2, and it fits better the new reduced
  bonuses from Trade and Science.

- Tech upkeep assigned to cities: some bulbs (research points) are
  required from each city to maintain a given technological level. The
  upkeep grows from 0 during the middle ages, up to 10 bulbs per city
  when the whole tech tree was researched.

- No holes allowed in the tech tree. To acquire a tech you must know
  its prerequisites, and you cannot lose a tech that another depends on.

- Enabled culture points, generated in your cities by wonders
  (proportional to their build cost), and by certain buildings
  (proportional to their upkeep cost): Temple, Amphitheatre,
  Cathedral, Library, University, Research Lab, and Palaces.

  The culture accumulated by each city increases its resistance in
  diplomatic fights against enemy agents (+5% for each 100 culture
  points, up to +50%).

  The culture accumulated by your nation increases the cost to bribe
  your units or incite your cities (+50% for each 1000 culture points,
  up to +500%).

- Certain achievements give extra culture points: Metropolis (city reaches
  size 20), Cultured City (city reaches 1000 culture points), Multicultural
  (2 nationalities), Literate (libraries in every city), Land Ahoy (2nd
  continent sighted), Entire Map Known, and Spaceship Launch.

- Enabled risk of plague at cities with population greater than 4.
  Chances reduced by the buildings Aqueduct and Sewer System, the tech
  Medicine, and the wonder Cure for Cancer.

- Added other random disasters: Earthquake (city on Hills), Fire (city
  larger than 8), Flood (city near rivers), Industrial Accident (city
  with Mfg. Plant), and Nuclear Accident (city with Nuclear Plant).


OPTIONAL RULES:
---------------

- Every player starts with 1 Settler, 1 Worker, 1 Explorer, 1 Diplomat,
  and 1 free tech. ('startunits', 'techlevel')

- Minimum distance between cities set to 3. ('citymindist')

- Initial national border equal to city radius (2 tiles). ('borders')

- Restricted the use of infrastructure (roads, railroads, and rivers)
  for enemy units inside national borders. ('restrictinfra')

- Unreachable units do not protect reachable ones (when they are in the
  same tile). ('unreachableprotects')

- Occupy chance set to 100%: Units automatically move to the target
  tile if the attack is successful and ZoC rules allow the movement.
  ('occupychance')

- Halved chance of building loss (to 10%) when a city is conquered.
  ('razechance')

- If the pool of research points ends negative, one random technology
  is lost, and half of its value is restored to the research pool.
  ('techlossforgiveness', 'techlossrestore')

- Revolutions become quicker the more times any player has changed to
  the target government. ('revolentype')


FOODBOX:
--------

- Foodbox size uniformed to even the population wasted when you build
  Settlers at larger cities (similar to civ3).

- Granary size is fixed to 10 Food for every city size.

- Cities with Pop <= 4 receive this granary effect for free, so they
  can create Settlers at best rate even without Granary. (This free
  granary effect helps the AI to build Settlers optimally).

CITY   FOODBOX   SETTLER    FOODBOX   SETTLER
SIZE    NEW       NEW        OLD       OLD
1      20        -          20        -
2      20(10)#   -          30(15)    20(5-15)
3      20(10)#   20(20)     40(20)    30(10-20)
4      20(10)#   20(20)     50(25)    40(15-25)
5      20(10)    30(20)     60(30)    50(20-30)
6      30(10)    40(20)     70(35)    60(25-35)
7      30(10)    50(30)     80(40)    70(30-40)
8      40(10)    60(40)     90(45)    80(35-45)
9      40(10)    70(50)     100(50)   90(40-50)
10     40(10)    80(60)     110(55)   100(45-55)
11     40(10)    80(60)     120(60)   110(50-60)
12     40(10)    80(60)     130(65)   120(55-65)
13     40(10)    80(60)     140(70)   130(60-70)
14     40(10)    80(60)     150(75)   140(65-75)
15     ...       ...        ...       ...

# Granary effect for free when city grows to this city level.
FOODBOX = Foodbox size at that city level. (In brackets = Granary size).
SETTLER = Food needed to recover the population if you create a Settler
          at that city size. (In brackets = The same but with Granary).
NEW = This ruleset. OLD = civ2 ruleset

TIP: In order to keep max growth, you should build the Granary before
     city grows larger than Pop 4 (same as Aqueduct at Pop 8, and Sewer
     System at Pop 16).
TIP: Optimal production of Settlers occurs at any city with Pop <= 4,
     or cities with Granary and Pop <= 6.


TERRAIN:
--------

- Jungles receive 1 extra Production (1/1/0).

- Tundras can be mined for +1 Production (instead of irrigated) and
  receive +1 Trade when roaded (up to 1/1/1).

- Swamps can be irrigated for +1 Food (to 2/0/0). Reduced Food bonus by
  1 to Spice resource (on Swamp).

- Deserts with a river receive 1 extra Food from irrigation (total 2),
  unless they have an Oasis resource; this simulates a growth boost like
  Nile floods.

- Hills receive 1 Production for free, and +2 from mines, same as civ3,
  (was 0 and +3). Mountains receive +2 Production from mines too (was +1).

- Mountains give extra vision range. Cities can not be placed on
  Mountains (nor Glaciers). Ground units starting the turn on unroaded
  Mountains receive a -1 penalty to movement (this way it is not so good
  for cavalry to end the turn on Mountains).

- The discovery of Refining allows to upgrade the mines placed on
  Desert and Glacier to Oil Wells (+2 Production in total).

- Lake tiles receive for free +1 Food (2/0/2), but Harbours do not
  affect them. Lakes do not enable wonders that needs a coastal city.

- Deep ocean tiles must be mined (resulting in an oil platform) in
  order to take advantage of the production bonus from Offshore Platforms.

- Pollution may appear in Ocean tiles, and Transports can clean it
  without the need of Workers/Engineers. Oceans, Jungles and Forests are
  less affected by global warming.

- Cities on rivers always get roads, even before Bridge Building is
  known.

- The only terrain transformations available before the end of the tech
  tree are: Jungle -> Swamp; and Plains <-> Forest  <-> Grassland.

- The following diagram shows all the transformations available with
  the discovery of Fusion Power. Redesigned so all useful alterations can
  be finished in 1 or 2 steps, and all effects of global warming can be
  reverted:

    Glacier   --> Lake      <--
                   /\         |
    Ocean  --\     \/         |
              --> Grassland   |
--> Swamp  --/     /\         |
|                  \/         |
<-- Jungle    --> Forest -->  |
                   /\      |  |
    Tundra --\     \/      |  |
              --> Plains --|-->
    Desert --/     /\      |
                   ||      |
    Mountains --> Hills  <--

- No minimum city output (was 1/1/0). City central tile simply gets +1
  Production.

  This way, no matter the tile where you place your city, you never
  waste any resource (for example, with classic/civ2 rules, a city placed
  over bonused Grassland was wasting the Production bonus).

TILE      F/P/T  IRRIG(t)   MINE(t)    ROAD   MAX1   MAX2   TRANSFORM
Deep      1/0/2  NO         NO         NO     2/0/2  2/1/2  No
Ocean     1/0/2  NO         NO         NO     2/0/2  2/1/2 *Grass(36)
Lake     *2/0/2  NO         NO         NO     2/0/2  2/1/2 *Grass(36)
Swamp     1/0/0 *+1(5)     *NO         +0(4)  2/0/0  3/0/0 *Grass(24)
Glacier   0/0/0  NO         +1(10)     +0(4)  0/1/0  0/3/0 *Lake(24)
Tundra    1/0/0 *NO        *+1(5)     *+1(2)  1/1/1  1/1/1 *Plains(24)
Desert    0/1/0  +1(5)      +1(5)      +1(2)  0/2/1  0/4/1  Plains(24)
Plains    1/1/0  +1(5)      Forest(10) +1(2)  2/1/1  3/1/1 *Lake(36)
Grassland 2/0/0  +1(5)      Forest(15) +1(2)  3/0/1  4/0/1 *Lake(36)
Jungle   *1/1/0 *Swamp(10) *NO         +0(4)  1/1/0  1/1/0 *Forest(24)
Forest    1/2/0  Plain(10) *Grass(15)  +0(4)  1/2/0  1/3/0 *Hills(24)
Hills    *1/1/0  +1(10)    *+2(10)     +0(4)  1/3/0  1/4/0  Plains(24)
Mountains 0/1/0  NO        *+2(10)     +0(6)  0/3/0  0/4/0  Hills(36)

F/P/T = Food/Production/Trade output; (t) = turns
MAX1 = Irrigation/Mine/Road/Harbour; MAX2 = Farmland/Railroad/Oil Well.
* = Changes compared to civ2 ruleset. Most affected are Jungles, Swamps
    and Tundras.

TIP: The optimal tiles to place your initial cities are those with MAX
     output equal or similar to 2/1/2, mainly those with bonus
     resources or rivers. Hills and Plains are always good places for
     cities, as well as Flood Desert (desert with river), or bonused
     Grassland. The best defense comes from cities placed on Hills with
     river.


DEFENSE:
--------

- Halved the terrain defense bonuses, now more similar to civ3 values:

TERRAIN                   NEW      OLD
Forest/Jungle/Swamp       +25%     +50%
Hills                     +50%     +100%
Mountains                 +100%    +200%

RIVER                     +25%     +50%

VETERAN
Veteran                   +50%     (=)
Hardened                  +75%     (=)
Elite                     +100%    (=)

FORTIFIED                 +50%     (=)
(only Land and Big Land units can fortify; inside cities, they are
always considered fortified)

BASE             VS LAND  VS SEA   VS AIR   VS MISSILE
Fort             +50%     +50%      -        -
Fortress         +100%    +100%    +50%     +50%
Airstrip          -        -       +50%     +50%
Airbase          +50%     +50%     +100%    +100%

CITY             VS LAND  VS SEA   VS AIR   VS MISSILE
Town (Pop<=8)    +50%      -        -        -
City (Pop>8)     +100%    +50%      -        -

Buildings each add:
Great Wall(W)    +50%      -        -        -
Walls            +100%     -        -        -
Coastal Defense   -       +100%     -        -
SAM Battery       -        -       +100%     -
SDI Defense       -        -        -       +100%

- Every city of any size receives an inherent +50% defense bonus
  against all kinds of ground units.

- Every city with Pop>8 receives an additional +50% defense bonus
  against both ground and naval units.

- City Walls effect reduced from 200% to 100%, and cost reduced from 60
  to 30.

- Great Wall wonder gives an additional +50% defense bonus against
  ground units.

Total Defense = (UNIT DEFENSE) * (100+TERRAIN)/100 * (100+RIVER)/100
 * (100+CITY+BASE)/100 * (100+FORTIFIED)/100 * (100+VETERAN)/100
(Same as classic/civ2 rules).

EXAMPLE: Riflemen fortified in a fortress, on mountains, with a river,
         will get a total defense of 30 against land attacks:

         Riflemen: defense 4
         Fortified (+50%): 4 + 2 = 6
         In Fortress (+100%):      6 + 6 = 12
         On Mountains (+100%):             12 + 12 = 24
         With River (+25%):                          24 + 6 = 30.

EXAMPLE: Riflemen in a size 9 city, with walls, on hills,
         will get a total defense of 27 against land attacks:

         Fortified (+50%): 4 + 2 = 6
         On Hills (+50%):          6 + 3 = 9
         In City with Walls (+200%):       9 + 18 = 27.


GOVERNMENTS:
------------
                  Anarch   Tribal   Despot   Monarc   Fundam   Republ   Democr   Federat  Commun
Tax/Lux/Sci Rate  0        60       60       70       70       80       90       90       80
Output per tile # -1(if>2) -1(if>2) -1(if>2) 0        0        +1Trade  +1Trade  0        0
Celebration Bonus (no -1)  (no -1)  (no -1) (+1Trade) 0       (+1Trade)(+1Trade)(+1Trade) 0

Unit Upkeep       Shield   Shield   Coin     Coin     Coin(x2) Shield   Coin(x2) Coin(x2) Shield
Free Units        2        2        2        3        2        1        1        2        3
War Unhappiness   0        0        0       -1       -1       -1       -2       -1       -1
Martial Law      +1        0       +1       +1        0        0        0        0       +2

Civil war %       99%      90%      80%      70%      60%      40%      30%      20%      50%
Empire Size       0        /12      /10      /14      /20      /16      /32      /24      /28
Special          +NoUpkeep +Veteran +75%Gold +50%Gold +Tithes  -Revolt -Revolt   +Luxury  +NoUpkeep
                 -50%Lux  (Land/Mil)(Palace) (Palace) -50%Sci          -Senate   -Senate  (Cost=1)
                 -NoTaxes +Content                    +Fanatic         +Partisan          +Partisan

Base Corruption   0%       30%      20%      10%      15%      25%      5%       0%       30%
Base Waste        30%      0%       10%      20%      15%      5%       25%      30%      0
By Distance *    +1%      +1%      +1%      +1%      +1%      +1%      +1%      +0%      +0%

* Corruption by distance is doubled (+2% per tile of distance to
  capital, or +1% for Federation) until The Corporation is researched by
  the player.
  Waste by distance is doubled (+2% per tile of distance to capital)
  until Trade is researched by the player.
# The output per tile penalty is negated by The Pyramids wonder, or
  when Railroad is researched by the player.
+ Partisans appear around conquered cities (democratic or communist) if
  Guerilla Warfare has been researched by any player.

- Added Fundamentalism (available with Theology), Tribal (available at
  start) and Federation (available with Economics).

- "Base Corruption/Waste": Modern governments cause less Corruption in
  Trade, but more Waste in Production. The total % lost (Waste +
  Corruption) is equal for all governments.

- "Empire Size" (number of cities before they start causing extra
  unhappiness): Modern governments have double size limit than their
  ancient counterpart. Empire Base Size is always equal to Empire Step
  Size.

- "Unit Upkeep": Tribal, Republic and Communism use the standard unit
  upkeep in shields, while the other governments use upkeep in coins (x2
  coins per unit for modern governments).

- "Free Units": Means units free of shield/coin upkeep and also free of
  unhappiness due to military activity. By default 2 free units per city.

- "War Unhappiness": Most governments cause unhappiness when military
  units end the turn outside national borders (same as Republic with civ2
  rules).

- "Martial Law": Max 3 units can apply martial law (was max 20 for
  Despotism and Anarchy).

- The bonus "+1 Trade" (for every worked tile that is already producing
  trade) under Republic and Democracy does not affect oceanic tiles.

- Republic gets "Revolution when unhappy" effect. Federation gets
  "Has senate" effect. Democracy gets both effects.

- Spies and Diplomats built under Communism or Federation will start at
  the first veteran level. Federation gets +2 Luxury points in every city.

- Under Communism you do not pay upkeep for buildings that cost 1 coin.
  Communism cancels the bonus from Mysticism and Theology (to Temples and
  Cathedrals).

- Under Fundamentalism, your cities receive extra Gold from tithes
  (from buildings that make citizens content), but -50% to Science (like
  subtracting the effect of a library in each city).

- The output bonus of Palace (under Despotism and Monarchy) switched
  from Production to Gold.

- Tribal government increases by half the chance of ground units
  getting the next veteran level after a battle. Every city gets 1 extra
  content citizen, but units can't apply martial law.

TIP: There is some hurry to get Monarchy or Republic (or to build
     Pyramids), in order to avoid the initial penalty to output per tile.
     However, the Corruption and Waste are evened for all governments, so
     there are no big differences, and each government could be useful in
     different situations.


TECHS:
------

- Added new wonders: Mausoleum of Mausolos (available with Ceremonial
  Burial), and Statue of Zeus (available with Polytheism). Oracle of
  Delphi renamed to Temple of Artemis (in order to allow all 7 wonders).

- Moved Great Wall to Construction (was Masonry). Moved King Richard's
  Crusade to Chivalry, so it requires Monarchy and Knights. Women's
  Suffrage moved to Conscription, so it requires Democracy. Switched
  Darwin's Voyage and Eiffel Tower (Darwin was earlier than Eiffel).
  Shakespeare's Theatre available with Sanitation (was Medicine).

- Diplomats available with Alphabet (was Writing), and Migrants with
  Pottery, so every initial tech allows some unit or building.

- Coastal Defense moved to Navigation. The labels and icons for
  "Magnetism" and "Navigation" were switched, because compass was already
  used by historical Caravels, while sextants were not invented until the
  age of Galleons/Frigates.

- Construction requires Iron Working instead of Currency. This way,
  Iron Working is a prerequisite to build Frigates and Ironclads.

- Bridge Building merged to old Engineering in the tech tree. Added
  modern "Engineering" in the Industrial Ages that allows Destroyers
  (was Electricity) and Transports (was Industrialization), and it is
  required for Steel (Cruiser), Amphibious Warfare (Ports), and
  Combustion (Submarines).

- Battleship available with Mass Production instead of Automobile.
  Mfg Plant available with Plastics instead of Robotics.

- Nuclear Fission requires Refrigeration, in order to delay the atomic
  age, and to force the AI to research farms. Communism requires Theology
  (Fundamentalism) instead of Philosophy, to encourage AI to research all
  governments.

Special effects:
- Astronomy: Increases units vision when in Fortress.
- Invention: Halves upgrade cost of your units.
- Medicine: Reduces by 30% the chance of plague in your cities.
- Electricity: Allows irrigation without adjacent water, increases city
  vision radius, and improves the effect of Amphitheatres.
- Trade: Decreases one-time the waste of Production caused by distance
  to capital.
- The Corporation: Decreases one-time the corruption of Trade caused by
  distance to capital.
- Fusion Power: Allows Engineers to perform terrain transformations.

Almost all techs, buildings, wonders and units are the same as
classic/civ2, but some requirements have been changed to improve a bit
the historical accuracy, to encourage the use of every military unit,
and to avoid units or wonders becoming obsolete too soon. The following
is a list of some inaccuracies from classic/civ2 tech tree that were
addressed in the new tree:
- It was possible to research Pikemen before Phalanxs; Musketeers before
  Pikemen; Ironclads before Frigates; Destroyers before Ironclads;
  Armors before Artillery; Mech Infantry without Barracks III.
- Cathedrals did not require Construction nor Masonry. Ironclads and
  Eiffel Tower were available without Iron Working. Chivalry and Pikemen
  did not need Iron nor Bronze.
- Pottery was not needed to research Trade, Economics, Explosives,
  Invention, or Sanitation.
- Chemistry was not related to Atomic theory, Refrigeration, Gunpowder,
  Steam Engine, or Steel.
- Theory of Gravity did not need Physics, Invention, or even The Wheel,
  and it was not needed for Automobile, Robotics, or Miniaturization.
- Offshore Platforms did not require Refining, Combustion or Explosives.
  Miniaturization was not needed for Rocketry or Laser.

In the new tree, you are forced to research most of the ancient techs
before you can research the modern ones, but overall, researching paths
are similar to classic/civ2 tree.


BUILDINGS:
----------

- Aqueduct is cheaper near rivers or lakes. Sewer System is needed to
  grow larger than pop 16 (instead of 12). Each one reduces the chances
  of plague by -30%.

- Added new building: Ecclesiastical Palace (available with Theology),
  that acts as a second center of government that lowers corruption and
  waste.

- Courthouse: Makes 1 citizen content, makes the city immune to incite
  actions, and halves any kind of waste (Trade, Production or Food).

  Added new effect: Food wasted by distance to Palace is -1% Food each
  2 tiles. For example, cities at distance 10 of the Palace lose -5%
  Food, so they lose -1 Food when their output reaches 20 Food per turn
  (noticeable with 10 Food per turn due to rounding effects).

- Granary halves the waste of Food caused by distance to Palace.
  Together with a Courthouse, it eliminates completely the waste of Food.

- Police Station: Makes 2 citizens content, and reduces unhappiness
  caused by 1 military unit.

- Science bonus from Library, University, and Research Lab restored to
  civ2 values (+50%). There are wonders that double the effect later.

- Production bonus by Factory and Mfg Plant reduced to +25% each
  (was +50%), so the Power Plants are as important as the Factories.
  Mfg Plants allows the construction of 2 units per turn.

- Super Highways double the effect of Stock Exchange (+50% to
  Gold/Luxury), and they produce extra Trade at tiles with roads but
  without farmlands (the city center tile can still have both farmland
  and Super Highways bonuses).

- Doubled costs of all Spaceship parts. All them require Library,
  University, Research Lab and Factory present in the city in order to
  be built.

- Reduced by one the upkeep of Aqueduct, Colosseum (renamed to
  Amphitheatre), University, Bank, Stock Exchange, Port Facility, SDI
  Defense, and Factory; reduced by two for Mass Transit and Mfg. Plant.

- Pollution caused by population is increased by buildings instead of
  by techs:

  Industrialization -> Factory; Automobile -> Highways; Plastics -> Mfg
  Plant; Mass Production -> Offshore platforms.

- Adjusted the pollution of all electrical plants, and increased the
  building cost of Nuclear Plants:

                 Cost  Upkeep  Pollution (+Recycling)
Power plant      130   4       100%(50%)
Hydro plant      180   4       50% (25%)
(+Hoover Dam)    (=)  (=)      25% (0%)
Nuclear plant    240   2       50% (25%)
Solar plant      320   4       25% (0%)

Recycling Center 140   2      -50%/-25%


UNITS:
------

- Population cost of Settlers increased to 2, and removed the upkeep.
  New unit Migrants available to work, or to migrate 1 population; they
  can't create cities and can be captured. Costs more similar to civ3:

Settlers:  pop 2, cost 30, upkeep 0, food 1
Migrants:  pop 1, cost 10, upkeep 0, food 1
Workers:   pop 0, cost 20, upkeep 1, food 0

- Non-military units now belongs to a new unit class ("Small Land")
  that can not pillage, nor capture cities, and does not create Zones of
  Control (ZOC) that would affect the movements of enemy units.

- Created a new unit class for Caravans and Freights ("Merchant") that
  doesn't get the unlimited movement from maglev, and can be captured.
  They can only establish trade routes to foreign cities.

- Military "Land" units can capture enemy Migrants (as slaves) and
  Caravans/Freights (as loot).

- Wheeled units (new unit class "Big Land") can't move to Mountains,
  Jungles and Swamps, unless they are travelling on a road. They do not
  get defensive bonuses from the terrain, can not perform pillage, and
  need Galleons or Transports to travel by sea.

- Only "Big Land" units can cause population loss when attacking a city.

- Diplomat units stay alive when they investigate cities, and they can
  establish embassies or investigate cities directly from boats without
  disembarking. Explorers can perform those two actions, same as
  Diplomats. Increased vision range of Explorers and Partisans.


- Added Elephants from civ2, available with Polytheism:
  (att/def/mov-hp,cost) = (3/2/2-10,30). Obsolete by Dragoons.

- Added Crusaders from civ2, available with Monotheism: (5/1/2-10,40).
  Obsolete by Dragoons. They do not cause unhappiness due to military
  activity.

- Added Fanatics from civ2, available with Guerrilla, under
  Fundamentalism government: (5/5/1-20,20). They cost 1 population, but
  do not cause unhappiness and do not need upkeep.

- Archers defense reduced to 1 (was 2), and cost to 20 (was 30). Legion
  cost reduced to 30 (was 40). This way the ratio Attack/Cost of ancient
  units is more even to Catapults.

- Pikemen changed to (2/3), cost to 30, and removed the doubled defense
  vs horses. Attack of Chariots increased to 4 (was 3). Defense of
  Knights increased to 3 (was 2). In order to encourage early use of
  cavalry.

- Alpine Troops changed to (7/4), and Partisan to (4/5). This way,
  Riflemen do not become obsolete as city defenders until Partisan or
  Marine are researched, and every modern infantry is somehow useful.

- Given Marine ability to Legion, Musketeer, and Rifleman. This way,
  one-tile islands can be assaulted early in game. Yet, the Marine unit
  is still the best offensive/defensive infantry.

- Triremes can navigate rivers. Caravel changed from (2/1) to (1/2), in
  order to encourage peaceful exploration of the seas in the age of
  discovery.

- Removed transport capability from Frigates, to force the use of
  Galleons. Reduced attack of Frigate and defense of Ironclad to 3
  (was 4).

- Battleship hit points reduced to 30 (was 40), Ironclad and Submarine
  to 20 (was 30). Doubled the defense of Destroyers against Submarines.
  Now there is a Rock-paper-scissors relation between
  Destroyer-Cruiser-Submarine.

- All units that had Firepower 2 now have Firepower 1, in order to even
  the power of naval, air, and artillery units, and to simplify the
  mental calculation to compare them.

- Artillery and Howitzer receive the ability CityBuster, so their
  firepower is 1 in open field, and 2 against cities. Removed Ignore
  Walls for Howitzer (that would bypass the new city defense bonuses),
  and reduced movement to 1.

- Bombers and Helicopters receive the Bombarder ability: when they
  attack ground units, they can only damage (not kill) them, but they
  damage every unit in a stack or city; and are never damaged while
  attacking. Note they have a normal attack against naval units (they
  still can kill or die). Halved the attack so it is harder to bombard
  ground enemies successfully. Increased hit points so it is still
  possible to kill naval units.

- Air units can perform pillage (representing bombardment of
  infrastructure), and can be airlifted from a city with an Airport to
  another. Increased defense of all Air units, in order to discourage the
  use of ground units to protect them.

- Increased fuel of all planes by one (giving them an extra turn in
  the air), in order to allow battles for air control. All planes
  lose 10% of HPs, like helicopters, when they end a turn outside a city,
  airstrip, or airbase.

- Helicopters can carry 1 military Land unit, and can only be attacked
  by Fighters (with no extra attack bonuses), and by Missiles. Carriers
  can also transport military Land units.

- Cruise Missile no longer cause unhappiness, range increased to 16,
  and allowed to attack Air units.

- Nuclear weapons can be built with Nuclear Fission, but you need
  Advanced Flight to move them, and Rocketry to get max movement.

- Readjusted many costs so units with better stats are always more
  expensive. At the same time, modern units always get better ratio
  Att/Cost or Def/Cost.

UNIT            Att  Def  Mov  FP   HP   Cost
Warrior         1    1    1    1    10   10
Phalanx         1    2    1    1    10   20
Archers         3   *1    1    1    10  *20
Legion          4    2    1    1    10  *30  *Marines
Pikemen        *2   *3    1    1    10  *30  *(No bonus anti-horse)
Musketeers      3    3    1    1    20  *40  *Marines
Riflemen        5    4    1    1    20  *50  *Marines
Alpine Troops  *7   *4    1    1    20  *60   IgTer
Partisan        4   *5    1    1    20  *60   IgTer, IgZOC
Fanatics       *5   *5    1    1    20   20  *1 Pop, No upkeep, No unhappy
Marines         8    5    1    1    20   60   Marines
Paratroopers    6    4    1    1    20   60   Paratroopers

Horsemen        2    1    2    1    10   20
Chariot        *4    1    2    1    10   30  *Wheeled
Elephants      *3   *2    2    1    10  *30
Crusaders       5    1    2    1    10   40  *No unhappy
Knights         4   *3    2    1    10   40
Dragoons        5    2    2    1    20   50
Cavalry         8    3    2    1    20   60
Mech. Inf.      6    6    3    1    30  *70  *Wheeled
Armor           10   5    3    1    30  *90  *Wheeled

Catapult        6    1    1    1    10   40  *Wheeled
Cannon          8    1    1    1    20  *50  *Wheeled
Artillery       10  *2    1   *1(2) 20  *60  *Wheeled,*CityBuster
Howitzer        12   2   *1   *1(2) 30  *80  *Wheeled,*CityBuster

Trireme         1    1    3    1    10  *20   Cargo 2, Coastal
Caravel        *1   *2    3    1    10  *30   Cargo 3
Galleon         0    2    4    1    20   40   Cargo 4,*No unhappy
Transport       0    3    5    1    30   50   Cargo 8,*No unhappy
Carrier        *0    9    5   *1    40  *150  Cargo 8,*No unhappy

Frigate        *3    2    4    1    20  *40  *No Cargo
Ironclad        4   *3    4    1   *20  *50
Destroyer       4    4    6    1    30   60  *(x2 def anti-submarine)
Cruiser         6    6    5   *1    30   80
AEGIS Cruiser   8    8    5   *1    30   100 *(x5 def anti-air/missile)
Battleship      12   12   4   *1   *30   160
Submarine      *12  *5   *5   *1   *20  *70   Cargo 8, Invis

Fighter         4   *4    10  *1    20   60   Fuel 2
Bomber         *6   *2    8   *1   *30  *100 *Bombard 3, Fuel 3, FieldUnit
Helicopter     *5    3    6   *1   *30  *70  *Bombard 2,*Cargo 1
Stealth Fighter 8   *8    14  *1    20   80   Fuel 2, Invis
Stealth Bomber *9    5    12  *1   *30  *120 *Bombard 4, Fuel 3, FieldUnit, Invis

Cruise Missile  18   0   *16  *1(2) 10  *50  *CityBuster,*No FieldUnit
Nuclear         99   0    16   1    10   160  Nuclear, FieldUnit

FP = Firepower, HP = Hit Points
* = Changes compared to civ2 ruleset. Most affected are modern
    infantry, air units, and all units that had 2 firepower.


WONDERS:
--------

- Replaced all effects that worked as if you had certain building in
  every city.

- Replaced every effect Make_Happy, Force_Content, and No_Unhappy, by
  additional Luxury in the city tiles. Else they would avoid unhappiness
  caused by military activity too easily.

- Replaced effects that give a percentage bonus to Science output, by
  additional Science in the city tiles. This way, they do not multiply
  the effect of other wonders like Colossus, and it is not mandatory to
  build them all in the same city.

- These bonuses to Science, Gold or Luxury are produced by the citizens
  (same as the bonuses to Trade or Production), so they can be increased
  by other city improvements (same as the output of specialists).

- Your Caravans and Freight can help build allies' or team-mates'
  wonders.

- Wonders become obsolete by techs researched by the owner (not affected
  by the researches of other players).

- Some wonders require certain building in the city to be built.

- Readjusted effects of most wonders. Restored civ2 costs:

FULL LIST OF WONDERS
(#) It has some global effect that affects other nations.
"Name", Cost, Requirements, Obsolescence, Effect.

- "Pyramids" 200. Obsolete by Railroad (that increases even more the
  production):
  +1 Production per worked tile in the city (already producing shields).
  Disables the output per tile penalty under Despotism/Tribal governments.
- "Colossus" 200. Obsolete by Automobile (Super Highways):
  +1 Trade per worked tile in the city (already producing Trade).
- "Copernicus' Observatory" 300. Obsolete by Computers (Research Lab):
  +1 Science per worked tile in the city.

- "Hanging Gardens" 200. Obsolete by Electricity (that increases
  Amphitheatre effect):
  +1 Content all your cities. +4 Luxury in the city where it is built.
- "Mausoleum of Mausolos" 200. Obsolete by Sanitation (that enables
  wonder with similar effect):
  +1 Content in your cities with Walls, and +1 extra content in your
  cities with Courthouse. Your cities cannot be incited to revolt.
- "Temple of Artemis" 200. Requires Temple. Obsolete by Theology (that
  increases Cathedral effect):
  +2 Content in your cities with Temple.
- "Michelangelo's Chapel" 400. Requires Cathedral:
  +3 Content in your cities with Cathedral.

- "J.S. Bach's Cathedral" 400:
  +2 Luxury in all your cities.
- "Cure For Cancer" 600:
  +2 Luxury in all your cities. -10% chance of plague.

- (#)"Shakespeare's Theatre" 300:
  Entertainer specialists output increases to 3 for every nation.
  +1 Luxury in all your cities, +6 Luxury where it is built.
- (#)"A.Smith's Trading Co" 400. Requires Stock Exchange:
  Taxman specialists output increases to 3 for every nation. Free upkeep
  for buildings that cost 1 coin, in all your cities with Stock Exchange.
- (#)"Darwin's Voyage" 400:
  Scientist specialists output increases to 3 for every nation.
  +1 Science in all your cities.

- (#)"Great Library" 300. Requires Library:
  Doubles the effect of Library for every nation. Gives an immediate
  technology advance. +4 Science in the city where it is built.
- (#)"Isaac Newton's College" 400. Requires University:
  Doubles the effect of University for every nation. Gives an immediate
  technology advance. +6 Science in the city where it is built.
- (#)"Internet" 600. Requires Research Lab:
  Doubles the effect of Research Lab for every nation. Gives an immediate
  technology advance. Reveals all cities in the map for the owner.

- "Lighthouse" 200. Requires adjacent sea. Obsolete by Engineering
  (Destroyer):
  +1 Move point for all your naval units, and they are built veteran in
  all your cities.
- "Magellan's Expedition" 400, Obsolete by Nuclear Power (that
  increases even more movement of naval units):
  +1 Move point, and +50% chance to become veteran after a battle, for
  Sea units (no Triremes).
- "Sun Tzu's War Academy" 300. Obsolete by Mobile Warfare (Barracks III):
  +1 Veteran level for all military ground units built in your cities
  (cumulative to Barracks).

- "Statue of Zeus" 200. Obsolete by Conscription (that enables wonder
  with similar effect):
  +1 Military Content, +1 free shield per city for upkeep of units.
- "King Richard's Crusade" 300. Obsolete by Communism (Police Station):
  +1 Military Content, +2 free coins per city for upkeep of units.
- "Women's Suffrage" 600:
  +1 Military Content (cumulative to Police Stations). Under Democracy it
  halves the unhappiness caused by each military unit.

- "Marco Polo's Embassy" 200. Obsolete by Democracy:
  Embassy with all players (tech costs are reduced depending on the
  number of players which already know them).
- "Eiffel Tower" 300:
  +10 to AI love for the owner. Reduces -25% the pollution caused by the
  population in all your cities.
- "Statue of Liberty" 400:
  Disables Has Senate effect. Any government available. No Anarchy
  periods when government changes.
- (#)"United Nations" 600:
  +10 to AI love for the owner. Revolution when unhappy effect for every
  nation.

- "Great Wall" 300. Obsolete by Machine Tools (Artillery):
  +50% Defense bonus against ground units in all your cities, and no loss
  of population due to attacks.
- "Leonardo's Workshop" 400. Obsolete by Combustion:
  Upgrades one obsolete unit per game turn.
- "Hoover Dam" 600. Requires Factory (and adjacent river):
  Gives to to all your Hydro Plants the same effect as Solar Plants (-25%
  pollution caused by production).
- (#)"Manhattan Project" 600:
  Enables nuclear units for every nation.
- (#)"Apollo Program" 600:
  Enables space race for every nation. Makes entire map permanently
  visible for the owner.

Special "Cold War" effect: if Manhattan Project and United Nations were
built, every nation with nuclear power receives the Has Senate effect,
until the Apollo Program is finished.


THANKS:
-------

To every people who collaborated to create this wonderful Freeciv game.
Specially to those who programmed the Ruleset modding capabilities and
the AI capable to play with them.
Original developer David Fernandez (Bardo).


Files changed from civ2civ3:
buildings.ruleset    identical
cities.ruleset       identical
effects.ruleset      volcanoes get mountain-like vision and movement
game.ruleset         identical
governments.ruleset  identical
nations.ruleset      identical
*.lua                identical
styles.ruleset       identical
techs.ruleset        identical
terrain.ruleset      new terrain tiles, big rivers, pack ice. Needs a tileset (toonhex+) too
units.ruleset        identical
