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

// Function: Init__7ApcTankP8ApcRsc3DP9ApcSCDEnti
// Address: 0x14d420 - 0x14d6bc
void Init__7ApcTankP8ApcRsc3DP9ApcSCDEnti_0x14d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7ApcTankP8ApcRsc3DP9ApcSCDEnti_0x14d420");
#endif

    switch (ctx->pc) {
        case 0x14d420u: goto label_14d420;
        case 0x14d424u: goto label_14d424;
        case 0x14d428u: goto label_14d428;
        case 0x14d42cu: goto label_14d42c;
        case 0x14d430u: goto label_14d430;
        case 0x14d434u: goto label_14d434;
        case 0x14d438u: goto label_14d438;
        case 0x14d43cu: goto label_14d43c;
        case 0x14d440u: goto label_14d440;
        case 0x14d444u: goto label_14d444;
        case 0x14d448u: goto label_14d448;
        case 0x14d44cu: goto label_14d44c;
        case 0x14d450u: goto label_14d450;
        case 0x14d454u: goto label_14d454;
        case 0x14d458u: goto label_14d458;
        case 0x14d45cu: goto label_14d45c;
        case 0x14d460u: goto label_14d460;
        case 0x14d464u: goto label_14d464;
        case 0x14d468u: goto label_14d468;
        case 0x14d46cu: goto label_14d46c;
        case 0x14d470u: goto label_14d470;
        case 0x14d474u: goto label_14d474;
        case 0x14d478u: goto label_14d478;
        case 0x14d47cu: goto label_14d47c;
        case 0x14d480u: goto label_14d480;
        case 0x14d484u: goto label_14d484;
        case 0x14d488u: goto label_14d488;
        case 0x14d48cu: goto label_14d48c;
        case 0x14d490u: goto label_14d490;
        case 0x14d494u: goto label_14d494;
        case 0x14d498u: goto label_14d498;
        case 0x14d49cu: goto label_14d49c;
        case 0x14d4a0u: goto label_14d4a0;
        case 0x14d4a4u: goto label_14d4a4;
        case 0x14d4a8u: goto label_14d4a8;
        case 0x14d4acu: goto label_14d4ac;
        case 0x14d4b0u: goto label_14d4b0;
        case 0x14d4b4u: goto label_14d4b4;
        case 0x14d4b8u: goto label_14d4b8;
        case 0x14d4bcu: goto label_14d4bc;
        case 0x14d4c0u: goto label_14d4c0;
        case 0x14d4c4u: goto label_14d4c4;
        case 0x14d4c8u: goto label_14d4c8;
        case 0x14d4ccu: goto label_14d4cc;
        case 0x14d4d0u: goto label_14d4d0;
        case 0x14d4d4u: goto label_14d4d4;
        case 0x14d4d8u: goto label_14d4d8;
        case 0x14d4dcu: goto label_14d4dc;
        case 0x14d4e0u: goto label_14d4e0;
        case 0x14d4e4u: goto label_14d4e4;
        case 0x14d4e8u: goto label_14d4e8;
        case 0x14d4ecu: goto label_14d4ec;
        case 0x14d4f0u: goto label_14d4f0;
        case 0x14d4f4u: goto label_14d4f4;
        case 0x14d4f8u: goto label_14d4f8;
        case 0x14d4fcu: goto label_14d4fc;
        case 0x14d500u: goto label_14d500;
        case 0x14d504u: goto label_14d504;
        case 0x14d508u: goto label_14d508;
        case 0x14d50cu: goto label_14d50c;
        case 0x14d510u: goto label_14d510;
        case 0x14d514u: goto label_14d514;
        case 0x14d518u: goto label_14d518;
        case 0x14d51cu: goto label_14d51c;
        case 0x14d520u: goto label_14d520;
        case 0x14d524u: goto label_14d524;
        case 0x14d528u: goto label_14d528;
        case 0x14d52cu: goto label_14d52c;
        case 0x14d530u: goto label_14d530;
        case 0x14d534u: goto label_14d534;
        case 0x14d538u: goto label_14d538;
        case 0x14d53cu: goto label_14d53c;
        case 0x14d540u: goto label_14d540;
        case 0x14d544u: goto label_14d544;
        case 0x14d548u: goto label_14d548;
        case 0x14d54cu: goto label_14d54c;
        case 0x14d550u: goto label_14d550;
        case 0x14d554u: goto label_14d554;
        case 0x14d558u: goto label_14d558;
        case 0x14d55cu: goto label_14d55c;
        case 0x14d560u: goto label_14d560;
        case 0x14d564u: goto label_14d564;
        case 0x14d568u: goto label_14d568;
        case 0x14d56cu: goto label_14d56c;
        case 0x14d570u: goto label_14d570;
        case 0x14d574u: goto label_14d574;
        case 0x14d578u: goto label_14d578;
        case 0x14d57cu: goto label_14d57c;
        case 0x14d580u: goto label_14d580;
        case 0x14d584u: goto label_14d584;
        case 0x14d588u: goto label_14d588;
        case 0x14d58cu: goto label_14d58c;
        case 0x14d590u: goto label_14d590;
        case 0x14d594u: goto label_14d594;
        case 0x14d598u: goto label_14d598;
        case 0x14d59cu: goto label_14d59c;
        case 0x14d5a0u: goto label_14d5a0;
        case 0x14d5a4u: goto label_14d5a4;
        case 0x14d5a8u: goto label_14d5a8;
        case 0x14d5acu: goto label_14d5ac;
        case 0x14d5b0u: goto label_14d5b0;
        case 0x14d5b4u: goto label_14d5b4;
        case 0x14d5b8u: goto label_14d5b8;
        case 0x14d5bcu: goto label_14d5bc;
        case 0x14d5c0u: goto label_14d5c0;
        case 0x14d5c4u: goto label_14d5c4;
        case 0x14d5c8u: goto label_14d5c8;
        case 0x14d5ccu: goto label_14d5cc;
        case 0x14d5d0u: goto label_14d5d0;
        case 0x14d5d4u: goto label_14d5d4;
        case 0x14d5d8u: goto label_14d5d8;
        case 0x14d5dcu: goto label_14d5dc;
        case 0x14d5e0u: goto label_14d5e0;
        case 0x14d5e4u: goto label_14d5e4;
        case 0x14d5e8u: goto label_14d5e8;
        case 0x14d5ecu: goto label_14d5ec;
        case 0x14d5f0u: goto label_14d5f0;
        case 0x14d5f4u: goto label_14d5f4;
        case 0x14d5f8u: goto label_14d5f8;
        case 0x14d5fcu: goto label_14d5fc;
        case 0x14d600u: goto label_14d600;
        case 0x14d604u: goto label_14d604;
        case 0x14d608u: goto label_14d608;
        case 0x14d60cu: goto label_14d60c;
        case 0x14d610u: goto label_14d610;
        case 0x14d614u: goto label_14d614;
        case 0x14d618u: goto label_14d618;
        case 0x14d61cu: goto label_14d61c;
        case 0x14d620u: goto label_14d620;
        case 0x14d624u: goto label_14d624;
        case 0x14d628u: goto label_14d628;
        case 0x14d62cu: goto label_14d62c;
        case 0x14d630u: goto label_14d630;
        case 0x14d634u: goto label_14d634;
        case 0x14d638u: goto label_14d638;
        case 0x14d63cu: goto label_14d63c;
        case 0x14d640u: goto label_14d640;
        case 0x14d644u: goto label_14d644;
        case 0x14d648u: goto label_14d648;
        case 0x14d64cu: goto label_14d64c;
        case 0x14d650u: goto label_14d650;
        case 0x14d654u: goto label_14d654;
        case 0x14d658u: goto label_14d658;
        case 0x14d65cu: goto label_14d65c;
        case 0x14d660u: goto label_14d660;
        case 0x14d664u: goto label_14d664;
        case 0x14d668u: goto label_14d668;
        case 0x14d66cu: goto label_14d66c;
        case 0x14d670u: goto label_14d670;
        case 0x14d674u: goto label_14d674;
        case 0x14d678u: goto label_14d678;
        case 0x14d67cu: goto label_14d67c;
        case 0x14d680u: goto label_14d680;
        case 0x14d684u: goto label_14d684;
        case 0x14d688u: goto label_14d688;
        case 0x14d68cu: goto label_14d68c;
        case 0x14d690u: goto label_14d690;
        case 0x14d694u: goto label_14d694;
        case 0x14d698u: goto label_14d698;
        case 0x14d69cu: goto label_14d69c;
        case 0x14d6a0u: goto label_14d6a0;
        case 0x14d6a4u: goto label_14d6a4;
        case 0x14d6a8u: goto label_14d6a8;
        case 0x14d6acu: goto label_14d6ac;
        case 0x14d6b0u: goto label_14d6b0;
        case 0x14d6b4u: goto label_14d6b4;
        case 0x14d6b8u: goto label_14d6b8;
        default: break;
    }

    ctx->pc = 0x14d420u;

label_14d420:
    // 0x14d420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14d424:
    // 0x14d424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14d428:
    // 0x14d428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d42c:
    // 0x14d42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14d430:
    // 0x14d430: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14d430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14d434:
    // 0x14d434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14d438:
    // 0x14d438: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14d438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14d43c:
    // 0x14d43c: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x14d43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14d440:
    // 0x14d440: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14d444:
    // 0x14d444: 0xc0529f0  jal         func_14A7C0
label_14d448:
    if (ctx->pc == 0x14D448u) {
        ctx->pc = 0x14D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D444u;
        // 0x14d448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D44Cu;
        goto label_14d44c;
    }
    ctx->pc = 0x14D444u;
    SET_GPR_U32(ctx, 31, 0x14D44Cu);
    ctx->pc = 0x14D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D444u;
    // 0x14d448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x14D444u, 0x14D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D44Cu;
label_14d44c:
    // 0x14d44c: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_14d450:
    // 0x14d450: 0xae000690  sw          $zero, 0x690($s0)
    ctx->pc = 0x14d450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 0));
label_14d454:
    // 0x14d454: 0xae000694  sw          $zero, 0x694($s0)
    ctx->pc = 0x14d454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 0));
label_14d458:
    // 0x14d458: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d45c:
    // 0x14d45c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x14d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
label_14d460:
    // 0x14d460: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14d464:
    // 0x14d464: 0xae0006d8  sw          $zero, 0x6D8($s0)
    ctx->pc = 0x14d464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1752), GPR_U32(ctx, 0));
label_14d468:
    // 0x14d468: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x14d468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
label_14d46c:
    // 0x14d46c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14d470:
    // 0x14d470: 0x260206d4  addiu       $v0, $s0, 0x6D4
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
label_14d474:
    // 0x14d474: 0x0  nop
    ctx->pc = 0x14d474u;
    // NOP
label_14d478:
    // 0x14d478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14d47c:
    // 0x14d47c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x14d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_14d480:
    // 0x14d480: 0x0  nop
    ctx->pc = 0x14d480u;
    // NOP
label_14d484:
    // 0x14d484: 0x0  nop
    ctx->pc = 0x14d484u;
    // NOP
label_14d488:
    // 0x14d488: 0x0  nop
    ctx->pc = 0x14d488u;
    // NOP
label_14d48c:
    // 0x14d48c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_14d490:
    if (ctx->pc == 0x14D490u) {
        ctx->pc = 0x14D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D48Cu;
        // 0x14d490: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D494u;
        goto label_14d494;
    }
    ctx->pc = 0x14D48Cu;
    {
        const bool branch_taken_0x14d48c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D48Cu;
        // 0x14d490: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d48c) {
            ctx->pc = 0x14D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D494u;
label_14d494:
    // 0x14d494: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d498:
    // 0x14d498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d49c:
    // 0x14d49c: 0x260206dc  addiu       $v0, $s0, 0x6DC
    ctx->pc = 0x14d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
label_14d4a0:
    // 0x14d4a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14d4a4:
    // 0x14d4a4: 0x0  nop
    ctx->pc = 0x14d4a4u;
    // NOP
label_14d4a8:
    // 0x14d4a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14d4ac:
    // 0x14d4ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14d4b0:
    // 0x14d4b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_14d4b4:
    // 0x14d4b4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x14d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_14d4b8:
    // 0x14d4b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_14d4bc:
    // 0x14d4bc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x14d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_14d4c0:
    // 0x14d4c0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_14d4c4:
    // 0x14d4c4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x14d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_14d4c8:
    // 0x14d4c8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x14d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_14d4cc:
    // 0x14d4cc: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x14d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_14d4d0:
    // 0x14d4d0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x14d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_14d4d4:
    // 0x14d4d4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x14d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_14d4d8:
    // 0x14d4d8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x14d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_14d4dc:
    // 0x14d4dc: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x14d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_14d4e0:
    // 0x14d4e0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x14d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_14d4e4:
    // 0x14d4e4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x14d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_14d4e8:
    // 0x14d4e8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x14d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_14d4ec:
    // 0x14d4ec: 0x461ffee  bgez        $v1, . + 4 + (-0x12 << 2)
label_14d4f0:
    if (ctx->pc == 0x14D4F0u) {
        ctx->pc = 0x14D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ECu;
        // 0x14d4f0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D4F4u;
        goto label_14d4f4;
    }
    ctx->pc = 0x14D4ECu;
    {
        const bool branch_taken_0x14d4ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ECu;
        // 0x14d4f0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4ec) {
            ctx->pc = 0x14D4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d4a8;
        }
    }
    ctx->pc = 0x14D4F4u;
label_14d4f4:
    // 0x14d4f4: 0xae0007f0  sw          $zero, 0x7F0($s0)
    ctx->pc = 0x14d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
label_14d4f8:
    // 0x14d4f8: 0x26030820  addiu       $v1, $s0, 0x820
    ctx->pc = 0x14d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
label_14d4fc:
    // 0x14d4fc: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x14d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
label_14d500:
    // 0x14d500: 0xae000814  sw          $zero, 0x814($s0)
    ctx->pc = 0x14d500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 0));
label_14d504:
    // 0x14d504: 0xae000818  sw          $zero, 0x818($s0)
    ctx->pc = 0x14d504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 0));
label_14d508:
    // 0x14d508: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14d508u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_14d50c:
    // 0x14d50c: 0x26020830  addiu       $v0, $s0, 0x830
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
label_14d510:
    // 0x14d510: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14d510u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_14d514:
    // 0x14d514: 0xae000840  sw          $zero, 0x840($s0)
    ctx->pc = 0x14d514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 0));
label_14d518:
    // 0x14d518: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_14d51c:
    // 0x14d51c: 0xae000844  sw          $zero, 0x844($s0)
    ctx->pc = 0x14d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 0));
label_14d520:
    // 0x14d520: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
label_14d524:
    // 0x14d524: 0xae000848  sw          $zero, 0x848($s0)
    ctx->pc = 0x14d524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 0));
label_14d528:
    // 0x14d528: 0x348477ff  ori         $a0, $a0, 0x77FF
    ctx->pc = 0x14d528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30719);
label_14d52c:
    // 0x14d52c: 0xae00084c  sw          $zero, 0x84C($s0)
    ctx->pc = 0x14d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 0));
label_14d530:
    // 0x14d530: 0x260703b0  addiu       $a3, $s0, 0x3B0
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_14d534:
    // 0x14d534: 0xae000850  sw          $zero, 0x850($s0)
    ctx->pc = 0x14d534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 0));
label_14d538:
    // 0x14d538: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x14d538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_14d53c:
    // 0x14d53c: 0xae000854  sw          $zero, 0x854($s0)
    ctx->pc = 0x14d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 0));
label_14d540:
    // 0x14d540: 0x34c60fff  ori         $a2, $a2, 0xFFF
    ctx->pc = 0x14d540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4095);
label_14d544:
    // 0x14d544: 0xae000858  sw          $zero, 0x858($s0)
    ctx->pc = 0x14d544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 0));
label_14d548:
    // 0x14d548: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14d548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d54c:
    // 0x14d54c: 0xae00089c  sw          $zero, 0x89C($s0)
    ctx->pc = 0x14d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 0));
label_14d550:
    // 0x14d550: 0x260906dc  addiu       $t1, $s0, 0x6DC
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
label_14d554:
    // 0x14d554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14d558:
    // 0x14d558: 0x240e0101  addiu       $t6, $zero, 0x101
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_14d55c:
    // 0x14d55c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14d560:
    // 0x14d560: 0x240d0401  addiu       $t5, $zero, 0x401
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_14d564:
    // 0x14d564: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x14d564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
label_14d568:
    // 0x14d568: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x14d568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_14d56c:
    // 0x14d56c: 0x240c0501  addiu       $t4, $zero, 0x501
    ctx->pc = 0x14d56cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
label_14d570:
    // 0x14d570: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_14d574:
    // 0x14d574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d578:
    // 0x14d578: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14d578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_14d57c:
    // 0x14d57c: 0x240a0801  addiu       $t2, $zero, 0x801
    ctx->pc = 0x14d57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
label_14d580:
    // 0x14d580: 0xace002d0  sw          $zero, 0x2D0($a3)
    ctx->pc = 0x14d580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 720), GPR_U32(ctx, 0));
label_14d584:
    // 0x14d584: 0x240b0012  addiu       $t3, $zero, 0x12
    ctx->pc = 0x14d584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_14d588:
    // 0x14d588: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x14d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_14d58c:
    // 0x14d58c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x14d58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_14d590:
    // 0x14d590: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14d594:
    // 0x14d594: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x14d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_14d598:
    // 0x14d598: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x14d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_14d59c:
    // 0x14d59c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x14d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_14d5a0:
    // 0x14d5a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x14d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_14d5a4:
    // 0x14d5a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x14d5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_14d5a8:
    // 0x14d5a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_14d5ac:
    // 0x14d5ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14d5b0:
    // 0x14d5b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14d5b4:
    // 0x14d5b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14d5b8:
    // 0x14d5b8: 0xc78381b0  lwc1        $f3, -0x7E50($gp)
    ctx->pc = 0x14d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14d5bc:
    // 0x14d5bc: 0xc78281b4  lwc1        $f2, -0x7E4C($gp)
    ctx->pc = 0x14d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14d5c0:
    // 0x14d5c0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x14d5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_14d5c4:
    // 0x14d5c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14d5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_14d5c8:
    // 0x14d5c8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x14d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_14d5cc:
    // 0x14d5cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14d5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_14d5d0:
    // 0x14d5d0: 0xc78b81b8  lwc1        $f11, -0x7E48($gp)
    ctx->pc = 0x14d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_14d5d4:
    // 0x14d5d4: 0xc78c81bc  lwc1        $f12, -0x7E44($gp)
    ctx->pc = 0x14d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14d5d8:
    // 0x14d5d8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x14d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_14d5dc:
    // 0x14d5dc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x14d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_14d5e0:
    // 0x14d5e0: 0xe600085c  swc1        $f0, 0x85C($s0)
    ctx->pc = 0x14d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2140), bits); }
label_14d5e4:
    // 0x14d5e4: 0xe6000860  swc1        $f0, 0x860($s0)
    ctx->pc = 0x14d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2144), bits); }
label_14d5e8:
    // 0x14d5e8: 0xe6000864  swc1        $f0, 0x864($s0)
    ctx->pc = 0x14d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2148), bits); }
label_14d5ec:
    // 0x14d5ec: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x14d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_14d5f0:
    // 0x14d5f0: 0xe4e102d4  swc1        $f1, 0x2D4($a3)
    ctx->pc = 0x14d5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 724), bits); }
label_14d5f4:
    // 0x14d5f4: 0xae000894  sw          $zero, 0x894($s0)
    ctx->pc = 0x14d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 0));
label_14d5f8:
    // 0x14d5f8: 0xe46a000c  swc1        $f10, 0xC($v1)
    ctx->pc = 0x14d5f8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_14d5fc:
    // 0x14d5fc: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x14d5fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_14d600:
    // 0x14d600: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x14d600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_14d604:
    // 0x14d604: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x14d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_14d608:
    // 0x14d608: 0xe46400a0  swc1        $f4, 0xA0($v1)
    ctx->pc = 0x14d608u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_14d60c:
    // 0x14d60c: 0xe46500ac  swc1        $f5, 0xAC($v1)
    ctx->pc = 0x14d60cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_14d610:
    // 0x14d610: 0xe46900d4  swc1        $f9, 0xD4($v1)
    ctx->pc = 0x14d610u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_14d614:
    // 0x14d614: 0xe46700d8  swc1        $f7, 0xD8($v1)
    ctx->pc = 0x14d614u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_14d618:
    // 0x14d618: 0xae000898  sw          $zero, 0x898($s0)
    ctx->pc = 0x14d618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 0));
label_14d61c:
    // 0x14d61c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_14d620:
    // 0x14d620: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x14d620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
label_14d624:
    // 0x14d624: 0xe46a0008  swc1        $f10, 0x8($v1)
    ctx->pc = 0x14d624u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_14d628:
    // 0x14d628: 0xe46900b4  swc1        $f9, 0xB4($v1)
    ctx->pc = 0x14d628u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_14d62c:
    // 0x14d62c: 0xe46700b8  swc1        $f7, 0xB8($v1)
    ctx->pc = 0x14d62cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_14d630:
    // 0x14d630: 0xe46600bc  swc1        $f6, 0xBC($v1)
    ctx->pc = 0x14d630u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
label_14d634:
    // 0x14d634: 0xe46600dc  swc1        $f6, 0xDC($v1)
    ctx->pc = 0x14d634u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_14d638:
    // 0x14d638: 0xae0e06ac  sw          $t6, 0x6AC($s0)
    ctx->pc = 0x14d638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 14));
label_14d63c:
    // 0x14d63c: 0xae0d06b8  sw          $t5, 0x6B8($s0)
    ctx->pc = 0x14d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 13));
label_14d640:
    // 0x14d640: 0xae0c06bc  sw          $t4, 0x6BC($s0)
    ctx->pc = 0x14d640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1724), GPR_U32(ctx, 12));
label_14d644:
    // 0x14d644: 0xae0a06c8  sw          $t2, 0x6C8($s0)
    ctx->pc = 0x14d644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 10));
label_14d648:
    // 0x14d648: 0xe4680104  swc1        $f8, 0x104($v1)
    ctx->pc = 0x14d648u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_14d64c:
    // 0x14d64c: 0xad280008  sw          $t0, 0x8($t1)
    ctx->pc = 0x14d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
label_14d650:
    // 0x14d650: 0xe46b00f8  swc1        $f11, 0xF8($v1)
    ctx->pc = 0x14d650u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
label_14d654:
    // 0x14d654: 0xe46c00f4  swc1        $f12, 0xF4($v1)
    ctx->pc = 0x14d654u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_14d658:
    // 0x14d658: 0xc052aec  jal         func_14ABB0
label_14d65c:
    if (ctx->pc == 0x14D65Cu) {
        ctx->pc = 0x14D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D658u;
        // 0x14d65c: 0xad2b0004  sw          $t3, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D660u;
        goto label_14d660;
    }
    ctx->pc = 0x14D658u;
    SET_GPR_U32(ctx, 31, 0x14D660u);
    ctx->pc = 0x14D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D658u;
    // 0x14d65c: 0xad2b0004  sw          $t3, 0x4($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABB0u, 0x14D658u, 0x14D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D660u;
label_14d660:
    // 0x14d660: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
label_14d664:
    if (ctx->pc == 0x14D664u) {
        ctx->pc = 0x14D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D660u;
        // 0x14d664: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D668u;
        goto label_14d668;
    }
    ctx->pc = 0x14D660u;
    {
        const bool branch_taken_0x14d660 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x14D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D660u;
        // 0x14d664: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d660) {
            ctx->pc = 0x14D684u;
            goto label_14d684;
        }
    }
    ctx->pc = 0x14D668u;
label_14d668:
    // 0x14d668: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14d66c:
    // 0x14d66c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14d670:
    // 0x14d670: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_14d674:
    // 0x14d674: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d678:
    // 0x14d678: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d67c:
    // 0x14d67c: 0x60f809  jalr        $v1
label_14d680:
    if (ctx->pc == 0x14D680u) {
        ctx->pc = 0x14D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D67Cu;
        // 0x14d680: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D684u;
        goto label_14d684;
    }
    ctx->pc = 0x14D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14D684u);
        ctx->pc = 0x14D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D67Cu;
        // 0x14d680: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D67Cu, 0x14D684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D684u;
label_14d684:
    // 0x14d684: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14d688:
    // 0x14d688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d68c:
    // 0x14d68c: 0xc068584  jal         func_1A1610
label_14d690:
    if (ctx->pc == 0x14D690u) {
        ctx->pc = 0x14D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D68Cu;
        // 0x14d690: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D694u;
        goto label_14d694;
    }
    ctx->pc = 0x14D68Cu;
    SET_GPR_U32(ctx, 31, 0x14D694u);
    ctx->pc = 0x14D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D68Cu;
    // 0x14d690: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14D68Cu, 0x14D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D694u;
label_14d694:
    // 0x14d694: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14d698:
    // 0x14d698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d69c:
    // 0x14d69c: 0xc068584  jal         func_1A1610
label_14d6a0:
    if (ctx->pc == 0x14D6A0u) {
        ctx->pc = 0x14D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D69Cu;
        // 0x14d6a0: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D6A4u;
        goto label_14d6a4;
    }
    ctx->pc = 0x14D69Cu;
    SET_GPR_U32(ctx, 31, 0x14D6A4u);
    ctx->pc = 0x14D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D69Cu;
    // 0x14d6a0: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14D69Cu, 0x14D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6A4u;
label_14d6a4:
    // 0x14d6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d6a8:
    // 0x14d6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14d6ac:
    // 0x14d6ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14d6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14d6b0:
    // 0x14d6b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14d6b4:
    // 0x14d6b4: 0x3e00008  jr          $ra
label_14d6b8:
    if (ctx->pc == 0x14D6B8u) {
        ctx->pc = 0x14D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6B4u;
        // 0x14d6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D6BCu;
        goto label_fallthrough_0x14d6b4;
    }
    ctx->pc = 0x14D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6B4u;
        // 0x14d6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d6b4:
    ctx->pc = 0x14D6BCu;
}
