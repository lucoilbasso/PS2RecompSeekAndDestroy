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

// Function: Cmd_TANK_PARTS_SET_Entry__FP15BsSCDEntControl
// Address: 0x154270 - 0x154448
void Cmd_TANK_PARTS_SET_Entry__FP15BsSCDEntControl_0x154270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_SET_Entry__FP15BsSCDEntControl_0x154270");
#endif

    switch (ctx->pc) {
        case 0x154270u: goto label_154270;
        case 0x154274u: goto label_154274;
        case 0x154278u: goto label_154278;
        case 0x15427cu: goto label_15427c;
        case 0x154280u: goto label_154280;
        case 0x154284u: goto label_154284;
        case 0x154288u: goto label_154288;
        case 0x15428cu: goto label_15428c;
        case 0x154290u: goto label_154290;
        case 0x154294u: goto label_154294;
        case 0x154298u: goto label_154298;
        case 0x15429cu: goto label_15429c;
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        case 0x154438u: goto label_154438;
        case 0x15443cu: goto label_15443c;
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        default: break;
    }

    ctx->pc = 0x154270u;

label_154270:
    // 0x154270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_154274:
    // 0x154274: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_154278:
    // 0x154278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15427c:
    // 0x15427c: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_154280:
    // 0x154280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_154284:
    // 0x154284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154288:
    // 0x154288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15428c:
    // 0x15428c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_154290:
    // 0x154290: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_154294:
    // 0x154294: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_154298:
    // 0x154298: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15429c:
    // 0x15429c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15429cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1542a0:
    // 0x1542a0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_1542a4:
    if (ctx->pc == 0x1542A4u) {
        ctx->pc = 0x1542A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542A0u;
        // 0x1542a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542A8u;
        goto label_1542a8;
    }
    ctx->pc = 0x1542A0u;
    {
        const bool branch_taken_0x1542a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1542A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542A0u;
        // 0x1542a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542a0) {
            ctx->pc = 0x1542B8u;
            goto label_1542b8;
        }
    }
    ctx->pc = 0x1542A8u;
label_1542a8:
    // 0x1542a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1542a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1542ac:
    // 0x1542ac: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1542acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1542b0:
    // 0x1542b0: 0xc068186  jal         func_1A0618
label_1542b4:
    if (ctx->pc == 0x1542B4u) {
        ctx->pc = 0x1542B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542B0u;
        // 0x1542b4: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542B8u;
        goto label_1542b8;
    }
    ctx->pc = 0x1542B0u;
    SET_GPR_U32(ctx, 31, 0x1542B8u);
    ctx->pc = 0x1542B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542B0u;
    // 0x1542b4: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1542B0u, 0x1542B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542B8u;
label_1542b8:
    // 0x1542b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1542bc:
    // 0x1542bc: 0xc06a26e  jal         func_1A89B8
label_1542c0:
    if (ctx->pc == 0x1542C0u) {
        ctx->pc = 0x1542C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542BCu;
        // 0x1542c0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542C4u;
        goto label_1542c4;
    }
    ctx->pc = 0x1542BCu;
    SET_GPR_U32(ctx, 31, 0x1542C4u);
    ctx->pc = 0x1542C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542BCu;
    // 0x1542c0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1542BCu, 0x1542C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542C4u;
label_1542c4:
    // 0x1542c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1542c8:
    // 0x1542c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1542c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1542cc:
    // 0x1542cc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1542d0:
    // 0x1542d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1542d4:
    // 0x1542d4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_1542d8:
    if (ctx->pc == 0x1542D8u) {
        ctx->pc = 0x1542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542D4u;
        // 0x1542d8: 0x108a03  sra         $s1, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542DCu;
        goto label_1542dc;
    }
    ctx->pc = 0x1542D4u;
    {
        const bool branch_taken_0x1542d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542D4u;
        // 0x1542d8: 0x108a03  sra         $s1, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542d4) {
            ctx->pc = 0x1542F0u;
            goto label_1542f0;
        }
    }
    ctx->pc = 0x1542DCu;
label_1542dc:
    // 0x1542dc: 0xc04566c  jal         func_1159B0
label_1542e0:
    if (ctx->pc == 0x1542E0u) {
        ctx->pc = 0x1542E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542DCu;
        // 0x1542e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542E4u;
        goto label_1542e4;
    }
    ctx->pc = 0x1542DCu;
    SET_GPR_U32(ctx, 31, 0x1542E4u);
    ctx->pc = 0x1542E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542DCu;
    // 0x1542e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x1542DCu, 0x1542E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542E4u;
label_1542e4:
    // 0x1542e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1542e8:
    if (ctx->pc == 0x1542E8u) {
        ctx->pc = 0x1542E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E4u;
        // 0x1542e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542ECu;
        goto label_1542ec;
    }
    ctx->pc = 0x1542E4u;
    {
        const bool branch_taken_0x1542e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E4u;
        // 0x1542e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542e4) {
            ctx->pc = 0x1542FCu;
            goto label_1542fc;
        }
    }
    ctx->pc = 0x1542ECu;
label_1542ec:
    // 0x1542ec: 0x0  nop
    ctx->pc = 0x1542ecu;
    // NOP
label_1542f0:
    // 0x1542f0: 0xc06a26e  jal         func_1A89B8
label_1542f4:
    if (ctx->pc == 0x1542F4u) {
        ctx->pc = 0x1542F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542F0u;
        // 0x1542f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542F8u;
        goto label_1542f8;
    }
    ctx->pc = 0x1542F0u;
    SET_GPR_U32(ctx, 31, 0x1542F8u);
    ctx->pc = 0x1542F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542F0u;
    // 0x1542f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1542F0u, 0x1542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542F8u;
label_1542f8:
    // 0x1542f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1542f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1542fc:
    // 0x1542fc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_154300:
    // 0x154300: 0x14e20017  bne         $a3, $v0, . + 4 + (0x17 << 2)
label_154304:
    if (ctx->pc == 0x154304u) {
        ctx->pc = 0x154308u;
        goto label_154308;
    }
    ctx->pc = 0x154300u;
    {
        const bool branch_taken_0x154300 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x154300) {
            ctx->pc = 0x154360u;
            goto label_154360;
        }
    }
    ctx->pc = 0x154308u;
label_154308:
    // 0x154308: 0xc04566c  jal         func_1159B0
label_15430c:
    if (ctx->pc == 0x15430Cu) {
        ctx->pc = 0x15430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154308u;
        // 0x15430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154310u;
        goto label_154310;
    }
    ctx->pc = 0x154308u;
    SET_GPR_U32(ctx, 31, 0x154310u);
    ctx->pc = 0x15430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154308u;
    // 0x15430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x154308u, 0x154310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154310u;
label_154310:
    // 0x154310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_154314:
    // 0x154314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154318:
    // 0x154318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x154318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15431c:
    // 0x15431c: 0xc0538fe  jal         func_14E3F8
label_154320:
    if (ctx->pc == 0x154320u) {
        ctx->pc = 0x154320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15431Cu;
        // 0x154320: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154324u;
        goto label_154324;
    }
    ctx->pc = 0x15431Cu;
    SET_GPR_U32(ctx, 31, 0x154324u);
    ctx->pc = 0x154320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15431Cu;
    // 0x154320: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x15431Cu, 0x154324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154324u;
label_154324:
    // 0x154324: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_154328:
    // 0x154328: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15432c:
    // 0x15432c: 0x8ca20c04  lw          $v0, 0xC04($a1)
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3076)));
label_154330:
    // 0x154330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_154334:
    // 0x154334: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_154338:
    if (ctx->pc == 0x154338u) {
        ctx->pc = 0x154338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154334u;
        // 0x154338: 0xaca20c04  sw          $v0, 0xC04($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15433Cu;
        goto label_15433c;
    }
    ctx->pc = 0x154334u;
    {
        const bool branch_taken_0x154334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154334u;
        // 0x154338: 0xaca20c04  sw          $v0, 0xC04($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154334) {
            ctx->pc = 0x15442Cu;
            goto label_15442c;
        }
    }
    ctx->pc = 0x15433Cu;
label_15433c:
    // 0x15433c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_154340:
    // 0x154340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154344:
    // 0x154344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154348:
    // 0x154348: 0x24841208  addiu       $a0, $a0, 0x1208
    ctx->pc = 0x154348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
label_15434c:
    // 0x15434c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15434cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154350:
    // 0x154350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_154354:
    // 0x154354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154358:
    // 0x154358: 0x80685b8  j           func_1A16E0
label_15435c:
    if (ctx->pc == 0x15435Cu) {
        ctx->pc = 0x15435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154358u;
        // 0x15435c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154360u;
        goto label_154360;
    }
    ctx->pc = 0x154358u;
    ctx->pc = 0x15435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154358u;
    // 0x15435c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    BJobReleaseObject__FP5BcJobP5BcObj_0x1a16e0(rdram, ctx, runtime); return;
    ctx->pc = 0x154360u;
label_154360:
    // 0x154360: 0x14e0002f  bnez        $a3, . + 4 + (0x2F << 2)
label_154364:
    if (ctx->pc == 0x154364u) {
        ctx->pc = 0x154364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154360u;
        // 0x154364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154368u;
        goto label_154368;
    }
    ctx->pc = 0x154360u;
    {
        const bool branch_taken_0x154360 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x154364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154360u;
        // 0x154364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154360) {
            ctx->pc = 0x154420u;
            goto label_154420;
        }
    }
    ctx->pc = 0x154368u;
label_154368:
    // 0x154368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15436c:
    // 0x15436c: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_154370:
    if (ctx->pc == 0x154370u) {
        ctx->pc = 0x154370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15436Cu;
        // 0x154370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154374u;
        goto label_154374;
    }
    ctx->pc = 0x15436Cu;
    {
        const bool branch_taken_0x15436c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x154370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15436Cu;
        // 0x154370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15436c) {
            ctx->pc = 0x1543B0u;
            goto label_1543b0;
        }
    }
    ctx->pc = 0x154374u;
label_154374:
    // 0x154374: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x154374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_154378:
    // 0x154378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15437c:
    if (ctx->pc == 0x15437Cu) {
        ctx->pc = 0x15437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154378u;
        // 0x15437c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154380u;
        goto label_154380;
    }
    ctx->pc = 0x154378u;
    {
        const bool branch_taken_0x154378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154378u;
        // 0x15437c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154378) {
            ctx->pc = 0x154398u;
            goto label_154398;
        }
    }
    ctx->pc = 0x154380u;
label_154380:
    // 0x154380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154384:
    // 0x154384: 0x52220015  beql        $s1, $v0, . + 4 + (0x15 << 2)
label_154388:
    if (ctx->pc == 0x154388u) {
        ctx->pc = 0x154388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154384u;
        // 0x154388: 0x267006dc  addiu       $s0, $s3, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15438Cu;
        goto label_15438c;
    }
    ctx->pc = 0x154384u;
    {
        const bool branch_taken_0x154384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x154384) {
            ctx->pc = 0x154388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154384u;
            // 0x154388: 0x267006dc  addiu       $s0, $s3, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x15438Cu;
label_15438c:
    // 0x15438c: 0x10000013  b           . + 4 + (0x13 << 2)
label_154390:
    if (ctx->pc == 0x154390u) {
        ctx->pc = 0x154394u;
        goto label_154394;
    }
    ctx->pc = 0x15438Cu;
    {
        const bool branch_taken_0x15438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15438c) {
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x154394u;
label_154394:
    // 0x154394: 0x0  nop
    ctx->pc = 0x154394u;
    // NOP
label_154398:
    // 0x154398: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_15439c:
    if (ctx->pc == 0x15439Cu) {
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154398u;
        // 0x15439c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543A0u;
        goto label_1543a0;
    }
    ctx->pc = 0x154398u;
    {
        const bool branch_taken_0x154398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154398u;
        // 0x15439c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154398) {
            ctx->pc = 0x1543B8u;
            goto label_1543b8;
        }
    }
    ctx->pc = 0x1543A0u;
label_1543a0:
    // 0x1543a0: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
label_1543a4:
    if (ctx->pc == 0x1543A4u) {
        ctx->pc = 0x1543A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A0u;
        // 0x1543a4: 0x2663079c  addiu       $v1, $s3, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543A8u;
        goto label_1543a8;
    }
    ctx->pc = 0x1543A0u;
    {
        const bool branch_taken_0x1543a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1543A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A0u;
        // 0x1543a4: 0x2663079c  addiu       $v1, $s3, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543a0) {
            ctx->pc = 0x1543D0u;
            goto label_1543d0;
        }
    }
    ctx->pc = 0x1543A8u;
label_1543a8:
    // 0x1543a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1543ac:
    if (ctx->pc == 0x1543ACu) {
        ctx->pc = 0x1543B0u;
        goto label_1543b0;
    }
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x1543B0u;
label_1543b0:
    // 0x1543b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1543b4:
    if (ctx->pc == 0x1543B4u) {
        ctx->pc = 0x1543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B0u;
        // 0x1543b4: 0x2663071c  addiu       $v1, $s3, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543B8u;
        goto label_1543b8;
    }
    ctx->pc = 0x1543B0u;
    {
        const bool branch_taken_0x1543b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B0u;
        // 0x1543b4: 0x2663071c  addiu       $v1, $s3, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543b0) {
            ctx->pc = 0x1543BCu;
            goto label_1543bc;
        }
    }
    ctx->pc = 0x1543B8u;
label_1543b8:
    // 0x1543b8: 0x2663075c  addiu       $v1, $s3, 0x75C
    ctx->pc = 0x1543b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1884));
label_1543bc:
    // 0x1543bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1543c0:
    // 0x1543c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1543c4:
    if (ctx->pc == 0x1543C4u) {
        ctx->pc = 0x1543C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543C0u;
        // 0x1543c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543C8u;
        goto label_1543c8;
    }
    ctx->pc = 0x1543C0u;
    {
        const bool branch_taken_0x1543c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1543c0) {
            ctx->pc = 0x1543C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1543C0u;
            // 0x1543c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x1543C8u;
label_1543c8:
    // 0x1543c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1543cc:
    if (ctx->pc == 0x1543CCu) {
        ctx->pc = 0x1543D0u;
        goto label_1543d0;
    }
    ctx->pc = 0x1543C8u;
    {
        const bool branch_taken_0x1543c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543c8) {
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x1543D0u;
label_1543d0:
    // 0x1543d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1543d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1543d4:
    // 0x1543d4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1543d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1543d8:
    // 0x1543d8: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x1543d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_1543dc:
    // 0x1543dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1543e0:
    if (ctx->pc == 0x1543E0u) {
        ctx->pc = 0x1543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543DCu;
        // 0x1543e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543E4u;
        goto label_1543e4;
    }
    ctx->pc = 0x1543DCu;
    {
        const bool branch_taken_0x1543dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543DCu;
        // 0x1543e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543dc) {
            ctx->pc = 0x154410u;
            goto label_154410;
        }
    }
    ctx->pc = 0x1543E4u;
label_1543e4:
    // 0x1543e4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1543e8:
    // 0x1543e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1543ec:
    if (ctx->pc == 0x1543ECu) {
        ctx->pc = 0x1543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543E8u;
        // 0x1543ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543F0u;
        goto label_1543f0;
    }
    ctx->pc = 0x1543E8u;
    {
        const bool branch_taken_0x1543e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543E8u;
        // 0x1543ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543e8) {
            ctx->pc = 0x154410u;
            goto label_154410;
        }
    }
    ctx->pc = 0x1543F0u;
label_1543f0:
    // 0x1543f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1543f4:
    // 0x1543f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1543f8:
    // 0x1543f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1543fc:
    // 0x1543fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154400:
    // 0x154400: 0x60f809  jalr        $v1
label_154404:
    if (ctx->pc == 0x154404u) {
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154408u;
        goto label_154408;
    }
    ctx->pc = 0x154400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154408u);
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154400u, 0x154408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154408u;
label_154408:
    // 0x154408: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x154408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15440c:
    // 0x15440c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_154410:
    // 0x154410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154414:
    // 0x154414: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_154418:
    // 0x154418: 0x10000004  b           . + 4 + (0x4 << 2)
label_15441c:
    if (ctx->pc == 0x15441Cu) {
        ctx->pc = 0x15441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154418u;
        // 0x15441c: 0xac4306a8  sw          $v1, 0x6A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154420u;
        goto label_154420;
    }
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154418u;
        // 0x15441c: 0xac4306a8  sw          $v1, 0x6A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154418) {
            ctx->pc = 0x15442Cu;
            goto label_15442c;
        }
    }
    ctx->pc = 0x154420u;
label_154420:
    // 0x154420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154424:
    // 0x154424: 0xc0538fe  jal         func_14E3F8
label_154428:
    if (ctx->pc == 0x154428u) {
        ctx->pc = 0x154428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154424u;
        // 0x154428: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15442Cu;
        goto label_15442c;
    }
    ctx->pc = 0x154424u;
    SET_GPR_U32(ctx, 31, 0x15442Cu);
    ctx->pc = 0x154428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154424u;
    // 0x154428: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x154424u, 0x15442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15442Cu;
label_15442c:
    // 0x15442c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15442cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154430:
    // 0x154430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154434:
    // 0x154434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154438:
    // 0x154438: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15443c:
    // 0x15443c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154440:
    // 0x154440: 0x3e00008  jr          $ra
label_154444:
    if (ctx->pc == 0x154444u) {
        ctx->pc = 0x154444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154440u;
        // 0x154444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154448u;
        goto label_fallthrough_0x154440;
    }
    ctx->pc = 0x154440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154440u;
        // 0x154444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154440:
    ctx->pc = 0x154448u;
}
