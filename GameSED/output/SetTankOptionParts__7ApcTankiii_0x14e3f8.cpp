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

// Function: SetTankOptionParts__7ApcTankiii
// Address: 0x14e3f8 - 0x14ea18
void SetTankOptionParts__7ApcTankiii_0x14e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTankOptionParts__7ApcTankiii_0x14e3f8");
#endif

    switch (ctx->pc) {
        case 0x14e3f8u: goto label_14e3f8;
        case 0x14e3fcu: goto label_14e3fc;
        case 0x14e400u: goto label_14e400;
        case 0x14e404u: goto label_14e404;
        case 0x14e408u: goto label_14e408;
        case 0x14e40cu: goto label_14e40c;
        case 0x14e410u: goto label_14e410;
        case 0x14e414u: goto label_14e414;
        case 0x14e418u: goto label_14e418;
        case 0x14e41cu: goto label_14e41c;
        case 0x14e420u: goto label_14e420;
        case 0x14e424u: goto label_14e424;
        case 0x14e428u: goto label_14e428;
        case 0x14e42cu: goto label_14e42c;
        case 0x14e430u: goto label_14e430;
        case 0x14e434u: goto label_14e434;
        case 0x14e438u: goto label_14e438;
        case 0x14e43cu: goto label_14e43c;
        case 0x14e440u: goto label_14e440;
        case 0x14e444u: goto label_14e444;
        case 0x14e448u: goto label_14e448;
        case 0x14e44cu: goto label_14e44c;
        case 0x14e450u: goto label_14e450;
        case 0x14e454u: goto label_14e454;
        case 0x14e458u: goto label_14e458;
        case 0x14e45cu: goto label_14e45c;
        case 0x14e460u: goto label_14e460;
        case 0x14e464u: goto label_14e464;
        case 0x14e468u: goto label_14e468;
        case 0x14e46cu: goto label_14e46c;
        case 0x14e470u: goto label_14e470;
        case 0x14e474u: goto label_14e474;
        case 0x14e478u: goto label_14e478;
        case 0x14e47cu: goto label_14e47c;
        case 0x14e480u: goto label_14e480;
        case 0x14e484u: goto label_14e484;
        case 0x14e488u: goto label_14e488;
        case 0x14e48cu: goto label_14e48c;
        case 0x14e490u: goto label_14e490;
        case 0x14e494u: goto label_14e494;
        case 0x14e498u: goto label_14e498;
        case 0x14e49cu: goto label_14e49c;
        case 0x14e4a0u: goto label_14e4a0;
        case 0x14e4a4u: goto label_14e4a4;
        case 0x14e4a8u: goto label_14e4a8;
        case 0x14e4acu: goto label_14e4ac;
        case 0x14e4b0u: goto label_14e4b0;
        case 0x14e4b4u: goto label_14e4b4;
        case 0x14e4b8u: goto label_14e4b8;
        case 0x14e4bcu: goto label_14e4bc;
        case 0x14e4c0u: goto label_14e4c0;
        case 0x14e4c4u: goto label_14e4c4;
        case 0x14e4c8u: goto label_14e4c8;
        case 0x14e4ccu: goto label_14e4cc;
        case 0x14e4d0u: goto label_14e4d0;
        case 0x14e4d4u: goto label_14e4d4;
        case 0x14e4d8u: goto label_14e4d8;
        case 0x14e4dcu: goto label_14e4dc;
        case 0x14e4e0u: goto label_14e4e0;
        case 0x14e4e4u: goto label_14e4e4;
        case 0x14e4e8u: goto label_14e4e8;
        case 0x14e4ecu: goto label_14e4ec;
        case 0x14e4f0u: goto label_14e4f0;
        case 0x14e4f4u: goto label_14e4f4;
        case 0x14e4f8u: goto label_14e4f8;
        case 0x14e4fcu: goto label_14e4fc;
        case 0x14e500u: goto label_14e500;
        case 0x14e504u: goto label_14e504;
        case 0x14e508u: goto label_14e508;
        case 0x14e50cu: goto label_14e50c;
        case 0x14e510u: goto label_14e510;
        case 0x14e514u: goto label_14e514;
        case 0x14e518u: goto label_14e518;
        case 0x14e51cu: goto label_14e51c;
        case 0x14e520u: goto label_14e520;
        case 0x14e524u: goto label_14e524;
        case 0x14e528u: goto label_14e528;
        case 0x14e52cu: goto label_14e52c;
        case 0x14e530u: goto label_14e530;
        case 0x14e534u: goto label_14e534;
        case 0x14e538u: goto label_14e538;
        case 0x14e53cu: goto label_14e53c;
        case 0x14e540u: goto label_14e540;
        case 0x14e544u: goto label_14e544;
        case 0x14e548u: goto label_14e548;
        case 0x14e54cu: goto label_14e54c;
        case 0x14e550u: goto label_14e550;
        case 0x14e554u: goto label_14e554;
        case 0x14e558u: goto label_14e558;
        case 0x14e55cu: goto label_14e55c;
        case 0x14e560u: goto label_14e560;
        case 0x14e564u: goto label_14e564;
        case 0x14e568u: goto label_14e568;
        case 0x14e56cu: goto label_14e56c;
        case 0x14e570u: goto label_14e570;
        case 0x14e574u: goto label_14e574;
        case 0x14e578u: goto label_14e578;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e580u: goto label_14e580;
        case 0x14e584u: goto label_14e584;
        case 0x14e588u: goto label_14e588;
        case 0x14e58cu: goto label_14e58c;
        case 0x14e590u: goto label_14e590;
        case 0x14e594u: goto label_14e594;
        case 0x14e598u: goto label_14e598;
        case 0x14e59cu: goto label_14e59c;
        case 0x14e5a0u: goto label_14e5a0;
        case 0x14e5a4u: goto label_14e5a4;
        case 0x14e5a8u: goto label_14e5a8;
        case 0x14e5acu: goto label_14e5ac;
        case 0x14e5b0u: goto label_14e5b0;
        case 0x14e5b4u: goto label_14e5b4;
        case 0x14e5b8u: goto label_14e5b8;
        case 0x14e5bcu: goto label_14e5bc;
        case 0x14e5c0u: goto label_14e5c0;
        case 0x14e5c4u: goto label_14e5c4;
        case 0x14e5c8u: goto label_14e5c8;
        case 0x14e5ccu: goto label_14e5cc;
        case 0x14e5d0u: goto label_14e5d0;
        case 0x14e5d4u: goto label_14e5d4;
        case 0x14e5d8u: goto label_14e5d8;
        case 0x14e5dcu: goto label_14e5dc;
        case 0x14e5e0u: goto label_14e5e0;
        case 0x14e5e4u: goto label_14e5e4;
        case 0x14e5e8u: goto label_14e5e8;
        case 0x14e5ecu: goto label_14e5ec;
        case 0x14e5f0u: goto label_14e5f0;
        case 0x14e5f4u: goto label_14e5f4;
        case 0x14e5f8u: goto label_14e5f8;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e600u: goto label_14e600;
        case 0x14e604u: goto label_14e604;
        case 0x14e608u: goto label_14e608;
        case 0x14e60cu: goto label_14e60c;
        case 0x14e610u: goto label_14e610;
        case 0x14e614u: goto label_14e614;
        case 0x14e618u: goto label_14e618;
        case 0x14e61cu: goto label_14e61c;
        case 0x14e620u: goto label_14e620;
        case 0x14e624u: goto label_14e624;
        case 0x14e628u: goto label_14e628;
        case 0x14e62cu: goto label_14e62c;
        case 0x14e630u: goto label_14e630;
        case 0x14e634u: goto label_14e634;
        case 0x14e638u: goto label_14e638;
        case 0x14e63cu: goto label_14e63c;
        case 0x14e640u: goto label_14e640;
        case 0x14e644u: goto label_14e644;
        case 0x14e648u: goto label_14e648;
        case 0x14e64cu: goto label_14e64c;
        case 0x14e650u: goto label_14e650;
        case 0x14e654u: goto label_14e654;
        case 0x14e658u: goto label_14e658;
        case 0x14e65cu: goto label_14e65c;
        case 0x14e660u: goto label_14e660;
        case 0x14e664u: goto label_14e664;
        case 0x14e668u: goto label_14e668;
        case 0x14e66cu: goto label_14e66c;
        case 0x14e670u: goto label_14e670;
        case 0x14e674u: goto label_14e674;
        case 0x14e678u: goto label_14e678;
        case 0x14e67cu: goto label_14e67c;
        case 0x14e680u: goto label_14e680;
        case 0x14e684u: goto label_14e684;
        case 0x14e688u: goto label_14e688;
        case 0x14e68cu: goto label_14e68c;
        case 0x14e690u: goto label_14e690;
        case 0x14e694u: goto label_14e694;
        case 0x14e698u: goto label_14e698;
        case 0x14e69cu: goto label_14e69c;
        case 0x14e6a0u: goto label_14e6a0;
        case 0x14e6a4u: goto label_14e6a4;
        case 0x14e6a8u: goto label_14e6a8;
        case 0x14e6acu: goto label_14e6ac;
        case 0x14e6b0u: goto label_14e6b0;
        case 0x14e6b4u: goto label_14e6b4;
        case 0x14e6b8u: goto label_14e6b8;
        case 0x14e6bcu: goto label_14e6bc;
        case 0x14e6c0u: goto label_14e6c0;
        case 0x14e6c4u: goto label_14e6c4;
        case 0x14e6c8u: goto label_14e6c8;
        case 0x14e6ccu: goto label_14e6cc;
        case 0x14e6d0u: goto label_14e6d0;
        case 0x14e6d4u: goto label_14e6d4;
        case 0x14e6d8u: goto label_14e6d8;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e6e0u: goto label_14e6e0;
        case 0x14e6e4u: goto label_14e6e4;
        case 0x14e6e8u: goto label_14e6e8;
        case 0x14e6ecu: goto label_14e6ec;
        case 0x14e6f0u: goto label_14e6f0;
        case 0x14e6f4u: goto label_14e6f4;
        case 0x14e6f8u: goto label_14e6f8;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e700u: goto label_14e700;
        case 0x14e704u: goto label_14e704;
        case 0x14e708u: goto label_14e708;
        case 0x14e70cu: goto label_14e70c;
        case 0x14e710u: goto label_14e710;
        case 0x14e714u: goto label_14e714;
        case 0x14e718u: goto label_14e718;
        case 0x14e71cu: goto label_14e71c;
        case 0x14e720u: goto label_14e720;
        case 0x14e724u: goto label_14e724;
        case 0x14e728u: goto label_14e728;
        case 0x14e72cu: goto label_14e72c;
        case 0x14e730u: goto label_14e730;
        case 0x14e734u: goto label_14e734;
        case 0x14e738u: goto label_14e738;
        case 0x14e73cu: goto label_14e73c;
        case 0x14e740u: goto label_14e740;
        case 0x14e744u: goto label_14e744;
        case 0x14e748u: goto label_14e748;
        case 0x14e74cu: goto label_14e74c;
        case 0x14e750u: goto label_14e750;
        case 0x14e754u: goto label_14e754;
        case 0x14e758u: goto label_14e758;
        case 0x14e75cu: goto label_14e75c;
        case 0x14e760u: goto label_14e760;
        case 0x14e764u: goto label_14e764;
        case 0x14e768u: goto label_14e768;
        case 0x14e76cu: goto label_14e76c;
        case 0x14e770u: goto label_14e770;
        case 0x14e774u: goto label_14e774;
        case 0x14e778u: goto label_14e778;
        case 0x14e77cu: goto label_14e77c;
        case 0x14e780u: goto label_14e780;
        case 0x14e784u: goto label_14e784;
        case 0x14e788u: goto label_14e788;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e790u: goto label_14e790;
        case 0x14e794u: goto label_14e794;
        case 0x14e798u: goto label_14e798;
        case 0x14e79cu: goto label_14e79c;
        case 0x14e7a0u: goto label_14e7a0;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7a8u: goto label_14e7a8;
        case 0x14e7acu: goto label_14e7ac;
        case 0x14e7b0u: goto label_14e7b0;
        case 0x14e7b4u: goto label_14e7b4;
        case 0x14e7b8u: goto label_14e7b8;
        case 0x14e7bcu: goto label_14e7bc;
        case 0x14e7c0u: goto label_14e7c0;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e7c8u: goto label_14e7c8;
        case 0x14e7ccu: goto label_14e7cc;
        case 0x14e7d0u: goto label_14e7d0;
        case 0x14e7d4u: goto label_14e7d4;
        case 0x14e7d8u: goto label_14e7d8;
        case 0x14e7dcu: goto label_14e7dc;
        case 0x14e7e0u: goto label_14e7e0;
        case 0x14e7e4u: goto label_14e7e4;
        case 0x14e7e8u: goto label_14e7e8;
        case 0x14e7ecu: goto label_14e7ec;
        case 0x14e7f0u: goto label_14e7f0;
        case 0x14e7f4u: goto label_14e7f4;
        case 0x14e7f8u: goto label_14e7f8;
        case 0x14e7fcu: goto label_14e7fc;
        case 0x14e800u: goto label_14e800;
        case 0x14e804u: goto label_14e804;
        case 0x14e808u: goto label_14e808;
        case 0x14e80cu: goto label_14e80c;
        case 0x14e810u: goto label_14e810;
        case 0x14e814u: goto label_14e814;
        case 0x14e818u: goto label_14e818;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e820u: goto label_14e820;
        case 0x14e824u: goto label_14e824;
        case 0x14e828u: goto label_14e828;
        case 0x14e82cu: goto label_14e82c;
        case 0x14e830u: goto label_14e830;
        case 0x14e834u: goto label_14e834;
        case 0x14e838u: goto label_14e838;
        case 0x14e83cu: goto label_14e83c;
        case 0x14e840u: goto label_14e840;
        case 0x14e844u: goto label_14e844;
        case 0x14e848u: goto label_14e848;
        case 0x14e84cu: goto label_14e84c;
        case 0x14e850u: goto label_14e850;
        case 0x14e854u: goto label_14e854;
        case 0x14e858u: goto label_14e858;
        case 0x14e85cu: goto label_14e85c;
        case 0x14e860u: goto label_14e860;
        case 0x14e864u: goto label_14e864;
        case 0x14e868u: goto label_14e868;
        case 0x14e86cu: goto label_14e86c;
        case 0x14e870u: goto label_14e870;
        case 0x14e874u: goto label_14e874;
        case 0x14e878u: goto label_14e878;
        case 0x14e87cu: goto label_14e87c;
        case 0x14e880u: goto label_14e880;
        case 0x14e884u: goto label_14e884;
        case 0x14e888u: goto label_14e888;
        case 0x14e88cu: goto label_14e88c;
        case 0x14e890u: goto label_14e890;
        case 0x14e894u: goto label_14e894;
        case 0x14e898u: goto label_14e898;
        case 0x14e89cu: goto label_14e89c;
        case 0x14e8a0u: goto label_14e8a0;
        case 0x14e8a4u: goto label_14e8a4;
        case 0x14e8a8u: goto label_14e8a8;
        case 0x14e8acu: goto label_14e8ac;
        case 0x14e8b0u: goto label_14e8b0;
        case 0x14e8b4u: goto label_14e8b4;
        case 0x14e8b8u: goto label_14e8b8;
        case 0x14e8bcu: goto label_14e8bc;
        case 0x14e8c0u: goto label_14e8c0;
        case 0x14e8c4u: goto label_14e8c4;
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8ccu: goto label_14e8cc;
        case 0x14e8d0u: goto label_14e8d0;
        case 0x14e8d4u: goto label_14e8d4;
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8dcu: goto label_14e8dc;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e8e4u: goto label_14e8e4;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e8ecu: goto label_14e8ec;
        case 0x14e8f0u: goto label_14e8f0;
        case 0x14e8f4u: goto label_14e8f4;
        case 0x14e8f8u: goto label_14e8f8;
        case 0x14e8fcu: goto label_14e8fc;
        case 0x14e900u: goto label_14e900;
        case 0x14e904u: goto label_14e904;
        case 0x14e908u: goto label_14e908;
        case 0x14e90cu: goto label_14e90c;
        case 0x14e910u: goto label_14e910;
        case 0x14e914u: goto label_14e914;
        case 0x14e918u: goto label_14e918;
        case 0x14e91cu: goto label_14e91c;
        case 0x14e920u: goto label_14e920;
        case 0x14e924u: goto label_14e924;
        case 0x14e928u: goto label_14e928;
        case 0x14e92cu: goto label_14e92c;
        case 0x14e930u: goto label_14e930;
        case 0x14e934u: goto label_14e934;
        case 0x14e938u: goto label_14e938;
        case 0x14e93cu: goto label_14e93c;
        case 0x14e940u: goto label_14e940;
        case 0x14e944u: goto label_14e944;
        case 0x14e948u: goto label_14e948;
        case 0x14e94cu: goto label_14e94c;
        case 0x14e950u: goto label_14e950;
        case 0x14e954u: goto label_14e954;
        case 0x14e958u: goto label_14e958;
        case 0x14e95cu: goto label_14e95c;
        case 0x14e960u: goto label_14e960;
        case 0x14e964u: goto label_14e964;
        case 0x14e968u: goto label_14e968;
        case 0x14e96cu: goto label_14e96c;
        case 0x14e970u: goto label_14e970;
        case 0x14e974u: goto label_14e974;
        case 0x14e978u: goto label_14e978;
        case 0x14e97cu: goto label_14e97c;
        case 0x14e980u: goto label_14e980;
        case 0x14e984u: goto label_14e984;
        case 0x14e988u: goto label_14e988;
        case 0x14e98cu: goto label_14e98c;
        case 0x14e990u: goto label_14e990;
        case 0x14e994u: goto label_14e994;
        case 0x14e998u: goto label_14e998;
        case 0x14e99cu: goto label_14e99c;
        case 0x14e9a0u: goto label_14e9a0;
        case 0x14e9a4u: goto label_14e9a4;
        case 0x14e9a8u: goto label_14e9a8;
        case 0x14e9acu: goto label_14e9ac;
        case 0x14e9b0u: goto label_14e9b0;
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9bcu: goto label_14e9bc;
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9c4u: goto label_14e9c4;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9d0u: goto label_14e9d0;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14e9d8u: goto label_14e9d8;
        case 0x14e9dcu: goto label_14e9dc;
        case 0x14e9e0u: goto label_14e9e0;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14e9e8u: goto label_14e9e8;
        case 0x14e9ecu: goto label_14e9ec;
        case 0x14e9f0u: goto label_14e9f0;
        case 0x14e9f4u: goto label_14e9f4;
        case 0x14e9f8u: goto label_14e9f8;
        case 0x14e9fcu: goto label_14e9fc;
        case 0x14ea00u: goto label_14ea00;
        case 0x14ea04u: goto label_14ea04;
        case 0x14ea08u: goto label_14ea08;
        case 0x14ea0cu: goto label_14ea0c;
        case 0x14ea10u: goto label_14ea10;
        case 0x14ea14u: goto label_14ea14;
        default: break;
    }

    ctx->pc = 0x14e3f8u;

label_14e3f8:
    // 0x14e3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14e3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14e3fc:
    // 0x14e3fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e400:
    // 0x14e400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_14e404:
    // 0x14e404: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14e404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14e408:
    // 0x14e408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14e40c:
    // 0x14e40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14e410:
    // 0x14e410: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_14e414:
    // 0x14e414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14e418:
    // 0x14e418: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_14e41c:
    // 0x14e41c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14e41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14e420:
    // 0x14e420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_14e424:
    // 0x14e424: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14e424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14e428:
    // 0x14e428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14e42c:
    // 0x14e42c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_14e430:
    // 0x14e430: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_14e434:
    // 0x14e434: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_14e438:
    // 0x14e438: 0xac5206a8  sw          $s2, 0x6A8($v0)
    ctx->pc = 0x14e438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 18));
label_14e43c:
    // 0x14e43c: 0x1243016c  beq         $s2, $v1, . + 4 + (0x16C << 2)
label_14e440:
    if (ctx->pc == 0x14E440u) {
        ctx->pc = 0x14E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E43Cu;
        // 0x14e440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E444u;
        goto label_14e444;
    }
    ctx->pc = 0x14E43Cu;
    {
        const bool branch_taken_0x14e43c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E43Cu;
        // 0x14e440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e43c) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E444u;
label_14e444:
    // 0x14e444: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
label_14e448:
    if (ctx->pc == 0x14E448u) {
        ctx->pc = 0x14E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E444u;
        // 0x14e448: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E44Cu;
        goto label_14e44c;
    }
    ctx->pc = 0x14E444u;
    {
        const bool branch_taken_0x14e444 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e444) {
            ctx->pc = 0x14E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E444u;
            // 0x14e448: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E45Cu;
            goto label_14e45c;
        }
    }
    ctx->pc = 0x14E44Cu;
label_14e44c:
    // 0x14e44c: 0xc04566c  jal         func_1159B0
label_14e450:
    if (ctx->pc == 0x14E450u) {
        ctx->pc = 0x14E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E44Cu;
        // 0x14e450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E454u;
        goto label_14e454;
    }
    ctx->pc = 0x14E44Cu;
    SET_GPR_U32(ctx, 31, 0x14E454u);
    ctx->pc = 0x14E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E44Cu;
    // 0x14e450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x14E44Cu, 0x14E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E454u;
label_14e454:
    // 0x14e454: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14e454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e458:
    // 0x14e458: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e45c:
    // 0x14e45c: 0x2667ffff  addiu       $a3, $s3, -0x1
    ctx->pc = 0x14e45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_14e460:
    // 0x14e460: 0x8e250170  lw          $a1, 0x170($s1)
    ctx->pc = 0x14e460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_14e464:
    // 0x14e464: 0x2ce6000b  sltiu       $a2, $a3, 0xB
    ctx->pc = 0x14e464u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_14e468:
    // 0x14e468: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x14e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
label_14e46c:
    // 0x14e46c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14e46cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e470:
    // 0x14e470: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_14e474:
    // 0x14e474: 0x30700f00  andi        $s0, $v1, 0xF00
    ctx->pc = 0x14e474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_14e478:
    // 0x14e478: 0x2a020600  slti        $v0, $s0, 0x600
    ctx->pc = 0x14e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1536) ? 1 : 0);
label_14e47c:
    // 0x14e47c: 0x8c950098  lw          $s5, 0x98($a0)
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_14e480:
    // 0x14e480: 0x10c0015a  beqz        $a2, . + 4 + (0x15A << 2)
label_14e484:
    if (ctx->pc == 0x14E484u) {
        ctx->pc = 0x14E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E480u;
        // 0x14e484: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E488u;
        goto label_14e488;
    }
    ctx->pc = 0x14E480u;
    {
        const bool branch_taken_0x14e480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E480u;
        // 0x14e484: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e480) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E488u;
label_14e488:
    // 0x14e488: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_14e48c:
    // 0x14e48c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_14e490:
    // 0x14e490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e494:
    // 0x14e494: 0x8c636c90  lw          $v1, 0x6C90($v1)
    ctx->pc = 0x14e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27792)));
label_14e498:
    // 0x14e498: 0x600008  jr          $v1
label_14e49c:
    if (ctx->pc == 0x14E49Cu) {
        ctx->pc = 0x14E4A0u;
        goto label_14e4a0;
    }
    ctx->pc = 0x14E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E4A0u: goto label_14e4a0;
            case 0x14E4F0u: goto label_14e4f0;
            case 0x14E558u: goto label_14e558;
            case 0x14E650u: goto label_14e650;
            case 0x14E6D0u: goto label_14e6d0;
            case 0x14E710u: goto label_14e710;
            case 0x14E950u: goto label_14e950;
            case 0x14E9A8u: goto label_14e9a8;
            case 0x14E9ECu: goto label_14e9ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14E4A0u;
label_14e4a0:
    // 0x14e4a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e4a4:
    // 0x14e4a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14e4a8:
    // 0x14e4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e4ac:
    // 0x14e4ac: 0xc0557d0  jal         func_155F40
label_14e4b0:
    if (ctx->pc == 0x14E4B0u) {
        ctx->pc = 0x14E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4ACu;
        // 0x14e4b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4B4u;
        goto label_14e4b4;
    }
    ctx->pc = 0x14E4ACu;
    SET_GPR_U32(ctx, 31, 0x14E4B4u);
    ctx->pc = 0x14E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4ACu;
    // 0x14e4b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E4ACu, 0x14E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4B4u;
label_14e4b4:
    // 0x14e4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e4b8:
    // 0x14e4b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e4bc:
    // 0x14e4bc: 0xc05371a  jal         func_14DC68
label_14e4c0:
    if (ctx->pc == 0x14E4C0u) {
        ctx->pc = 0x14E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4BCu;
        // 0x14e4c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4C4u;
        goto label_14e4c4;
    }
    ctx->pc = 0x14E4BCu;
    SET_GPR_U32(ctx, 31, 0x14E4C4u);
    ctx->pc = 0x14E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4BCu;
    // 0x14e4c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E4BCu, 0x14E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4C4u;
label_14e4c4:
    // 0x14e4c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14e4c8:
    // 0x14e4c8: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e4cc:
    // 0x14e4cc: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
label_14e4d0:
    // 0x14e4d0: 0xc05ac44  jal         func_16B110
label_14e4d4:
    if (ctx->pc == 0x14E4D4u) {
        ctx->pc = 0x14E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4D0u;
        // 0x14e4d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4D8u;
        goto label_14e4d8;
    }
    ctx->pc = 0x14E4D0u;
    SET_GPR_U32(ctx, 31, 0x14E4D8u);
    ctx->pc = 0x14E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4D0u;
    // 0x14e4d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E4D0u, 0x14E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4D8u;
label_14e4d8:
    // 0x14e4d8: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e4dc:
    // 0x14e4dc: 0x10800143  beqz        $a0, . + 4 + (0x143 << 2)
label_14e4e0:
    if (ctx->pc == 0x14E4E0u) {
        ctx->pc = 0x14E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4DCu;
        // 0x14e4e0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4E4u;
        goto label_14e4e4;
    }
    ctx->pc = 0x14E4DCu;
    {
        const bool branch_taken_0x14e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4DCu;
        // 0x14e4e0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4dc) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E4E4u;
label_14e4e4:
    // 0x14e4e4: 0x10000017  b           . + 4 + (0x17 << 2)
label_14e4e8:
    if (ctx->pc == 0x14E4E8u) {
        ctx->pc = 0x14E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E4u;
        // 0x14e4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4ECu;
        goto label_14e4ec;
    }
    ctx->pc = 0x14E4E4u;
    {
        const bool branch_taken_0x14e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E4u;
        // 0x14e4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4e4) {
            ctx->pc = 0x14E544u;
            goto label_14e544;
        }
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x0  nop
    ctx->pc = 0x14e4ecu;
    // NOP
label_14e4f0:
    // 0x14e4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e4f4:
    // 0x14e4f4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14e4f8:
    // 0x14e4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e4fc:
    // 0x14e4fc: 0xc0557d0  jal         func_155F40
label_14e500:
    if (ctx->pc == 0x14E500u) {
        ctx->pc = 0x14E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4FCu;
        // 0x14e500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E504u;
        goto label_14e504;
    }
    ctx->pc = 0x14E4FCu;
    SET_GPR_U32(ctx, 31, 0x14E504u);
    ctx->pc = 0x14E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4FCu;
    // 0x14e500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E4FCu, 0x14E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E504u;
label_14e504:
    // 0x14e504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e508:
    // 0x14e508: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e50c:
    // 0x14e50c: 0xc05371a  jal         func_14DC68
label_14e510:
    if (ctx->pc == 0x14E510u) {
        ctx->pc = 0x14E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E50Cu;
        // 0x14e510: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E514u;
        goto label_14e514;
    }
    ctx->pc = 0x14E50Cu;
    SET_GPR_U32(ctx, 31, 0x14E514u);
    ctx->pc = 0x14E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E50Cu;
    // 0x14e510: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E50Cu, 0x14E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E514u;
label_14e514:
    // 0x14e514: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14e518:
    // 0x14e518: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e51c:
    // 0x14e51c: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
label_14e520:
    // 0x14e520: 0xc05ac44  jal         func_16B110
label_14e524:
    if (ctx->pc == 0x14E524u) {
        ctx->pc = 0x14E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E520u;
        // 0x14e524: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E528u;
        goto label_14e528;
    }
    ctx->pc = 0x14E520u;
    SET_GPR_U32(ctx, 31, 0x14E528u);
    ctx->pc = 0x14E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E520u;
    // 0x14e524: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E520u, 0x14E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E528u;
label_14e528:
    // 0x14e528: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e52c:
    // 0x14e52c: 0x1080012f  beqz        $a0, . + 4 + (0x12F << 2)
label_14e530:
    if (ctx->pc == 0x14E530u) {
        ctx->pc = 0x14E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E52Cu;
        // 0x14e530: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E534u;
        goto label_14e534;
    }
    ctx->pc = 0x14E52Cu;
    {
        const bool branch_taken_0x14e52c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E52Cu;
        // 0x14e530: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e52c) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_14e538:
    // 0x14e538: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
label_14e53c:
    if (ctx->pc == 0x14E53Cu) {
        ctx->pc = 0x14E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E538u;
        // 0x14e53c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E540u;
        goto label_14e540;
    }
    ctx->pc = 0x14E538u;
    {
        const bool branch_taken_0x14e538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E538u;
        // 0x14e53c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e538) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E540u;
label_14e540:
    // 0x14e540: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14e544:
    // 0x14e544: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e548:
    // 0x14e548: 0xc056f3e  jal         func_15BCF8
label_14e54c:
    if (ctx->pc == 0x14E54Cu) {
        ctx->pc = 0x14E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E548u;
        // 0x14e54c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E550u;
        goto label_14e550;
    }
    ctx->pc = 0x14E548u;
    SET_GPR_U32(ctx, 31, 0x14E550u);
    ctx->pc = 0x14E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E548u;
    // 0x14e54c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF8u, 0x14E548u, 0x14E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E550u;
label_14e550:
    // 0x14e550: 0x10000127  b           . + 4 + (0x127 << 2)
label_14e554:
    if (ctx->pc == 0x14E554u) {
        ctx->pc = 0x14E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E550u;
        // 0x14e554: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E558u;
        goto label_14e558;
    }
    ctx->pc = 0x14E550u;
    {
        const bool branch_taken_0x14e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E550u;
        // 0x14e554: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e550) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E558u;
label_14e558:
    // 0x14e558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e55c:
    // 0x14e55c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14e560:
    // 0x14e560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e564:
    // 0x14e564: 0xc0557d0  jal         func_155F40
label_14e568:
    if (ctx->pc == 0x14E568u) {
        ctx->pc = 0x14E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E564u;
        // 0x14e568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E56Cu;
        goto label_14e56c;
    }
    ctx->pc = 0x14E564u;
    SET_GPR_U32(ctx, 31, 0x14E56Cu);
    ctx->pc = 0x14E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E564u;
    // 0x14e568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E564u, 0x14E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E56Cu;
label_14e56c:
    // 0x14e56c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e570:
    // 0x14e570: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e574:
    // 0x14e574: 0xc05371a  jal         func_14DC68
label_14e578:
    if (ctx->pc == 0x14E578u) {
        ctx->pc = 0x14E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E574u;
        // 0x14e578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E57Cu;
        goto label_14e57c;
    }
    ctx->pc = 0x14E574u;
    SET_GPR_U32(ctx, 31, 0x14E57Cu);
    ctx->pc = 0x14E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E574u;
    // 0x14e578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E574u, 0x14E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E57Cu;
label_14e57c:
    // 0x14e57c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14e580:
    // 0x14e580: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e584:
    // 0x14e584: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
label_14e588:
    // 0x14e588: 0xc05ac44  jal         func_16B110
label_14e58c:
    if (ctx->pc == 0x14E58Cu) {
        ctx->pc = 0x14E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E588u;
        // 0x14e58c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E590u;
        goto label_14e590;
    }
    ctx->pc = 0x14E588u;
    SET_GPR_U32(ctx, 31, 0x14E590u);
    ctx->pc = 0x14E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E588u;
    // 0x14e58c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E588u, 0x14E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E590u;
label_14e590:
    // 0x14e590: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e594:
    // 0x14e594: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_14e598:
    if (ctx->pc == 0x14E598u) {
        ctx->pc = 0x14E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E594u;
        // 0x14e598: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E59Cu;
        goto label_14e59c;
    }
    ctx->pc = 0x14E594u;
    {
        const bool branch_taken_0x14e594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E594u;
        // 0x14e598: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e594) {
            ctx->pc = 0x14E5B4u;
            goto label_14e5b4;
        }
    }
    ctx->pc = 0x14E59Cu;
label_14e59c:
    // 0x14e59c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_14e5a0:
    // 0x14e5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14e5a4:
    if (ctx->pc == 0x14E5A4u) {
        ctx->pc = 0x14E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5A0u;
        // 0x14e5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5A8u;
        goto label_14e5a8;
    }
    ctx->pc = 0x14E5A0u;
    {
        const bool branch_taken_0x14e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5A0u;
        // 0x14e5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5a0) {
            ctx->pc = 0x14E5B4u;
            goto label_14e5b4;
        }
    }
    ctx->pc = 0x14E5A8u;
label_14e5a8:
    // 0x14e5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e5ac:
    // 0x14e5ac: 0xc056f3e  jal         func_15BCF8
label_14e5b0:
    if (ctx->pc == 0x14E5B0u) {
        ctx->pc = 0x14E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5ACu;
        // 0x14e5b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5B4u;
        goto label_14e5b4;
    }
    ctx->pc = 0x14E5ACu;
    SET_GPR_U32(ctx, 31, 0x14E5B4u);
    ctx->pc = 0x14E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5ACu;
    // 0x14e5b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF8u, 0x14E5ACu, 0x14E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B4u;
label_14e5b4:
    // 0x14e5b4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14e5b8:
    // 0x14e5b8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_14e5bc:
    // 0x14e5bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14e5c0:
    // 0x14e5c0: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
label_14e5c4:
    if (ctx->pc == 0x14E5C4u) {
        ctx->pc = 0x14E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C0u;
        // 0x14e5c4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5C8u;
        goto label_14e5c8;
    }
    ctx->pc = 0x14E5C0u;
    {
        const bool branch_taken_0x14e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C0u;
        // 0x14e5c4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5c0) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E5C8u;
label_14e5c8:
    // 0x14e5c8: 0x2402030f  addiu       $v0, $zero, 0x30F
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
label_14e5cc:
    // 0x14e5cc: 0x5642000f  bnel        $s2, $v0, . + 4 + (0xF << 2)
label_14e5d0:
    if (ctx->pc == 0x14E5D0u) {
        ctx->pc = 0x14E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5CCu;
        // 0x14e5d0: 0x24020310  addiu       $v0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5D4u;
        goto label_14e5d4;
    }
    ctx->pc = 0x14E5CCu;
    {
        const bool branch_taken_0x14e5cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e5cc) {
            ctx->pc = 0x14E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E5CCu;
            // 0x14e5d0: 0x24020310  addiu       $v0, $zero, 0x310 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E60Cu;
            goto label_14e60c;
        }
    }
    ctx->pc = 0x14E5D4u;
label_14e5d4:
    // 0x14e5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e5d8:
    // 0x14e5d8: 0xc0532f2  jal         func_14CBC8
label_14e5dc:
    if (ctx->pc == 0x14E5DCu) {
        ctx->pc = 0x14E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5D8u;
        // 0x14e5dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5E0u;
        goto label_14e5e0;
    }
    ctx->pc = 0x14E5D8u;
    SET_GPR_U32(ctx, 31, 0x14E5E0u);
    ctx->pc = 0x14E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5D8u;
    // 0x14e5dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E5D8u, 0x14E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5E0u;
label_14e5e0:
    // 0x14e5e0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_14e5e4:
    // 0x14e5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e5e8:
    // 0x14e5e8: 0x24054035  addiu       $a1, $zero, 0x4035
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16437));
label_14e5ec:
    // 0x14e5ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_14e5f0:
    // 0x14e5f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_14e5f4:
    // 0x14e5f4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e5f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14e5f8:
    // 0x14e5f8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e5f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_14e5fc:
    // 0x14e5fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e5fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_14e600:
    // 0x14e600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e604:
    // 0x14e604: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_14e608:
    // 0x14e608: 0x24020310  addiu       $v0, $zero, 0x310
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_14e60c:
    // 0x14e60c: 0x564200f8  bnel        $s2, $v0, . + 4 + (0xF8 << 2)
label_14e610:
    if (ctx->pc == 0x14E610u) {
        ctx->pc = 0x14E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E60Cu;
        // 0x14e610: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E614u;
        goto label_14e614;
    }
    ctx->pc = 0x14E60Cu;
    {
        const bool branch_taken_0x14e60c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e60c) {
            ctx->pc = 0x14E610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E60Cu;
            // 0x14e610: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E614u;
label_14e614:
    // 0x14e614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e618:
    // 0x14e618: 0xc0532f2  jal         func_14CBC8
label_14e61c:
    if (ctx->pc == 0x14E61Cu) {
        ctx->pc = 0x14E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E618u;
        // 0x14e61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E620u;
        goto label_14e620;
    }
    ctx->pc = 0x14E618u;
    SET_GPR_U32(ctx, 31, 0x14E620u);
    ctx->pc = 0x14E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E618u;
    // 0x14e61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E618u, 0x14E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E620u;
label_14e620:
    // 0x14e620: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_14e624:
    // 0x14e624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e628:
    // 0x14e628: 0x24054034  addiu       $a1, $zero, 0x4034
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16436));
label_14e62c:
    // 0x14e62c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_14e630:
    // 0x14e630: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14e630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_14e634:
    // 0x14e634: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14e638:
    // 0x14e638: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e638u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_14e63c:
    // 0x14e63c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e63cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_14e640:
    // 0x14e640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e644:
    // 0x14e644: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_14e648:
    if (ctx->pc == 0x14E648u) {
        ctx->pc = 0x14E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E644u;
        // 0x14e648: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E64Cu;
        goto label_14e64c;
    }
    ctx->pc = 0x14E644u;
    {
        const bool branch_taken_0x14e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E644u;
        // 0x14e648: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e644) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E64Cu;
label_14e64c:
    // 0x14e64c: 0x0  nop
    ctx->pc = 0x14e64cu;
    // NOP
label_14e650:
    // 0x14e650: 0xc0463f4  jal         func_118FD0
label_14e654:
    if (ctx->pc == 0x14E654u) {
        ctx->pc = 0x14E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E650u;
        // 0x14e654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E658u;
        goto label_14e658;
    }
    ctx->pc = 0x14E650u;
    SET_GPR_U32(ctx, 31, 0x14E658u);
    ctx->pc = 0x14E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E650u;
    // 0x14e654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E650u, 0x14E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E658u;
label_14e658:
    // 0x14e658: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_14e65c:
    // 0x14e65c: 0x124000e3  beqz        $s2, . + 4 + (0xE3 << 2)
label_14e660:
    if (ctx->pc == 0x14E660u) {
        ctx->pc = 0x14E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E65Cu;
        // 0x14e660: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E664u;
        goto label_14e664;
    }
    ctx->pc = 0x14E65Cu;
    {
        const bool branch_taken_0x14e65c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E65Cu;
        // 0x14e660: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e65c) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E664u;
label_14e664:
    // 0x14e664: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14e668:
    // 0x14e668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14e66c:
    // 0x14e66c: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
label_14e670:
    if (ctx->pc == 0x14E670u) {
        ctx->pc = 0x14E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E66Cu;
        // 0x14e670: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E674u;
        goto label_14e674;
    }
    ctx->pc = 0x14E66Cu;
    {
        const bool branch_taken_0x14e66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E66Cu;
        // 0x14e670: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e66c) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E674u;
label_14e674:
    // 0x14e674: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e678:
    // 0x14e678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e67c:
    // 0x14e67c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14e680:
    // 0x14e680: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
label_14e684:
    // 0x14e684: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_14e688:
    // 0x14e688: 0x8e109a1c  lw          $s0, -0x65E4($s0)
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941212)));
label_14e68c:
    // 0x14e68c: 0xc0532f2  jal         func_14CBC8
label_14e690:
    if (ctx->pc == 0x14E690u) {
        ctx->pc = 0x14E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E68Cu;
        // 0x14e690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E694u;
        goto label_14e694;
    }
    ctx->pc = 0x14E68Cu;
    SET_GPR_U32(ctx, 31, 0x14E694u);
    ctx->pc = 0x14E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E68Cu;
    // 0x14e690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E68Cu, 0x14E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E694u;
label_14e694:
    // 0x14e694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e698:
    // 0x14e698: 0x24035999  addiu       $v1, $zero, 0x5999
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22937));
label_14e69c:
    // 0x14e69c: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x14e69cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_14e6a0:
    // 0x14e6a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x14e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_14e6a4:
    // 0x14e6a4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x14e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_14e6a8:
    // 0x14e6a8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e6a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14e6ac:
    // 0x14e6ac: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e6acu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_14e6b0:
    // 0x14e6b0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e6b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_14e6b4:
    // 0x14e6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e6b8:
    // 0x14e6b8: 0x32440100  andi        $a0, $s2, 0x100
    ctx->pc = 0x14e6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
label_14e6bc:
    // 0x14e6bc: 0x108000cb  beqz        $a0, . + 4 + (0xCB << 2)
label_14e6c0:
    if (ctx->pc == 0x14E6C0u) {
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6C4u;
        goto label_14e6c4;
    }
    ctx->pc = 0x14E6BCu;
    {
        const bool branch_taken_0x14e6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6bc) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E6C4u;
label_14e6c4:
    // 0x14e6c4: 0x24022666  addiu       $v0, $zero, 0x2666
    ctx->pc = 0x14e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9830));
label_14e6c8:
    // 0x14e6c8: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_14e6cc:
    if (ctx->pc == 0x14E6CCu) {
        ctx->pc = 0x14E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C8u;
        // 0x14e6cc: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6D0u;
        goto label_14e6d0;
    }
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C8u;
        // 0x14e6cc: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E6D0u;
label_14e6d0:
    // 0x14e6d0: 0xc0463f4  jal         func_118FD0
label_14e6d4:
    if (ctx->pc == 0x14E6D4u) {
        ctx->pc = 0x14E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6D0u;
        // 0x14e6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6D8u;
        goto label_14e6d8;
    }
    ctx->pc = 0x14E6D0u;
    SET_GPR_U32(ctx, 31, 0x14E6D8u);
    ctx->pc = 0x14E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6D0u;
    // 0x14e6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E6D0u, 0x14E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6D8u;
label_14e6d8:
    // 0x14e6d8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_14e6dc:
    // 0x14e6dc: 0x108000c3  beqz        $a0, . + 4 + (0xC3 << 2)
label_14e6e0:
    if (ctx->pc == 0x14E6E0u) {
        ctx->pc = 0x14E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6DCu;
        // 0x14e6e0: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6E4u;
        goto label_14e6e4;
    }
    ctx->pc = 0x14E6DCu;
    {
        const bool branch_taken_0x14e6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6DCu;
        // 0x14e6e0: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6dc) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E6E4u;
label_14e6e4:
    // 0x14e6e4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14e6e8:
    // 0x14e6e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14e6ec:
    // 0x14e6ec: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
label_14e6f0:
    if (ctx->pc == 0x14E6F0u) {
        ctx->pc = 0x14E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6ECu;
        // 0x14e6f0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6F4u;
        goto label_14e6f4;
    }
    ctx->pc = 0x14E6ECu;
    {
        const bool branch_taken_0x14e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6ECu;
        // 0x14e6f0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6ec) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E6F4u;
label_14e6f4:
    // 0x14e6f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14e6f8:
    // 0x14e6f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14e6fc:
    // 0x14e6fc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_14e700:
    // 0x14e700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e704:
    // 0x14e704: 0x8c639a4c  lw          $v1, -0x65B4($v1)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941260)));
label_14e708:
    // 0x14e708: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_14e70c:
    if (ctx->pc == 0x14E70Cu) {
        ctx->pc = 0x14E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E708u;
        // 0x14e70c: 0xae230848  sw          $v1, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E710u;
        goto label_14e710;
    }
    ctx->pc = 0x14E708u;
    {
        const bool branch_taken_0x14e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E708u;
        // 0x14e70c: 0xae230848  sw          $v1, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e708) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E710u;
label_14e710:
    // 0x14e710: 0xc0463f4  jal         func_118FD0
label_14e714:
    if (ctx->pc == 0x14E714u) {
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E718u;
        goto label_14e718;
    }
    ctx->pc = 0x14E710u;
    SET_GPR_U32(ctx, 31, 0x14E718u);
    ctx->pc = 0x14E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E710u;
    // 0x14e714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E710u, 0x14E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e71c:
    // 0x14e71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14e720:
    // 0x14e720: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x14e720u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_14e724:
    // 0x14e724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e728:
    // 0x14e728: 0xc0557d0  jal         func_155F40
label_14e72c:
    if (ctx->pc == 0x14E72Cu) {
        ctx->pc = 0x14E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E728u;
        // 0x14e72c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E730u;
        goto label_14e730;
    }
    ctx->pc = 0x14E728u;
    SET_GPR_U32(ctx, 31, 0x14E730u);
    ctx->pc = 0x14E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E728u;
    // 0x14e72c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E728u, 0x14E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E730u;
label_14e730:
    // 0x14e730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14e734:
    // 0x14e734: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e738:
    // 0x14e738: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
label_14e73c:
    // 0x14e73c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14e73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e740:
    // 0x14e740: 0xc05ac44  jal         func_16B110
label_14e744:
    if (ctx->pc == 0x14E744u) {
        ctx->pc = 0x14E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E740u;
        // 0x14e744: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E748u;
        goto label_14e748;
    }
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x14E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E740u;
    // 0x14e744: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e74c:
    // 0x14e74c: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_14e750:
    if (ctx->pc == 0x14E750u) {
        ctx->pc = 0x14E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E74Cu;
        // 0x14e750: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E754u;
        goto label_14e754;
    }
    ctx->pc = 0x14E74Cu;
    {
        const bool branch_taken_0x14e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E74Cu;
        // 0x14e750: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e74c) {
            ctx->pc = 0x14E8C0u;
            goto label_14e8c0;
        }
    }
    ctx->pc = 0x14E754u;
label_14e754:
    // 0x14e754: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14e758:
    // 0x14e758: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_14e75c:
    // 0x14e75c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_14e760:
    if (ctx->pc == 0x14E760u) {
        ctx->pc = 0x14E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E75Cu;
        // 0x14e760: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E764u;
        goto label_14e764;
    }
    ctx->pc = 0x14E75Cu;
    {
        const bool branch_taken_0x14e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E75Cu;
        // 0x14e760: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e75c) {
            ctx->pc = 0x14E8C0u;
            goto label_14e8c0;
        }
    }
    ctx->pc = 0x14E764u;
label_14e764:
    // 0x14e764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e768:
    // 0x14e768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_14e76c:
    if (ctx->pc == 0x14E76Cu) {
        ctx->pc = 0x14E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E768u;
        // 0x14e76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E770u;
        goto label_14e770;
    }
    ctx->pc = 0x14E768u;
    {
        const bool branch_taken_0x14e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E768u;
        // 0x14e76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e768) {
            ctx->pc = 0x14E77Cu;
            goto label_14e77c;
        }
    }
    ctx->pc = 0x14E770u;
label_14e770:
    // 0x14e770: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14e774:
    // 0x14e774: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14e778:
    if (ctx->pc == 0x14E778u) {
        ctx->pc = 0x14E77Cu;
        goto label_14e77c;
    }
    ctx->pc = 0x14E774u;
    {
        const bool branch_taken_0x14e774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e774) {
            ctx->pc = 0x14E780u;
            goto label_14e780;
        }
    }
    ctx->pc = 0x14E77Cu;
label_14e77c:
    // 0x14e77c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e780:
    // 0x14e780: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_14e784:
    if (ctx->pc == 0x14E784u) {
        ctx->pc = 0x14E788u;
        goto label_14e788;
    }
    ctx->pc = 0x14E780u;
    {
        const bool branch_taken_0x14e780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e780) {
            ctx->pc = 0x14E854u;
            goto label_14e854;
        }
    }
    ctx->pc = 0x14E788u;
label_14e788:
    // 0x14e788: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e78c:
    // 0x14e78c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x14e78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14e790:
    // 0x14e790: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14e794:
    // 0x14e794: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e798:
    if (ctx->pc == 0x14E798u) {
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E79Cu;
        goto label_14e79c;
    }
    ctx->pc = 0x14E794u;
    {
        const bool branch_taken_0x14e794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e794) {
            ctx->pc = 0x14E7B4u;
            goto label_14e7b4;
        }
    }
    ctx->pc = 0x14E79Cu;
label_14e79c:
    // 0x14e79c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7a0:
    // 0x14e7a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7a4:
    // 0x14e7a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7a8:
    // 0x14e7a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7ac:
    // 0x14e7ac: 0x60f809  jalr        $v1
label_14e7b0:
    if (ctx->pc == 0x14E7B0u) {
        ctx->pc = 0x14E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ACu;
        // 0x14e7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7B4u;
        goto label_14e7b4;
    }
    ctx->pc = 0x14E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7B4u);
        ctx->pc = 0x14E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7ACu;
        // 0x14e7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7ACu, 0x14E7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7B4u;
label_14e7b4:
    // 0x14e7b4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7b8:
    // 0x14e7b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e7bc:
    if (ctx->pc == 0x14E7BCu) {
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C0u;
        goto label_14e7c0;
    }
    ctx->pc = 0x14E7B8u;
    {
        const bool branch_taken_0x14e7b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7b8) {
            ctx->pc = 0x14E7D8u;
            goto label_14e7d8;
        }
    }
    ctx->pc = 0x14E7C0u;
label_14e7c0:
    // 0x14e7c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7c4:
    // 0x14e7c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7c8:
    // 0x14e7c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7cc:
    // 0x14e7cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7d0:
    // 0x14e7d0: 0x60f809  jalr        $v1
label_14e7d4:
    if (ctx->pc == 0x14E7D4u) {
        ctx->pc = 0x14E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D0u;
        // 0x14e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7D8u;
        goto label_14e7d8;
    }
    ctx->pc = 0x14E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7D8u);
        ctx->pc = 0x14E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D0u;
        // 0x14e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7D0u, 0x14E7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7D8u;
label_14e7d8:
    // 0x14e7d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e7dc:
    // 0x14e7dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e7e0:
    if (ctx->pc == 0x14E7E0u) {
        ctx->pc = 0x14E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7DCu;
        // 0x14e7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7E4u;
        goto label_14e7e4;
    }
    ctx->pc = 0x14E7DCu;
    {
        const bool branch_taken_0x14e7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7DCu;
        // 0x14e7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7dc) {
            ctx->pc = 0x14E7FCu;
            goto label_14e7fc;
        }
    }
    ctx->pc = 0x14E7E4u;
label_14e7e4:
    // 0x14e7e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e7e8:
    // 0x14e7e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e7ec:
    // 0x14e7ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e7f0:
    // 0x14e7f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e7f4:
    // 0x14e7f4: 0x60f809  jalr        $v1
label_14e7f8:
    if (ctx->pc == 0x14E7F8u) {
        ctx->pc = 0x14E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F4u;
        // 0x14e7f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7FCu;
        goto label_14e7fc;
    }
    ctx->pc = 0x14E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E7FCu);
        ctx->pc = 0x14E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F4u;
        // 0x14e7f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7F4u, 0x14E7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7FCu;
label_14e7fc:
    // 0x14e7fc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e800:
    // 0x14e800: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14e804:
    if (ctx->pc == 0x14E804u) {
        ctx->pc = 0x14E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E800u;
        // 0x14e804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E808u;
        goto label_14e808;
    }
    ctx->pc = 0x14E800u;
    {
        const bool branch_taken_0x14e800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E800u;
        // 0x14e804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e800) {
            ctx->pc = 0x14E820u;
            goto label_14e820;
        }
    }
    ctx->pc = 0x14E808u;
label_14e808:
    // 0x14e808: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14e80c:
    // 0x14e80c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14e810:
    // 0x14e810: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e814:
    // 0x14e814: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e818:
    // 0x14e818: 0x60f809  jalr        $v1
label_14e81c:
    if (ctx->pc == 0x14E81Cu) {
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E820u;
        goto label_14e820;
    }
    ctx->pc = 0x14E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E820u);
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E818u, 0x14E820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E820u;
label_14e820:
    // 0x14e820: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e824:
    // 0x14e824: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x14e824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_14e828:
    // 0x14e828: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x14e828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_14e82c:
    // 0x14e82c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_14e830:
    // 0x14e830: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
label_14e834:
    // 0x14e834: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_14e838:
    // 0x14e838: 0xa4620016  sh          $v0, 0x16($v1)
    ctx->pc = 0x14e838u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
label_14e83c:
    // 0x14e83c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_14e840:
    // 0x14e840: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14e840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_14e844:
    // 0x14e844: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_14e848:
    // 0x14e848: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x14e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_14e84c:
    // 0x14e84c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_14e850:
    // 0x14e850: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x14e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_14e854:
    // 0x14e854: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_14e858:
    if (ctx->pc == 0x14E858u) {
        ctx->pc = 0x14E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E854u;
        // 0x14e858: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E85Cu;
        goto label_14e85c;
    }
    ctx->pc = 0x14E854u;
    {
        const bool branch_taken_0x14e854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E854u;
        // 0x14e858: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e854) {
            ctx->pc = 0x14E8A0u;
            goto label_14e8a0;
        }
    }
    ctx->pc = 0x14E85Cu;
label_14e85c:
    // 0x14e85c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x14e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_14e860:
    // 0x14e860: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14e864:
    // 0x14e864: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x14e864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_14e868:
    // 0x14e868: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14e868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14e86c:
    // 0x14e86c: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x14e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_14e870:
    // 0x14e870: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x14e870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_14e874:
    // 0x14e874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e878:
    // 0x14e878: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x14e878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_14e87c:
    // 0x14e87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e880:
    // 0x14e880: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x14e880u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_14e884:
    // 0x14e884: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x14e884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_14e888:
    // 0x14e888: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x14e888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
label_14e88c:
    // 0x14e88c: 0xc056d0c  jal         func_15B430
label_14e890:
    if (ctx->pc == 0x14E890u) {
        ctx->pc = 0x14E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E88Cu;
        // 0x14e890: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E894u;
        goto label_14e894;
    }
    ctx->pc = 0x14E88Cu;
    SET_GPR_U32(ctx, 31, 0x14E894u);
    ctx->pc = 0x14E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E88Cu;
    // 0x14e890: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B430u, 0x14E88Cu, 0x14E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E894u;
label_14e894:
    // 0x14e894: 0x1000000a  b           . + 4 + (0xA << 2)
label_14e898:
    if (ctx->pc == 0x14E898u) {
        ctx->pc = 0x14E89Cu;
        goto label_14e89c;
    }
    ctx->pc = 0x14E894u;
    {
        const bool branch_taken_0x14e894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e894) {
            ctx->pc = 0x14E8C0u;
            goto label_14e8c0;
        }
    }
    ctx->pc = 0x14E89Cu;
label_14e89c:
    // 0x14e89c: 0x0  nop
    ctx->pc = 0x14e89cu;
    // NOP
label_14e8a0:
    // 0x14e8a0: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x14e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_14e8a4:
    // 0x14e8a4: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x14e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_14e8a8:
    // 0x14e8a8: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x14e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_14e8ac:
    // 0x14e8ac: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x14e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_14e8b0:
    // 0x14e8b0: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x14e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_14e8b4:
    // 0x14e8b4: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x14e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_14e8b8:
    // 0x14e8b8: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x14e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_14e8bc:
    // 0x14e8bc: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x14e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
label_14e8c0:
    // 0x14e8c0: 0xc0463f4  jal         func_118FD0
label_14e8c4:
    if (ctx->pc == 0x14E8C4u) {
        ctx->pc = 0x14E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8C0u;
        // 0x14e8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8C8u;
        goto label_14e8c8;
    }
    ctx->pc = 0x14E8C0u;
    SET_GPR_U32(ctx, 31, 0x14E8C8u);
    ctx->pc = 0x14E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8C0u;
    // 0x14e8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E8C0u, 0x14E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8C8u;
label_14e8c8:
    // 0x14e8c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_14e8cc:
    // 0x14e8cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14e8d0:
    if (ctx->pc == 0x14E8D0u) {
        ctx->pc = 0x14E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8CCu;
        // 0x14e8d0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8D4u;
        goto label_14e8d4;
    }
    ctx->pc = 0x14E8CCu;
    {
        const bool branch_taken_0x14e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8CCu;
        // 0x14e8d0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8cc) {
            ctx->pc = 0x14E8FCu;
            goto label_14e8fc;
        }
    }
    ctx->pc = 0x14E8D4u;
label_14e8d4:
    // 0x14e8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e8d8:
    // 0x14e8d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_14e8dc:
    // 0x14e8dc: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
label_14e8e0:
    // 0x14e8e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14e8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_14e8e4:
    // 0x14e8e4: 0x8e109a84  lw          $s0, -0x657C($s0)
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941316)));
label_14e8e8:
    // 0x14e8e8: 0xc0532f2  jal         func_14CBC8
label_14e8ec:
    if (ctx->pc == 0x14E8ECu) {
        ctx->pc = 0x14E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E8u;
        // 0x14e8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8F0u;
        goto label_14e8f0;
    }
    ctx->pc = 0x14E8E8u;
    SET_GPR_U32(ctx, 31, 0x14E8F0u);
    ctx->pc = 0x14E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8E8u;
    // 0x14e8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_14e8f4:
    // 0x14e8f4: 0xac62124c  sw          $v0, 0x124C($v1)
    ctx->pc = 0x14e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 2));
label_14e8f8:
    // 0x14e8f8: 0xac701248  sw          $s0, 0x1248($v1)
    ctx->pc = 0x14e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4680), GPR_U32(ctx, 16));
label_14e8fc:
    // 0x14e8fc: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_14e900:
    // 0x14e900: 0x2403fff1  addiu       $v1, $zero, -0xF
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_14e904:
    // 0x14e904: 0x26c2ffdd  addiu       $v0, $s6, -0x23
    ctx->pc = 0x14e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967261));
label_14e908:
    // 0x14e908: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x14e908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14e90c:
    // 0x14e90c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14e90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14e910:
    // 0x14e910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14e914:
    if (ctx->pc == 0x14E914u) {
        ctx->pc = 0x14E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E910u;
        // 0x14e914: 0xae240264  sw          $a0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E918u;
        goto label_14e918;
    }
    ctx->pc = 0x14E910u;
    {
        const bool branch_taken_0x14e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E910u;
        // 0x14e914: 0xae240264  sw          $a0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e910) {
            ctx->pc = 0x14E928u;
            goto label_14e928;
        }
    }
    ctx->pc = 0x14E918u;
label_14e918:
    // 0x14e918: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x14e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_14e91c:
    // 0x14e91c: 0x10000033  b           . + 4 + (0x33 << 2)
label_14e920:
    if (ctx->pc == 0x14E920u) {
        ctx->pc = 0x14E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E91Cu;
        // 0x14e920: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E924u;
        goto label_14e924;
    }
    ctx->pc = 0x14E91Cu;
    {
        const bool branch_taken_0x14e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E91Cu;
        // 0x14e920: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e91c) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E924u;
label_14e924:
    // 0x14e924: 0x0  nop
    ctx->pc = 0x14e924u;
    // NOP
label_14e928:
    // 0x14e928: 0x26c2ffd8  addiu       $v0, $s6, -0x28
    ctx->pc = 0x14e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967256));
label_14e92c:
    // 0x14e92c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14e92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14e930:
    // 0x14e930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14e934:
    if (ctx->pc == 0x14E934u) {
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E938u;
        goto label_14e938;
    }
    ctx->pc = 0x14E930u;
    {
        const bool branch_taken_0x14e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e930) {
            ctx->pc = 0x14E948u;
            goto label_14e948;
        }
    }
    ctx->pc = 0x14E938u;
label_14e938:
    // 0x14e938: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x14e938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_14e93c:
    // 0x14e93c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_14e940:
    if (ctx->pc == 0x14E940u) {
        ctx->pc = 0x14E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E93Cu;
        // 0x14e940: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E944u;
        goto label_14e944;
    }
    ctx->pc = 0x14E93Cu;
    {
        const bool branch_taken_0x14e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E93Cu;
        // 0x14e940: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e93c) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E944u;
label_14e944:
    // 0x14e944: 0x0  nop
    ctx->pc = 0x14e944u;
    // NOP
label_14e948:
    // 0x14e948: 0x10000028  b           . + 4 + (0x28 << 2)
label_14e94c:
    if (ctx->pc == 0x14E94Cu) {
        ctx->pc = 0x14E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E948u;
        // 0x14e94c: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E950u;
        goto label_14e950;
    }
    ctx->pc = 0x14E948u;
    {
        const bool branch_taken_0x14e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E948u;
        // 0x14e94c: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e948) {
            ctx->pc = 0x14E9ECu;
            goto label_14e9ec;
        }
    }
    ctx->pc = 0x14E950u;
label_14e950:
    // 0x14e950: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_14e954:
    // 0x14e954: 0xae20084c  sw          $zero, 0x84C($s1)
    ctx->pc = 0x14e954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
label_14e958:
    // 0x14e958: 0x24439aa8  addiu       $v1, $v0, -0x6558
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941352));
label_14e95c:
    // 0x14e95c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e960:
    // 0x14e960: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_14e964:
    if (ctx->pc == 0x14E964u) {
        ctx->pc = 0x14E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E960u;
        // 0x14e964: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E968u;
        goto label_14e968;
    }
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E960u;
            // 0x14e964: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E968u;
label_14e968:
    // 0x14e968: 0x10520021  beq         $v0, $s2, . + 4 + (0x21 << 2)
label_14e96c:
    if (ctx->pc == 0x14E96Cu) {
        ctx->pc = 0x14E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E968u;
        // 0x14e96c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E970u;
        goto label_14e970;
    }
    ctx->pc = 0x14E968u;
    {
        const bool branch_taken_0x14e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x14E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E968u;
        // 0x14e96c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e968) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E970u;
label_14e970:
    // 0x14e970: 0x8e22084c  lw          $v0, 0x84C($s1)
    ctx->pc = 0x14e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
label_14e974:
    // 0x14e974: 0x0  nop
    ctx->pc = 0x14e974u;
    // NOP
label_14e978:
    // 0x14e978: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_14e97c:
    // 0x14e97c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14e980:
    // 0x14e980: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x14e980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
label_14e984:
    // 0x14e984: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e988:
    // 0x14e988: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_14e98c:
    if (ctx->pc == 0x14E98Cu) {
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E990u;
        goto label_14e990;
    }
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E988u;
            // 0x14e98c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E990u;
label_14e990:
    // 0x14e990: 0x0  nop
    ctx->pc = 0x14e990u;
    // NOP
label_14e994:
    // 0x14e994: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_14e998:
    if (ctx->pc == 0x14E998u) {
        ctx->pc = 0x14E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E994u;
        // 0x14e998: 0x8e22084c  lw          $v0, 0x84C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E99Cu;
        goto label_14e99c;
    }
    ctx->pc = 0x14E994u;
    {
        const bool branch_taken_0x14e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x14e994) {
            ctx->pc = 0x14E998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E994u;
            // 0x14e998: 0x8e22084c  lw          $v0, 0x84C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e978;
        }
    }
    ctx->pc = 0x14E99Cu;
label_14e99c:
    // 0x14e99c: 0x10000014  b           . + 4 + (0x14 << 2)
label_14e9a0:
    if (ctx->pc == 0x14E9A0u) {
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9A4u;
        goto label_14e9a4;
    }
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E9A4u;
label_14e9a4:
    // 0x14e9a4: 0x0  nop
    ctx->pc = 0x14e9a4u;
    // NOP
label_14e9a8:
    // 0x14e9a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e9ac:
    // 0x14e9ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14e9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e9b0:
    // 0x14e9b0: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_14e9b4:
    if (ctx->pc == 0x14E9B4u) {
        ctx->pc = 0x14E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B0u;
        // 0x14e9b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9B8u;
        goto label_14e9b8;
    }
    ctx->pc = 0x14E9B0u;
    {
        const bool branch_taken_0x14e9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B0u;
        // 0x14e9b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9b0) {
            ctx->pc = 0x14E9D0u;
            goto label_14e9d0;
        }
    }
    ctx->pc = 0x14E9B8u;
label_14e9b8:
    // 0x14e9b8: 0xc0463f4  jal         func_118FD0
label_14e9bc:
    if (ctx->pc == 0x14E9BCu) {
        ctx->pc = 0x14E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B8u;
        // 0x14e9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9C0u;
        goto label_14e9c0;
    }
    ctx->pc = 0x14E9B8u;
    SET_GPR_U32(ctx, 31, 0x14E9C0u);
    ctx->pc = 0x14E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9B8u;
    // 0x14e9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E9B8u, 0x14E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C0u;
label_14e9c0:
    // 0x14e9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e9c4:
    // 0x14e9c4: 0xc0463f4  jal         func_118FD0
label_14e9c8:
    if (ctx->pc == 0x14E9C8u) {
        ctx->pc = 0x14E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C4u;
        // 0x14e9c8: 0x8c500058  lw          $s0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9CCu;
        goto label_14e9cc;
    }
    ctx->pc = 0x14E9C4u;
    SET_GPR_U32(ctx, 31, 0x14E9CCu);
    ctx->pc = 0x14E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9C4u;
    // 0x14e9c8: 0x8c500058  lw          $s0, 0x58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E9C4u, 0x14E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9CCu;
label_14e9cc:
    // 0x14e9cc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x14e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_14e9d0:
    // 0x14e9d0: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14e9d4:
    // 0x14e9d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_14e9d8:
    if (ctx->pc == 0x14E9D8u) {
        ctx->pc = 0x14E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9D4u;
        // 0x14e9d8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9DCu;
        goto label_14e9dc;
    }
    ctx->pc = 0x14E9D4u;
    {
        const bool branch_taken_0x14e9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9D4u;
        // 0x14e9d8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9d4) {
            ctx->pc = 0x14E9F0u;
            goto label_14e9f0;
        }
    }
    ctx->pc = 0x14E9DCu;
label_14e9dc:
    // 0x14e9dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x14e9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e9e0:
    // 0x14e9e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x14e9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_14e9e4:
    // 0x14e9e4: 0xc057b1c  jal         func_15EC70
label_14e9e8:
    if (ctx->pc == 0x14E9E8u) {
        ctx->pc = 0x14E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9E4u;
        // 0x14e9e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9ECu;
        goto label_14e9ec;
    }
    ctx->pc = 0x14E9E4u;
    SET_GPR_U32(ctx, 31, 0x14E9ECu);
    ctx->pc = 0x14E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9E4u;
    // 0x14e9e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC70u, 0x14E9E4u, 0x14E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9ECu;
label_14e9ec:
    // 0x14e9ec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x14e9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14e9f0:
    // 0x14e9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14e9f4:
    // 0x14e9f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14e9f8:
    // 0x14e9f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14e9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14e9fc:
    // 0x14e9fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14e9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14ea00:
    // 0x14ea00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14ea00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14ea04:
    // 0x14ea04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14ea04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_14ea08:
    // 0x14ea08: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14ea08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14ea0c:
    // 0x14ea0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14ea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_14ea10:
    // 0x14ea10: 0x3e00008  jr          $ra
label_14ea14:
    if (ctx->pc == 0x14EA14u) {
        ctx->pc = 0x14EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA10u;
        // 0x14ea14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA18u;
        goto label_fallthrough_0x14ea10;
    }
    ctx->pc = 0x14EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA10u;
        // 0x14ea14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14ea10:
    ctx->pc = 0x14EA18u;
}
