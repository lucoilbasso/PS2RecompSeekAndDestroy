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

// Function: EnemyDamageVisible__8ApcPanelb
// Address: 0x15e320 - 0x15e780
void EnemyDamageVisible__8ApcPanelb_0x15e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyDamageVisible__8ApcPanelb_0x15e320");
#endif

    switch (ctx->pc) {
        case 0x15e320u: goto label_15e320;
        case 0x15e324u: goto label_15e324;
        case 0x15e328u: goto label_15e328;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e330u: goto label_15e330;
        case 0x15e334u: goto label_15e334;
        case 0x15e338u: goto label_15e338;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e340u: goto label_15e340;
        case 0x15e344u: goto label_15e344;
        case 0x15e348u: goto label_15e348;
        case 0x15e34cu: goto label_15e34c;
        case 0x15e350u: goto label_15e350;
        case 0x15e354u: goto label_15e354;
        case 0x15e358u: goto label_15e358;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e360u: goto label_15e360;
        case 0x15e364u: goto label_15e364;
        case 0x15e368u: goto label_15e368;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e370u: goto label_15e370;
        case 0x15e374u: goto label_15e374;
        case 0x15e378u: goto label_15e378;
        case 0x15e37cu: goto label_15e37c;
        case 0x15e380u: goto label_15e380;
        case 0x15e384u: goto label_15e384;
        case 0x15e388u: goto label_15e388;
        case 0x15e38cu: goto label_15e38c;
        case 0x15e390u: goto label_15e390;
        case 0x15e394u: goto label_15e394;
        case 0x15e398u: goto label_15e398;
        case 0x15e39cu: goto label_15e39c;
        case 0x15e3a0u: goto label_15e3a0;
        case 0x15e3a4u: goto label_15e3a4;
        case 0x15e3a8u: goto label_15e3a8;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3b4u: goto label_15e3b4;
        case 0x15e3b8u: goto label_15e3b8;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3c4u: goto label_15e3c4;
        case 0x15e3c8u: goto label_15e3c8;
        case 0x15e3ccu: goto label_15e3cc;
        case 0x15e3d0u: goto label_15e3d0;
        case 0x15e3d4u: goto label_15e3d4;
        case 0x15e3d8u: goto label_15e3d8;
        case 0x15e3dcu: goto label_15e3dc;
        case 0x15e3e0u: goto label_15e3e0;
        case 0x15e3e4u: goto label_15e3e4;
        case 0x15e3e8u: goto label_15e3e8;
        case 0x15e3ecu: goto label_15e3ec;
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e3f8u: goto label_15e3f8;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e400u: goto label_15e400;
        case 0x15e404u: goto label_15e404;
        case 0x15e408u: goto label_15e408;
        case 0x15e40cu: goto label_15e40c;
        case 0x15e410u: goto label_15e410;
        case 0x15e414u: goto label_15e414;
        case 0x15e418u: goto label_15e418;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e420u: goto label_15e420;
        case 0x15e424u: goto label_15e424;
        case 0x15e428u: goto label_15e428;
        case 0x15e42cu: goto label_15e42c;
        case 0x15e430u: goto label_15e430;
        case 0x15e434u: goto label_15e434;
        case 0x15e438u: goto label_15e438;
        case 0x15e43cu: goto label_15e43c;
        case 0x15e440u: goto label_15e440;
        case 0x15e444u: goto label_15e444;
        case 0x15e448u: goto label_15e448;
        case 0x15e44cu: goto label_15e44c;
        case 0x15e450u: goto label_15e450;
        case 0x15e454u: goto label_15e454;
        case 0x15e458u: goto label_15e458;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e460u: goto label_15e460;
        case 0x15e464u: goto label_15e464;
        case 0x15e468u: goto label_15e468;
        case 0x15e46cu: goto label_15e46c;
        case 0x15e470u: goto label_15e470;
        case 0x15e474u: goto label_15e474;
        case 0x15e478u: goto label_15e478;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        case 0x15e530u: goto label_15e530;
        case 0x15e534u: goto label_15e534;
        case 0x15e538u: goto label_15e538;
        case 0x15e53cu: goto label_15e53c;
        case 0x15e540u: goto label_15e540;
        case 0x15e544u: goto label_15e544;
        case 0x15e548u: goto label_15e548;
        case 0x15e54cu: goto label_15e54c;
        case 0x15e550u: goto label_15e550;
        case 0x15e554u: goto label_15e554;
        case 0x15e558u: goto label_15e558;
        case 0x15e55cu: goto label_15e55c;
        case 0x15e560u: goto label_15e560;
        case 0x15e564u: goto label_15e564;
        case 0x15e568u: goto label_15e568;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e570u: goto label_15e570;
        case 0x15e574u: goto label_15e574;
        case 0x15e578u: goto label_15e578;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e580u: goto label_15e580;
        case 0x15e584u: goto label_15e584;
        case 0x15e588u: goto label_15e588;
        case 0x15e58cu: goto label_15e58c;
        case 0x15e590u: goto label_15e590;
        case 0x15e594u: goto label_15e594;
        case 0x15e598u: goto label_15e598;
        case 0x15e59cu: goto label_15e59c;
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5a4u: goto label_15e5a4;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b0u: goto label_15e5b0;
        case 0x15e5b4u: goto label_15e5b4;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5bcu: goto label_15e5bc;
        case 0x15e5c0u: goto label_15e5c0;
        case 0x15e5c4u: goto label_15e5c4;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5ccu: goto label_15e5cc;
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5d4u: goto label_15e5d4;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e5dcu: goto label_15e5dc;
        case 0x15e5e0u: goto label_15e5e0;
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e5e8u: goto label_15e5e8;
        case 0x15e5ecu: goto label_15e5ec;
        case 0x15e5f0u: goto label_15e5f0;
        case 0x15e5f4u: goto label_15e5f4;
        case 0x15e5f8u: goto label_15e5f8;
        case 0x15e5fcu: goto label_15e5fc;
        case 0x15e600u: goto label_15e600;
        case 0x15e604u: goto label_15e604;
        case 0x15e608u: goto label_15e608;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e610u: goto label_15e610;
        case 0x15e614u: goto label_15e614;
        case 0x15e618u: goto label_15e618;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e620u: goto label_15e620;
        case 0x15e624u: goto label_15e624;
        case 0x15e628u: goto label_15e628;
        case 0x15e62cu: goto label_15e62c;
        case 0x15e630u: goto label_15e630;
        case 0x15e634u: goto label_15e634;
        case 0x15e638u: goto label_15e638;
        case 0x15e63cu: goto label_15e63c;
        case 0x15e640u: goto label_15e640;
        case 0x15e644u: goto label_15e644;
        case 0x15e648u: goto label_15e648;
        case 0x15e64cu: goto label_15e64c;
        case 0x15e650u: goto label_15e650;
        case 0x15e654u: goto label_15e654;
        case 0x15e658u: goto label_15e658;
        case 0x15e65cu: goto label_15e65c;
        case 0x15e660u: goto label_15e660;
        case 0x15e664u: goto label_15e664;
        case 0x15e668u: goto label_15e668;
        case 0x15e66cu: goto label_15e66c;
        case 0x15e670u: goto label_15e670;
        case 0x15e674u: goto label_15e674;
        case 0x15e678u: goto label_15e678;
        case 0x15e67cu: goto label_15e67c;
        case 0x15e680u: goto label_15e680;
        case 0x15e684u: goto label_15e684;
        case 0x15e688u: goto label_15e688;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e690u: goto label_15e690;
        case 0x15e694u: goto label_15e694;
        case 0x15e698u: goto label_15e698;
        case 0x15e69cu: goto label_15e69c;
        case 0x15e6a0u: goto label_15e6a0;
        case 0x15e6a4u: goto label_15e6a4;
        case 0x15e6a8u: goto label_15e6a8;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6b0u: goto label_15e6b0;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6b8u: goto label_15e6b8;
        case 0x15e6bcu: goto label_15e6bc;
        case 0x15e6c0u: goto label_15e6c0;
        case 0x15e6c4u: goto label_15e6c4;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6ccu: goto label_15e6cc;
        case 0x15e6d0u: goto label_15e6d0;
        case 0x15e6d4u: goto label_15e6d4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6dcu: goto label_15e6dc;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e4u: goto label_15e6e4;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6ecu: goto label_15e6ec;
        case 0x15e6f0u: goto label_15e6f0;
        case 0x15e6f4u: goto label_15e6f4;
        case 0x15e6f8u: goto label_15e6f8;
        case 0x15e6fcu: goto label_15e6fc;
        case 0x15e700u: goto label_15e700;
        case 0x15e704u: goto label_15e704;
        case 0x15e708u: goto label_15e708;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e710u: goto label_15e710;
        case 0x15e714u: goto label_15e714;
        case 0x15e718u: goto label_15e718;
        case 0x15e71cu: goto label_15e71c;
        case 0x15e720u: goto label_15e720;
        case 0x15e724u: goto label_15e724;
        case 0x15e728u: goto label_15e728;
        case 0x15e72cu: goto label_15e72c;
        case 0x15e730u: goto label_15e730;
        case 0x15e734u: goto label_15e734;
        case 0x15e738u: goto label_15e738;
        case 0x15e73cu: goto label_15e73c;
        case 0x15e740u: goto label_15e740;
        case 0x15e744u: goto label_15e744;
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        default: break;
    }

    ctx->pc = 0x15e320u;

label_15e320:
    // 0x15e320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15e324:
    // 0x15e324: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_15e328:
    // 0x15e328: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15e328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e32c:
    // 0x15e32c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15e32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15e330:
    // 0x15e330: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_15e334:
    // 0x15e334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15e338:
    // 0x15e338: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15e338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15e33c:
    // 0x15e33c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15e33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15e340:
    // 0x15e340: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e344:
    // 0x15e344: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15e348:
    // 0x15e348: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15e34c:
    // 0x15e34c: 0x0  nop
    ctx->pc = 0x15e34cu;
    // NOP
label_15e350:
    // 0x15e350: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e354:
    // 0x15e354: 0x31343  sra         $v0, $v1, 13
    ctx->pc = 0x15e354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
label_15e358:
    // 0x15e358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e35c:
    // 0x15e35c: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_15e360:
    if (ctx->pc == 0x15E360u) {
        ctx->pc = 0x15E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E35Cu;
        // 0x15e360: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E364u;
        goto label_15e364;
    }
    ctx->pc = 0x15E35Cu;
    {
        const bool branch_taken_0x15e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e35c) {
            ctx->pc = 0x15E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E35Cu;
            // 0x15e360: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            goto label_15e554;
        }
    }
    ctx->pc = 0x15E364u;
label_15e364:
    // 0x15e364: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15e368:
    if (ctx->pc == 0x15E368u) {
        ctx->pc = 0x15E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E364u;
        // 0x15e368: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E36Cu;
        goto label_15e36c;
    }
    ctx->pc = 0x15E364u;
    {
        const bool branch_taken_0x15e364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E364u;
        // 0x15e368: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e364) {
            ctx->pc = 0x15E410u;
            goto label_15e410;
        }
    }
    ctx->pc = 0x15E36Cu;
label_15e36c:
    // 0x15e36c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e370:
    // 0x15e370: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x15e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_15e374:
    // 0x15e374: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e378:
    if (ctx->pc == 0x15E378u) {
        ctx->pc = 0x15E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E374u;
        // 0x15e378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E37Cu;
        goto label_15e37c;
    }
    ctx->pc = 0x15E374u;
    {
        const bool branch_taken_0x15e374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E374u;
        // 0x15e378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e374) {
            ctx->pc = 0x15E398u;
            goto label_15e398;
        }
    }
    ctx->pc = 0x15E37Cu;
label_15e37c:
    // 0x15e37c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e380:
    // 0x15e380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e384:
    // 0x15e384: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e388:
    // 0x15e388: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e38c:
    // 0x15e38c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e390:
    // 0x15e390: 0x60f809  jalr        $v1
label_15e394:
    if (ctx->pc == 0x15E394u) {
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E398u;
        goto label_15e398;
    }
    ctx->pc = 0x15E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E398u);
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E390u, 0x15E398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E398u;
label_15e398:
    // 0x15e398: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e39c:
    // 0x15e39c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e3a0:
    if (ctx->pc == 0x15E3A0u) {
        ctx->pc = 0x15E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E39Cu;
        // 0x15e3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3A4u;
        goto label_15e3a4;
    }
    ctx->pc = 0x15E39Cu;
    {
        const bool branch_taken_0x15e39c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E39Cu;
        // 0x15e3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e39c) {
            ctx->pc = 0x15E3BCu;
            goto label_15e3bc;
        }
    }
    ctx->pc = 0x15E3A4u;
label_15e3a4:
    // 0x15e3a4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e3a8:
    // 0x15e3a8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e3ac:
    // 0x15e3ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e3b0:
    // 0x15e3b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e3b4:
    // 0x15e3b4: 0x60f809  jalr        $v1
label_15e3b8:
    if (ctx->pc == 0x15E3B8u) {
        ctx->pc = 0x15E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3B4u;
        // 0x15e3b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3BCu;
        goto label_15e3bc;
    }
    ctx->pc = 0x15E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E3BCu);
        ctx->pc = 0x15E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3B4u;
        // 0x15e3b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E3B4u, 0x15E3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E3BCu;
label_15e3bc:
    // 0x15e3bc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e3c0:
    // 0x15e3c0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e3c4:
    if (ctx->pc == 0x15E3C4u) {
        ctx->pc = 0x15E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3C0u;
        // 0x15e3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3C8u;
        goto label_15e3c8;
    }
    ctx->pc = 0x15E3C0u;
    {
        const bool branch_taken_0x15e3c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3C0u;
        // 0x15e3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3c0) {
            ctx->pc = 0x15E3E0u;
            goto label_15e3e0;
        }
    }
    ctx->pc = 0x15E3C8u;
label_15e3c8:
    // 0x15e3c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e3cc:
    // 0x15e3cc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e3d0:
    // 0x15e3d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e3d4:
    // 0x15e3d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e3d8:
    // 0x15e3d8: 0x60f809  jalr        $v1
label_15e3dc:
    if (ctx->pc == 0x15E3DCu) {
        ctx->pc = 0x15E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D8u;
        // 0x15e3dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3E0u;
        goto label_15e3e0;
    }
    ctx->pc = 0x15E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E3E0u);
        ctx->pc = 0x15E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D8u;
        // 0x15e3dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E3D8u, 0x15E3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E3E0u;
label_15e3e0:
    // 0x15e3e0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e3e4:
    // 0x15e3e4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e3e8:
    if (ctx->pc == 0x15E3E8u) {
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3E4u;
        // 0x15e3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3ECu;
        goto label_15e3ec;
    }
    ctx->pc = 0x15E3E4u;
    {
        const bool branch_taken_0x15e3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3E4u;
        // 0x15e3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3e4) {
            ctx->pc = 0x15E550u;
            goto label_15e550;
        }
    }
    ctx->pc = 0x15E3ECu;
label_15e3ec:
    // 0x15e3ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e3f0:
    // 0x15e3f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e3f4:
    // 0x15e3f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e3f8:
    // 0x15e3f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e3fc:
    // 0x15e3fc: 0x60f809  jalr        $v1
label_15e400:
    if (ctx->pc == 0x15E400u) {
        ctx->pc = 0x15E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3FCu;
        // 0x15e400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E404u;
        goto label_15e404;
    }
    ctx->pc = 0x15E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E404u);
        ctx->pc = 0x15E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3FCu;
        // 0x15e400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E3FCu, 0x15E404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E404u;
label_15e404:
    // 0x15e404: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e408:
    if (ctx->pc == 0x15E408u) {
        ctx->pc = 0x15E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E404u;
        // 0x15e408: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E40Cu;
        goto label_15e40c;
    }
    ctx->pc = 0x15E404u;
    {
        const bool branch_taken_0x15e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E404u;
        // 0x15e408: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e404) {
            ctx->pc = 0x15E554u;
            goto label_15e554;
        }
    }
    ctx->pc = 0x15E40Cu;
label_15e40c:
    // 0x15e40c: 0x0  nop
    ctx->pc = 0x15e40cu;
    // NOP
label_15e410:
    // 0x15e410: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e414:
    // 0x15e414: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e418:
    // 0x15e418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e41c:
    // 0x15e41c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e420:
    if (ctx->pc == 0x15E420u) {
        ctx->pc = 0x15E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E41Cu;
        // 0x15e420: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E424u;
        goto label_15e424;
    }
    ctx->pc = 0x15E41Cu;
    {
        const bool branch_taken_0x15e41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E41Cu;
        // 0x15e420: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e41c) {
            ctx->pc = 0x15E440u;
            goto label_15e440;
        }
    }
    ctx->pc = 0x15E424u;
label_15e424:
    // 0x15e424: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e428:
    // 0x15e428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e42c:
    // 0x15e42c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e430:
    // 0x15e430: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e434:
    // 0x15e434: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e438:
    // 0x15e438: 0x60f809  jalr        $v1
label_15e43c:
    if (ctx->pc == 0x15E43Cu) {
        ctx->pc = 0x15E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E438u;
        // 0x15e43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E440u;
        goto label_15e440;
    }
    ctx->pc = 0x15E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E440u);
        ctx->pc = 0x15E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E438u;
        // 0x15e43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E438u, 0x15E440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E440u;
label_15e440:
    // 0x15e440: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e444:
    // 0x15e444: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e448:
    if (ctx->pc == 0x15E448u) {
        ctx->pc = 0x15E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E444u;
        // 0x15e448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E44Cu;
        goto label_15e44c;
    }
    ctx->pc = 0x15E444u;
    {
        const bool branch_taken_0x15e444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E444u;
        // 0x15e448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e444) {
            ctx->pc = 0x15E464u;
            goto label_15e464;
        }
    }
    ctx->pc = 0x15E44Cu;
label_15e44c:
    // 0x15e44c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e450:
    // 0x15e450: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e454:
    // 0x15e454: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e458:
    // 0x15e458: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e45c:
    // 0x15e45c: 0x60f809  jalr        $v1
label_15e460:
    if (ctx->pc == 0x15E460u) {
        ctx->pc = 0x15E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E45Cu;
        // 0x15e460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E464u;
        goto label_15e464;
    }
    ctx->pc = 0x15E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E464u);
        ctx->pc = 0x15E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E45Cu;
        // 0x15e460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E45Cu, 0x15E464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E464u;
label_15e464:
    // 0x15e464: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e468:
    // 0x15e468: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_15e46c:
    if (ctx->pc == 0x15E46Cu) {
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E470u;
        goto label_15e470;
    }
    ctx->pc = 0x15E468u;
    {
        const bool branch_taken_0x15e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e468) {
            ctx->pc = 0x15E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E468u;
            // 0x15e46c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            goto label_15e554;
        }
    }
    ctx->pc = 0x15E470u;
label_15e470:
    // 0x15e470: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e474:
    // 0x15e474: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_15e478:
    if (ctx->pc == 0x15E478u) {
        ctx->pc = 0x15E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E474u;
        // 0x15e478: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E47Cu;
        goto label_15e47c;
    }
    ctx->pc = 0x15E474u;
    {
        const bool branch_taken_0x15e474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e474) {
            ctx->pc = 0x15E478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E474u;
            // 0x15e478: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            goto label_15e554;
        }
    }
    ctx->pc = 0x15E47Cu;
label_15e47c:
    // 0x15e47c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e480:
    // 0x15e480: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e484:
    // 0x15e484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e488:
    // 0x15e488: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_15e48c:
    if (ctx->pc == 0x15E48Cu) {
        ctx->pc = 0x15E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E488u;
        // 0x15e48c: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E490u;
        goto label_15e490;
    }
    ctx->pc = 0x15E488u;
    {
        const bool branch_taken_0x15e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E488u;
        // 0x15e48c: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e488) {
            ctx->pc = 0x15E4F0u;
            goto label_15e4f0;
        }
    }
    ctx->pc = 0x15E490u;
label_15e490:
    // 0x15e490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e494:
    // 0x15e494: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e498:
    if (ctx->pc == 0x15E498u) {
        ctx->pc = 0x15E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E494u;
        // 0x15e498: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E49Cu;
        goto label_15e49c;
    }
    ctx->pc = 0x15E494u;
    {
        const bool branch_taken_0x15e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e494) {
            ctx->pc = 0x15E498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E494u;
            // 0x15e498: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4E0u;
            goto label_15e4e0;
        }
    }
    ctx->pc = 0x15E49Cu;
label_15e49c:
    // 0x15e49c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e4a0:
    // 0x15e4a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e4a4:
    // 0x15e4a4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e4a8:
    // 0x15e4a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e4ac:
    // 0x15e4ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e4b0:
    // 0x15e4b0: 0x60f809  jalr        $v1
label_15e4b4:
    if (ctx->pc == 0x15E4B4u) {
        ctx->pc = 0x15E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B0u;
        // 0x15e4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4B8u;
        goto label_15e4b8;
    }
    ctx->pc = 0x15E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E4B8u);
        ctx->pc = 0x15E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B0u;
        // 0x15e4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E4B0u, 0x15E4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E4B8u;
label_15e4b8:
    // 0x15e4b8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e4bc:
    // 0x15e4bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e4c0:
    if (ctx->pc == 0x15E4C0u) {
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4C4u;
        goto label_15e4c4;
    }
    ctx->pc = 0x15E4BCu;
    {
        const bool branch_taken_0x15e4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4bc) {
            ctx->pc = 0x15E4DCu;
            goto label_15e4dc;
        }
    }
    ctx->pc = 0x15E4C4u;
label_15e4c4:
    // 0x15e4c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e4c8:
    // 0x15e4c8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e4cc:
    // 0x15e4cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e4d0:
    // 0x15e4d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e4d4:
    // 0x15e4d4: 0x60f809  jalr        $v1
label_15e4d8:
    if (ctx->pc == 0x15E4D8u) {
        ctx->pc = 0x15E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D4u;
        // 0x15e4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4DCu;
        goto label_15e4dc;
    }
    ctx->pc = 0x15E4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E4DCu);
        ctx->pc = 0x15E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D4u;
        // 0x15e4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E4D4u, 0x15E4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E4DCu;
label_15e4dc:
    // 0x15e4dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15e4e0:
    // 0x15e4e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15e4e4:
    // 0x15e4e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_15e4e8:
    if (ctx->pc == 0x15E4E8u) {
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4ECu;
        goto label_15e4ec;
    }
    ctx->pc = 0x15E4E4u;
    {
        const bool branch_taken_0x15e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e4) {
            ctx->pc = 0x15E550u;
            goto label_15e550;
        }
    }
    ctx->pc = 0x15E4ECu;
label_15e4ec:
    // 0x15e4ec: 0x0  nop
    ctx->pc = 0x15e4ecu;
    // NOP
label_15e4f0:
    // 0x15e4f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e4f4:
    // 0x15e4f4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e4f8:
    if (ctx->pc == 0x15E4F8u) {
        ctx->pc = 0x15E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4F4u;
        // 0x15e4f8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4FCu;
        goto label_15e4fc;
    }
    ctx->pc = 0x15E4F4u;
    {
        const bool branch_taken_0x15e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e4f4) {
            ctx->pc = 0x15E4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E4F4u;
            // 0x15e4f8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E540u;
            goto label_15e540;
        }
    }
    ctx->pc = 0x15E4FCu;
label_15e4fc:
    // 0x15e4fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e500:
    // 0x15e500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e504:
    // 0x15e504: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e508:
    // 0x15e508: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e50c:
    // 0x15e50c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e510:
    // 0x15e510: 0x60f809  jalr        $v1
label_15e514:
    if (ctx->pc == 0x15E514u) {
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E510u;
        // 0x15e514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E518u;
        goto label_15e518;
    }
    ctx->pc = 0x15E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E518u);
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E510u;
        // 0x15e514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E510u, 0x15E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E518u;
label_15e518:
    // 0x15e518: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e51c:
    // 0x15e51c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e520:
    if (ctx->pc == 0x15E520u) {
        ctx->pc = 0x15E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E51Cu;
        // 0x15e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E524u;
        goto label_15e524;
    }
    ctx->pc = 0x15E51Cu;
    {
        const bool branch_taken_0x15e51c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E51Cu;
        // 0x15e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e51c) {
            ctx->pc = 0x15E53Cu;
            goto label_15e53c;
        }
    }
    ctx->pc = 0x15E524u;
label_15e524:
    // 0x15e524: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e528:
    // 0x15e528: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e52c:
    // 0x15e52c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e530:
    // 0x15e530: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e534:
    // 0x15e534: 0x60f809  jalr        $v1
label_15e538:
    if (ctx->pc == 0x15E538u) {
        ctx->pc = 0x15E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E534u;
        // 0x15e538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E53Cu;
        goto label_15e53c;
    }
    ctx->pc = 0x15E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E53Cu);
        ctx->pc = 0x15E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E534u;
        // 0x15e538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E534u, 0x15E53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E53Cu;
label_15e53c:
    // 0x15e53c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15e540:
    // 0x15e540: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15e544:
    // 0x15e544: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15e548:
    // 0x15e548: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15e548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e54c:
    // 0x15e54c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x15e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_15e550:
    // 0x15e550: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15e554:
    // 0x15e554: 0x661ff7e  bgez        $s3, . + 4 + (-0x82 << 2)
label_15e558:
    if (ctx->pc == 0x15E558u) {
        ctx->pc = 0x15E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E554u;
        // 0x15e558: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E55Cu;
        goto label_15e55c;
    }
    ctx->pc = 0x15E554u;
    {
        const bool branch_taken_0x15e554 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x15E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E554u;
        // 0x15e558: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e554) {
            ctx->pc = 0x15E350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e350;
        }
    }
    ctx->pc = 0x15E55Cu;
label_15e55c:
    // 0x15e55c: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15e55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15e560:
    // 0x15e560: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e564:
    // 0x15e564: 0x31343  sra         $v0, $v1, 13
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
label_15e568:
    // 0x15e568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e56c:
    // 0x15e56c: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_15e570:
    if (ctx->pc == 0x15E570u) {
        ctx->pc = 0x15E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E56Cu;
        // 0x15e570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E574u;
        goto label_15e574;
    }
    ctx->pc = 0x15E56Cu;
    {
        const bool branch_taken_0x15e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e56c) {
            ctx->pc = 0x15E570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E56Cu;
            // 0x15e570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E574u;
label_15e574:
    // 0x15e574: 0x5640002a  bnel        $s2, $zero, . + 4 + (0x2A << 2)
label_15e578:
    if (ctx->pc == 0x15E578u) {
        ctx->pc = 0x15E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E574u;
        // 0x15e578: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E57Cu;
        goto label_15e57c;
    }
    ctx->pc = 0x15E574u;
    {
        const bool branch_taken_0x15e574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e574) {
            ctx->pc = 0x15E578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E574u;
            // 0x15e578: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E620u;
            goto label_15e620;
        }
    }
    ctx->pc = 0x15E57Cu;
label_15e57c:
    // 0x15e57c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e580:
    // 0x15e580: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x15e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_15e584:
    // 0x15e584: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e588:
    if (ctx->pc == 0x15E588u) {
        ctx->pc = 0x15E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E584u;
        // 0x15e588: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E58Cu;
        goto label_15e58c;
    }
    ctx->pc = 0x15E584u;
    {
        const bool branch_taken_0x15e584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E584u;
        // 0x15e588: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e584) {
            ctx->pc = 0x15E5A8u;
            goto label_15e5a8;
        }
    }
    ctx->pc = 0x15E58Cu;
label_15e58c:
    // 0x15e58c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e590:
    // 0x15e590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e594:
    // 0x15e594: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e598:
    // 0x15e598: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e59c:
    // 0x15e59c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5a0:
    // 0x15e5a0: 0x60f809  jalr        $v1
label_15e5a4:
    if (ctx->pc == 0x15E5A4u) {
        ctx->pc = 0x15E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5A0u;
        // 0x15e5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5A8u;
        goto label_15e5a8;
    }
    ctx->pc = 0x15E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5A8u);
        ctx->pc = 0x15E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5A0u;
        // 0x15e5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5A0u, 0x15E5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E5A8u;
label_15e5a8:
    // 0x15e5a8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e5ac:
    // 0x15e5ac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e5b0:
    if (ctx->pc == 0x15E5B0u) {
        ctx->pc = 0x15E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5ACu;
        // 0x15e5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5B4u;
        goto label_15e5b4;
    }
    ctx->pc = 0x15E5ACu;
    {
        const bool branch_taken_0x15e5ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5ACu;
        // 0x15e5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5ac) {
            ctx->pc = 0x15E5CCu;
            goto label_15e5cc;
        }
    }
    ctx->pc = 0x15E5B4u;
label_15e5b4:
    // 0x15e5b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e5b8:
    // 0x15e5b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e5bc:
    // 0x15e5bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e5c0:
    // 0x15e5c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5c4:
    // 0x15e5c4: 0x60f809  jalr        $v1
label_15e5c8:
    if (ctx->pc == 0x15E5C8u) {
        ctx->pc = 0x15E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5C4u;
        // 0x15e5c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5CCu;
        goto label_15e5cc;
    }
    ctx->pc = 0x15E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5CCu);
        ctx->pc = 0x15E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5C4u;
        // 0x15e5c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5C4u, 0x15E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E5CCu;
label_15e5cc:
    // 0x15e5cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e5d0:
    // 0x15e5d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e5d4:
    if (ctx->pc == 0x15E5D4u) {
        ctx->pc = 0x15E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5D0u;
        // 0x15e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5D8u;
        goto label_15e5d8;
    }
    ctx->pc = 0x15E5D0u;
    {
        const bool branch_taken_0x15e5d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5D0u;
        // 0x15e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5d0) {
            ctx->pc = 0x15E5F0u;
            goto label_15e5f0;
        }
    }
    ctx->pc = 0x15E5D8u;
label_15e5d8:
    // 0x15e5d8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e5dc:
    // 0x15e5dc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e5e0:
    // 0x15e5e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e5e4:
    // 0x15e5e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5e8:
    // 0x15e5e8: 0x60f809  jalr        $v1
label_15e5ec:
    if (ctx->pc == 0x15E5ECu) {
        ctx->pc = 0x15E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5E8u;
        // 0x15e5ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5F0u;
        goto label_15e5f0;
    }
    ctx->pc = 0x15E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5F0u);
        ctx->pc = 0x15E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5E8u;
        // 0x15e5ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5E8u, 0x15E5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E5F0u;
label_15e5f0:
    // 0x15e5f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e5f4:
    // 0x15e5f4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e5f8:
    if (ctx->pc == 0x15E5F8u) {
        ctx->pc = 0x15E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F4u;
        // 0x15e5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5FCu;
        goto label_15e5fc;
    }
    ctx->pc = 0x15E5F4u;
    {
        const bool branch_taken_0x15e5f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F4u;
        // 0x15e5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5f4) {
            ctx->pc = 0x15E760u;
            goto label_15e760;
        }
    }
    ctx->pc = 0x15E5FCu;
label_15e5fc:
    // 0x15e5fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e600:
    // 0x15e600: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e604:
    // 0x15e604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e608:
    // 0x15e608: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e60c:
    // 0x15e60c: 0x60f809  jalr        $v1
label_15e610:
    if (ctx->pc == 0x15E610u) {
        ctx->pc = 0x15E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E60Cu;
        // 0x15e610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E614u;
        goto label_15e614;
    }
    ctx->pc = 0x15E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E614u);
        ctx->pc = 0x15E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E60Cu;
        // 0x15e610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E60Cu, 0x15E614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E614u;
label_15e614:
    // 0x15e614: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e618:
    if (ctx->pc == 0x15E618u) {
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E61Cu;
        goto label_15e61c;
    }
    ctx->pc = 0x15E614u;
    {
        const bool branch_taken_0x15e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e614) {
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E61Cu;
label_15e61c:
    // 0x15e61c: 0x0  nop
    ctx->pc = 0x15e61cu;
    // NOP
label_15e620:
    // 0x15e620: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_15e624:
    if (ctx->pc == 0x15E624u) {
        ctx->pc = 0x15E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E620u;
        // 0x15e624: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E628u;
        goto label_15e628;
    }
    ctx->pc = 0x15E620u;
    {
        const bool branch_taken_0x15e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E620u;
        // 0x15e624: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e620) {
            ctx->pc = 0x15E760u;
            goto label_15e760;
        }
    }
    ctx->pc = 0x15E628u;
label_15e628:
    // 0x15e628: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e62c:
    // 0x15e62c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e630:
    // 0x15e630: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e634:
    if (ctx->pc == 0x15E634u) {
        ctx->pc = 0x15E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E630u;
        // 0x15e634: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E638u;
        goto label_15e638;
    }
    ctx->pc = 0x15E630u;
    {
        const bool branch_taken_0x15e630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E630u;
        // 0x15e634: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e630) {
            ctx->pc = 0x15E654u;
            goto label_15e654;
        }
    }
    ctx->pc = 0x15E638u;
label_15e638:
    // 0x15e638: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e63c:
    // 0x15e63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e640:
    // 0x15e640: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e644:
    // 0x15e644: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e648:
    // 0x15e648: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e64c:
    // 0x15e64c: 0x60f809  jalr        $v1
label_15e650:
    if (ctx->pc == 0x15E650u) {
        ctx->pc = 0x15E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E64Cu;
        // 0x15e650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E654u;
        goto label_15e654;
    }
    ctx->pc = 0x15E64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E654u);
        ctx->pc = 0x15E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E64Cu;
        // 0x15e650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E64Cu, 0x15E654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E654u;
label_15e654:
    // 0x15e654: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e658:
    // 0x15e658: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e65c:
    if (ctx->pc == 0x15E65Cu) {
        ctx->pc = 0x15E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E658u;
        // 0x15e65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E660u;
        goto label_15e660;
    }
    ctx->pc = 0x15E658u;
    {
        const bool branch_taken_0x15e658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E658u;
        // 0x15e65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e658) {
            ctx->pc = 0x15E678u;
            goto label_15e678;
        }
    }
    ctx->pc = 0x15E660u;
label_15e660:
    // 0x15e660: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e664:
    // 0x15e664: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e668:
    // 0x15e668: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e66c:
    // 0x15e66c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e670:
    // 0x15e670: 0x60f809  jalr        $v1
label_15e674:
    if (ctx->pc == 0x15E674u) {
        ctx->pc = 0x15E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E670u;
        // 0x15e674: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E678u;
        goto label_15e678;
    }
    ctx->pc = 0x15E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E678u);
        ctx->pc = 0x15E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E670u;
        // 0x15e674: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E670u, 0x15E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E678u;
label_15e678:
    // 0x15e678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e67c:
    // 0x15e67c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15e680:
    if (ctx->pc == 0x15E680u) {
        ctx->pc = 0x15E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E67Cu;
        // 0x15e680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E684u;
        goto label_15e684;
    }
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E67Cu;
            // 0x15e680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E684u;
label_15e684:
    // 0x15e684: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e688:
    // 0x15e688: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15e68c:
    if (ctx->pc == 0x15E68Cu) {
        ctx->pc = 0x15E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E688u;
        // 0x15e68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E690u;
        goto label_15e690;
    }
    ctx->pc = 0x15E688u;
    {
        const bool branch_taken_0x15e688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e688) {
            ctx->pc = 0x15E68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E688u;
            // 0x15e68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e694:
    // 0x15e694: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e698:
    // 0x15e698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e69c:
    // 0x15e69c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15e6a0:
    if (ctx->pc == 0x15E6A0u) {
        ctx->pc = 0x15E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E69Cu;
        // 0x15e6a0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6A4u;
        goto label_15e6a4;
    }
    ctx->pc = 0x15E69Cu;
    {
        const bool branch_taken_0x15e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E69Cu;
        // 0x15e6a0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e69c) {
            ctx->pc = 0x15E700u;
            goto label_15e700;
        }
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e6a8:
    // 0x15e6a8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e6ac:
    if (ctx->pc == 0x15E6ACu) {
        ctx->pc = 0x15E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6A8u;
        // 0x15e6ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6B0u;
        goto label_15e6b0;
    }
    ctx->pc = 0x15E6A8u;
    {
        const bool branch_taken_0x15e6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e6a8) {
            ctx->pc = 0x15E6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E6A8u;
            // 0x15e6ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E6F4u;
            goto label_15e6f4;
        }
    }
    ctx->pc = 0x15E6B0u;
label_15e6b0:
    // 0x15e6b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e6b4:
    // 0x15e6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e6b8:
    // 0x15e6b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e6bc:
    // 0x15e6bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e6c0:
    // 0x15e6c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e6c4:
    // 0x15e6c4: 0x60f809  jalr        $v1
label_15e6c8:
    if (ctx->pc == 0x15E6C8u) {
        ctx->pc = 0x15E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C4u;
        // 0x15e6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6CCu;
        goto label_15e6cc;
    }
    ctx->pc = 0x15E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E6CCu);
        ctx->pc = 0x15E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C4u;
        // 0x15e6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6C4u, 0x15E6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E6CCu;
label_15e6cc:
    // 0x15e6cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e6d0:
    // 0x15e6d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e6d4:
    if (ctx->pc == 0x15E6D4u) {
        ctx->pc = 0x15E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6D0u;
        // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6D8u;
        goto label_15e6d8;
    }
    ctx->pc = 0x15E6D0u;
    {
        const bool branch_taken_0x15e6d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6D0u;
        // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6d0) {
            ctx->pc = 0x15E6F0u;
            goto label_15e6f0;
        }
    }
    ctx->pc = 0x15E6D8u;
label_15e6d8:
    // 0x15e6d8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e6dc:
    // 0x15e6dc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e6e0:
    // 0x15e6e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e6e4:
    // 0x15e6e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e6e8:
    // 0x15e6e8: 0x60f809  jalr        $v1
label_15e6ec:
    if (ctx->pc == 0x15E6ECu) {
        ctx->pc = 0x15E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E8u;
        // 0x15e6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6F0u;
        goto label_15e6f0;
    }
    ctx->pc = 0x15E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E6F0u);
        ctx->pc = 0x15E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E8u;
        // 0x15e6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6E8u, 0x15E6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E6F0u;
label_15e6f0:
    // 0x15e6f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e6f4:
    // 0x15e6f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15e6f8:
    // 0x15e6f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_15e6fc:
    if (ctx->pc == 0x15E6FCu) {
        ctx->pc = 0x15E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F8u;
        // 0x15e6fc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E700u;
        goto label_15e700;
    }
    ctx->pc = 0x15E6F8u;
    {
        const bool branch_taken_0x15e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F8u;
        // 0x15e6fc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6f8) {
            ctx->pc = 0x15E760u;
            goto label_15e760;
        }
    }
    ctx->pc = 0x15E700u;
label_15e700:
    // 0x15e700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e704:
    // 0x15e704: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e708:
    if (ctx->pc == 0x15E708u) {
        ctx->pc = 0x15E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E704u;
        // 0x15e708: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E70Cu;
        goto label_15e70c;
    }
    ctx->pc = 0x15E704u;
    {
        const bool branch_taken_0x15e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e704) {
            ctx->pc = 0x15E708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E704u;
            // 0x15e708: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E750u;
            goto label_15e750;
        }
    }
    ctx->pc = 0x15E70Cu;
label_15e70c:
    // 0x15e70c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e710:
    // 0x15e710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e714:
    // 0x15e714: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e718:
    // 0x15e718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e71c:
    // 0x15e71c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e720:
    // 0x15e720: 0x60f809  jalr        $v1
label_15e724:
    if (ctx->pc == 0x15E724u) {
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E720u;
        // 0x15e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E728u;
        goto label_15e728;
    }
    ctx->pc = 0x15E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E728u);
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E720u;
        // 0x15e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E720u, 0x15E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E728u;
label_15e728:
    // 0x15e728: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e72c:
    // 0x15e72c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e730:
    if (ctx->pc == 0x15E730u) {
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E72Cu;
        // 0x15e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E734u;
        goto label_15e734;
    }
    ctx->pc = 0x15E72Cu;
    {
        const bool branch_taken_0x15e72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E72Cu;
        // 0x15e730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e72c) {
            ctx->pc = 0x15E74Cu;
            goto label_15e74c;
        }
    }
    ctx->pc = 0x15E734u;
label_15e734:
    // 0x15e734: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e738:
    // 0x15e738: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e73c:
    // 0x15e73c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e740:
    // 0x15e740: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e744:
    // 0x15e744: 0x60f809  jalr        $v1
label_15e748:
    if (ctx->pc == 0x15E748u) {
        ctx->pc = 0x15E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E744u;
        // 0x15e748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E74Cu;
        goto label_15e74c;
    }
    ctx->pc = 0x15E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E74Cu);
        ctx->pc = 0x15E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E744u;
        // 0x15e748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E744u, 0x15E74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E74Cu;
label_15e74c:
    // 0x15e74c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e750:
    // 0x15e750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15e754:
    // 0x15e754: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15e758:
    // 0x15e758: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15e758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e75c:
    // 0x15e75c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15e760:
    // 0x15e760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15e760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e764:
    // 0x15e764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15e764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15e768:
    // 0x15e768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15e76c:
    // 0x15e76c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15e76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15e770:
    // 0x15e770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15e770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15e774:
    // 0x15e774: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15e778:
    // 0x15e778: 0x3e00008  jr          $ra
label_15e77c:
    if (ctx->pc == 0x15E77Cu) {
        ctx->pc = 0x15E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E778u;
        // 0x15e77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E780u;
        goto label_fallthrough_0x15e778;
    }
    ctx->pc = 0x15E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E778u;
        // 0x15e77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e778:
    ctx->pc = 0x15E780u;
}
