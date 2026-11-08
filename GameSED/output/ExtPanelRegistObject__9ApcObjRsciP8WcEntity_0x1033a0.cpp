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

// Function: ExtPanelRegistObject__9ApcObjRsciP8WcEntity
// Address: 0x1033a0 - 0x103524
void ExtPanelRegistObject__9ApcObjRsciP8WcEntity_0x1033a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelRegistObject__9ApcObjRsciP8WcEntity_0x1033a0");
#endif

    switch (ctx->pc) {
        case 0x1033a0u: goto label_1033a0;
        case 0x1033a4u: goto label_1033a4;
        case 0x1033a8u: goto label_1033a8;
        case 0x1033acu: goto label_1033ac;
        case 0x1033b0u: goto label_1033b0;
        case 0x1033b4u: goto label_1033b4;
        case 0x1033b8u: goto label_1033b8;
        case 0x1033bcu: goto label_1033bc;
        case 0x1033c0u: goto label_1033c0;
        case 0x1033c4u: goto label_1033c4;
        case 0x1033c8u: goto label_1033c8;
        case 0x1033ccu: goto label_1033cc;
        case 0x1033d0u: goto label_1033d0;
        case 0x1033d4u: goto label_1033d4;
        case 0x1033d8u: goto label_1033d8;
        case 0x1033dcu: goto label_1033dc;
        case 0x1033e0u: goto label_1033e0;
        case 0x1033e4u: goto label_1033e4;
        case 0x1033e8u: goto label_1033e8;
        case 0x1033ecu: goto label_1033ec;
        case 0x1033f0u: goto label_1033f0;
        case 0x1033f4u: goto label_1033f4;
        case 0x1033f8u: goto label_1033f8;
        case 0x1033fcu: goto label_1033fc;
        case 0x103400u: goto label_103400;
        case 0x103404u: goto label_103404;
        case 0x103408u: goto label_103408;
        case 0x10340cu: goto label_10340c;
        case 0x103410u: goto label_103410;
        case 0x103414u: goto label_103414;
        case 0x103418u: goto label_103418;
        case 0x10341cu: goto label_10341c;
        case 0x103420u: goto label_103420;
        case 0x103424u: goto label_103424;
        case 0x103428u: goto label_103428;
        case 0x10342cu: goto label_10342c;
        case 0x103430u: goto label_103430;
        case 0x103434u: goto label_103434;
        case 0x103438u: goto label_103438;
        case 0x10343cu: goto label_10343c;
        case 0x103440u: goto label_103440;
        case 0x103444u: goto label_103444;
        case 0x103448u: goto label_103448;
        case 0x10344cu: goto label_10344c;
        case 0x103450u: goto label_103450;
        case 0x103454u: goto label_103454;
        case 0x103458u: goto label_103458;
        case 0x10345cu: goto label_10345c;
        case 0x103460u: goto label_103460;
        case 0x103464u: goto label_103464;
        case 0x103468u: goto label_103468;
        case 0x10346cu: goto label_10346c;
        case 0x103470u: goto label_103470;
        case 0x103474u: goto label_103474;
        case 0x103478u: goto label_103478;
        case 0x10347cu: goto label_10347c;
        case 0x103480u: goto label_103480;
        case 0x103484u: goto label_103484;
        case 0x103488u: goto label_103488;
        case 0x10348cu: goto label_10348c;
        case 0x103490u: goto label_103490;
        case 0x103494u: goto label_103494;
        case 0x103498u: goto label_103498;
        case 0x10349cu: goto label_10349c;
        case 0x1034a0u: goto label_1034a0;
        case 0x1034a4u: goto label_1034a4;
        case 0x1034a8u: goto label_1034a8;
        case 0x1034acu: goto label_1034ac;
        case 0x1034b0u: goto label_1034b0;
        case 0x1034b4u: goto label_1034b4;
        case 0x1034b8u: goto label_1034b8;
        case 0x1034bcu: goto label_1034bc;
        case 0x1034c0u: goto label_1034c0;
        case 0x1034c4u: goto label_1034c4;
        case 0x1034c8u: goto label_1034c8;
        case 0x1034ccu: goto label_1034cc;
        case 0x1034d0u: goto label_1034d0;
        case 0x1034d4u: goto label_1034d4;
        case 0x1034d8u: goto label_1034d8;
        case 0x1034dcu: goto label_1034dc;
        case 0x1034e0u: goto label_1034e0;
        case 0x1034e4u: goto label_1034e4;
        case 0x1034e8u: goto label_1034e8;
        case 0x1034ecu: goto label_1034ec;
        case 0x1034f0u: goto label_1034f0;
        case 0x1034f4u: goto label_1034f4;
        case 0x1034f8u: goto label_1034f8;
        case 0x1034fcu: goto label_1034fc;
        case 0x103500u: goto label_103500;
        case 0x103504u: goto label_103504;
        case 0x103508u: goto label_103508;
        case 0x10350cu: goto label_10350c;
        case 0x103510u: goto label_103510;
        case 0x103514u: goto label_103514;
        case 0x103518u: goto label_103518;
        case 0x10351cu: goto label_10351c;
        case 0x103520u: goto label_103520;
        default: break;
    }

    ctx->pc = 0x1033a0u;

label_1033a0:
    // 0x1033a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1033a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1033a4:
    // 0x1033a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1033a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1033a8:
    // 0x1033a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1033a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1033ac:
    // 0x1033ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1033acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1033b0:
    // 0x1033b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1033b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1033b4:
    // 0x1033b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1033b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1033b8:
    // 0x1033b8: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
label_1033bc:
    if (ctx->pc == 0x1033BCu) {
        ctx->pc = 0x1033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B8u;
        // 0x1033bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033C0u;
        goto label_1033c0;
    }
    ctx->pc = 0x1033B8u;
    {
        const bool branch_taken_0x1033b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B8u;
        // 0x1033bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033b8) {
            ctx->pc = 0x1034FCu;
            goto label_1034fc;
        }
    }
    ctx->pc = 0x1033C0u;
label_1033c0:
    // 0x1033c0: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x1033c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1033c4:
    // 0x1033c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1033c8:
    if (ctx->pc == 0x1033C8u) {
        ctx->pc = 0x1033C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033C4u;
        // 0x1033c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033CCu;
        goto label_1033cc;
    }
    ctx->pc = 0x1033C4u;
    {
        const bool branch_taken_0x1033c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1033C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033C4u;
        // 0x1033c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033c4) {
            ctx->pc = 0x103468u;
            goto label_103468;
        }
    }
    ctx->pc = 0x1033CCu;
label_1033cc:
    // 0x1033cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1033d0:
    // 0x1033d0: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x1033d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_1033d4:
    // 0x1033d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1033d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_1033d8:
    // 0x1033d8: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x1033d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1033dc:
    // 0x1033dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1033e0:
    // 0x1033e0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1033e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1033e4:
    // 0x1033e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1033e8:
    if (ctx->pc == 0x1033E8u) {
        ctx->pc = 0x1033E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033E4u;
        // 0x1033e8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033ECu;
        goto label_1033ec;
    }
    ctx->pc = 0x1033E4u;
    {
        const bool branch_taken_0x1033e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1033e4) {
            ctx->pc = 0x1033E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1033E4u;
            // 0x1033e8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103404u;
            goto label_103404;
        }
    }
    ctx->pc = 0x1033ECu;
label_1033ec:
    // 0x1033ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1033ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1033f0:
    // 0x1033f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1033f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1033f4:
    // 0x1033f4: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0
    ctx->pc = 0x1033f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
label_1033f8:
    // 0x1033f8: 0xc068186  jal         func_1A0618
label_1033fc:
    if (ctx->pc == 0x1033FCu) {
        ctx->pc = 0x1033FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033F8u;
        // 0x1033fc: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103400u;
        goto label_103400;
    }
    ctx->pc = 0x1033F8u;
    SET_GPR_U32(ctx, 31, 0x103400u);
    ctx->pc = 0x1033FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033F8u;
    // 0x1033fc: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1033F8u, 0x103400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103400u;
label_103400:
    // 0x103400: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x103400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_103404:
    // 0x103404: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x103404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_103408:
    // 0x103408: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x103408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10340c:
    // 0x10340c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x10340cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_103410:
    // 0x103410: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x103410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_103414:
    // 0x103414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103418:
    // 0x103418: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_10341c:
    // 0x10341c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_103420:
    // 0x103420: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x103420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_103424:
    // 0x103424: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x103424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_103428:
    // 0x103428: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x103428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_10342c:
    // 0x10342c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103430:
    // 0x103430: 0xc0684ee  jal         func_1A13B8
label_103434:
    if (ctx->pc == 0x103434u) {
        ctx->pc = 0x103434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103430u;
        // 0x103434: 0xae300144  sw          $s0, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103438u;
        goto label_103438;
    }
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 31, 0x103438u);
    ctx->pc = 0x103434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103430u;
    // 0x103434: 0xae300144  sw          $s0, 0x144($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B8u, 0x103430u, 0x103438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103438u;
label_103438:
    // 0x103438: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_10343c:
    if (ctx->pc == 0x10343Cu) {
        ctx->pc = 0x10343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103438u;
        // 0x10343c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103440u;
        goto label_103440;
    }
    ctx->pc = 0x103438u;
    {
        const bool branch_taken_0x103438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103438u;
        // 0x10343c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103438) {
            ctx->pc = 0x103500u;
            goto label_103500;
        }
    }
    ctx->pc = 0x103440u;
label_103440:
    // 0x103440: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x103440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_103444:
    // 0x103444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103448:
    // 0x103448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10344c:
    // 0x10344c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_103450:
    // 0x103450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103454:
    // 0x103454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103458:
    // 0x103458: 0x60f809  jalr        $v1
label_10345c:
    if (ctx->pc == 0x10345Cu) {
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103460u;
        goto label_103460;
    }
    ctx->pc = 0x103458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103460u);
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103458u, 0x103460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103460u;
label_103460:
    // 0x103460: 0x10000027  b           . + 4 + (0x27 << 2)
label_103464:
    if (ctx->pc == 0x103464u) {
        ctx->pc = 0x103464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103460u;
        // 0x103464: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103468u;
        goto label_103468;
    }
    ctx->pc = 0x103460u;
    {
        const bool branch_taken_0x103460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103460u;
        // 0x103464: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103460) {
            ctx->pc = 0x103500u;
            goto label_103500;
        }
    }
    ctx->pc = 0x103468u;
label_103468:
    // 0x103468: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x103468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10346c:
    // 0x10346c: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
label_103470:
    if (ctx->pc == 0x103470u) {
        ctx->pc = 0x103470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10346Cu;
        // 0x103470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103474u;
        goto label_103474;
    }
    ctx->pc = 0x10346Cu;
    {
        const bool branch_taken_0x10346c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x103470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10346Cu;
        // 0x103470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10346c) {
            ctx->pc = 0x103484u;
            goto label_103484;
        }
    }
    ctx->pc = 0x103474u;
label_103474:
    // 0x103474: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x103474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_103478:
    // 0x103478: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x103478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10347c:
    // 0x10347c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_103480:
    if (ctx->pc == 0x103480u) {
        ctx->pc = 0x103484u;
        goto label_103484;
    }
    ctx->pc = 0x10347Cu;
    {
        const bool branch_taken_0x10347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10347c) {
            ctx->pc = 0x103488u;
            goto label_103488;
        }
    }
    ctx->pc = 0x103484u;
label_103484:
    // 0x103484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103488:
    // 0x103488: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_10348c:
    if (ctx->pc == 0x10348Cu) {
        ctx->pc = 0x10348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103488u;
        // 0x10348c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103490u;
        goto label_103490;
    }
    ctx->pc = 0x103488u;
    {
        const bool branch_taken_0x103488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103488u;
        // 0x10348c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103488) {
            ctx->pc = 0x1034B0u;
            goto label_1034b0;
        }
    }
    ctx->pc = 0x103490u;
label_103490:
    // 0x103490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103494:
    // 0x103494: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x103494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
label_103498:
    // 0x103498: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x103498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_10349c:
    // 0x10349c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10349cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1034a0:
    // 0x1034a0: 0xc0415ec  jal         func_1057B0
label_1034a4:
    if (ctx->pc == 0x1034A4u) {
        ctx->pc = 0x1034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A0u;
        // 0x1034a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034A8u;
        goto label_1034a8;
    }
    ctx->pc = 0x1034A0u;
    SET_GPR_U32(ctx, 31, 0x1034A8u);
    ctx->pc = 0x1034A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034A0u;
    // 0x1034a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1034A0u, 0x1034A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034A8u;
label_1034a8:
    // 0x1034a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1034ac:
    if (ctx->pc == 0x1034ACu) {
        ctx->pc = 0x1034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A8u;
        // 0x1034ac: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034B0u;
        goto label_1034b0;
    }
    ctx->pc = 0x1034A8u;
    {
        const bool branch_taken_0x1034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A8u;
        // 0x1034ac: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034a8) {
            ctx->pc = 0x1034C4u;
            goto label_1034c4;
        }
    }
    ctx->pc = 0x1034B0u;
label_1034b0:
    // 0x1034b0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1034b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1034b4:
    // 0x1034b4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1034b8:
    // 0x1034b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1034b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1034bc:
    // 0x1034bc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1034bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1034c0:
    // 0x1034c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1034c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1034c4:
    // 0x1034c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1034c8:
    if (ctx->pc == 0x1034C8u) {
        ctx->pc = 0x1034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C4u;
        // 0x1034c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034CCu;
        goto label_1034cc;
    }
    ctx->pc = 0x1034C4u;
    {
        const bool branch_taken_0x1034c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C4u;
        // 0x1034c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034c4) {
            ctx->pc = 0x1034E0u;
            goto label_1034e0;
        }
    }
    ctx->pc = 0x1034CCu;
label_1034cc:
    // 0x1034cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1034ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1034d0:
    // 0x1034d0: 0x24a51bb8  addiu       $a1, $a1, 0x1BB8
    ctx->pc = 0x1034d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7096));
label_1034d4:
    // 0x1034d4: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1034d8:
    // 0x1034d8: 0xc0415ec  jal         func_1057B0
label_1034dc:
    if (ctx->pc == 0x1034DCu) {
        ctx->pc = 0x1034DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034D8u;
        // 0x1034dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034E0u;
        goto label_1034e0;
    }
    ctx->pc = 0x1034D8u;
    SET_GPR_U32(ctx, 31, 0x1034E0u);
    ctx->pc = 0x1034DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034D8u;
    // 0x1034dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1034D8u, 0x1034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034E0u;
label_1034e0:
    // 0x1034e0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1034e4:
    if (ctx->pc == 0x1034E4u) {
        ctx->pc = 0x1034E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E0u;
        // 0x1034e4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034E8u;
        goto label_1034e8;
    }
    ctx->pc = 0x1034E0u;
    {
        const bool branch_taken_0x1034e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E0u;
        // 0x1034e4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e0) {
            ctx->pc = 0x1034FCu;
            goto label_1034fc;
        }
    }
    ctx->pc = 0x1034E8u;
label_1034e8:
    // 0x1034e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1034e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1034ec:
    // 0x1034ec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1034f0:
    // 0x1034f0: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1034f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1034f4:
    // 0x1034f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1034f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1034f8:
    // 0x1034f8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1034f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1034fc:
    // 0x1034fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1034fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_103500:
    // 0x103500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103504:
    // 0x103504: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_103508:
    // 0x103508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10350c:
    // 0x10350c: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x10350cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
label_103510:
    // 0x103510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_103514:
    // 0x103514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103518:
    // 0x103518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10351c:
    // 0x10351c: 0x3e00008  jr          $ra
label_103520:
    if (ctx->pc == 0x103520u) {
        ctx->pc = 0x103520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10351Cu;
        // 0x103520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103524u;
        goto label_fallthrough_0x10351c;
    }
    ctx->pc = 0x10351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10351Cu;
        // 0x103520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10351c:
    ctx->pc = 0x103524u;
}
