#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Cmd_ACTOR_FUNC_Entry__FP15BsSCDEntControl
// Address: 0x133368 - 0x1340dc
void Cmd_ACTOR_FUNC_Entry__FP15BsSCDEntControl_0x133368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_FUNC_Entry__FP15BsSCDEntControl_0x133368");
#endif

    switch (ctx->pc) {
        case 0x133368u: goto label_133368;
        case 0x13336cu: goto label_13336c;
        case 0x133370u: goto label_133370;
        case 0x133374u: goto label_133374;
        case 0x133378u: goto label_133378;
        case 0x13337cu: goto label_13337c;
        case 0x133380u: goto label_133380;
        case 0x133384u: goto label_133384;
        case 0x133388u: goto label_133388;
        case 0x13338cu: goto label_13338c;
        case 0x133390u: goto label_133390;
        case 0x133394u: goto label_133394;
        case 0x133398u: goto label_133398;
        case 0x13339cu: goto label_13339c;
        case 0x1333a0u: goto label_1333a0;
        case 0x1333a4u: goto label_1333a4;
        case 0x1333a8u: goto label_1333a8;
        case 0x1333acu: goto label_1333ac;
        case 0x1333b0u: goto label_1333b0;
        case 0x1333b4u: goto label_1333b4;
        case 0x1333b8u: goto label_1333b8;
        case 0x1333bcu: goto label_1333bc;
        case 0x1333c0u: goto label_1333c0;
        case 0x1333c4u: goto label_1333c4;
        case 0x1333c8u: goto label_1333c8;
        case 0x1333ccu: goto label_1333cc;
        case 0x1333d0u: goto label_1333d0;
        case 0x1333d4u: goto label_1333d4;
        case 0x1333d8u: goto label_1333d8;
        case 0x1333dcu: goto label_1333dc;
        case 0x1333e0u: goto label_1333e0;
        case 0x1333e4u: goto label_1333e4;
        case 0x1333e8u: goto label_1333e8;
        case 0x1333ecu: goto label_1333ec;
        case 0x1333f0u: goto label_1333f0;
        case 0x1333f4u: goto label_1333f4;
        case 0x1333f8u: goto label_1333f8;
        case 0x1333fcu: goto label_1333fc;
        case 0x133400u: goto label_133400;
        case 0x133404u: goto label_133404;
        case 0x133408u: goto label_133408;
        case 0x13340cu: goto label_13340c;
        case 0x133410u: goto label_133410;
        case 0x133414u: goto label_133414;
        case 0x133418u: goto label_133418;
        case 0x13341cu: goto label_13341c;
        case 0x133420u: goto label_133420;
        case 0x133424u: goto label_133424;
        case 0x133428u: goto label_133428;
        case 0x13342cu: goto label_13342c;
        case 0x133430u: goto label_133430;
        case 0x133434u: goto label_133434;
        case 0x133438u: goto label_133438;
        case 0x13343cu: goto label_13343c;
        case 0x133440u: goto label_133440;
        case 0x133444u: goto label_133444;
        case 0x133448u: goto label_133448;
        case 0x13344cu: goto label_13344c;
        case 0x133450u: goto label_133450;
        case 0x133454u: goto label_133454;
        case 0x133458u: goto label_133458;
        case 0x13345cu: goto label_13345c;
        case 0x133460u: goto label_133460;
        case 0x133464u: goto label_133464;
        case 0x133468u: goto label_133468;
        case 0x13346cu: goto label_13346c;
        case 0x133470u: goto label_133470;
        case 0x133474u: goto label_133474;
        case 0x133478u: goto label_133478;
        case 0x13347cu: goto label_13347c;
        case 0x133480u: goto label_133480;
        case 0x133484u: goto label_133484;
        case 0x133488u: goto label_133488;
        case 0x13348cu: goto label_13348c;
        case 0x133490u: goto label_133490;
        case 0x133494u: goto label_133494;
        case 0x133498u: goto label_133498;
        case 0x13349cu: goto label_13349c;
        case 0x1334a0u: goto label_1334a0;
        case 0x1334a4u: goto label_1334a4;
        case 0x1334a8u: goto label_1334a8;
        case 0x1334acu: goto label_1334ac;
        case 0x1334b0u: goto label_1334b0;
        case 0x1334b4u: goto label_1334b4;
        case 0x1334b8u: goto label_1334b8;
        case 0x1334bcu: goto label_1334bc;
        case 0x1334c0u: goto label_1334c0;
        case 0x1334c4u: goto label_1334c4;
        case 0x1334c8u: goto label_1334c8;
        case 0x1334ccu: goto label_1334cc;
        case 0x1334d0u: goto label_1334d0;
        case 0x1334d4u: goto label_1334d4;
        case 0x1334d8u: goto label_1334d8;
        case 0x1334dcu: goto label_1334dc;
        case 0x1334e0u: goto label_1334e0;
        case 0x1334e4u: goto label_1334e4;
        case 0x1334e8u: goto label_1334e8;
        case 0x1334ecu: goto label_1334ec;
        case 0x1334f0u: goto label_1334f0;
        case 0x1334f4u: goto label_1334f4;
        case 0x1334f8u: goto label_1334f8;
        case 0x1334fcu: goto label_1334fc;
        case 0x133500u: goto label_133500;
        case 0x133504u: goto label_133504;
        case 0x133508u: goto label_133508;
        case 0x13350cu: goto label_13350c;
        case 0x133510u: goto label_133510;
        case 0x133514u: goto label_133514;
        case 0x133518u: goto label_133518;
        case 0x13351cu: goto label_13351c;
        case 0x133520u: goto label_133520;
        case 0x133524u: goto label_133524;
        case 0x133528u: goto label_133528;
        case 0x13352cu: goto label_13352c;
        case 0x133530u: goto label_133530;
        case 0x133534u: goto label_133534;
        case 0x133538u: goto label_133538;
        case 0x13353cu: goto label_13353c;
        case 0x133540u: goto label_133540;
        case 0x133544u: goto label_133544;
        case 0x133548u: goto label_133548;
        case 0x13354cu: goto label_13354c;
        case 0x133550u: goto label_133550;
        case 0x133554u: goto label_133554;
        case 0x133558u: goto label_133558;
        case 0x13355cu: goto label_13355c;
        case 0x133560u: goto label_133560;
        case 0x133564u: goto label_133564;
        case 0x133568u: goto label_133568;
        case 0x13356cu: goto label_13356c;
        case 0x133570u: goto label_133570;
        case 0x133574u: goto label_133574;
        case 0x133578u: goto label_133578;
        case 0x13357cu: goto label_13357c;
        case 0x133580u: goto label_133580;
        case 0x133584u: goto label_133584;
        case 0x133588u: goto label_133588;
        case 0x13358cu: goto label_13358c;
        case 0x133590u: goto label_133590;
        case 0x133594u: goto label_133594;
        case 0x133598u: goto label_133598;
        case 0x13359cu: goto label_13359c;
        case 0x1335a0u: goto label_1335a0;
        case 0x1335a4u: goto label_1335a4;
        case 0x1335a8u: goto label_1335a8;
        case 0x1335acu: goto label_1335ac;
        case 0x1335b0u: goto label_1335b0;
        case 0x1335b4u: goto label_1335b4;
        case 0x1335b8u: goto label_1335b8;
        case 0x1335bcu: goto label_1335bc;
        case 0x1335c0u: goto label_1335c0;
        case 0x1335c4u: goto label_1335c4;
        case 0x1335c8u: goto label_1335c8;
        case 0x1335ccu: goto label_1335cc;
        case 0x1335d0u: goto label_1335d0;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335d8u: goto label_1335d8;
        case 0x1335dcu: goto label_1335dc;
        case 0x1335e0u: goto label_1335e0;
        case 0x1335e4u: goto label_1335e4;
        case 0x1335e8u: goto label_1335e8;
        case 0x1335ecu: goto label_1335ec;
        case 0x1335f0u: goto label_1335f0;
        case 0x1335f4u: goto label_1335f4;
        case 0x1335f8u: goto label_1335f8;
        case 0x1335fcu: goto label_1335fc;
        case 0x133600u: goto label_133600;
        case 0x133604u: goto label_133604;
        case 0x133608u: goto label_133608;
        case 0x13360cu: goto label_13360c;
        case 0x133610u: goto label_133610;
        case 0x133614u: goto label_133614;
        case 0x133618u: goto label_133618;
        case 0x13361cu: goto label_13361c;
        case 0x133620u: goto label_133620;
        case 0x133624u: goto label_133624;
        case 0x133628u: goto label_133628;
        case 0x13362cu: goto label_13362c;
        case 0x133630u: goto label_133630;
        case 0x133634u: goto label_133634;
        case 0x133638u: goto label_133638;
        case 0x13363cu: goto label_13363c;
        case 0x133640u: goto label_133640;
        case 0x133644u: goto label_133644;
        case 0x133648u: goto label_133648;
        case 0x13364cu: goto label_13364c;
        case 0x133650u: goto label_133650;
        case 0x133654u: goto label_133654;
        case 0x133658u: goto label_133658;
        case 0x13365cu: goto label_13365c;
        case 0x133660u: goto label_133660;
        case 0x133664u: goto label_133664;
        case 0x133668u: goto label_133668;
        case 0x13366cu: goto label_13366c;
        case 0x133670u: goto label_133670;
        case 0x133674u: goto label_133674;
        case 0x133678u: goto label_133678;
        case 0x13367cu: goto label_13367c;
        case 0x133680u: goto label_133680;
        case 0x133684u: goto label_133684;
        case 0x133688u: goto label_133688;
        case 0x13368cu: goto label_13368c;
        case 0x133690u: goto label_133690;
        case 0x133694u: goto label_133694;
        case 0x133698u: goto label_133698;
        case 0x13369cu: goto label_13369c;
        case 0x1336a0u: goto label_1336a0;
        case 0x1336a4u: goto label_1336a4;
        case 0x1336a8u: goto label_1336a8;
        case 0x1336acu: goto label_1336ac;
        case 0x1336b0u: goto label_1336b0;
        case 0x1336b4u: goto label_1336b4;
        case 0x1336b8u: goto label_1336b8;
        case 0x1336bcu: goto label_1336bc;
        case 0x1336c0u: goto label_1336c0;
        case 0x1336c4u: goto label_1336c4;
        case 0x1336c8u: goto label_1336c8;
        case 0x1336ccu: goto label_1336cc;
        case 0x1336d0u: goto label_1336d0;
        case 0x1336d4u: goto label_1336d4;
        case 0x1336d8u: goto label_1336d8;
        case 0x1336dcu: goto label_1336dc;
        case 0x1336e0u: goto label_1336e0;
        case 0x1336e4u: goto label_1336e4;
        case 0x1336e8u: goto label_1336e8;
        case 0x1336ecu: goto label_1336ec;
        case 0x1336f0u: goto label_1336f0;
        case 0x1336f4u: goto label_1336f4;
        case 0x1336f8u: goto label_1336f8;
        case 0x1336fcu: goto label_1336fc;
        case 0x133700u: goto label_133700;
        case 0x133704u: goto label_133704;
        case 0x133708u: goto label_133708;
        case 0x13370cu: goto label_13370c;
        case 0x133710u: goto label_133710;
        case 0x133714u: goto label_133714;
        case 0x133718u: goto label_133718;
        case 0x13371cu: goto label_13371c;
        case 0x133720u: goto label_133720;
        case 0x133724u: goto label_133724;
        case 0x133728u: goto label_133728;
        case 0x13372cu: goto label_13372c;
        case 0x133730u: goto label_133730;
        case 0x133734u: goto label_133734;
        case 0x133738u: goto label_133738;
        case 0x13373cu: goto label_13373c;
        case 0x133740u: goto label_133740;
        case 0x133744u: goto label_133744;
        case 0x133748u: goto label_133748;
        case 0x13374cu: goto label_13374c;
        case 0x133750u: goto label_133750;
        case 0x133754u: goto label_133754;
        case 0x133758u: goto label_133758;
        case 0x13375cu: goto label_13375c;
        case 0x133760u: goto label_133760;
        case 0x133764u: goto label_133764;
        case 0x133768u: goto label_133768;
        case 0x13376cu: goto label_13376c;
        case 0x133770u: goto label_133770;
        case 0x133774u: goto label_133774;
        case 0x133778u: goto label_133778;
        case 0x13377cu: goto label_13377c;
        case 0x133780u: goto label_133780;
        case 0x133784u: goto label_133784;
        case 0x133788u: goto label_133788;
        case 0x13378cu: goto label_13378c;
        case 0x133790u: goto label_133790;
        case 0x133794u: goto label_133794;
        case 0x133798u: goto label_133798;
        case 0x13379cu: goto label_13379c;
        case 0x1337a0u: goto label_1337a0;
        case 0x1337a4u: goto label_1337a4;
        case 0x1337a8u: goto label_1337a8;
        case 0x1337acu: goto label_1337ac;
        case 0x1337b0u: goto label_1337b0;
        case 0x1337b4u: goto label_1337b4;
        case 0x1337b8u: goto label_1337b8;
        case 0x1337bcu: goto label_1337bc;
        case 0x1337c0u: goto label_1337c0;
        case 0x1337c4u: goto label_1337c4;
        case 0x1337c8u: goto label_1337c8;
        case 0x1337ccu: goto label_1337cc;
        case 0x1337d0u: goto label_1337d0;
        case 0x1337d4u: goto label_1337d4;
        case 0x1337d8u: goto label_1337d8;
        case 0x1337dcu: goto label_1337dc;
        case 0x1337e0u: goto label_1337e0;
        case 0x1337e4u: goto label_1337e4;
        case 0x1337e8u: goto label_1337e8;
        case 0x1337ecu: goto label_1337ec;
        case 0x1337f0u: goto label_1337f0;
        case 0x1337f4u: goto label_1337f4;
        case 0x1337f8u: goto label_1337f8;
        case 0x1337fcu: goto label_1337fc;
        case 0x133800u: goto label_133800;
        case 0x133804u: goto label_133804;
        case 0x133808u: goto label_133808;
        case 0x13380cu: goto label_13380c;
        case 0x133810u: goto label_133810;
        case 0x133814u: goto label_133814;
        case 0x133818u: goto label_133818;
        case 0x13381cu: goto label_13381c;
        case 0x133820u: goto label_133820;
        case 0x133824u: goto label_133824;
        case 0x133828u: goto label_133828;
        case 0x13382cu: goto label_13382c;
        case 0x133830u: goto label_133830;
        case 0x133834u: goto label_133834;
        case 0x133838u: goto label_133838;
        case 0x13383cu: goto label_13383c;
        case 0x133840u: goto label_133840;
        case 0x133844u: goto label_133844;
        case 0x133848u: goto label_133848;
        case 0x13384cu: goto label_13384c;
        case 0x133850u: goto label_133850;
        case 0x133854u: goto label_133854;
        case 0x133858u: goto label_133858;
        case 0x13385cu: goto label_13385c;
        case 0x133860u: goto label_133860;
        case 0x133864u: goto label_133864;
        case 0x133868u: goto label_133868;
        case 0x13386cu: goto label_13386c;
        case 0x133870u: goto label_133870;
        case 0x133874u: goto label_133874;
        case 0x133878u: goto label_133878;
        case 0x13387cu: goto label_13387c;
        case 0x133880u: goto label_133880;
        case 0x133884u: goto label_133884;
        case 0x133888u: goto label_133888;
        case 0x13388cu: goto label_13388c;
        case 0x133890u: goto label_133890;
        case 0x133894u: goto label_133894;
        case 0x133898u: goto label_133898;
        case 0x13389cu: goto label_13389c;
        case 0x1338a0u: goto label_1338a0;
        case 0x1338a4u: goto label_1338a4;
        case 0x1338a8u: goto label_1338a8;
        case 0x1338acu: goto label_1338ac;
        case 0x1338b0u: goto label_1338b0;
        case 0x1338b4u: goto label_1338b4;
        case 0x1338b8u: goto label_1338b8;
        case 0x1338bcu: goto label_1338bc;
        case 0x1338c0u: goto label_1338c0;
        case 0x1338c4u: goto label_1338c4;
        case 0x1338c8u: goto label_1338c8;
        case 0x1338ccu: goto label_1338cc;
        case 0x1338d0u: goto label_1338d0;
        case 0x1338d4u: goto label_1338d4;
        case 0x1338d8u: goto label_1338d8;
        case 0x1338dcu: goto label_1338dc;
        case 0x1338e0u: goto label_1338e0;
        case 0x1338e4u: goto label_1338e4;
        case 0x1338e8u: goto label_1338e8;
        case 0x1338ecu: goto label_1338ec;
        case 0x1338f0u: goto label_1338f0;
        case 0x1338f4u: goto label_1338f4;
        case 0x1338f8u: goto label_1338f8;
        case 0x1338fcu: goto label_1338fc;
        case 0x133900u: goto label_133900;
        case 0x133904u: goto label_133904;
        case 0x133908u: goto label_133908;
        case 0x13390cu: goto label_13390c;
        case 0x133910u: goto label_133910;
        case 0x133914u: goto label_133914;
        case 0x133918u: goto label_133918;
        case 0x13391cu: goto label_13391c;
        case 0x133920u: goto label_133920;
        case 0x133924u: goto label_133924;
        case 0x133928u: goto label_133928;
        case 0x13392cu: goto label_13392c;
        case 0x133930u: goto label_133930;
        case 0x133934u: goto label_133934;
        case 0x133938u: goto label_133938;
        case 0x13393cu: goto label_13393c;
        case 0x133940u: goto label_133940;
        case 0x133944u: goto label_133944;
        case 0x133948u: goto label_133948;
        case 0x13394cu: goto label_13394c;
        case 0x133950u: goto label_133950;
        case 0x133954u: goto label_133954;
        case 0x133958u: goto label_133958;
        case 0x13395cu: goto label_13395c;
        case 0x133960u: goto label_133960;
        case 0x133964u: goto label_133964;
        case 0x133968u: goto label_133968;
        case 0x13396cu: goto label_13396c;
        case 0x133970u: goto label_133970;
        case 0x133974u: goto label_133974;
        case 0x133978u: goto label_133978;
        case 0x13397cu: goto label_13397c;
        case 0x133980u: goto label_133980;
        case 0x133984u: goto label_133984;
        case 0x133988u: goto label_133988;
        case 0x13398cu: goto label_13398c;
        case 0x133990u: goto label_133990;
        case 0x133994u: goto label_133994;
        case 0x133998u: goto label_133998;
        case 0x13399cu: goto label_13399c;
        case 0x1339a0u: goto label_1339a0;
        case 0x1339a4u: goto label_1339a4;
        case 0x1339a8u: goto label_1339a8;
        case 0x1339acu: goto label_1339ac;
        case 0x1339b0u: goto label_1339b0;
        case 0x1339b4u: goto label_1339b4;
        case 0x1339b8u: goto label_1339b8;
        case 0x1339bcu: goto label_1339bc;
        case 0x1339c0u: goto label_1339c0;
        case 0x1339c4u: goto label_1339c4;
        case 0x1339c8u: goto label_1339c8;
        case 0x1339ccu: goto label_1339cc;
        case 0x1339d0u: goto label_1339d0;
        case 0x1339d4u: goto label_1339d4;
        case 0x1339d8u: goto label_1339d8;
        case 0x1339dcu: goto label_1339dc;
        case 0x1339e0u: goto label_1339e0;
        case 0x1339e4u: goto label_1339e4;
        case 0x1339e8u: goto label_1339e8;
        case 0x1339ecu: goto label_1339ec;
        case 0x1339f0u: goto label_1339f0;
        case 0x1339f4u: goto label_1339f4;
        case 0x1339f8u: goto label_1339f8;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a00u: goto label_133a00;
        case 0x133a04u: goto label_133a04;
        case 0x133a08u: goto label_133a08;
        case 0x133a0cu: goto label_133a0c;
        case 0x133a10u: goto label_133a10;
        case 0x133a14u: goto label_133a14;
        case 0x133a18u: goto label_133a18;
        case 0x133a1cu: goto label_133a1c;
        case 0x133a20u: goto label_133a20;
        case 0x133a24u: goto label_133a24;
        case 0x133a28u: goto label_133a28;
        case 0x133a2cu: goto label_133a2c;
        case 0x133a30u: goto label_133a30;
        case 0x133a34u: goto label_133a34;
        case 0x133a38u: goto label_133a38;
        case 0x133a3cu: goto label_133a3c;
        case 0x133a40u: goto label_133a40;
        case 0x133a44u: goto label_133a44;
        case 0x133a48u: goto label_133a48;
        case 0x133a4cu: goto label_133a4c;
        case 0x133a50u: goto label_133a50;
        case 0x133a54u: goto label_133a54;
        case 0x133a58u: goto label_133a58;
        case 0x133a5cu: goto label_133a5c;
        case 0x133a60u: goto label_133a60;
        case 0x133a64u: goto label_133a64;
        case 0x133a68u: goto label_133a68;
        case 0x133a6cu: goto label_133a6c;
        case 0x133a70u: goto label_133a70;
        case 0x133a74u: goto label_133a74;
        case 0x133a78u: goto label_133a78;
        case 0x133a7cu: goto label_133a7c;
        case 0x133a80u: goto label_133a80;
        case 0x133a84u: goto label_133a84;
        case 0x133a88u: goto label_133a88;
        case 0x133a8cu: goto label_133a8c;
        case 0x133a90u: goto label_133a90;
        case 0x133a94u: goto label_133a94;
        case 0x133a98u: goto label_133a98;
        case 0x133a9cu: goto label_133a9c;
        case 0x133aa0u: goto label_133aa0;
        case 0x133aa4u: goto label_133aa4;
        case 0x133aa8u: goto label_133aa8;
        case 0x133aacu: goto label_133aac;
        case 0x133ab0u: goto label_133ab0;
        case 0x133ab4u: goto label_133ab4;
        case 0x133ab8u: goto label_133ab8;
        case 0x133abcu: goto label_133abc;
        case 0x133ac0u: goto label_133ac0;
        case 0x133ac4u: goto label_133ac4;
        case 0x133ac8u: goto label_133ac8;
        case 0x133accu: goto label_133acc;
        case 0x133ad0u: goto label_133ad0;
        case 0x133ad4u: goto label_133ad4;
        case 0x133ad8u: goto label_133ad8;
        case 0x133adcu: goto label_133adc;
        case 0x133ae0u: goto label_133ae0;
        case 0x133ae4u: goto label_133ae4;
        case 0x133ae8u: goto label_133ae8;
        case 0x133aecu: goto label_133aec;
        case 0x133af0u: goto label_133af0;
        case 0x133af4u: goto label_133af4;
        case 0x133af8u: goto label_133af8;
        case 0x133afcu: goto label_133afc;
        case 0x133b00u: goto label_133b00;
        case 0x133b04u: goto label_133b04;
        case 0x133b08u: goto label_133b08;
        case 0x133b0cu: goto label_133b0c;
        case 0x133b10u: goto label_133b10;
        case 0x133b14u: goto label_133b14;
        case 0x133b18u: goto label_133b18;
        case 0x133b1cu: goto label_133b1c;
        case 0x133b20u: goto label_133b20;
        case 0x133b24u: goto label_133b24;
        case 0x133b28u: goto label_133b28;
        case 0x133b2cu: goto label_133b2c;
        case 0x133b30u: goto label_133b30;
        case 0x133b34u: goto label_133b34;
        case 0x133b38u: goto label_133b38;
        case 0x133b3cu: goto label_133b3c;
        case 0x133b40u: goto label_133b40;
        case 0x133b44u: goto label_133b44;
        case 0x133b48u: goto label_133b48;
        case 0x133b4cu: goto label_133b4c;
        case 0x133b50u: goto label_133b50;
        case 0x133b54u: goto label_133b54;
        case 0x133b58u: goto label_133b58;
        case 0x133b5cu: goto label_133b5c;
        case 0x133b60u: goto label_133b60;
        case 0x133b64u: goto label_133b64;
        case 0x133b68u: goto label_133b68;
        case 0x133b6cu: goto label_133b6c;
        case 0x133b70u: goto label_133b70;
        case 0x133b74u: goto label_133b74;
        case 0x133b78u: goto label_133b78;
        case 0x133b7cu: goto label_133b7c;
        case 0x133b80u: goto label_133b80;
        case 0x133b84u: goto label_133b84;
        case 0x133b88u: goto label_133b88;
        case 0x133b8cu: goto label_133b8c;
        case 0x133b90u: goto label_133b90;
        case 0x133b94u: goto label_133b94;
        case 0x133b98u: goto label_133b98;
        case 0x133b9cu: goto label_133b9c;
        case 0x133ba0u: goto label_133ba0;
        case 0x133ba4u: goto label_133ba4;
        case 0x133ba8u: goto label_133ba8;
        case 0x133bacu: goto label_133bac;
        case 0x133bb0u: goto label_133bb0;
        case 0x133bb4u: goto label_133bb4;
        case 0x133bb8u: goto label_133bb8;
        case 0x133bbcu: goto label_133bbc;
        case 0x133bc0u: goto label_133bc0;
        case 0x133bc4u: goto label_133bc4;
        case 0x133bc8u: goto label_133bc8;
        case 0x133bccu: goto label_133bcc;
        case 0x133bd0u: goto label_133bd0;
        case 0x133bd4u: goto label_133bd4;
        case 0x133bd8u: goto label_133bd8;
        case 0x133bdcu: goto label_133bdc;
        case 0x133be0u: goto label_133be0;
        case 0x133be4u: goto label_133be4;
        case 0x133be8u: goto label_133be8;
        case 0x133becu: goto label_133bec;
        case 0x133bf0u: goto label_133bf0;
        case 0x133bf4u: goto label_133bf4;
        case 0x133bf8u: goto label_133bf8;
        case 0x133bfcu: goto label_133bfc;
        case 0x133c00u: goto label_133c00;
        case 0x133c04u: goto label_133c04;
        case 0x133c08u: goto label_133c08;
        case 0x133c0cu: goto label_133c0c;
        case 0x133c10u: goto label_133c10;
        case 0x133c14u: goto label_133c14;
        case 0x133c18u: goto label_133c18;
        case 0x133c1cu: goto label_133c1c;
        case 0x133c20u: goto label_133c20;
        case 0x133c24u: goto label_133c24;
        case 0x133c28u: goto label_133c28;
        case 0x133c2cu: goto label_133c2c;
        case 0x133c30u: goto label_133c30;
        case 0x133c34u: goto label_133c34;
        case 0x133c38u: goto label_133c38;
        case 0x133c3cu: goto label_133c3c;
        case 0x133c40u: goto label_133c40;
        case 0x133c44u: goto label_133c44;
        case 0x133c48u: goto label_133c48;
        case 0x133c4cu: goto label_133c4c;
        case 0x133c50u: goto label_133c50;
        case 0x133c54u: goto label_133c54;
        case 0x133c58u: goto label_133c58;
        case 0x133c5cu: goto label_133c5c;
        case 0x133c60u: goto label_133c60;
        case 0x133c64u: goto label_133c64;
        case 0x133c68u: goto label_133c68;
        case 0x133c6cu: goto label_133c6c;
        case 0x133c70u: goto label_133c70;
        case 0x133c74u: goto label_133c74;
        case 0x133c78u: goto label_133c78;
        case 0x133c7cu: goto label_133c7c;
        case 0x133c80u: goto label_133c80;
        case 0x133c84u: goto label_133c84;
        case 0x133c88u: goto label_133c88;
        case 0x133c8cu: goto label_133c8c;
        case 0x133c90u: goto label_133c90;
        case 0x133c94u: goto label_133c94;
        case 0x133c98u: goto label_133c98;
        case 0x133c9cu: goto label_133c9c;
        case 0x133ca0u: goto label_133ca0;
        case 0x133ca4u: goto label_133ca4;
        case 0x133ca8u: goto label_133ca8;
        case 0x133cacu: goto label_133cac;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cb4u: goto label_133cb4;
        case 0x133cb8u: goto label_133cb8;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cc4u: goto label_133cc4;
        case 0x133cc8u: goto label_133cc8;
        case 0x133cccu: goto label_133ccc;
        case 0x133cd0u: goto label_133cd0;
        case 0x133cd4u: goto label_133cd4;
        case 0x133cd8u: goto label_133cd8;
        case 0x133cdcu: goto label_133cdc;
        case 0x133ce0u: goto label_133ce0;
        case 0x133ce4u: goto label_133ce4;
        case 0x133ce8u: goto label_133ce8;
        case 0x133cecu: goto label_133cec;
        case 0x133cf0u: goto label_133cf0;
        case 0x133cf4u: goto label_133cf4;
        case 0x133cf8u: goto label_133cf8;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d00u: goto label_133d00;
        case 0x133d04u: goto label_133d04;
        case 0x133d08u: goto label_133d08;
        case 0x133d0cu: goto label_133d0c;
        case 0x133d10u: goto label_133d10;
        case 0x133d14u: goto label_133d14;
        case 0x133d18u: goto label_133d18;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d20u: goto label_133d20;
        case 0x133d24u: goto label_133d24;
        case 0x133d28u: goto label_133d28;
        case 0x133d2cu: goto label_133d2c;
        case 0x133d30u: goto label_133d30;
        case 0x133d34u: goto label_133d34;
        case 0x133d38u: goto label_133d38;
        case 0x133d3cu: goto label_133d3c;
        case 0x133d40u: goto label_133d40;
        case 0x133d44u: goto label_133d44;
        case 0x133d48u: goto label_133d48;
        case 0x133d4cu: goto label_133d4c;
        case 0x133d50u: goto label_133d50;
        case 0x133d54u: goto label_133d54;
        case 0x133d58u: goto label_133d58;
        case 0x133d5cu: goto label_133d5c;
        case 0x133d60u: goto label_133d60;
        case 0x133d64u: goto label_133d64;
        case 0x133d68u: goto label_133d68;
        case 0x133d6cu: goto label_133d6c;
        case 0x133d70u: goto label_133d70;
        case 0x133d74u: goto label_133d74;
        case 0x133d78u: goto label_133d78;
        case 0x133d7cu: goto label_133d7c;
        case 0x133d80u: goto label_133d80;
        case 0x133d84u: goto label_133d84;
        case 0x133d88u: goto label_133d88;
        case 0x133d8cu: goto label_133d8c;
        case 0x133d90u: goto label_133d90;
        case 0x133d94u: goto label_133d94;
        case 0x133d98u: goto label_133d98;
        case 0x133d9cu: goto label_133d9c;
        case 0x133da0u: goto label_133da0;
        case 0x133da4u: goto label_133da4;
        case 0x133da8u: goto label_133da8;
        case 0x133dacu: goto label_133dac;
        case 0x133db0u: goto label_133db0;
        case 0x133db4u: goto label_133db4;
        case 0x133db8u: goto label_133db8;
        case 0x133dbcu: goto label_133dbc;
        case 0x133dc0u: goto label_133dc0;
        case 0x133dc4u: goto label_133dc4;
        case 0x133dc8u: goto label_133dc8;
        case 0x133dccu: goto label_133dcc;
        case 0x133dd0u: goto label_133dd0;
        case 0x133dd4u: goto label_133dd4;
        case 0x133dd8u: goto label_133dd8;
        case 0x133ddcu: goto label_133ddc;
        case 0x133de0u: goto label_133de0;
        case 0x133de4u: goto label_133de4;
        case 0x133de8u: goto label_133de8;
        case 0x133decu: goto label_133dec;
        case 0x133df0u: goto label_133df0;
        case 0x133df4u: goto label_133df4;
        case 0x133df8u: goto label_133df8;
        case 0x133dfcu: goto label_133dfc;
        case 0x133e00u: goto label_133e00;
        case 0x133e04u: goto label_133e04;
        case 0x133e08u: goto label_133e08;
        case 0x133e0cu: goto label_133e0c;
        case 0x133e10u: goto label_133e10;
        case 0x133e14u: goto label_133e14;
        case 0x133e18u: goto label_133e18;
        case 0x133e1cu: goto label_133e1c;
        case 0x133e20u: goto label_133e20;
        case 0x133e24u: goto label_133e24;
        case 0x133e28u: goto label_133e28;
        case 0x133e2cu: goto label_133e2c;
        case 0x133e30u: goto label_133e30;
        case 0x133e34u: goto label_133e34;
        case 0x133e38u: goto label_133e38;
        case 0x133e3cu: goto label_133e3c;
        case 0x133e40u: goto label_133e40;
        case 0x133e44u: goto label_133e44;
        case 0x133e48u: goto label_133e48;
        case 0x133e4cu: goto label_133e4c;
        case 0x133e50u: goto label_133e50;
        case 0x133e54u: goto label_133e54;
        case 0x133e58u: goto label_133e58;
        case 0x133e5cu: goto label_133e5c;
        case 0x133e60u: goto label_133e60;
        case 0x133e64u: goto label_133e64;
        case 0x133e68u: goto label_133e68;
        case 0x133e6cu: goto label_133e6c;
        case 0x133e70u: goto label_133e70;
        case 0x133e74u: goto label_133e74;
        case 0x133e78u: goto label_133e78;
        case 0x133e7cu: goto label_133e7c;
        case 0x133e80u: goto label_133e80;
        case 0x133e84u: goto label_133e84;
        case 0x133e88u: goto label_133e88;
        case 0x133e8cu: goto label_133e8c;
        case 0x133e90u: goto label_133e90;
        case 0x133e94u: goto label_133e94;
        case 0x133e98u: goto label_133e98;
        case 0x133e9cu: goto label_133e9c;
        case 0x133ea0u: goto label_133ea0;
        case 0x133ea4u: goto label_133ea4;
        case 0x133ea8u: goto label_133ea8;
        case 0x133eacu: goto label_133eac;
        case 0x133eb0u: goto label_133eb0;
        case 0x133eb4u: goto label_133eb4;
        case 0x133eb8u: goto label_133eb8;
        case 0x133ebcu: goto label_133ebc;
        case 0x133ec0u: goto label_133ec0;
        case 0x133ec4u: goto label_133ec4;
        case 0x133ec8u: goto label_133ec8;
        case 0x133eccu: goto label_133ecc;
        case 0x133ed0u: goto label_133ed0;
        case 0x133ed4u: goto label_133ed4;
        case 0x133ed8u: goto label_133ed8;
        case 0x133edcu: goto label_133edc;
        case 0x133ee0u: goto label_133ee0;
        case 0x133ee4u: goto label_133ee4;
        case 0x133ee8u: goto label_133ee8;
        case 0x133eecu: goto label_133eec;
        case 0x133ef0u: goto label_133ef0;
        case 0x133ef4u: goto label_133ef4;
        case 0x133ef8u: goto label_133ef8;
        case 0x133efcu: goto label_133efc;
        case 0x133f00u: goto label_133f00;
        case 0x133f04u: goto label_133f04;
        case 0x133f08u: goto label_133f08;
        case 0x133f0cu: goto label_133f0c;
        case 0x133f10u: goto label_133f10;
        case 0x133f14u: goto label_133f14;
        case 0x133f18u: goto label_133f18;
        case 0x133f1cu: goto label_133f1c;
        case 0x133f20u: goto label_133f20;
        case 0x133f24u: goto label_133f24;
        case 0x133f28u: goto label_133f28;
        case 0x133f2cu: goto label_133f2c;
        case 0x133f30u: goto label_133f30;
        case 0x133f34u: goto label_133f34;
        case 0x133f38u: goto label_133f38;
        case 0x133f3cu: goto label_133f3c;
        case 0x133f40u: goto label_133f40;
        case 0x133f44u: goto label_133f44;
        case 0x133f48u: goto label_133f48;
        case 0x133f4cu: goto label_133f4c;
        case 0x133f50u: goto label_133f50;
        case 0x133f54u: goto label_133f54;
        case 0x133f58u: goto label_133f58;
        case 0x133f5cu: goto label_133f5c;
        case 0x133f60u: goto label_133f60;
        case 0x133f64u: goto label_133f64;
        case 0x133f68u: goto label_133f68;
        case 0x133f6cu: goto label_133f6c;
        case 0x133f70u: goto label_133f70;
        case 0x133f74u: goto label_133f74;
        case 0x133f78u: goto label_133f78;
        case 0x133f7cu: goto label_133f7c;
        case 0x133f80u: goto label_133f80;
        case 0x133f84u: goto label_133f84;
        case 0x133f88u: goto label_133f88;
        case 0x133f8cu: goto label_133f8c;
        case 0x133f90u: goto label_133f90;
        case 0x133f94u: goto label_133f94;
        case 0x133f98u: goto label_133f98;
        case 0x133f9cu: goto label_133f9c;
        case 0x133fa0u: goto label_133fa0;
        case 0x133fa4u: goto label_133fa4;
        case 0x133fa8u: goto label_133fa8;
        case 0x133facu: goto label_133fac;
        case 0x133fb0u: goto label_133fb0;
        case 0x133fb4u: goto label_133fb4;
        case 0x133fb8u: goto label_133fb8;
        case 0x133fbcu: goto label_133fbc;
        case 0x133fc0u: goto label_133fc0;
        case 0x133fc4u: goto label_133fc4;
        case 0x133fc8u: goto label_133fc8;
        case 0x133fccu: goto label_133fcc;
        case 0x133fd0u: goto label_133fd0;
        case 0x133fd4u: goto label_133fd4;
        case 0x133fd8u: goto label_133fd8;
        case 0x133fdcu: goto label_133fdc;
        case 0x133fe0u: goto label_133fe0;
        case 0x133fe4u: goto label_133fe4;
        case 0x133fe8u: goto label_133fe8;
        case 0x133fecu: goto label_133fec;
        case 0x133ff0u: goto label_133ff0;
        case 0x133ff4u: goto label_133ff4;
        case 0x133ff8u: goto label_133ff8;
        case 0x133ffcu: goto label_133ffc;
        case 0x134000u: goto label_134000;
        case 0x134004u: goto label_134004;
        case 0x134008u: goto label_134008;
        case 0x13400cu: goto label_13400c;
        case 0x134010u: goto label_134010;
        case 0x134014u: goto label_134014;
        case 0x134018u: goto label_134018;
        case 0x13401cu: goto label_13401c;
        case 0x134020u: goto label_134020;
        case 0x134024u: goto label_134024;
        case 0x134028u: goto label_134028;
        case 0x13402cu: goto label_13402c;
        case 0x134030u: goto label_134030;
        case 0x134034u: goto label_134034;
        case 0x134038u: goto label_134038;
        case 0x13403cu: goto label_13403c;
        case 0x134040u: goto label_134040;
        case 0x134044u: goto label_134044;
        case 0x134048u: goto label_134048;
        case 0x13404cu: goto label_13404c;
        case 0x134050u: goto label_134050;
        case 0x134054u: goto label_134054;
        case 0x134058u: goto label_134058;
        case 0x13405cu: goto label_13405c;
        case 0x134060u: goto label_134060;
        case 0x134064u: goto label_134064;
        case 0x134068u: goto label_134068;
        case 0x13406cu: goto label_13406c;
        case 0x134070u: goto label_134070;
        case 0x134074u: goto label_134074;
        case 0x134078u: goto label_134078;
        case 0x13407cu: goto label_13407c;
        case 0x134080u: goto label_134080;
        case 0x134084u: goto label_134084;
        case 0x134088u: goto label_134088;
        case 0x13408cu: goto label_13408c;
        case 0x134090u: goto label_134090;
        case 0x134094u: goto label_134094;
        case 0x134098u: goto label_134098;
        case 0x13409cu: goto label_13409c;
        case 0x1340a0u: goto label_1340a0;
        case 0x1340a4u: goto label_1340a4;
        case 0x1340a8u: goto label_1340a8;
        case 0x1340acu: goto label_1340ac;
        case 0x1340b0u: goto label_1340b0;
        case 0x1340b4u: goto label_1340b4;
        case 0x1340b8u: goto label_1340b8;
        case 0x1340bcu: goto label_1340bc;
        case 0x1340c0u: goto label_1340c0;
        case 0x1340c4u: goto label_1340c4;
        case 0x1340c8u: goto label_1340c8;
        case 0x1340ccu: goto label_1340cc;
        case 0x1340d0u: goto label_1340d0;
        case 0x1340d4u: goto label_1340d4;
        case 0x1340d8u: goto label_1340d8;
        default: break;
    }

    ctx->pc = 0x133368u;

label_133368:
    // 0x133368: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_13336c:
    // 0x13336c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133370:
    // 0x133370: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x133370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_133374:
    // 0x133374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x133374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133378:
    // 0x133378: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x133378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_13337c:
    // 0x13337c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13337cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133380:
    // 0x133380: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x133380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_133384:
    // 0x133384: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x133384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_133388:
    // 0x133388: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x133388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_13338c:
    // 0x13338c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x13338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_133390:
    // 0x133390: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x133390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_133394:
    // 0x133394: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x133394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_133398:
    // 0x133398: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x133398u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_13339c:
    // 0x13339c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x13339cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1333a0:
    // 0x1333a0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1333a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1333a4:
    // 0x1333a4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1333a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_1333a8:
    // 0x1333a8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1333ac:
    // 0x1333ac: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1333b0:
    // 0x1333b0: 0xc06a250  jal         func_1A8940
label_1333b4:
    if (ctx->pc == 0x1333B4u) {
        ctx->pc = 0x1333B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333B0u;
        // 0x1333b4: 0x8c550048  lw          $s5, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1333B8u;
        goto label_1333b8;
    }
    ctx->pc = 0x1333B0u;
    SET_GPR_U32(ctx, 31, 0x1333B8u);
    ctx->pc = 0x1333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333B0u;
    // 0x1333b4: 0x8c550048  lw          $s5, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1333B0u, 0x1333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B8u;
label_1333b8:
    // 0x1333b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1333b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1333bc:
    // 0x1333bc: 0xc06a26e  jal         func_1A89B8
label_1333c0:
    if (ctx->pc == 0x1333C0u) {
        ctx->pc = 0x1333C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333BCu;
        // 0x1333c0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1333C4u;
        goto label_1333c4;
    }
    ctx->pc = 0x1333BCu;
    SET_GPR_U32(ctx, 31, 0x1333C4u);
    ctx->pc = 0x1333C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333BCu;
    // 0x1333c0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1333BCu, 0x1333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333C4u;
label_1333c4:
    // 0x1333c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1333c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1333c8:
    // 0x1333c8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1333c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1333cc:
    // 0x1333cc: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x1333ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_1333d0:
    // 0x1333d0: 0x10600334  beqz        $v1, . + 4 + (0x334 << 2)
label_1333d4:
    if (ctx->pc == 0x1333D4u) {
        ctx->pc = 0x1333D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333D0u;
        // 0x1333d4: 0x2454fffe  addiu       $s4, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1333D8u;
        goto label_1333d8;
    }
    ctx->pc = 0x1333D0u;
    {
        const bool branch_taken_0x1333d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1333D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333D0u;
        // 0x1333d4: 0x2454fffe  addiu       $s4, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333d0) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1333D8u;
label_1333d8:
    // 0x1333d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1333dc:
    // 0x1333dc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1333dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1333e0:
    // 0x1333e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1333e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1333e4:
    // 0x1333e4: 0x8c636470  lw          $v1, 0x6470($v1)
    ctx->pc = 0x1333e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25712)));
label_1333e8:
    // 0x1333e8: 0x600008  jr          $v1
label_1333ec:
    if (ctx->pc == 0x1333ECu) {
        ctx->pc = 0x1333F0u;
        goto label_1333f0;
    }
    ctx->pc = 0x1333E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F8u: goto label_1333f8;
            case 0x133478u: goto label_133478;
            case 0x133480u: goto label_133480;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334E0u: goto label_1334e0;
            case 0x133508u: goto label_133508;
            case 0x133510u: goto label_133510;
            case 0x133518u: goto label_133518;
            case 0x133540u: goto label_133540;
            case 0x133558u: goto label_133558;
            case 0x1335D0u: goto label_1335d0;
            case 0x133680u: goto label_133680;
            case 0x1336D0u: goto label_1336d0;
            case 0x133718u: goto label_133718;
            case 0x133770u: goto label_133770;
            case 0x133898u: goto label_133898;
            case 0x1338E8u: goto label_1338e8;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A88u: goto label_133a88;
            case 0x133B88u: goto label_133b88;
            case 0x133C18u: goto label_133c18;
            case 0x133D90u: goto label_133d90;
            case 0x133DF0u: goto label_133df0;
            case 0x133E98u: goto label_133e98;
            case 0x133FA0u: goto label_133fa0;
            case 0x1340A4u: goto label_1340a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1333F0u;
label_1333f0:
    // 0x1333f0: 0x1000032c  b           . + 4 + (0x32C << 2)
label_1333f4:
    if (ctx->pc == 0x1333F4u) {
        ctx->pc = 0x1333F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333F0u;
        // 0x1333f4: 0x8e700098  lw          $s0, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1333F8u;
        goto label_1333f8;
    }
    ctx->pc = 0x1333F0u;
    {
        const bool branch_taken_0x1333f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1333F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333F0u;
        // 0x1333f4: 0x8e700098  lw          $s0, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333f0) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1333F8u;
label_1333f8:
    // 0x1333f8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1333f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1333fc:
    // 0x1333fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_133400:
    // 0x133400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133404:
    // 0x133404: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
label_133408:
    if (ctx->pc == 0x133408u) {
        ctx->pc = 0x13340Cu;
        goto label_13340c;
    }
    ctx->pc = 0x133404u;
    {
        const bool branch_taken_0x133404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133404) {
            ctx->pc = 0x133468u;
            goto label_133468;
        }
    }
    ctx->pc = 0x13340Cu;
label_13340c:
    // 0x13340c: 0xc06a26e  jal         func_1A89B8
label_133410:
    if (ctx->pc == 0x133410u) {
        ctx->pc = 0x133410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13340Cu;
        // 0x133410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133414u;
        goto label_133414;
    }
    ctx->pc = 0x13340Cu;
    SET_GPR_U32(ctx, 31, 0x133414u);
    ctx->pc = 0x133410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13340Cu;
    // 0x133410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13340Cu, 0x133414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133414u;
label_133414:
    // 0x133414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133418:
    // 0x133418: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13341c:
    // 0x13341c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_133420:
    if (ctx->pc == 0x133420u) {
        ctx->pc = 0x133420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13341Cu;
        // 0x133420: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133424u;
        goto label_133424;
    }
    ctx->pc = 0x13341Cu;
    {
        const bool branch_taken_0x13341c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x133420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13341Cu;
        // 0x133420: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13341c) {
            ctx->pc = 0x133438u;
            goto label_133438;
        }
    }
    ctx->pc = 0x133424u;
label_133424:
    // 0x133424: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133428:
    // 0x133428: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x133428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_13342c:
    // 0x13342c: 0x1000000d  b           . + 4 + (0xD << 2)
label_133430:
    if (ctx->pc == 0x133430u) {
        ctx->pc = 0x133430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13342Cu;
        // 0x133430: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133434u;
        goto label_133434;
    }
    ctx->pc = 0x13342Cu;
    {
        const bool branch_taken_0x13342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13342Cu;
        // 0x133430: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13342c) {
            ctx->pc = 0x133464u;
            goto label_133464;
        }
    }
    ctx->pc = 0x133434u;
label_133434:
    // 0x133434: 0x0  nop
    ctx->pc = 0x133434u;
    // NOP
label_133438:
    // 0x133438: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_13343c:
    if (ctx->pc == 0x13343Cu) {
        ctx->pc = 0x133440u;
        goto label_133440;
    }
    ctx->pc = 0x133438u;
    {
        const bool branch_taken_0x133438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x133438) {
            ctx->pc = 0x133448u;
            goto label_133448;
        }
    }
    ctx->pc = 0x133440u;
label_133440:
    // 0x133440: 0x10000008  b           . + 4 + (0x8 << 2)
label_133444:
    if (ctx->pc == 0x133444u) {
        ctx->pc = 0x133444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133440u;
        // 0x133444: 0x8f848a30  lw          $a0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133448u;
        goto label_133448;
    }
    ctx->pc = 0x133440u;
    {
        const bool branch_taken_0x133440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133440u;
        // 0x133444: 0x8f848a30  lw          $a0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133440) {
            ctx->pc = 0x133464u;
            goto label_133464;
        }
    }
    ctx->pc = 0x133448u;
label_133448:
    // 0x133448: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_13344c:
    if (ctx->pc == 0x13344Cu) {
        ctx->pc = 0x13344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133448u;
        // 0x13344c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133450u;
        goto label_133450;
    }
    ctx->pc = 0x133448u;
    {
        const bool branch_taken_0x133448 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x13344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133448u;
        // 0x13344c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133448) {
            ctx->pc = 0x133460u;
            goto label_133460;
        }
    }
    ctx->pc = 0x133450u;
label_133450:
    // 0x133450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_133454:
    // 0x133454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_133458:
    // 0x133458: 0x10000002  b           . + 4 + (0x2 << 2)
label_13345c:
    if (ctx->pc == 0x13345Cu) {
        ctx->pc = 0x13345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133458u;
        // 0x13345c: 0x8c443630  lw          $a0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133460u;
        goto label_133460;
    }
    ctx->pc = 0x133458u;
    {
        const bool branch_taken_0x133458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133458u;
        // 0x13345c: 0x8c443630  lw          $a0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133458) {
            ctx->pc = 0x133464u;
            goto label_133464;
        }
    }
    ctx->pc = 0x133460u;
label_133460:
    // 0x133460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x133460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133464:
    // 0x133464: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x133464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133468:
    // 0x133468: 0x5260030f  beql        $s3, $zero, . + 4 + (0x30F << 2)
label_13346c:
    if (ctx->pc == 0x13346Cu) {
        ctx->pc = 0x13346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133468u;
        // 0x13346c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133470u;
        goto label_133470;
    }
    ctx->pc = 0x133468u;
    {
        const bool branch_taken_0x133468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x133468) {
            ctx->pc = 0x13346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133468u;
            // 0x13346c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133470u;
label_133470:
    // 0x133470: 0x10000307  b           . + 4 + (0x307 << 2)
label_133474:
    if (ctx->pc == 0x133474u) {
        ctx->pc = 0x133474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133470u;
        // 0x133474: 0xc6600088  lwc1        $f0, 0x88($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x133478u;
        goto label_133478;
    }
    ctx->pc = 0x133470u;
    {
        const bool branch_taken_0x133470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133470u;
        // 0x133474: 0xc6600088  lwc1        $f0, 0x88($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133470) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x133478u;
label_133478:
    // 0x133478: 0x1000030a  b           . + 4 + (0x30A << 2)
label_13347c:
    if (ctx->pc == 0x13347Cu) {
        ctx->pc = 0x13347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133478u;
        // 0x13347c: 0x8e700184  lw          $s0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133480u;
        goto label_133480;
    }
    ctx->pc = 0x133478u;
    {
        const bool branch_taken_0x133478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133478u;
        // 0x13347c: 0x8e700184  lw          $s0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133478) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133480u;
label_133480:
    // 0x133480: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133484:
    // 0x133484: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x133484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_133488:
    // 0x133488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13348c:
    // 0x13348c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x13348cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_133490:
    // 0x133490: 0x54640305  bnel        $v1, $a0, . + 4 + (0x305 << 2)
label_133494:
    if (ctx->pc == 0x133494u) {
        ctx->pc = 0x133494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133490u;
        // 0x133494: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133498u;
        goto label_133498;
    }
    ctx->pc = 0x133490u;
    {
        const bool branch_taken_0x133490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x133490) {
            ctx->pc = 0x133494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133490u;
            // 0x133494: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133498u;
label_133498:
    // 0x133498: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_13349c:
    if (ctx->pc == 0x13349Cu) {
        ctx->pc = 0x13349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133498u;
        // 0x13349c: 0xc4400190  lwc1        $f0, 0x190($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334A0u;
        goto label_1334a0;
    }
    ctx->pc = 0x133498u;
    {
        const bool branch_taken_0x133498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133498u;
        // 0x13349c: 0xc4400190  lwc1        $f0, 0x190($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133498) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x1334A0u;
label_1334a0:
    // 0x1334a0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1334a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1334a4:
    // 0x1334a4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_1334a8:
    // 0x1334a8: 0x546202ff  bnel        $v1, $v0, . + 4 + (0x2FF << 2)
label_1334ac:
    if (ctx->pc == 0x1334ACu) {
        ctx->pc = 0x1334ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334A8u;
        // 0x1334ac: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334B0u;
        goto label_1334b0;
    }
    ctx->pc = 0x1334A8u;
    {
        const bool branch_taken_0x1334a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1334a8) {
            ctx->pc = 0x1334ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1334A8u;
            // 0x1334ac: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x1334B0u;
label_1334b0:
    // 0x1334b0: 0xc06a26e  jal         func_1A89B8
label_1334b4:
    if (ctx->pc == 0x1334B4u) {
        ctx->pc = 0x1334B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334B0u;
        // 0x1334b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334B8u;
        goto label_1334b8;
    }
    ctx->pc = 0x1334B0u;
    SET_GPR_U32(ctx, 31, 0x1334B8u);
    ctx->pc = 0x1334B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334B0u;
    // 0x1334b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1334B0u, 0x1334B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334B8u;
label_1334b8:
    // 0x1334b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1334b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1334bc:
    // 0x1334bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1334c0:
    // 0x1334c0: 0x100002f8  b           . + 4 + (0x2F8 << 2)
label_1334c4:
    if (ctx->pc == 0x1334C4u) {
        ctx->pc = 0x1334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C0u;
        // 0x1334c4: 0x8c5006a8  lw          $s0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334C8u;
        goto label_1334c8;
    }
    ctx->pc = 0x1334C0u;
    {
        const bool branch_taken_0x1334c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C0u;
        // 0x1334c4: 0x8c5006a8  lw          $s0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c0) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1334C8u;
label_1334c8:
    // 0x1334c8: 0x1a8002f6  blez        $s4, . + 4 + (0x2F6 << 2)
label_1334cc:
    if (ctx->pc == 0x1334CCu) {
        ctx->pc = 0x1334CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C8u;
        // 0x1334cc: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334D0u;
        goto label_1334d0;
    }
    ctx->pc = 0x1334C8u;
    {
        const bool branch_taken_0x1334c8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1334CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C8u;
        // 0x1334cc: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c8) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1334D0u;
label_1334d0:
    // 0x1334d0: 0x100002f4  b           . + 4 + (0x2F4 << 2)
label_1334d4:
    if (ctx->pc == 0x1334D4u) {
        ctx->pc = 0x1334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D0u;
        // 0x1334d4: 0xa6600238  sh          $zero, 0x238($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 568), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334D8u;
        goto label_1334d8;
    }
    ctx->pc = 0x1334D0u;
    {
        const bool branch_taken_0x1334d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D0u;
        // 0x1334d4: 0xa6600238  sh          $zero, 0x238($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 568), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d0) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1334D8u;
label_1334d8:
    // 0x1334d8: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_1334dc:
    if (ctx->pc == 0x1334DCu) {
        ctx->pc = 0x1334DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D8u;
        // 0x1334dc: 0x9670023a  lhu         $s0, 0x23A($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334E0u;
        goto label_1334e0;
    }
    ctx->pc = 0x1334D8u;
    {
        const bool branch_taken_0x1334d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D8u;
        // 0x1334dc: 0x9670023a  lhu         $s0, 0x23A($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 570)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d8) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1334E0u;
label_1334e0:
    // 0x1334e0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1334e4:
    // 0x1334e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1334e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1334e8:
    // 0x1334e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1334e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1334ec:
    // 0x1334ec: 0x506402ed  beql        $v1, $a0, . + 4 + (0x2ED << 2)
label_1334f0:
    if (ctx->pc == 0x1334F0u) {
        ctx->pc = 0x1334F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334ECu;
        // 0x1334f0: 0x8e70023c  lw          $s0, 0x23C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1334F4u;
        goto label_1334f4;
    }
    ctx->pc = 0x1334ECu;
    {
        const bool branch_taken_0x1334ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1334ec) {
            ctx->pc = 0x1334F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1334ECu;
            // 0x1334f0: 0x8e70023c  lw          $s0, 0x23C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1334F4u;
label_1334f4:
    // 0x1334f4: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x1334f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
label_1334f8:
    // 0x1334f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1334fc:
    // 0x1334fc: 0x100002e9  b           . + 4 + (0x2E9 << 2)
label_133500:
    if (ctx->pc == 0x133500u) {
        ctx->pc = 0x133500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334FCu;
        // 0x133500: 0x3050000f  andi        $s0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133504u;
        goto label_133504;
    }
    ctx->pc = 0x1334FCu;
    {
        const bool branch_taken_0x1334fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334FCu;
        // 0x133500: 0x3050000f  andi        $s0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334fc) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133504u;
label_133504:
    // 0x133504: 0x0  nop
    ctx->pc = 0x133504u;
    // NOP
label_133508:
    // 0x133508: 0x100002e6  b           . + 4 + (0x2E6 << 2)
label_13350c:
    if (ctx->pc == 0x13350Cu) {
        ctx->pc = 0x13350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133508u;
        // 0x13350c: 0x8e700240  lw          $s0, 0x240($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133510u;
        goto label_133510;
    }
    ctx->pc = 0x133508u;
    {
        const bool branch_taken_0x133508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133508u;
        // 0x13350c: 0x8e700240  lw          $s0, 0x240($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133508) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133510u;
label_133510:
    // 0x133510: 0x100002e4  b           . + 4 + (0x2E4 << 2)
label_133514:
    if (ctx->pc == 0x133514u) {
        ctx->pc = 0x133514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133510u;
        // 0x133514: 0x92700235  lbu         $s0, 0x235($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 565)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133518u;
        goto label_133518;
    }
    ctx->pc = 0x133510u;
    {
        const bool branch_taken_0x133510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133510u;
        // 0x133514: 0x92700235  lbu         $s0, 0x235($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 565)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133510) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133518u;
label_133518:
    // 0x133518: 0x8e640230  lw          $a0, 0x230($s3)
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_13351c:
    // 0x13351c: 0x188002e1  blez        $a0, . + 4 + (0x2E1 << 2)
label_133520:
    if (ctx->pc == 0x133520u) {
        ctx->pc = 0x133520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13351Cu;
        // 0x133520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133524u;
        goto label_133524;
    }
    ctx->pc = 0x13351Cu;
    {
        const bool branch_taken_0x13351c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x133520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13351Cu;
        // 0x133520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13351c) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133524u;
label_133524:
    // 0x133524: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x133524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_133528:
    // 0x133528: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
label_13352c:
    // 0x13352c: 0x546202de  bnel        $v1, $v0, . + 4 + (0x2DE << 2)
label_133530:
    if (ctx->pc == 0x133530u) {
        ctx->pc = 0x133530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13352Cu;
        // 0x133530: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133534u;
        goto label_133534;
    }
    ctx->pc = 0x13352Cu;
    {
        const bool branch_taken_0x13352c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13352c) {
            ctx->pc = 0x133530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13352Cu;
            // 0x133530: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133534u;
label_133534:
    // 0x133534: 0x100002db  b           . + 4 + (0x2DB << 2)
label_133538:
    if (ctx->pc == 0x133538u) {
        ctx->pc = 0x133538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133534u;
        // 0x133538: 0x84900264  lh          $s0, 0x264($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13353Cu;
        goto label_13353c;
    }
    ctx->pc = 0x133534u;
    {
        const bool branch_taken_0x133534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133534u;
        // 0x133538: 0x84900264  lh          $s0, 0x264($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133534) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x13353Cu;
label_13353c:
    // 0x13353c: 0x0  nop
    ctx->pc = 0x13353cu;
    // NOP
label_133540:
    // 0x133540: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_133544:
    // 0x133544: 0xc052f32  jal         func_14BCC8
label_133548:
    if (ctx->pc == 0x133548u) {
        ctx->pc = 0x133548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133544u;
        // 0x133548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13354Cu;
        goto label_13354c;
    }
    ctx->pc = 0x133544u;
    SET_GPR_U32(ctx, 31, 0x13354Cu);
    ctx->pc = 0x133548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133544u;
    // 0x133548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x133544u, 0x13354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13354Cu;
label_13354c:
    // 0x13354c: 0x100002d5  b           . + 4 + (0x2D5 << 2)
label_133550:
    if (ctx->pc == 0x133550u) {
        ctx->pc = 0x133550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13354Cu;
        // 0x133550: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133554u;
        goto label_133554;
    }
    ctx->pc = 0x13354Cu;
    {
        const bool branch_taken_0x13354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13354Cu;
        // 0x133550: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13354c) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133554u;
label_133554:
    // 0x133554: 0x0  nop
    ctx->pc = 0x133554u;
    // NOP
label_133558:
    // 0x133558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13355c:
    // 0x13355c: 0xc06a282  jal         func_1A8A08
label_133560:
    if (ctx->pc == 0x133560u) {
        ctx->pc = 0x133560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13355Cu;
        // 0x133560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133564u;
        goto label_133564;
    }
    ctx->pc = 0x13355Cu;
    SET_GPR_U32(ctx, 31, 0x133564u);
    ctx->pc = 0x133560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13355Cu;
    // 0x133560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x13355Cu, 0x133564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133564u;
label_133564:
    // 0x133564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133568:
    // 0x133568: 0xc06a282  jal         func_1A8A08
label_13356c:
    if (ctx->pc == 0x13356Cu) {
        ctx->pc = 0x13356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133568u;
        // 0x13356c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133570u;
        goto label_133570;
    }
    ctx->pc = 0x133568u;
    SET_GPR_U32(ctx, 31, 0x133570u);
    ctx->pc = 0x13356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133568u;
    // 0x13356c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133568u, 0x133570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133570u;
label_133570:
    // 0x133570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133574:
    // 0x133574: 0xc06a282  jal         func_1A8A08
label_133578:
    if (ctx->pc == 0x133578u) {
        ctx->pc = 0x133578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133574u;
        // 0x133578: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13357Cu;
        goto label_13357c;
    }
    ctx->pc = 0x133574u;
    SET_GPR_U32(ctx, 31, 0x13357Cu);
    ctx->pc = 0x133578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133574u;
    // 0x133578: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133574u, 0x13357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13357Cu;
label_13357c:
    // 0x13357c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133580:
    // 0x133580: 0xc06a282  jal         func_1A8A08
label_133584:
    if (ctx->pc == 0x133584u) {
        ctx->pc = 0x133584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133580u;
        // 0x133584: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133588u;
        goto label_133588;
    }
    ctx->pc = 0x133580u;
    SET_GPR_U32(ctx, 31, 0x133588u);
    ctx->pc = 0x133584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133580u;
    // 0x133584: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133580u, 0x133588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133588u;
label_133588:
    // 0x133588: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_13358c:
    // 0x13358c: 0x8c42b830  lw          $v0, -0x47D0($v0)
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_133590:
    // 0x133590: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x133590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133594:
    // 0x133594: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x133594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133598:
    // 0x133598: 0x450202c3  bc1fl       . + 4 + (0x2C3 << 2)
label_13359c:
    if (ctx->pc == 0x13359Cu) {
        ctx->pc = 0x13359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133598u;
        // 0x13359c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335A0u;
        goto label_1335a0;
    }
    ctx->pc = 0x133598u;
    {
        const bool branch_taken_0x133598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133598) {
            ctx->pc = 0x13359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133598u;
            // 0x13359c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x1335A0u;
label_1335a0:
    // 0x1335a0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1335a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1335a4:
    // 0x1335a4: 0x450202c0  bc1fl       . + 4 + (0x2C0 << 2)
label_1335a8:
    if (ctx->pc == 0x1335A8u) {
        ctx->pc = 0x1335A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335A4u;
        // 0x1335a8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335ACu;
        goto label_1335ac;
    }
    ctx->pc = 0x1335A4u;
    {
        const bool branch_taken_0x1335a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335a4) {
            ctx->pc = 0x1335A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335A4u;
            // 0x1335a8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x1335ACu;
label_1335ac:
    // 0x1335ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1335acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1335b0:
    // 0x1335b0: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x1335b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1335b4:
    // 0x1335b4: 0x450202bc  bc1fl       . + 4 + (0x2BC << 2)
label_1335b8:
    if (ctx->pc == 0x1335B8u) {
        ctx->pc = 0x1335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B4u;
        // 0x1335b8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335BCu;
        goto label_1335bc;
    }
    ctx->pc = 0x1335B4u;
    {
        const bool branch_taken_0x1335b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335b4) {
            ctx->pc = 0x1335B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335B4u;
            // 0x1335b8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x1335BCu;
label_1335bc:
    // 0x1335bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1335bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1335c0:
    // 0x1335c0: 0x450202b9  bc1fl       . + 4 + (0x2B9 << 2)
label_1335c4:
    if (ctx->pc == 0x1335C4u) {
        ctx->pc = 0x1335C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335C0u;
        // 0x1335c4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335C8u;
        goto label_1335c8;
    }
    ctx->pc = 0x1335C0u;
    {
        const bool branch_taken_0x1335c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335c0) {
            ctx->pc = 0x1335C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335C0u;
            // 0x1335c4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x1335C8u;
label_1335c8:
    // 0x1335c8: 0x100002b6  b           . + 4 + (0x2B6 << 2)
label_1335cc:
    if (ctx->pc == 0x1335CCu) {
        ctx->pc = 0x1335CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335C8u;
        // 0x1335cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335D0u;
        goto label_1335d0;
    }
    ctx->pc = 0x1335C8u;
    {
        const bool branch_taken_0x1335c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335C8u;
        // 0x1335cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335c8) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x1335D0u;
label_1335d0:
    // 0x1335d0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1335d4:
    // 0x1335d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1335d8:
    // 0x1335d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1335d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1335dc:
    // 0x1335dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1335e0:
    // 0x1335e0: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_1335e4:
    if (ctx->pc == 0x1335E4u) {
        ctx->pc = 0x1335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335E0u;
        // 0x1335e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335E8u;
        goto label_1335e8;
    }
    ctx->pc = 0x1335E0u;
    {
        const bool branch_taken_0x1335e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335E0u;
        // 0x1335e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335e0) {
            ctx->pc = 0x1335F4u;
            goto label_1335f4;
        }
    }
    ctx->pc = 0x1335E8u;
label_1335e8:
    // 0x1335e8: 0xc06a26e  jal         func_1A89B8
label_1335ec:
    if (ctx->pc == 0x1335ECu) {
        ctx->pc = 0x1335ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335E8u;
        // 0x1335ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335F0u;
        goto label_1335f0;
    }
    ctx->pc = 0x1335E8u;
    SET_GPR_U32(ctx, 31, 0x1335F0u);
    ctx->pc = 0x1335ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335E8u;
    // 0x1335ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1335E8u, 0x1335F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335F0u;
label_1335f0:
    // 0x1335f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1335f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1335f4:
    // 0x1335f4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1335f8:
    if (ctx->pc == 0x1335F8u) {
        ctx->pc = 0x1335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335F4u;
        // 0x1335f8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1335FCu;
        goto label_1335fc;
    }
    ctx->pc = 0x1335F4u;
    {
        const bool branch_taken_0x1335f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335F4u;
        // 0x1335f8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335f4) {
            ctx->pc = 0x133608u;
            goto label_133608;
        }
    }
    ctx->pc = 0x1335FCu;
label_1335fc:
    // 0x1335fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_133600:
    if (ctx->pc == 0x133600u) {
        ctx->pc = 0x133600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335FCu;
        // 0x133600: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133604u;
        goto label_133604;
    }
    ctx->pc = 0x1335FCu;
    {
        const bool branch_taken_0x1335fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335FCu;
        // 0x133600: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335fc) {
            ctx->pc = 0x133624u;
            goto label_133624;
        }
    }
    ctx->pc = 0x133604u;
label_133604:
    // 0x133604: 0x0  nop
    ctx->pc = 0x133604u;
    // NOP
label_133608:
    // 0x133608: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x133608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_13360c:
    // 0x13360c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_133610:
    // 0x133610: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x133610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_133614:
    // 0x133614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_133618:
    // 0x133618: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_13361c:
    // 0x13361c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
label_133620:
    if (ctx->pc == 0x133620u) {
        ctx->pc = 0x133620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13361Cu;
        // 0x133620: 0x8c710230  lw          $s1, 0x230($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133624u;
        goto label_133624;
    }
    ctx->pc = 0x13361Cu;
    {
        const bool branch_taken_0x13361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13361c) {
            ctx->pc = 0x133620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13361Cu;
            // 0x133620: 0x8c710230  lw          $s1, 0x230($v1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133624u;
            goto label_133624;
        }
    }
    ctx->pc = 0x133624u;
label_133624:
    // 0x133624: 0x1220029f  beqz        $s1, . + 4 + (0x29F << 2)
label_133628:
    if (ctx->pc == 0x133628u) {
        ctx->pc = 0x133628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133624u;
        // 0x133628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13362Cu;
        goto label_13362c;
    }
    ctx->pc = 0x133624u;
    {
        const bool branch_taken_0x133624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133624u;
        // 0x133628: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133624) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x13362Cu;
label_13362c:
    // 0x13362c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x13362cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_133630:
    // 0x133630: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_133634:
    // 0x133634: 0x5462029c  bnel        $v1, $v0, . + 4 + (0x29C << 2)
label_133638:
    if (ctx->pc == 0x133638u) {
        ctx->pc = 0x133638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133634u;
        // 0x133638: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13363Cu;
        goto label_13363c;
    }
    ctx->pc = 0x133634u;
    {
        const bool branch_taken_0x133634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133634) {
            ctx->pc = 0x133638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133634u;
            // 0x133638: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x13363Cu;
label_13363c:
    // 0x13363c: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x13363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_133640:
    // 0x133640: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
label_133644:
    // 0x133644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_133648:
    // 0x133648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13364c:
    if (ctx->pc == 0x13364Cu) {
        ctx->pc = 0x13364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133648u;
        // 0x13364c: 0x313c3  sra         $v0, $v1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133650u;
        goto label_133650;
    }
    ctx->pc = 0x133648u;
    {
        const bool branch_taken_0x133648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133648u;
        // 0x13364c: 0x313c3  sra         $v0, $v1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133648) {
            ctx->pc = 0x133658u;
            goto label_133658;
        }
    }
    ctx->pc = 0x133650u;
label_133650:
    // 0x133650: 0x10000294  b           . + 4 + (0x294 << 2)
label_133654:
    if (ctx->pc == 0x133654u) {
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133658u;
        goto label_133658;
    }
    ctx->pc = 0x133650u;
    {
        const bool branch_taken_0x133650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133650) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133658u;
label_133658:
    // 0x133658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13365c:
    // 0x13365c: 0x54400291  bnel        $v0, $zero, . + 4 + (0x291 << 2)
label_133660:
    if (ctx->pc == 0x133660u) {
        ctx->pc = 0x133660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13365Cu;
        // 0x133660: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133664u;
        goto label_133664;
    }
    ctx->pc = 0x13365Cu;
    {
        const bool branch_taken_0x13365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13365c) {
            ctx->pc = 0x133660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13365Cu;
            // 0x133660: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133664u;
label_133664:
    // 0x133664: 0x314c3  sra         $v0, $v1, 19
    ctx->pc = 0x133664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 19));
label_133668:
    // 0x133668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13366c:
    // 0x13366c: 0x5040028e  beql        $v0, $zero, . + 4 + (0x28E << 2)
label_133670:
    if (ctx->pc == 0x133670u) {
        ctx->pc = 0x133670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13366Cu;
        // 0x133670: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133674u;
        goto label_133674;
    }
    ctx->pc = 0x13366Cu;
    {
        const bool branch_taken_0x13366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13366c) {
            ctx->pc = 0x133670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13366Cu;
            // 0x133670: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133674u;
label_133674:
    // 0x133674: 0x1000028b  b           . + 4 + (0x28B << 2)
label_133678:
    if (ctx->pc == 0x133678u) {
        ctx->pc = 0x133678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133674u;
        // 0x133678: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13367Cu;
        goto label_13367c;
    }
    ctx->pc = 0x133674u;
    {
        const bool branch_taken_0x133674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133674u;
        // 0x133678: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133674) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x13367Cu;
label_13367c:
    // 0x13367c: 0x0  nop
    ctx->pc = 0x13367cu;
    // NOP
label_133680:
    // 0x133680: 0xc06a26e  jal         func_1A89B8
label_133684:
    if (ctx->pc == 0x133684u) {
        ctx->pc = 0x133684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133680u;
        // 0x133684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133688u;
        goto label_133688;
    }
    ctx->pc = 0x133680u;
    SET_GPR_U32(ctx, 31, 0x133688u);
    ctx->pc = 0x133684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133680u;
    // 0x133684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133680u, 0x133688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133688u;
label_133688:
    // 0x133688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13368c:
    // 0x13368c: 0xc06a26e  jal         func_1A89B8
label_133690:
    if (ctx->pc == 0x133690u) {
        ctx->pc = 0x133690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13368Cu;
        // 0x133690: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133694u;
        goto label_133694;
    }
    ctx->pc = 0x13368Cu;
    SET_GPR_U32(ctx, 31, 0x133694u);
    ctx->pc = 0x133690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13368Cu;
    // 0x133690: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13368Cu, 0x133694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133694u;
label_133694:
    // 0x133694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133698:
    // 0x133698: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13369c:
    // 0x13369c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1336a0:
    // 0x1336a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1336a4:
    // 0x1336a4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_1336a8:
    if (ctx->pc == 0x1336A8u) {
        ctx->pc = 0x1336A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336A4u;
        // 0x1336a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336ACu;
        goto label_1336ac;
    }
    ctx->pc = 0x1336A4u;
    {
        const bool branch_taken_0x1336a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1336A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336A4u;
        // 0x1336a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336a4) {
            ctx->pc = 0x1336B8u;
            goto label_1336b8;
        }
    }
    ctx->pc = 0x1336ACu;
label_1336ac:
    // 0x1336ac: 0xc06a26e  jal         func_1A89B8
label_1336b0:
    if (ctx->pc == 0x1336B0u) {
        ctx->pc = 0x1336B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336ACu;
        // 0x1336b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336B4u;
        goto label_1336b4;
    }
    ctx->pc = 0x1336ACu;
    SET_GPR_U32(ctx, 31, 0x1336B4u);
    ctx->pc = 0x1336B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336ACu;
    // 0x1336b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336ACu, 0x1336B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336B4u;
label_1336b4:
    // 0x1336b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1336b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1336b8:
    // 0x1336b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1336b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1336bc:
    // 0x1336bc: 0xc04e39e  jal         func_138E78
label_1336c0:
    if (ctx->pc == 0x1336C0u) {
        ctx->pc = 0x1336C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336BCu;
        // 0x1336c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336C4u;
        goto label_1336c4;
    }
    ctx->pc = 0x1336BCu;
    SET_GPR_U32(ctx, 31, 0x1336C4u);
    ctx->pc = 0x1336C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336BCu;
    // 0x1336c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E78u, 0x1336BCu, 0x1336C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336C4u;
label_1336c4:
    // 0x1336c4: 0x10000272  b           . + 4 + (0x272 << 2)
label_1336c8:
    if (ctx->pc == 0x1336C8u) {
        ctx->pc = 0x1336CCu;
        goto label_1336cc;
    }
    ctx->pc = 0x1336C4u;
    {
        const bool branch_taken_0x1336c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336c4) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x1336CCu;
label_1336cc:
    // 0x1336cc: 0x0  nop
    ctx->pc = 0x1336ccu;
    // NOP
label_1336d0:
    // 0x1336d0: 0xc06a26e  jal         func_1A89B8
label_1336d4:
    if (ctx->pc == 0x1336D4u) {
        ctx->pc = 0x1336D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336D0u;
        // 0x1336d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336D8u;
        goto label_1336d8;
    }
    ctx->pc = 0x1336D0u;
    SET_GPR_U32(ctx, 31, 0x1336D8u);
    ctx->pc = 0x1336D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D0u;
    // 0x1336d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336D0u, 0x1336D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336D8u;
label_1336d8:
    // 0x1336d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1336d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1336dc:
    // 0x1336dc: 0xc06a26e  jal         func_1A89B8
label_1336e0:
    if (ctx->pc == 0x1336E0u) {
        ctx->pc = 0x1336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336DCu;
        // 0x1336e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336E4u;
        goto label_1336e4;
    }
    ctx->pc = 0x1336DCu;
    SET_GPR_U32(ctx, 31, 0x1336E4u);
    ctx->pc = 0x1336E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336DCu;
    // 0x1336e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336DCu, 0x1336E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336E4u;
label_1336e4:
    // 0x1336e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1336e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1336e8:
    // 0x1336e8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1336ec:
    // 0x1336ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1336f0:
    // 0x1336f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1336f4:
    // 0x1336f4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_1336f8:
    if (ctx->pc == 0x1336F8u) {
        ctx->pc = 0x1336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336F4u;
        // 0x1336f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1336FCu;
        goto label_1336fc;
    }
    ctx->pc = 0x1336F4u;
    {
        const bool branch_taken_0x1336f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336F4u;
        // 0x1336f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336f4) {
            ctx->pc = 0x133708u;
            goto label_133708;
        }
    }
    ctx->pc = 0x1336FCu;
label_1336fc:
    // 0x1336fc: 0xc06a26e  jal         func_1A89B8
label_133700:
    if (ctx->pc == 0x133700u) {
        ctx->pc = 0x133700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336FCu;
        // 0x133700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133704u;
        goto label_133704;
    }
    ctx->pc = 0x1336FCu;
    SET_GPR_U32(ctx, 31, 0x133704u);
    ctx->pc = 0x133700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336FCu;
    // 0x133700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336FCu, 0x133704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133704u;
label_133704:
    // 0x133704: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x133704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133708:
    // 0x133708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13370c:
    // 0x13370c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133710:
    // 0x133710: 0x10000012  b           . + 4 + (0x12 << 2)
label_133714:
    if (ctx->pc == 0x133714u) {
        ctx->pc = 0x133714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133710u;
        // 0x133714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133718u;
        goto label_133718;
    }
    ctx->pc = 0x133710u;
    {
        const bool branch_taken_0x133710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133710u;
        // 0x133714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133710) {
            ctx->pc = 0x13375Cu;
            goto label_13375c;
        }
    }
    ctx->pc = 0x133718u;
label_133718:
    // 0x133718: 0xc06a26e  jal         func_1A89B8
label_13371c:
    if (ctx->pc == 0x13371Cu) {
        ctx->pc = 0x13371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133718u;
        // 0x13371c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133720u;
        goto label_133720;
    }
    ctx->pc = 0x133718u;
    SET_GPR_U32(ctx, 31, 0x133720u);
    ctx->pc = 0x13371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133718u;
    // 0x13371c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133718u, 0x133720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133720u;
label_133720:
    // 0x133720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133724:
    // 0x133724: 0xc06a26e  jal         func_1A89B8
label_133728:
    if (ctx->pc == 0x133728u) {
        ctx->pc = 0x133728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133724u;
        // 0x133728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13372Cu;
        goto label_13372c;
    }
    ctx->pc = 0x133724u;
    SET_GPR_U32(ctx, 31, 0x13372Cu);
    ctx->pc = 0x133728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133724u;
    // 0x133728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133724u, 0x13372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13372Cu;
label_13372c:
    // 0x13372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133730:
    // 0x133730: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_133734:
    // 0x133734: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_133738:
    // 0x133738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13373c:
    // 0x13373c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_133740:
    if (ctx->pc == 0x133740u) {
        ctx->pc = 0x133740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13373Cu;
        // 0x133740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133744u;
        goto label_133744;
    }
    ctx->pc = 0x13373Cu;
    {
        const bool branch_taken_0x13373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x133740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13373Cu;
        // 0x133740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13373c) {
            ctx->pc = 0x133750u;
            goto label_133750;
        }
    }
    ctx->pc = 0x133744u;
label_133744:
    // 0x133744: 0xc06a26e  jal         func_1A89B8
label_133748:
    if (ctx->pc == 0x133748u) {
        ctx->pc = 0x133748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133744u;
        // 0x133748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13374Cu;
        goto label_13374c;
    }
    ctx->pc = 0x133744u;
    SET_GPR_U32(ctx, 31, 0x13374Cu);
    ctx->pc = 0x133748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133744u;
    // 0x133748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133744u, 0x13374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13374Cu;
label_13374c:
    // 0x13374c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13374cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133750:
    // 0x133750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133754:
    // 0x133754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133758:
    // 0x133758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13375c:
    // 0x13375c: 0xc04db88  jal         func_136E20
label_133760:
    if (ctx->pc == 0x133760u) {
        ctx->pc = 0x133764u;
        goto label_133764;
    }
    ctx->pc = 0x13375Cu;
    SET_GPR_U32(ctx, 31, 0x133764u);
    ctx->pc = 0x136E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E20u, 0x13375Cu, 0x133764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0x1000024f  b           . + 4 + (0x24F << 2)
label_133768:
    if (ctx->pc == 0x133768u) {
        ctx->pc = 0x133768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133764u;
        // 0x133768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13376Cu;
        goto label_13376c;
    }
    ctx->pc = 0x133764u;
    {
        const bool branch_taken_0x133764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133764u;
        // 0x133768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133764) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x13376Cu;
label_13376c:
    // 0x13376c: 0x0  nop
    ctx->pc = 0x13376cu;
    // NOP
label_133770:
    // 0x133770: 0xc06a26e  jal         func_1A89B8
label_133774:
    if (ctx->pc == 0x133774u) {
        ctx->pc = 0x133774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133770u;
        // 0x133774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133778u;
        goto label_133778;
    }
    ctx->pc = 0x133770u;
    SET_GPR_U32(ctx, 31, 0x133778u);
    ctx->pc = 0x133774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133770u;
    // 0x133774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133770u, 0x133778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133778u;
label_133778:
    // 0x133778: 0xc04db4e  jal         func_136D38
label_13377c:
    if (ctx->pc == 0x13377Cu) {
        ctx->pc = 0x13377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133778u;
        // 0x13377c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133780u;
        goto label_133780;
    }
    ctx->pc = 0x133778u;
    SET_GPR_U32(ctx, 31, 0x133780u);
    ctx->pc = 0x13377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133778u;
    // 0x13377c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133778u, 0x133780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133780u;
label_133780:
    // 0x133780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133784:
    // 0x133784: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x133784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_133788:
    // 0x133788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13378c:
    // 0x13378c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13378cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133790:
    // 0x133790: 0xc06a2d4  jal         func_1A8B50
label_133794:
    if (ctx->pc == 0x133794u) {
        ctx->pc = 0x133794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133790u;
        // 0x133794: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133798u;
        goto label_133798;
    }
    ctx->pc = 0x133790u;
    SET_GPR_U32(ctx, 31, 0x133798u);
    ctx->pc = 0x133794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133790u;
    // 0x133794: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133790u, 0x133798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133798u;
label_133798:
    // 0x133798: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x133798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13379c:
    // 0x13379c: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x13379cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1337a0:
    // 0x1337a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1337a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1337a4:
    // 0x1337a4: 0xc06a2d4  jal         func_1A8B50
label_1337a8:
    if (ctx->pc == 0x1337A8u) {
        ctx->pc = 0x1337A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337A4u;
        // 0x1337a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337ACu;
        goto label_1337ac;
    }
    ctx->pc = 0x1337A4u;
    SET_GPR_U32(ctx, 31, 0x1337ACu);
    ctx->pc = 0x1337A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337A4u;
    // 0x1337a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1337A4u, 0x1337ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337ACu;
label_1337ac:
    // 0x1337ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1337acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1337b0:
    // 0x1337b0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1337b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1337b4:
    // 0x1337b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1337b8:
    // 0x1337b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1337bc:
    if (ctx->pc == 0x1337BCu) {
        ctx->pc = 0x1337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B8u;
        // 0x1337bc: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337C0u;
        goto label_1337c0;
    }
    ctx->pc = 0x1337B8u;
    {
        const bool branch_taken_0x1337b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1337b8) {
            ctx->pc = 0x1337BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337B8u;
            // 0x1337bc: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337CCu;
            goto label_1337cc;
        }
    }
    ctx->pc = 0x1337C0u;
label_1337c0:
    // 0x1337c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1337c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1337c4:
    // 0x1337c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1337c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1337c8:
    // 0x1337c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1337c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1337cc:
    // 0x1337cc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1337ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1337d0:
    // 0x1337d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1337d4:
    // 0x1337d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1337d8:
    if (ctx->pc == 0x1337D8u) {
        ctx->pc = 0x1337D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337D4u;
        // 0x1337d8: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337DCu;
        goto label_1337dc;
    }
    ctx->pc = 0x1337D4u;
    {
        const bool branch_taken_0x1337d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1337d4) {
            ctx->pc = 0x1337D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337D4u;
            // 0x1337d8: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337E8u;
            goto label_1337e8;
        }
    }
    ctx->pc = 0x1337DCu;
label_1337dc:
    // 0x1337dc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1337dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1337e0:
    // 0x1337e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1337e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1337e4:
    // 0x1337e4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1337e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1337e8:
    // 0x1337e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1337e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1337ec:
    // 0x1337ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1337f0:
    // 0x1337f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1337f4:
    if (ctx->pc == 0x1337F4u) {
        ctx->pc = 0x1337F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337F0u;
        // 0x1337f4: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337F8u;
        goto label_1337f8;
    }
    ctx->pc = 0x1337F0u;
    {
        const bool branch_taken_0x1337f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1337F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337F0u;
        // 0x1337f4: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337f0) {
            ctx->pc = 0x133804u;
            goto label_133804;
        }
    }
    ctx->pc = 0x1337F8u;
label_1337f8:
    // 0x1337f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1337f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1337fc:
    // 0x1337fc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1337fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_133800:
    // 0x133800: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x133800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_133804:
    // 0x133804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133808:
    // 0x133808: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x133808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13380c:
    // 0x13380c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_133810:
    if (ctx->pc == 0x133810u) {
        ctx->pc = 0x133810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13380Cu;
        // 0x133810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133814u;
        goto label_133814;
    }
    ctx->pc = 0x13380Cu;
    {
        const bool branch_taken_0x13380c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x133810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13380Cu;
        // 0x133810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13380c) {
            ctx->pc = 0x13383Cu;
            goto label_13383c;
        }
    }
    ctx->pc = 0x133814u;
label_133814:
    // 0x133814: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x133814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133818:
    // 0x133818: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x133818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13381c:
    // 0x13381c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_133820:
    if (ctx->pc == 0x133820u) {
        ctx->pc = 0x133820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13381Cu;
        // 0x133820: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x133824u;
        goto label_133824;
    }
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13381Cu;
        // 0x133820: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133830u;
            goto label_133830;
        }
    }
    ctx->pc = 0x133824u;
label_133824:
    // 0x133824: 0x10000005  b           . + 4 + (0x5 << 2)
label_133828:
    if (ctx->pc == 0x133828u) {
        ctx->pc = 0x133828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133824u;
        // 0x133828: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13382Cu;
        goto label_13382c;
    }
    ctx->pc = 0x133824u;
    {
        const bool branch_taken_0x133824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133824u;
        // 0x133828: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133824) {
            ctx->pc = 0x13383Cu;
            goto label_13383c;
        }
    }
    ctx->pc = 0x13382Cu;
label_13382c:
    // 0x13382c: 0x0  nop
    ctx->pc = 0x13382cu;
    // NOP
label_133830:
    // 0x133830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133834:
    // 0x133834: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_133838:
    if (ctx->pc == 0x133838u) {
        ctx->pc = 0x133838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133834u;
        // 0x133838: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13383Cu;
        goto label_13383c;
    }
    ctx->pc = 0x133834u;
    {
        const bool branch_taken_0x133834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133834) {
            ctx->pc = 0x133838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133834u;
            // 0x133838: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13383Cu;
            goto label_13383c;
        }
    }
    ctx->pc = 0x13383Cu;
label_13383c:
    // 0x13383c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x13383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133840:
    // 0x133840: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x133840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133844:
    // 0x133844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133848:
    // 0x133848: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_13384c:
    if (ctx->pc == 0x13384Cu) {
        ctx->pc = 0x13384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133848u;
        // 0x13384c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x133850u;
        goto label_133850;
    }
    ctx->pc = 0x133848u;
    {
        const bool branch_taken_0x133848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133848u;
        // 0x13384c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133848) {
            ctx->pc = 0x133858u;
            goto label_133858;
        }
    }
    ctx->pc = 0x133850u;
label_133850:
    // 0x133850: 0x10000214  b           . + 4 + (0x214 << 2)
label_133854:
    if (ctx->pc == 0x133854u) {
        ctx->pc = 0x133854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133850u;
        // 0x133854: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133858u;
        goto label_133858;
    }
    ctx->pc = 0x133850u;
    {
        const bool branch_taken_0x133850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133850u;
        // 0x133854: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133850) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133858u;
label_133858:
    // 0x133858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13385c:
    // 0x13385c: 0x45030211  bc1tl       . + 4 + (0x211 << 2)
label_133860:
    if (ctx->pc == 0x133860u) {
        ctx->pc = 0x133860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13385Cu;
        // 0x133860: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133864u;
        goto label_133864;
    }
    ctx->pc = 0x13385Cu;
    {
        const bool branch_taken_0x13385c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13385c) {
            ctx->pc = 0x133860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13385Cu;
            // 0x133860: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133864u;
label_133864:
    // 0x133864: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x133864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133868:
    // 0x133868: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x133868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13386c:
    // 0x13386c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13386cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133870:
    // 0x133870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_133874:
    if (ctx->pc == 0x133874u) {
        ctx->pc = 0x133874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133870u;
        // 0x133874: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x133878u;
        goto label_133878;
    }
    ctx->pc = 0x133870u;
    {
        const bool branch_taken_0x133870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133870u;
        // 0x133874: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133870) {
            ctx->pc = 0x133880u;
            goto label_133880;
        }
    }
    ctx->pc = 0x133878u;
label_133878:
    // 0x133878: 0x1000020a  b           . + 4 + (0x20A << 2)
label_13387c:
    if (ctx->pc == 0x13387Cu) {
        ctx->pc = 0x13387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133878u;
        // 0x13387c: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133880u;
        goto label_133880;
    }
    ctx->pc = 0x133878u;
    {
        const bool branch_taken_0x133878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133878u;
        // 0x13387c: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133878) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133880u;
label_133880:
    // 0x133880: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133884:
    // 0x133884: 0x45030207  bc1tl       . + 4 + (0x207 << 2)
label_133888:
    if (ctx->pc == 0x133888u) {
        ctx->pc = 0x133888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133884u;
        // 0x133888: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13388Cu;
        goto label_13388c;
    }
    ctx->pc = 0x133884u;
    {
        const bool branch_taken_0x133884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133884) {
            ctx->pc = 0x133888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133884u;
            // 0x133888: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x13388Cu;
label_13388c:
    // 0x13388c: 0x10000206  b           . + 4 + (0x206 << 2)
label_133890:
    if (ctx->pc == 0x133890u) {
        ctx->pc = 0x133890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13388Cu;
        // 0x133890: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133894u;
        goto label_133894;
    }
    ctx->pc = 0x13388Cu;
    {
        const bool branch_taken_0x13388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13388Cu;
        // 0x133890: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13388c) {
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133894u;
label_133894:
    // 0x133894: 0x0  nop
    ctx->pc = 0x133894u;
    // NOP
label_133898:
    // 0x133898: 0xc06a26e  jal         func_1A89B8
label_13389c:
    if (ctx->pc == 0x13389Cu) {
        ctx->pc = 0x13389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133898u;
        // 0x13389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338A0u;
        goto label_1338a0;
    }
    ctx->pc = 0x133898u;
    SET_GPR_U32(ctx, 31, 0x1338A0u);
    ctx->pc = 0x13389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133898u;
    // 0x13389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133898u, 0x1338A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A0u;
label_1338a0:
    // 0x1338a0: 0xc04db4e  jal         func_136D38
label_1338a4:
    if (ctx->pc == 0x1338A4u) {
        ctx->pc = 0x1338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338A0u;
        // 0x1338a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338A8u;
        goto label_1338a8;
    }
    ctx->pc = 0x1338A0u;
    SET_GPR_U32(ctx, 31, 0x1338A8u);
    ctx->pc = 0x1338A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338A0u;
    // 0x1338a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1338A0u, 0x1338A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A8u;
label_1338a8:
    // 0x1338a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1338a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1338ac:
    // 0x1338ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1338acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1338b0:
    // 0x1338b0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1338b4:
    // 0x1338b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1338b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1338b8:
    // 0x1338b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1338b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1338bc:
    // 0x1338bc: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1338c0:
    if (ctx->pc == 0x1338C0u) {
        ctx->pc = 0x1338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338BCu;
        // 0x1338c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338C4u;
        goto label_1338c4;
    }
    ctx->pc = 0x1338BCu;
    {
        const bool branch_taken_0x1338bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338BCu;
        // 0x1338c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338bc) {
            ctx->pc = 0x1338CCu;
            goto label_1338cc;
        }
    }
    ctx->pc = 0x1338C4u;
label_1338c4:
    // 0x1338c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1338c8:
    // 0x1338c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1338c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1338cc:
    // 0x1338cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1338ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1338d0:
    // 0x1338d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1338d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1338d4:
    // 0x1338d4: 0xc05129a  jal         func_144A68
label_1338d8:
    if (ctx->pc == 0x1338D8u) {
        ctx->pc = 0x1338D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338D4u;
        // 0x1338d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338DCu;
        goto label_1338dc;
    }
    ctx->pc = 0x1338D4u;
    SET_GPR_U32(ctx, 31, 0x1338DCu);
    ctx->pc = 0x1338D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338D4u;
    // 0x1338d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x1338D4u, 0x1338DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338DCu;
label_1338dc:
    // 0x1338dc: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1338e0:
    if (ctx->pc == 0x1338E0u) {
        ctx->pc = 0x1338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338DCu;
        // 0x1338e0: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338E4u;
        goto label_1338e4;
    }
    ctx->pc = 0x1338DCu;
    {
        const bool branch_taken_0x1338dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338DCu;
        // 0x1338e0: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338dc) {
            ctx->pc = 0x133B60u;
            goto label_133b60;
        }
    }
    ctx->pc = 0x1338E4u;
label_1338e4:
    // 0x1338e4: 0x0  nop
    ctx->pc = 0x1338e4u;
    // NOP
label_1338e8:
    // 0x1338e8: 0xc06a26e  jal         func_1A89B8
label_1338ec:
    if (ctx->pc == 0x1338ECu) {
        ctx->pc = 0x1338ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338E8u;
        // 0x1338ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338F0u;
        goto label_1338f0;
    }
    ctx->pc = 0x1338E8u;
    SET_GPR_U32(ctx, 31, 0x1338F0u);
    ctx->pc = 0x1338ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338E8u;
    // 0x1338ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1338E8u, 0x1338F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338F0u;
label_1338f0:
    // 0x1338f0: 0xc04db4e  jal         func_136D38
label_1338f4:
    if (ctx->pc == 0x1338F4u) {
        ctx->pc = 0x1338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338F0u;
        // 0x1338f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1338F8u;
        goto label_1338f8;
    }
    ctx->pc = 0x1338F0u;
    SET_GPR_U32(ctx, 31, 0x1338F8u);
    ctx->pc = 0x1338F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338F0u;
    // 0x1338f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1338F0u, 0x1338F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x8ea50328  lw          $a1, 0x328($s5)
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_1338fc:
    // 0x1338fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1338fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133900:
    // 0x133900: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_133904:
    // 0x133904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_133908:
    // 0x133908: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x133908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13390c:
    // 0x13390c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_133910:
    // 0x133910: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x133910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_133914:
    // 0x133914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_133918:
    // 0x133918: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x133918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13391c:
    // 0x13391c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13391cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_133920:
    // 0x133920: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_133924:
    // 0x133924: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_133928:
    if (ctx->pc == 0x133928u) {
        ctx->pc = 0x133928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133924u;
        // 0x133928: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13392Cu;
        goto label_13392c;
    }
    ctx->pc = 0x133924u;
    {
        const bool branch_taken_0x133924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133924u;
        // 0x133928: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133924) {
            ctx->pc = 0x133940u;
            goto label_133940;
        }
    }
    ctx->pc = 0x13392Cu;
label_13392c:
    // 0x13392c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13392cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_133930:
    // 0x133930: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_133934:
    // 0x133934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_133938:
    // 0x133938: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_13393c:
    // 0x13393c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_133940:
    // 0x133940: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x133940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_133944:
    // 0x133944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_133948:
    // 0x133948: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x133948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_13394c:
    // 0x13394c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x13394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133950:
    // 0x133950: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x133950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_133954:
    // 0x133954: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x133954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_133958:
    // 0x133958: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x133958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_13395c:
    // 0x13395c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13395cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_133960:
    // 0x133960: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x133960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_133964:
    // 0x133964: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_133968:
    // 0x133968: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_13396c:
    // 0x13396c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_133970:
    if (ctx->pc == 0x133970u) {
        ctx->pc = 0x133970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13396Cu;
        // 0x133970: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133974u;
        goto label_133974;
    }
    ctx->pc = 0x13396Cu;
    {
        const bool branch_taken_0x13396c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13396Cu;
        // 0x133970: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13396c) {
            ctx->pc = 0x13398Cu;
            goto label_13398c;
        }
    }
    ctx->pc = 0x133974u;
label_133974:
    // 0x133974: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x133974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_133978:
    // 0x133978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x133978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_13397c:
    // 0x13397c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13397cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_133980:
    // 0x133980: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_133984:
    // 0x133984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x133984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_133988:
    // 0x133988: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x133988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_13398c:
    // 0x13398c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x13398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_133990:
    // 0x133990: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x133990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_133994:
    // 0x133994: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x133994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_133998:
    // 0x133998: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x133998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_13399c:
    // 0x13399c: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x13399cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1339a0:
    // 0x1339a0: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_1339a4:
    // 0x1339a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1339a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1339a8:
    // 0x1339a8: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x1339a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1339ac:
    // 0x1339ac: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1339b0:
    if (ctx->pc == 0x1339B0u) {
        ctx->pc = 0x1339B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339ACu;
        // 0x1339b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339B4u;
        goto label_1339b4;
    }
    ctx->pc = 0x1339ACu;
    {
        const bool branch_taken_0x1339ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339ac) {
            ctx->pc = 0x1339B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1339ACu;
            // 0x1339b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1339C4u;
            goto label_1339c4;
        }
    }
    ctx->pc = 0x1339B4u;
label_1339b4:
    // 0x1339b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1339b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1339b8:
    // 0x1339b8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1339b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1339bc:
    // 0x1339bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1339c0:
    // 0x1339c0: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x1339c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
label_1339c4:
    // 0x1339c4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_1339c8:
    // 0x1339c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1339cc:
    if (ctx->pc == 0x1339CCu) {
        ctx->pc = 0x1339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C8u;
        // 0x1339cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339D0u;
        goto label_1339d0;
    }
    ctx->pc = 0x1339C8u;
    {
        const bool branch_taken_0x1339c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C8u;
        // 0x1339cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339c8) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1339D0u;
label_1339d0:
    // 0x1339d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1339d4:
    // 0x1339d4: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_1339d8:
    if (ctx->pc == 0x1339D8u) {
        ctx->pc = 0x1339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D4u;
        // 0x1339d8: 0xc4404000  lwc1        $f0, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339DCu;
        goto label_1339dc;
    }
    ctx->pc = 0x1339D4u;
    {
        const bool branch_taken_0x1339d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D4u;
        // 0x1339d8: 0xc4404000  lwc1        $f0, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339d4) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x1339DCu;
label_1339dc:
    // 0x1339dc: 0x0  nop
    ctx->pc = 0x1339dcu;
    // NOP
label_1339e0:
    // 0x1339e0: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_1339e4:
    if (ctx->pc == 0x1339E4u) {
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0xc4a04004  lwc1        $f0, 0x4004($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339E8u;
        goto label_1339e8;
    }
    ctx->pc = 0x1339E0u;
    {
        const bool branch_taken_0x1339e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0xc4a04004  lwc1        $f0, 0x4004($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339e0) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x1339E8u;
label_1339e8:
    // 0x1339e8: 0xc06a26e  jal         func_1A89B8
label_1339ec:
    if (ctx->pc == 0x1339ECu) {
        ctx->pc = 0x1339ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E8u;
        // 0x1339ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339F0u;
        goto label_1339f0;
    }
    ctx->pc = 0x1339E8u;
    SET_GPR_U32(ctx, 31, 0x1339F0u);
    ctx->pc = 0x1339ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E8u;
    // 0x1339ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1339E8u, 0x1339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1339f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339f4:
    // 0x1339f4: 0xc04db4e  jal         func_136D38
label_1339f8:
    if (ctx->pc == 0x1339F8u) {
        ctx->pc = 0x1339F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339F4u;
        // 0x1339f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339FCu;
        goto label_1339fc;
    }
    ctx->pc = 0x1339F4u;
    SET_GPR_U32(ctx, 31, 0x1339FCu);
    ctx->pc = 0x1339F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F4u;
    // 0x1339f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1339F4u, 0x1339FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339FCu;
label_1339fc:
    // 0x1339fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1339fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133a00:
    // 0x133a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133a04:
    // 0x133a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133a08:
    // 0x133a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133a0c:
    // 0x133a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133a10:
    // 0x133a10: 0xc05129a  jal         func_144A68
label_133a14:
    if (ctx->pc == 0x133A14u) {
        ctx->pc = 0x133A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A10u;
        // 0x133a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A18u;
        goto label_133a18;
    }
    ctx->pc = 0x133A10u;
    SET_GPR_U32(ctx, 31, 0x133A18u);
    ctx->pc = 0x133A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A10u;
    // 0x133a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133A10u, 0x133A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A18u;
label_133a18:
    // 0x133a18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x133a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133a1c:
    // 0x133a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x133a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_133a20:
    // 0x133a20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x133a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_133a24:
    // 0x133a24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133a28:
    // 0x133a28: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133a28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133a2c:
    // 0x133a2c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133a2cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133a30:
    // 0x133a30: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x133a30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_133a34:
    // 0x133a34: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_133a38:
    // 0x133a38: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_133a3c:
    // 0x133a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133a40:
    // 0x133a40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_133a44:
    // 0x133a44: 0x56040009  bnel        $s0, $a0, . + 4 + (0x9 << 2)
label_133a48:
    if (ctx->pc == 0x133A48u) {
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A4Cu;
        goto label_133a4c;
    }
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A44u;
            // 0x133a48: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A6Cu;
            goto label_133a6c;
        }
    }
    ctx->pc = 0x133A4Cu;
label_133a4c:
    // 0x133a4c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_133a50:
    // 0x133a50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_133a54:
    // 0x133a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133a58:
    // 0x133a58: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
label_133a5c:
    if (ctx->pc == 0x133A5Cu) {
        ctx->pc = 0x133A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A58u;
        // 0x133a5c: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A60u;
        goto label_133a60;
    }
    ctx->pc = 0x133A58u;
    {
        const bool branch_taken_0x133a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133a58) {
            ctx->pc = 0x133A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A58u;
            // 0x133a5c: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A6Cu;
            goto label_133a6c;
        }
    }
    ctx->pc = 0x133A60u;
label_133a60:
    // 0x133a60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x133a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_133a64:
    // 0x133a64: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x133a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_133a68:
    // 0x133a68: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x133a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_133a6c:
    // 0x133a6c: 0x9082402c  lbu         $v0, 0x402C($a0)
    ctx->pc = 0x133a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16428)));
label_133a70:
    // 0x133a70: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_133a74:
    if (ctx->pc == 0x133A74u) {
        ctx->pc = 0x133A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A70u;
        // 0x133a74: 0x8c82402c  lw          $v0, 0x402C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A78u;
        goto label_133a78;
    }
    ctx->pc = 0x133A70u;
    {
        const bool branch_taken_0x133a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a70) {
            ctx->pc = 0x133A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A70u;
            // 0x133a74: 0x8c82402c  lw          $v0, 0x402C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A7Cu;
            goto label_133a7c;
        }
    }
    ctx->pc = 0x133A78u;
label_133a78:
    // 0x133a78: 0x8c824018  lw          $v0, 0x4018($a0)
    ctx->pc = 0x133a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16408)));
label_133a7c:
    // 0x133a7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_133a80:
    // 0x133a80: 0x10000188  b           . + 4 + (0x188 << 2)
label_133a84:
    if (ctx->pc == 0x133A84u) {
        ctx->pc = 0x133A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A80u;
        // 0x133a84: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A88u;
        goto label_133a88;
    }
    ctx->pc = 0x133A80u;
    {
        const bool branch_taken_0x133a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A80u;
        // 0x133a84: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a80) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133A88u;
label_133a88:
    // 0x133a88: 0xc06a282  jal         func_1A8A08
label_133a8c:
    if (ctx->pc == 0x133A8Cu) {
        ctx->pc = 0x133A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A88u;
        // 0x133a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A90u;
        goto label_133a90;
    }
    ctx->pc = 0x133A88u;
    SET_GPR_U32(ctx, 31, 0x133A90u);
    ctx->pc = 0x133A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A88u;
    // 0x133a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133A88u, 0x133A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A90u;
label_133a90:
    // 0x133a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133a94:
    // 0x133a94: 0xc06a26e  jal         func_1A89B8
label_133a98:
    if (ctx->pc == 0x133A98u) {
        ctx->pc = 0x133A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A94u;
        // 0x133a98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A9Cu;
        goto label_133a9c;
    }
    ctx->pc = 0x133A94u;
    SET_GPR_U32(ctx, 31, 0x133A9Cu);
    ctx->pc = 0x133A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A94u;
    // 0x133a98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133A94u, 0x133A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A9Cu;
label_133a9c:
    // 0x133a9c: 0xc04db4e  jal         func_136D38
label_133aa0:
    if (ctx->pc == 0x133AA0u) {
        ctx->pc = 0x133AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A9Cu;
        // 0x133aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AA4u;
        goto label_133aa4;
    }
    ctx->pc = 0x133A9Cu;
    SET_GPR_U32(ctx, 31, 0x133AA4u);
    ctx->pc = 0x133AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A9Cu;
    // 0x133aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133A9Cu, 0x133AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AA4u;
label_133aa4:
    // 0x133aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133aa8:
    // 0x133aa8: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_133aac:
    // 0x133aac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_133ab0:
    // 0x133ab0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x133ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_133ab4:
    // 0x133ab4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x133ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_133ab8:
    // 0x133ab8: 0x5040017b  beql        $v0, $zero, . + 4 + (0x17B << 2)
label_133abc:
    if (ctx->pc == 0x133ABCu) {
        ctx->pc = 0x133ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AB8u;
        // 0x133abc: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AC0u;
        goto label_133ac0;
    }
    ctx->pc = 0x133AB8u;
    {
        const bool branch_taken_0x133ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ab8) {
            ctx->pc = 0x133ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133AB8u;
            // 0x133abc: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133AC0u;
label_133ac0:
    // 0x133ac0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133ac4:
    // 0x133ac4: 0x52200178  beql        $s1, $zero, . + 4 + (0x178 << 2)
label_133ac8:
    if (ctx->pc == 0x133AC8u) {
        ctx->pc = 0x133AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AC4u;
        // 0x133ac8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133ACCu;
        goto label_133acc;
    }
    ctx->pc = 0x133AC4u;
    {
        const bool branch_taken_0x133ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ac4) {
            ctx->pc = 0x133AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133AC4u;
            // 0x133ac8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133ACCu;
label_133acc:
    // 0x133acc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_133ad0:
    // 0x133ad0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133ad4:
    // 0x133ad4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x133ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_133ad8:
    // 0x133ad8: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_133adc:
    // 0x133adc: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_133ae0:
    // 0x133ae0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_133ae4:
    // 0x133ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_133ae8:
    if (ctx->pc == 0x133AE8u) {
        ctx->pc = 0x133AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AE4u;
        // 0x133ae8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AECu;
        goto label_133aec;
    }
    ctx->pc = 0x133AE4u;
    {
        const bool branch_taken_0x133ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AE4u;
        // 0x133ae8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ae4) {
            ctx->pc = 0x133AF4u;
            goto label_133af4;
        }
    }
    ctx->pc = 0x133AECu;
label_133aec:
    // 0x133aec: 0xc061920  jal         func_186480
label_133af0:
    if (ctx->pc == 0x133AF0u) {
        ctx->pc = 0x133AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AECu;
        // 0x133af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AF4u;
        goto label_133af4;
    }
    ctx->pc = 0x133AECu;
    SET_GPR_U32(ctx, 31, 0x133AF4u);
    ctx->pc = 0x133AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AECu;
    // 0x133af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133AECu, 0x133AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AF4u;
label_133af4:
    // 0x133af4: 0xc061422  jal         func_185088
label_133af8:
    if (ctx->pc == 0x133AF8u) {
        ctx->pc = 0x133AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AF4u;
        // 0x133af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133AFCu;
        goto label_133afc;
    }
    ctx->pc = 0x133AF4u;
    SET_GPR_U32(ctx, 31, 0x133AFCu);
    ctx->pc = 0x133AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AF4u;
    // 0x133af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133AF4u, 0x133AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AFCu;
label_133afc:
    // 0x133afc: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_133b00:
    // 0x133b00: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x133b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_133b04:
    // 0x133b04: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x133b04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_133b08:
    // 0x133b08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_133b0c:
    // 0x133b0c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133b10:
    // 0x133b10: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x133b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133b14:
    // 0x133b14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x133b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133b18:
    // 0x133b18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x133b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_133b1c:
    // 0x133b1c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x133b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_133b20:
    // 0x133b20: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x133b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133b24:
    // 0x133b24: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x133b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_133b28:
    // 0x133b28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_133b2c:
    // 0x133b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_133b30:
    // 0x133b30: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x133b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_133b34:
    // 0x133b34: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x133b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_133b38:
    // 0x133b38: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x133b38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133b3c:
    // 0x133b3c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_133b40:
    // 0x133b40: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x133b40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_133b44:
    // 0x133b44: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_133b48:
    // 0x133b48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133b4c:
    // 0x133b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133b50:
    // 0x133b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133b54:
    // 0x133b54: 0xc05129a  jal         func_144A68
label_133b58:
    if (ctx->pc == 0x133B58u) {
        ctx->pc = 0x133B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B54u;
        // 0x133b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B5Cu;
        goto label_133b5c;
    }
    ctx->pc = 0x133B54u;
    SET_GPR_U32(ctx, 31, 0x133B5Cu);
    ctx->pc = 0x133B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B54u;
    // 0x133b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133B54u, 0x133B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B5Cu;
label_133b5c:
    // 0x133b5c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x133b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133b60:
    // 0x133b60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133b60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_133b64:
    // 0x133b64: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x133b64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_133b68:
    // 0x133b68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133b6c:
    // 0x133b6c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133b70:
    // 0x133b70: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133b70u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133b74:
    // 0x133b74: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133b74u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
label_133b78:
    // 0x133b78: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_133b7c:
    // 0x133b7c: 0x1000014a  b           . + 4 + (0x14A << 2)
label_133b80:
    if (ctx->pc == 0x133B80u) {
        ctx->pc = 0x133B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B7Cu;
        // 0x133b80: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133B84u;
        goto label_133b84;
    }
    ctx->pc = 0x133B7Cu;
    {
        const bool branch_taken_0x133b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B7Cu;
        // 0x133b80: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b7c) {
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133B84u;
label_133b84:
    // 0x133b84: 0x0  nop
    ctx->pc = 0x133b84u;
    // NOP
label_133b88:
    // 0x133b88: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_133b8c:
    // 0x133b8c: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x133b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_133b90:
    // 0x133b90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_133b94:
    // 0x133b94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_133b98:
    // 0x133b98: 0x10600142  beqz        $v1, . + 4 + (0x142 << 2)
label_133b9c:
    if (ctx->pc == 0x133B9Cu) {
        ctx->pc = 0x133B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B98u;
        // 0x133b9c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BA0u;
        goto label_133ba0;
    }
    ctx->pc = 0x133B98u;
    {
        const bool branch_taken_0x133b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B98u;
        // 0x133b9c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b98) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133BA0u;
label_133ba0:
    // 0x133ba0: 0x50400141  beql        $v0, $zero, . + 4 + (0x141 << 2)
label_133ba4:
    if (ctx->pc == 0x133BA4u) {
        ctx->pc = 0x133BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BA0u;
        // 0x133ba4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BA8u;
        goto label_133ba8;
    }
    ctx->pc = 0x133BA0u;
    {
        const bool branch_taken_0x133ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ba0) {
            ctx->pc = 0x133BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133BA0u;
            // 0x133ba4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133BA8u;
label_133ba8:
    // 0x133ba8: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x133ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133bac:
    // 0x133bac: 0x5240013e  beql        $s2, $zero, . + 4 + (0x13E << 2)
label_133bb0:
    if (ctx->pc == 0x133BB0u) {
        ctx->pc = 0x133BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BACu;
        // 0x133bb0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BB4u;
        goto label_133bb4;
    }
    ctx->pc = 0x133BACu;
    {
        const bool branch_taken_0x133bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x133bac) {
            ctx->pc = 0x133BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133BACu;
            // 0x133bb0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133BB4u;
label_133bb4:
    // 0x133bb4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133bb8:
    // 0x133bb8: 0x1220013a  beqz        $s1, . + 4 + (0x13A << 2)
label_133bbc:
    if (ctx->pc == 0x133BBCu) {
        ctx->pc = 0x133BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BB8u;
        // 0x133bbc: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BC0u;
        goto label_133bc0;
    }
    ctx->pc = 0x133BB8u;
    {
        const bool branch_taken_0x133bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BB8u;
        // 0x133bbc: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bb8) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133BC0u;
label_133bc0:
    // 0x133bc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_133bc4:
    // 0x133bc4: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_133bc8:
    // 0x133bc8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_133bcc:
    // 0x133bcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_133bd0:
    if (ctx->pc == 0x133BD0u) {
        ctx->pc = 0x133BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BCCu;
        // 0x133bd0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BD4u;
        goto label_133bd4;
    }
    ctx->pc = 0x133BCCu;
    {
        const bool branch_taken_0x133bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BCCu;
        // 0x133bd0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bcc) {
            ctx->pc = 0x133BDCu;
            goto label_133bdc;
        }
    }
    ctx->pc = 0x133BD4u;
label_133bd4:
    // 0x133bd4: 0xc061920  jal         func_186480
label_133bd8:
    if (ctx->pc == 0x133BD8u) {
        ctx->pc = 0x133BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BD4u;
        // 0x133bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BDCu;
        goto label_133bdc;
    }
    ctx->pc = 0x133BD4u;
    SET_GPR_U32(ctx, 31, 0x133BDCu);
    ctx->pc = 0x133BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BD4u;
    // 0x133bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133BD4u, 0x133BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BDCu;
label_133bdc:
    // 0x133bdc: 0xc061422  jal         func_185088
label_133be0:
    if (ctx->pc == 0x133BE0u) {
        ctx->pc = 0x133BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BDCu;
        // 0x133be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BE4u;
        goto label_133be4;
    }
    ctx->pc = 0x133BDCu;
    SET_GPR_U32(ctx, 31, 0x133BE4u);
    ctx->pc = 0x133BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BDCu;
    // 0x133be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133BDCu, 0x133BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE4u;
label_133be4:
    // 0x133be4: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x133be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_133be8:
    // 0x133be8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x133be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_133bec:
    // 0x133bec: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x133becu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_133bf0:
    // 0x133bf0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x133bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133bf4:
    // 0x133bf4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x133bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133bf8:
    // 0x133bf8: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x133bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133bfc:
    // 0x133bfc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x133bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133c00:
    // 0x133c00: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x133c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133c04:
    // 0x133c04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x133c04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_133c08:
    // 0x133c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133c0c:
    // 0x133c0c: 0x10000120  b           . + 4 + (0x120 << 2)
label_133c10:
    if (ctx->pc == 0x133C10u) {
        ctx->pc = 0x133C14u;
        goto label_133c14;
    }
    ctx->pc = 0x133C0Cu;
    {
        const bool branch_taken_0x133c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c0c) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x133C14u;
label_133c14:
    // 0x133c14: 0x0  nop
    ctx->pc = 0x133c14u;
    // NOP
label_133c18:
    // 0x133c18: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_133c1c:
    // 0x133c1c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x133c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_133c20:
    // 0x133c20: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133c24:
    // 0x133c24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_133c28:
    // 0x133c28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x133c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_133c2c:
    // 0x133c2c: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
label_133c30:
    if (ctx->pc == 0x133C30u) {
        ctx->pc = 0x133C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C2Cu;
        // 0x133c30: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C34u;
        goto label_133c34;
    }
    ctx->pc = 0x133C2Cu;
    {
        const bool branch_taken_0x133c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x133C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C2Cu;
        // 0x133c30: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c2c) {
            ctx->pc = 0x133C44u;
            goto label_133c44;
        }
    }
    ctx->pc = 0x133C34u;
label_133c34:
    // 0x133c34: 0xc06a282  jal         func_1A8A08
label_133c38:
    if (ctx->pc == 0x133C38u) {
        ctx->pc = 0x133C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C34u;
        // 0x133c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C3Cu;
        goto label_133c3c;
    }
    ctx->pc = 0x133C34u;
    SET_GPR_U32(ctx, 31, 0x133C3Cu);
    ctx->pc = 0x133C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C34u;
    // 0x133c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133C34u, 0x133C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C3Cu;
label_133c3c:
    // 0x133c3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x133c3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_133c40:
    // 0x133c40: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133c44:
    // 0x133c44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x133c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133c48:
    // 0x133c48: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_133c4c:
    // 0x133c4c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x133c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_133c50:
    // 0x133c50: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_133c54:
    // 0x133c54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_133c58:
    if (ctx->pc == 0x133C58u) {
        ctx->pc = 0x133C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C54u;
        // 0x133c58: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C5Cu;
        goto label_133c5c;
    }
    ctx->pc = 0x133C54u;
    {
        const bool branch_taken_0x133c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C54u;
        // 0x133c58: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c54) {
            ctx->pc = 0x133C64u;
            goto label_133c64;
        }
    }
    ctx->pc = 0x133C5Cu;
label_133c5c:
    // 0x133c5c: 0xc061920  jal         func_186480
label_133c60:
    if (ctx->pc == 0x133C60u) {
        ctx->pc = 0x133C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C5Cu;
        // 0x133c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C64u;
        goto label_133c64;
    }
    ctx->pc = 0x133C5Cu;
    SET_GPR_U32(ctx, 31, 0x133C64u);
    ctx->pc = 0x133C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C5Cu;
    // 0x133c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133C5Cu, 0x133C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C64u;
label_133c64:
    // 0x133c64: 0xc061422  jal         func_185088
label_133c68:
    if (ctx->pc == 0x133C68u) {
        ctx->pc = 0x133C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C64u;
        // 0x133c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C6Cu;
        goto label_133c6c;
    }
    ctx->pc = 0x133C64u;
    SET_GPR_U32(ctx, 31, 0x133C6Cu);
    ctx->pc = 0x133C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C64u;
    // 0x133c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133C64u, 0x133C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C6Cu;
label_133c6c:
    // 0x133c6c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x133c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_133c70:
    // 0x133c70: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x133c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_133c74:
    // 0x133c74: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x133c74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_133c78:
    // 0x133c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133c7c:
    // 0x133c7c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_133c80:
    // 0x133c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_133c84:
    // 0x133c84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_133c88:
    // 0x133c88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133c8c:
    // 0x133c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x133c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_133c90:
    // 0x133c90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x133c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_133c94:
    // 0x133c94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_133c98:
    // 0x133c98: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x133c98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_133c9c:
    // 0x133c9c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x133c9cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_133ca0:
    // 0x133ca0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x133ca0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_133ca4:
    // 0x133ca4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x133ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_133ca8:
    // 0x133ca8: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x133ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_133cac:
    // 0x133cac: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x133cacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cb0:
    // 0x133cb0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x133cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_133cb4:
    // 0x133cb4: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x133cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_133cb8:
    // 0x133cb8: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x133cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_133cbc:
    // 0x133cbc: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x133cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_133cc0:
    // 0x133cc0: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x133cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_133cc4:
    // 0x133cc4: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x133cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_133cc8:
    // 0x133cc8: 0xfa080000  sqc2        $vf8, 0x0($s0)
    ctx->pc = 0x133cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_133ccc:
    // 0x133ccc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cd0:
    // 0x133cd0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x133cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133cd4:
    // 0x133cd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x133cd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133cd8:
    // 0x133cd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x133cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_133cdc:
    // 0x133cdc: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_133ce0:
    // 0x133ce0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_133ce4:
    // 0x133ce4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133ce8:
    // 0x133ce8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x133ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_133cec:
    // 0x133cec: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133cf0:
    // 0x133cf0: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x133cf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cf4:
    // 0x133cf4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_133cf8:
    // 0x133cf8: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_133cfc:
    // 0x133cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d00:
    // 0x133d00: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x133d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_133d04:
    // 0x133d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133d08:
    // 0x133d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133d0c:
    // 0x133d0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_133d10:
    // 0x133d10: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_133d14:
    // 0x133d14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x133d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_133d18:
    // 0x133d18: 0x40f809  jalr        $v0
label_133d1c:
    if (ctx->pc == 0x133D1Cu) {
        ctx->pc = 0x133D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D18u;
        // 0x133d1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D20u;
        goto label_133d20;
    }
    ctx->pc = 0x133D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133D20u);
        ctx->pc = 0x133D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D18u;
        // 0x133d1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D18u, 0x133D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133D20u;
label_133d20:
    // 0x133d20: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_133d24:
    if (ctx->pc == 0x133D24u) {
        ctx->pc = 0x133D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D20u;
        // 0x133d24: 0x96630000  lhu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D28u;
        goto label_133d28;
    }
    ctx->pc = 0x133D20u;
    {
        const bool branch_taken_0x133d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d20) {
            ctx->pc = 0x133D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D20u;
            // 0x133d24: 0x96630000  lhu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133D70u;
            goto label_133d70;
        }
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133d2c:
    // 0x133d2c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x133d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_133d30:
    // 0x133d30: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133d34:
    // 0x133d34: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x133d34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133d38:
    // 0x133d38: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_133d3c:
    // 0x133d3c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_133d40:
    // 0x133d40: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x133d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133d44:
    // 0x133d44: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x133d44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133d48:
    // 0x133d48: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x133d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_133d4c:
    // 0x133d4c: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x133d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d50:
    // 0x133d50: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x133d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d54:
    // 0x133d54: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x133d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d58:
    // 0x133d58: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x133d58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_133d5c:
    // 0x133d5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x133d5cu;
    // VWAITQ (Q already resolved in this runtime)
label_133d60:
    // 0x133d60: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x133d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d64:
    // 0x133d64: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x133d64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_133d68:
    // 0x133d68: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x133d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_133d6c:
    // 0x133d6c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x133d6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_133d70:
    // 0x133d70: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
label_133d74:
    // 0x133d74: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_133d78:
    // 0x133d78: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x133d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_133d7c:
    // 0x133d7c: 0x506200c9  beql        $v1, $v0, . + 4 + (0xC9 << 2)
label_133d80:
    if (ctx->pc == 0x133D80u) {
        ctx->pc = 0x133D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D7Cu;
        // 0x133d80: 0xe6740268  swc1        $f20, 0x268($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 616), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D84u;
        goto label_133d84;
    }
    ctx->pc = 0x133D7Cu;
    {
        const bool branch_taken_0x133d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d7c) {
            ctx->pc = 0x133D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D7Cu;
            // 0x133d80: 0xe6740268  swc1        $f20, 0x268($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 616), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133D84u;
label_133d84:
    // 0x133d84: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_133d88:
    if (ctx->pc == 0x133D88u) {
        ctx->pc = 0x133D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D84u;
        // 0x133d88: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D8Cu;
        goto label_133d8c;
    }
    ctx->pc = 0x133D84u;
    {
        const bool branch_taken_0x133d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D84u;
        // 0x133d88: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d84) {
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133D8Cu;
label_133d8c:
    // 0x133d8c: 0x0  nop
    ctx->pc = 0x133d8cu;
    // NOP
label_133d90:
    // 0x133d90: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_133d94:
    // 0x133d94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_133d98:
    // 0x133d98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133d9c:
    // 0x133d9c: 0x506400c2  beql        $v1, $a0, . + 4 + (0xC2 << 2)
label_133da0:
    if (ctx->pc == 0x133DA0u) {
        ctx->pc = 0x133DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D9Cu;
        // 0x133da0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DA4u;
        goto label_133da4;
    }
    ctx->pc = 0x133D9Cu;
    {
        const bool branch_taken_0x133d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133d9c) {
            ctx->pc = 0x133DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D9Cu;
            // 0x133da0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133DA4u;
label_133da4:
    // 0x133da4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133da8:
    // 0x133da8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_133dac:
    // 0x133dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133db0:
    // 0x133db0: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x133db0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_133db4:
    // 0x133db4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133db8:
    // 0x133db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133dbc:
    // 0x133dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133dc0:
    // 0x133dc0: 0xc05129a  jal         func_144A68
label_133dc4:
    if (ctx->pc == 0x133DC4u) {
        ctx->pc = 0x133DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DC0u;
        // 0x133dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DC8u;
        goto label_133dc8;
    }
    ctx->pc = 0x133DC0u;
    SET_GPR_U32(ctx, 31, 0x133DC8u);
    ctx->pc = 0x133DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DC0u;
    // 0x133dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133DC0u, 0x133DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DC8u;
label_133dc8:
    // 0x133dc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x133dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133dcc:
    // 0x133dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_133dd0:
    // 0x133dd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133dd4:
    // 0x133dd4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133dd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133dd8:
    // 0x133dd8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133dd8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133ddc:
    // 0x133ddc: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133ddcu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
label_133de0:
    // 0x133de0: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_133de4:
    // 0x133de4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_133de8:
    if (ctx->pc == 0x133DE8u) {
        ctx->pc = 0x133DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DE4u;
        // 0x133de8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DECu;
        goto label_133dec;
    }
    ctx->pc = 0x133DE4u;
    {
        const bool branch_taken_0x133de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DE4u;
        // 0x133de8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133de4) {
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133DECu;
label_133dec:
    // 0x133dec: 0x0  nop
    ctx->pc = 0x133decu;
    // NOP
label_133df0:
    // 0x133df0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_133df4:
    // 0x133df4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133df8:
    // 0x133df8: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_133dfc:
    // 0x133dfc: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x133dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_133e00:
    // 0x133e00: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_133e04:
    // 0x133e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_133e08:
    if (ctx->pc == 0x133E08u) {
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E0Cu;
        goto label_133e0c;
    }
    ctx->pc = 0x133E04u;
    {
        const bool branch_taken_0x133e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e04) {
            ctx->pc = 0x133E14u;
            goto label_133e14;
        }
    }
    ctx->pc = 0x133E0Cu;
label_133e0c:
    // 0x133e0c: 0xc061920  jal         func_186480
label_133e10:
    if (ctx->pc == 0x133E10u) {
        ctx->pc = 0x133E14u;
        goto label_133e14;
    }
    ctx->pc = 0x133E0Cu;
    SET_GPR_U32(ctx, 31, 0x133E14u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133E0Cu, 0x133E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E14u;
label_133e14:
    // 0x133e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133e18:
    // 0x133e18: 0xc061422  jal         func_185088
label_133e1c:
    if (ctx->pc == 0x133E1Cu) {
        ctx->pc = 0x133E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E18u;
        // 0x133e1c: 0x26710110  addiu       $s1, $s3, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E20u;
        goto label_133e20;
    }
    ctx->pc = 0x133E18u;
    SET_GPR_U32(ctx, 31, 0x133E20u);
    ctx->pc = 0x133E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E18u;
    // 0x133e1c: 0x26710110  addiu       $s1, $s3, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133E18u, 0x133E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E20u;
label_133e20:
    // 0x133e20: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_133e24:
    // 0x133e24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_133e28:
    // 0x133e28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133e2c:
    // 0x133e2c: 0x5064009e  beql        $v1, $a0, . + 4 + (0x9E << 2)
label_133e30:
    if (ctx->pc == 0x133E30u) {
        ctx->pc = 0x133E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E2Cu;
        // 0x133e30: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E34u;
        goto label_133e34;
    }
    ctx->pc = 0x133E2Cu;
    {
        const bool branch_taken_0x133e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133e2c) {
            ctx->pc = 0x133E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E2Cu;
            // 0x133e30: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x133E34u;
label_133e34:
    // 0x133e34: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133e38:
    // 0x133e38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_133e3c:
    // 0x133e3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133e40:
    // 0x133e40: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_133e44:
    // 0x133e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133e48:
    // 0x133e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133e4c:
    // 0x133e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133e50:
    // 0x133e50: 0xc05129a  jal         func_144A68
label_133e54:
    if (ctx->pc == 0x133E54u) {
        ctx->pc = 0x133E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E50u;
        // 0x133e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E58u;
        goto label_133e58;
    }
    ctx->pc = 0x133E50u;
    SET_GPR_U32(ctx, 31, 0x133E58u);
    ctx->pc = 0x133E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E50u;
    // 0x133e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133E50u, 0x133E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E58u;
label_133e58:
    // 0x133e58: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x133e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133e5c:
    // 0x133e5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_133e60:
    // 0x133e60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133e64:
    // 0x133e64: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133e68:
    // 0x133e68: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133e68u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133e6c:
    // 0x133e6c: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133e6cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
label_133e70:
    // 0x133e70: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133e70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_133e74:
    // 0x133e74: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x133e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133e78:
    // 0x133e78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133e7c:
    // 0x133e7c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133e80:
    // 0x133e80: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133e80u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_133e84:
    // 0x133e84: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x133e84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_133e88:
    // 0x133e88: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x133e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_133e8c:
    // 0x133e8c: 0x10000085  b           . + 4 + (0x85 << 2)
label_133e90:
    if (ctx->pc == 0x133E90u) {
        ctx->pc = 0x133E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E8Cu;
        // 0x133e90: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E94u;
        goto label_133e94;
    }
    ctx->pc = 0x133E8Cu;
    {
        const bool branch_taken_0x133e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E8Cu;
        // 0x133e90: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e8c) {
            ctx->pc = 0x1340A4u;
            goto label_1340a4;
        }
    }
    ctx->pc = 0x133E94u;
label_133e94:
    // 0x133e94: 0x0  nop
    ctx->pc = 0x133e94u;
    // NOP
label_133e98:
    // 0x133e98: 0xc06a26e  jal         func_1A89B8
label_133e9c:
    if (ctx->pc == 0x133E9Cu) {
        ctx->pc = 0x133E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E98u;
        // 0x133e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EA0u;
        goto label_133ea0;
    }
    ctx->pc = 0x133E98u;
    SET_GPR_U32(ctx, 31, 0x133EA0u);
    ctx->pc = 0x133E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E98u;
    // 0x133e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133E98u, 0x133EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EA0u;
label_133ea0:
    // 0x133ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133ea4:
    // 0x133ea4: 0xc06a26e  jal         func_1A89B8
label_133ea8:
    if (ctx->pc == 0x133EA8u) {
        ctx->pc = 0x133EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EA4u;
        // 0x133ea8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EACu;
        goto label_133eac;
    }
    ctx->pc = 0x133EA4u;
    SET_GPR_U32(ctx, 31, 0x133EACu);
    ctx->pc = 0x133EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EA4u;
    // 0x133ea8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133EA4u, 0x133EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EACu;
label_133eac:
    // 0x133eac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133eb0:
    // 0x133eb0: 0xc04db4e  jal         func_136D38
label_133eb4:
    if (ctx->pc == 0x133EB4u) {
        ctx->pc = 0x133EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EB0u;
        // 0x133eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EB8u;
        goto label_133eb8;
    }
    ctx->pc = 0x133EB0u;
    SET_GPR_U32(ctx, 31, 0x133EB8u);
    ctx->pc = 0x133EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EB0u;
    // 0x133eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133EB0u, 0x133EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EB8u;
label_133eb8:
    // 0x133eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133ebc:
    // 0x133ebc: 0xc04db4e  jal         func_136D38
label_133ec0:
    if (ctx->pc == 0x133EC0u) {
        ctx->pc = 0x133EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EBCu;
        // 0x133ec0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EC4u;
        goto label_133ec4;
    }
    ctx->pc = 0x133EBCu;
    SET_GPR_U32(ctx, 31, 0x133EC4u);
    ctx->pc = 0x133EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EBCu;
    // 0x133ec0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133EBCu, 0x133EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EC4u;
label_133ec4:
    // 0x133ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133ec8:
    // 0x133ec8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133ecc:
    // 0x133ecc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x133eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_133ed0:
    // 0x133ed0: 0x1683000b  bne         $s4, $v1, . + 4 + (0xB << 2)
label_133ed4:
    if (ctx->pc == 0x133ED4u) {
        ctx->pc = 0x133ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ED0u;
        // 0x133ed4: 0x8c46b830  lw          $a2, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133ED8u;
        goto label_133ed8;
    }
    ctx->pc = 0x133ED0u;
    {
        const bool branch_taken_0x133ed0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x133ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ED0u;
        // 0x133ed4: 0x8c46b830  lw          $a2, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ed0) {
            ctx->pc = 0x133F00u;
            goto label_133f00;
        }
    }
    ctx->pc = 0x133ED8u;
label_133ed8:
    // 0x133ed8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_133edc:
    // 0x133edc: 0x261010a0  addiu       $s0, $s0, 0x10A0
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4256));
label_133ee0:
    // 0x133ee0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x133ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_133ee4:
    // 0x133ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133ee8:
    // 0x133ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133eec:
    // 0x133eec: 0xc06a2d4  jal         func_1A8B50
label_133ef0:
    if (ctx->pc == 0x133EF0u) {
        ctx->pc = 0x133EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EECu;
        // 0x133ef0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EF4u;
        goto label_133ef4;
    }
    ctx->pc = 0x133EECu;
    SET_GPR_U32(ctx, 31, 0x133EF4u);
    ctx->pc = 0x133EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EECu;
    // 0x133ef0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133EECu, 0x133EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EF4u;
label_133ef4:
    // 0x133ef4: 0x10000025  b           . + 4 + (0x25 << 2)
label_133ef8:
    if (ctx->pc == 0x133EF8u) {
        ctx->pc = 0x133EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EF4u;
        // 0x133ef8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EFCu;
        goto label_133efc;
    }
    ctx->pc = 0x133EF4u;
    {
        const bool branch_taken_0x133ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EF4u;
        // 0x133ef8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ef4) {
            ctx->pc = 0x133F8Cu;
            goto label_133f8c;
        }
    }
    ctx->pc = 0x133EFCu;
label_133efc:
    // 0x133efc: 0x0  nop
    ctx->pc = 0x133efcu;
    // NOP
label_133f00:
    // 0x133f00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x133f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_133f04:
    // 0x133f04: 0x56820022  bnel        $s4, $v0, . + 4 + (0x22 << 2)
label_133f08:
    if (ctx->pc == 0x133F08u) {
        ctx->pc = 0x133F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F04u;
        // 0x133f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133F0Cu;
        goto label_133f0c;
    }
    ctx->pc = 0x133F04u;
    {
        const bool branch_taken_0x133f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x133f04) {
            ctx->pc = 0x133F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133F04u;
            // 0x133f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133F90u;
            goto label_133f90;
        }
    }
    ctx->pc = 0x133F0Cu;
label_133f0c:
    // 0x133f0c: 0xc06a2ac  jal         func_1A8AB0
label_133f10:
    if (ctx->pc == 0x133F10u) {
        ctx->pc = 0x133F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F0Cu;
        // 0x133f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133F14u;
        goto label_133f14;
    }
    ctx->pc = 0x133F0Cu;
    SET_GPR_U32(ctx, 31, 0x133F14u);
    ctx->pc = 0x133F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F0Cu;
    // 0x133f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x133F0Cu, 0x133F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F14u;
label_133f14:
    // 0x133f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133f18:
    // 0x133f18: 0xc06a26e  jal         func_1A89B8
label_133f1c:
    if (ctx->pc == 0x133F1Cu) {
        ctx->pc = 0x133F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F18u;
        // 0x133f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133F20u;
        goto label_133f20;
    }
    ctx->pc = 0x133F18u;
    SET_GPR_U32(ctx, 31, 0x133F20u);
    ctx->pc = 0x133F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F18u;
    // 0x133f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133F18u, 0x133F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F20u;
label_133f20:
    // 0x133f20: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x133f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_133f24:
    // 0x133f24: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_133f28:
    // 0x133f28: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x133f28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_133f2c:
    // 0x133f2c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x133f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_133f30:
    // 0x133f30: 0x26022000  addiu       $v0, $s0, 0x2000
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_133f34:
    // 0x133f34: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x133f34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_133f38:
    // 0x133f38: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x133f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_133f3c:
    // 0x133f3c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x133f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_133f40:
    // 0x133f40: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
label_133f44:
    // 0x133f44: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_133f48:
    // 0x133f48: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_133f4c:
    // 0x133f4c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x133f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_133f50:
    // 0x133f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_133f54:
    // 0x133f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_133f58:
    // 0x133f58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_133f5c:
    // 0x133f5c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x133f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_133f60:
    // 0x133f60: 0x248610a0  addiu       $a2, $a0, 0x10A0
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4256));
label_133f64:
    // 0x133f64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x133f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133f68:
    // 0x133f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133f6c:
    // 0x133f6c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x133f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133f70:
    // 0x133f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x133f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_133f74:
    // 0x133f74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x133f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_133f78:
    // 0x133f78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x133f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_133f7c:
    // 0x133f7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x133f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_133f80:
    // 0x133f80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x133f80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_133f84:
    // 0x133f84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x133f84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_133f88:
    // 0x133f88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x133f88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_133f8c:
    // 0x133f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133f90:
    // 0x133f90: 0xc0449ae  jal         func_1126B8
label_133f94:
    if (ctx->pc == 0x133F94u) {
        ctx->pc = 0x133F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F90u;
        // 0x133f94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133F98u;
        goto label_133f98;
    }
    ctx->pc = 0x133F90u;
    SET_GPR_U32(ctx, 31, 0x133F98u);
    ctx->pc = 0x133F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F90u;
    // 0x133f94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126B8u, 0x133F90u, 0x133F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F98u;
label_133f98:
    // 0x133f98: 0x1000003d  b           . + 4 + (0x3D << 2)
label_133f9c:
    if (ctx->pc == 0x133F9Cu) {
        ctx->pc = 0x133FA0u;
        goto label_133fa0;
    }
    ctx->pc = 0x133F98u;
    {
        const bool branch_taken_0x133f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f98) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x133FA0u;
label_133fa0:
    // 0x133fa0: 0xc06a26e  jal         func_1A89B8
label_133fa4:
    if (ctx->pc == 0x133FA4u) {
        ctx->pc = 0x133FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FA0u;
        // 0x133fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133FA8u;
        goto label_133fa8;
    }
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FA0u;
    // 0x133fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133FA0u, 0x133FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0xc04db4e  jal         func_136D38
label_133fac:
    if (ctx->pc == 0x133FACu) {
        ctx->pc = 0x133FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FA8u;
        // 0x133fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133FB0u;
        goto label_133fb0;
    }
    ctx->pc = 0x133FA8u;
    SET_GPR_U32(ctx, 31, 0x133FB0u);
    ctx->pc = 0x133FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FA8u;
    // 0x133fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133FA8u, 0x133FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FB0u;
label_133fb0:
    // 0x133fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_133fb4:
    // 0x133fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133fb8:
    // 0x133fb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_133fbc:
    // 0x133fbc: 0x1683000a  bne         $s4, $v1, . + 4 + (0xA << 2)
label_133fc0:
    if (ctx->pc == 0x133FC0u) {
        ctx->pc = 0x133FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FBCu;
        // 0x133fc0: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133FC4u;
        goto label_133fc4;
    }
    ctx->pc = 0x133FBCu;
    {
        const bool branch_taken_0x133fbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x133FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FBCu;
        // 0x133fc0: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fbc) {
            ctx->pc = 0x133FE8u;
            goto label_133fe8;
        }
    }
    ctx->pc = 0x133FC4u;
label_133fc4:
    // 0x133fc4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x133fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_133fc8:
    // 0x133fc8: 0x261010b0  addiu       $s0, $s0, 0x10B0
    ctx->pc = 0x133fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
label_133fcc:
    // 0x133fcc: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x133fccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_133fd0:
    // 0x133fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133fd4:
    // 0x133fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133fd8:
    // 0x133fd8: 0xc06a2d4  jal         func_1A8B50
label_133fdc:
    if (ctx->pc == 0x133FDCu) {
        ctx->pc = 0x133FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FD8u;
        // 0x133fdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133FE0u;
        goto label_133fe0;
    }
    ctx->pc = 0x133FD8u;
    SET_GPR_U32(ctx, 31, 0x133FE0u);
    ctx->pc = 0x133FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD8u;
    // 0x133fdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133FD8u, 0x133FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE0u;
label_133fe0:
    // 0x133fe0: 0x10000024  b           . + 4 + (0x24 << 2)
label_133fe4:
    if (ctx->pc == 0x133FE4u) {
        ctx->pc = 0x133FE8u;
        goto label_133fe8;
    }
    ctx->pc = 0x133FE0u;
    {
        const bool branch_taken_0x133fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fe0) {
            ctx->pc = 0x134074u;
            goto label_134074;
        }
    }
    ctx->pc = 0x133FE8u;
label_133fe8:
    // 0x133fe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_133fec:
    // 0x133fec: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
label_133ff0:
    if (ctx->pc == 0x133FF0u) {
        ctx->pc = 0x133FF4u;
        goto label_133ff4;
    }
    ctx->pc = 0x133FECu;
    {
        const bool branch_taken_0x133fec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x133fec) {
            ctx->pc = 0x134074u;
            goto label_134074;
        }
    }
    ctx->pc = 0x133FF4u;
label_133ff4:
    // 0x133ff4: 0xc06a2ac  jal         func_1A8AB0
label_133ff8:
    if (ctx->pc == 0x133FF8u) {
        ctx->pc = 0x133FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FF4u;
        // 0x133ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133FFCu;
        goto label_133ffc;
    }
    ctx->pc = 0x133FF4u;
    SET_GPR_U32(ctx, 31, 0x133FFCu);
    ctx->pc = 0x133FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FF4u;
    // 0x133ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x133FF4u, 0x133FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FFCu;
label_133ffc:
    // 0x133ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134000:
    // 0x134000: 0xc06a26e  jal         func_1A89B8
label_134004:
    if (ctx->pc == 0x134004u) {
        ctx->pc = 0x134004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134000u;
        // 0x134004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134008u;
        goto label_134008;
    }
    ctx->pc = 0x134000u;
    SET_GPR_U32(ctx, 31, 0x134008u);
    ctx->pc = 0x134004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134000u;
    // 0x134004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134000u, 0x134008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134008u;
label_134008:
    // 0x134008: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x134008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_13400c:
    // 0x13400c: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_134010:
    // 0x134010: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x134010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_134014:
    // 0x134014: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x134014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_134018:
    // 0x134018: 0x26022000  addiu       $v0, $s0, 0x2000
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_13401c:
    // 0x13401c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x13401cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_134020:
    // 0x134020: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_134024:
    // 0x134024: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x134024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_134028:
    // 0x134028: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x134028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
label_13402c:
    // 0x13402c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13402cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_134030:
    // 0x134030: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_134034:
    // 0x134034: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x134034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_134038:
    // 0x134038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13403c:
    // 0x13403c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13403cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_134040:
    // 0x134040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_134044:
    // 0x134044: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x134044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_134048:
    // 0x134048: 0x249010b0  addiu       $s0, $a0, 0x10B0
    ctx->pc = 0x134048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
label_13404c:
    // 0x13404c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x13404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134050:
    // 0x134050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_134054:
    // 0x134054: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x134054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_134058:
    // 0x134058: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_13405c:
    // 0x13405c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13405cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_134060:
    // 0x134060: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_134064:
    // 0x134064: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x134064u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_134068:
    // 0x134068: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x134068u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_13406c:
    // 0x13406c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13406cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_134070:
    // 0x134070: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x134070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_134074:
    // 0x134074: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x134074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_134078:
    // 0x134078: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x134078u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_13407c:
    // 0x13407c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x13407cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_134080:
    // 0x134080: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x134080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_134084:
    // 0x134084: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x134084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_134088:
    // 0x134088: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x134088u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_13408c:
    // 0x13408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_134090:
    // 0x134090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x134090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_134094:
    // 0x134094: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x134094u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_134098:
    // 0x134098: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x134098u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_13409c:
    // 0x13409c: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x13409cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
label_1340a0:
    // 0x1340a0: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x1340a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_1340a4:
    // 0x1340a4: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x1340a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_1340a8:
    // 0x1340a8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1340a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1340ac:
    // 0x1340ac: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1340acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1340b0:
    // 0x1340b0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1340b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1340b4:
    // 0x1340b4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1340b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1340b8:
    // 0x1340b8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1340b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1340bc:
    // 0x1340bc: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1340bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1340c0:
    // 0x1340c0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1340c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1340c4:
    // 0x1340c4: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1340c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_1340c8:
    // 0x1340c8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1340c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1340cc:
    // 0x1340cc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1340ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1340d0:
    // 0x1340d0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1340d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1340d4:
    // 0x1340d4: 0x3e00008  jr          $ra
label_1340d8:
    if (ctx->pc == 0x1340D8u) {
        ctx->pc = 0x1340D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340D4u;
        // 0x1340d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1340DCu;
        goto label_fallthrough_0x1340d4;
    }
    ctx->pc = 0x1340D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1340D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340D4u;
        // 0x1340d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1340D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1340d4:
    ctx->pc = 0x1340DCu;
}
