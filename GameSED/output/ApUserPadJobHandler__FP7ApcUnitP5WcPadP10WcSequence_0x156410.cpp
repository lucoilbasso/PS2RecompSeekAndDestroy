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

// Function: ApUserPadJobHandler__FP7ApcUnitP5WcPadP10WcSequence
// Address: 0x156410 - 0x156618
void ApUserPadJobHandler__FP7ApcUnitP5WcPadP10WcSequence_0x156410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserPadJobHandler__FP7ApcUnitP5WcPadP10WcSequence_0x156410");
#endif

    switch (ctx->pc) {
        case 0x156410u: goto label_156410;
        case 0x156414u: goto label_156414;
        case 0x156418u: goto label_156418;
        case 0x15641cu: goto label_15641c;
        case 0x156420u: goto label_156420;
        case 0x156424u: goto label_156424;
        case 0x156428u: goto label_156428;
        case 0x15642cu: goto label_15642c;
        case 0x156430u: goto label_156430;
        case 0x156434u: goto label_156434;
        case 0x156438u: goto label_156438;
        case 0x15643cu: goto label_15643c;
        case 0x156440u: goto label_156440;
        case 0x156444u: goto label_156444;
        case 0x156448u: goto label_156448;
        case 0x15644cu: goto label_15644c;
        case 0x156450u: goto label_156450;
        case 0x156454u: goto label_156454;
        case 0x156458u: goto label_156458;
        case 0x15645cu: goto label_15645c;
        case 0x156460u: goto label_156460;
        case 0x156464u: goto label_156464;
        case 0x156468u: goto label_156468;
        case 0x15646cu: goto label_15646c;
        case 0x156470u: goto label_156470;
        case 0x156474u: goto label_156474;
        case 0x156478u: goto label_156478;
        case 0x15647cu: goto label_15647c;
        case 0x156480u: goto label_156480;
        case 0x156484u: goto label_156484;
        case 0x156488u: goto label_156488;
        case 0x15648cu: goto label_15648c;
        case 0x156490u: goto label_156490;
        case 0x156494u: goto label_156494;
        case 0x156498u: goto label_156498;
        case 0x15649cu: goto label_15649c;
        case 0x1564a0u: goto label_1564a0;
        case 0x1564a4u: goto label_1564a4;
        case 0x1564a8u: goto label_1564a8;
        case 0x1564acu: goto label_1564ac;
        case 0x1564b0u: goto label_1564b0;
        case 0x1564b4u: goto label_1564b4;
        case 0x1564b8u: goto label_1564b8;
        case 0x1564bcu: goto label_1564bc;
        case 0x1564c0u: goto label_1564c0;
        case 0x1564c4u: goto label_1564c4;
        case 0x1564c8u: goto label_1564c8;
        case 0x1564ccu: goto label_1564cc;
        case 0x1564d0u: goto label_1564d0;
        case 0x1564d4u: goto label_1564d4;
        case 0x1564d8u: goto label_1564d8;
        case 0x1564dcu: goto label_1564dc;
        case 0x1564e0u: goto label_1564e0;
        case 0x1564e4u: goto label_1564e4;
        case 0x1564e8u: goto label_1564e8;
        case 0x1564ecu: goto label_1564ec;
        case 0x1564f0u: goto label_1564f0;
        case 0x1564f4u: goto label_1564f4;
        case 0x1564f8u: goto label_1564f8;
        case 0x1564fcu: goto label_1564fc;
        case 0x156500u: goto label_156500;
        case 0x156504u: goto label_156504;
        case 0x156508u: goto label_156508;
        case 0x15650cu: goto label_15650c;
        case 0x156510u: goto label_156510;
        case 0x156514u: goto label_156514;
        case 0x156518u: goto label_156518;
        case 0x15651cu: goto label_15651c;
        case 0x156520u: goto label_156520;
        case 0x156524u: goto label_156524;
        case 0x156528u: goto label_156528;
        case 0x15652cu: goto label_15652c;
        case 0x156530u: goto label_156530;
        case 0x156534u: goto label_156534;
        case 0x156538u: goto label_156538;
        case 0x15653cu: goto label_15653c;
        case 0x156540u: goto label_156540;
        case 0x156544u: goto label_156544;
        case 0x156548u: goto label_156548;
        case 0x15654cu: goto label_15654c;
        case 0x156550u: goto label_156550;
        case 0x156554u: goto label_156554;
        case 0x156558u: goto label_156558;
        case 0x15655cu: goto label_15655c;
        case 0x156560u: goto label_156560;
        case 0x156564u: goto label_156564;
        case 0x156568u: goto label_156568;
        case 0x15656cu: goto label_15656c;
        case 0x156570u: goto label_156570;
        case 0x156574u: goto label_156574;
        case 0x156578u: goto label_156578;
        case 0x15657cu: goto label_15657c;
        case 0x156580u: goto label_156580;
        case 0x156584u: goto label_156584;
        case 0x156588u: goto label_156588;
        case 0x15658cu: goto label_15658c;
        case 0x156590u: goto label_156590;
        case 0x156594u: goto label_156594;
        case 0x156598u: goto label_156598;
        case 0x15659cu: goto label_15659c;
        case 0x1565a0u: goto label_1565a0;
        case 0x1565a4u: goto label_1565a4;
        case 0x1565a8u: goto label_1565a8;
        case 0x1565acu: goto label_1565ac;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b4u: goto label_1565b4;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565bcu: goto label_1565bc;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c4u: goto label_1565c4;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565ccu: goto label_1565cc;
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        default: break;
    }

    ctx->pc = 0x156410u;

label_156410:
    // 0x156410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_156414:
    // 0x156414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x156414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_156418:
    // 0x156418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15641c:
    // 0x15641c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_156420:
    // 0x156420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x156420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_156424:
    // 0x156424: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x156424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_156428:
    // 0x156428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15642c:
    // 0x15642c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x15642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_156430:
    // 0x156430: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x156430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_156434:
    // 0x156434: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_156438:
    if (ctx->pc == 0x156438u) {
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156434u;
        // 0x156438: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15643Cu;
        goto label_15643c;
    }
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156434u;
        // 0x156438: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156434) {
            ctx->pc = 0x1565FCu;
            goto label_1565fc;
        }
    }
    ctx->pc = 0x15643Cu;
label_15643c:
    // 0x15643c: 0x8e3001ac  lw          $s0, 0x1AC($s1)
    ctx->pc = 0x15643cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_156440:
    // 0x156440: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x156440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_156444:
    // 0x156444: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_156448:
    if (ctx->pc == 0x156448u) {
        ctx->pc = 0x156448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156444u;
        // 0x156448: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15644Cu;
        goto label_15644c;
    }
    ctx->pc = 0x156444u;
    {
        const bool branch_taken_0x156444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156444u;
        // 0x156448: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156444) {
            ctx->pc = 0x156454u;
            goto label_156454;
        }
    }
    ctx->pc = 0x15644Cu;
label_15644c:
    // 0x15644c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156450:
    // 0x156450: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x156450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_156454:
    // 0x156454: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_156458:
    // 0x156458: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x156458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_15645c:
    // 0x15645c: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
label_156460:
    if (ctx->pc == 0x156460u) {
        ctx->pc = 0x156460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15645Cu;
        // 0x156460: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156464u;
        goto label_156464;
    }
    ctx->pc = 0x15645Cu;
    {
        const bool branch_taken_0x15645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15645c) {
            ctx->pc = 0x156460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15645Cu;
            // 0x156460: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            goto label_156600;
        }
    }
    ctx->pc = 0x156464u;
label_156464:
    // 0x156464: 0xc06a202  jal         func_1A8808
label_156468:
    if (ctx->pc == 0x156468u) {
        ctx->pc = 0x156468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156464u;
        // 0x156468: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15646Cu;
        goto label_15646c;
    }
    ctx->pc = 0x156464u;
    SET_GPR_U32(ctx, 31, 0x15646Cu);
    ctx->pc = 0x156468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156464u;
    // 0x156468: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156464u, 0x15646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15646Cu;
label_15646c:
    // 0x15646c: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
label_156470:
    if (ctx->pc == 0x156470u) {
        ctx->pc = 0x156470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15646Cu;
        // 0x156470: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156474u;
        goto label_156474;
    }
    ctx->pc = 0x15646Cu;
    {
        const bool branch_taken_0x15646c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15646c) {
            ctx->pc = 0x156470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15646Cu;
            // 0x156470: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            goto label_156600;
        }
    }
    ctx->pc = 0x156474u;
label_156474:
    // 0x156474: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x156474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_156478:
    // 0x156478: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_15647c:
    if (ctx->pc == 0x15647Cu) {
        ctx->pc = 0x15647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156478u;
        // 0x15647c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156480u;
        goto label_156480;
    }
    ctx->pc = 0x156478u;
    {
        const bool branch_taken_0x156478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156478) {
            ctx->pc = 0x15647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156478u;
            // 0x15647c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156494u;
            goto label_156494;
        }
    }
    ctx->pc = 0x156480u;
label_156480:
    // 0x156480: 0xc06a202  jal         func_1A8808
label_156484:
    if (ctx->pc == 0x156484u) {
        ctx->pc = 0x156484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156480u;
        // 0x156484: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156488u;
        goto label_156488;
    }
    ctx->pc = 0x156480u;
    SET_GPR_U32(ctx, 31, 0x156488u);
    ctx->pc = 0x156484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156480u;
    // 0x156484: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156480u, 0x156488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156488u;
label_156488:
    // 0x156488: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_15648c:
    if (ctx->pc == 0x15648Cu) {
        ctx->pc = 0x15648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156488u;
        // 0x15648c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156490u;
        goto label_156490;
    }
    ctx->pc = 0x156488u;
    {
        const bool branch_taken_0x156488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156488u;
        // 0x15648c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156488) {
            ctx->pc = 0x1565FCu;
            goto label_1565fc;
        }
    }
    ctx->pc = 0x156490u;
label_156490:
    // 0x156490: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_156494:
    // 0x156494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156498:
    // 0x156498: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_15649c:
    if (ctx->pc == 0x15649Cu) {
        ctx->pc = 0x15649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156498u;
        // 0x15649c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564A0u;
        goto label_1564a0;
    }
    ctx->pc = 0x156498u;
    {
        const bool branch_taken_0x156498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x156498) {
            ctx->pc = 0x15649Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156498u;
            // 0x15649c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1564B4u;
            goto label_1564b4;
        }
    }
    ctx->pc = 0x1564A0u;
label_1564a0:
    // 0x1564a0: 0xc06a202  jal         func_1A8808
label_1564a4:
    if (ctx->pc == 0x1564A4u) {
        ctx->pc = 0x1564A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A0u;
        // 0x1564a4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564A8u;
        goto label_1564a8;
    }
    ctx->pc = 0x1564A0u;
    SET_GPR_U32(ctx, 31, 0x1564A8u);
    ctx->pc = 0x1564A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564A0u;
    // 0x1564a4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1564A0u, 0x1564A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564A8u;
label_1564a8:
    // 0x1564a8: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_1564ac:
    if (ctx->pc == 0x1564ACu) {
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A8u;
        // 0x1564ac: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564B0u;
        goto label_1564b0;
    }
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A8u;
        // 0x1564ac: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1565FCu;
            goto label_1565fc;
        }
    }
    ctx->pc = 0x1564B0u;
label_1564b0:
    // 0x1564b0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1564b4:
    // 0x1564b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1564b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1564b8:
    // 0x1564b8: 0xc0558ca  jal         func_156328
label_1564bc:
    if (ctx->pc == 0x1564BCu) {
        ctx->pc = 0x1564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B8u;
        // 0x1564bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564C0u;
        goto label_1564c0;
    }
    ctx->pc = 0x1564B8u;
    SET_GPR_U32(ctx, 31, 0x1564C0u);
    ctx->pc = 0x1564BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564B8u;
    // 0x1564bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156328u, 0x1564B8u, 0x1564C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564C0u;
label_1564c0:
    // 0x1564c0: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x1564c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1564c4:
    // 0x1564c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1564c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1564c8:
    // 0x1564c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1564c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1564cc:
    // 0x1564cc: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1564ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_1564d0:
    // 0x1564d0: 0x461826  xor         $v1, $v0, $a2
    ctx->pc = 0x1564d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_1564d4:
    // 0x1564d4: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1564d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_1564d8:
    // 0x1564d8: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1564d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1564dc:
    // 0x1564dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1564dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1564e0:
    // 0x1564e0: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1564e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_1564e4:
    // 0x1564e4: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x1564e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
label_1564e8:
    // 0x1564e8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_1564ec:
    if (ctx->pc == 0x1564ECu) {
        ctx->pc = 0x1564ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564E8u;
        // 0x1564ec: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564F0u;
        goto label_1564f0;
    }
    ctx->pc = 0x1564E8u;
    {
        const bool branch_taken_0x1564e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564E8u;
        // 0x1564ec: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564e8) {
            ctx->pc = 0x15650Cu;
            goto label_15650c;
        }
    }
    ctx->pc = 0x1564F0u;
label_1564f0:
    // 0x1564f0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1564f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1564f4:
    // 0x1564f4: 0x461826  xor         $v1, $v0, $a2
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_1564f8:
    // 0x1564f8: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1564f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_1564fc:
    // 0x1564fc: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_156500:
    // 0x156500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_156504:
    // 0x156504: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x156504u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_156508:
    // 0x156508: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x156508u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
label_15650c:
    // 0x15650c: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x15650cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_156510:
    // 0x156510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_156514:
    // 0x156514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x156514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_156518:
    // 0x156518: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x156518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_15651c:
    // 0x15651c: 0xc055a5e  jal         func_156978
label_156520:
    if (ctx->pc == 0x156520u) {
        ctx->pc = 0x156520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15651Cu;
        // 0x156520: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156524u;
        goto label_156524;
    }
    ctx->pc = 0x15651Cu;
    SET_GPR_U32(ctx, 31, 0x156524u);
    ctx->pc = 0x156520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15651Cu;
    // 0x156520: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156978u, 0x15651Cu, 0x156524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156524u;
label_156524:
    // 0x156524: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x156524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_156528:
    // 0x156528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15652c:
    // 0x15652c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156530:
    // 0x156530: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x156530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_156534:
    // 0x156534: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x156534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_156538:
    // 0x156538: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x156538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_15653c:
    // 0x15653c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_156540:
    // 0x156540: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x156540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_156544:
    // 0x156544: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x156544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_156548:
    // 0x156548: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x156548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_15654c:
    // 0x15654c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_156550:
    // 0x156550: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_156554:
    if (ctx->pc == 0x156554u) {
        ctx->pc = 0x156554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156550u;
        // 0x156554: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156558u;
        goto label_156558;
    }
    ctx->pc = 0x156550u;
    {
        const bool branch_taken_0x156550 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x156554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156550u;
        // 0x156554: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156550) {
            ctx->pc = 0x156538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156538;
        }
    }
    ctx->pc = 0x156558u;
label_156558:
    // 0x156558: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x156558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15655c:
    // 0x15655c: 0x34e60006  ori         $a2, $a3, 0x6
    ctx->pc = 0x15655cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
label_156560:
    // 0x156560: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_156564:
    // 0x156564: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x156564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_156568:
    // 0x156568: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_15656c:
    // 0x15656c: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x15656cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_156570:
    // 0x156570: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x156570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_156574:
    // 0x156574: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x156574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_156578:
    // 0x156578: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x156578u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_15657c:
    // 0x15657c: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x15657cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
label_156580:
    // 0x156580: 0x871026  xor         $v0, $a0, $a3
    ctx->pc = 0x156580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
label_156584:
    // 0x156584: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x156584u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_156588:
    // 0x156588: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x156588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_15658c:
    // 0x15658c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_156590:
    // 0x156590: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x156590u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_156594:
    // 0x156594: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_156598:
    if (ctx->pc == 0x156598u) {
        ctx->pc = 0x156598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156594u;
        // 0x156598: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15659Cu;
        goto label_15659c;
    }
    ctx->pc = 0x156594u;
    {
        const bool branch_taken_0x156594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x156598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156594u;
        // 0x156598: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156594) {
            ctx->pc = 0x1565C0u;
            goto label_1565c0;
        }
    }
    ctx->pc = 0x15659Cu;
label_15659c:
    // 0x15659c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1565a0:
    // 0x1565a0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1565a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1565a4:
    // 0x1565a4: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x1565a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
label_1565a8:
    // 0x1565a8: 0x671026  xor         $v0, $v1, $a3
    ctx->pc = 0x1565a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
label_1565ac:
    // 0x1565ac: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1565acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_1565b0:
    // 0x1565b0: 0x472824  and         $a1, $v0, $a3
    ctx->pc = 0x1565b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1565b4:
    // 0x1565b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1565b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1565b8:
    // 0x1565b8: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x1565b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_1565bc:
    // 0x1565bc: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x1565bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
label_1565c0:
    // 0x1565c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1565c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1565c4:
    // 0x1565c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1565c8:
    // 0x1565c8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1565cc:
    if (ctx->pc == 0x1565CCu) {
        ctx->pc = 0x1565CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565C8u;
        // 0x1565cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565D0u;
        goto label_1565d0;
    }
    ctx->pc = 0x1565C8u;
    {
        const bool branch_taken_0x1565c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1565c8) {
            ctx->pc = 0x1565CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1565C8u;
            // 0x1565cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            goto label_156600;
        }
    }
    ctx->pc = 0x1565D0u;
label_1565d0:
    // 0x1565d0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1565d4:
    // 0x1565d4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1565d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1565d8:
    // 0x1565d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1565dc:
    if (ctx->pc == 0x1565DCu) {
        ctx->pc = 0x1565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565D8u;
        // 0x1565dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565E0u;
        goto label_1565e0;
    }
    ctx->pc = 0x1565D8u;
    {
        const bool branch_taken_0x1565d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1565d8) {
            ctx->pc = 0x1565DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1565D8u;
            // 0x1565dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156600u;
            goto label_156600;
        }
    }
    ctx->pc = 0x1565E0u;
label_1565e0:
    // 0x1565e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1565e4:
    // 0x1565e4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1565e8:
    // 0x1565e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1565ec:
    // 0x1565ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1565ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1565f0:
    // 0x1565f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1565f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1565f4:
    // 0x1565f4: 0x60f809  jalr        $v1
label_1565f8:
    if (ctx->pc == 0x1565F8u) {
        ctx->pc = 0x1565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565F4u;
        // 0x1565f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565FCu;
        goto label_1565fc;
    }
    ctx->pc = 0x1565F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1565FCu);
        ctx->pc = 0x1565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565F4u;
        // 0x1565f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1565F4u, 0x1565FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1565FCu;
label_1565fc:
    // 0x1565fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1565fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156600:
    // 0x156600: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x156600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_156604:
    // 0x156604: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x156604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_156608:
    // 0x156608: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x156608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15660c:
    // 0x15660c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15660cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_156610:
    // 0x156610: 0x3e00008  jr          $ra
label_156614:
    if (ctx->pc == 0x156614u) {
        ctx->pc = 0x156614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156610u;
        // 0x156614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156618u;
        goto label_fallthrough_0x156610;
    }
    ctx->pc = 0x156610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156610u;
        // 0x156614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156610:
    ctx->pc = 0x156618u;
}
