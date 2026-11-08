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

// Function: Cmd_TANK_CHART_SET_Entry__FP15BsSCDEntControl
// Address: 0x155338 - 0x1554a8
void Cmd_TANK_CHART_SET_Entry__FP15BsSCDEntControl_0x155338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_CHART_SET_Entry__FP15BsSCDEntControl_0x155338");
#endif

    switch (ctx->pc) {
        case 0x155388u: goto label_155388;
        case 0x1553a0u: goto label_1553a0;
        case 0x1553acu: goto label_1553ac;
        case 0x1553e4u: goto label_1553e4;
        case 0x1553f0u: goto label_1553f0;
        case 0x155418u: goto label_155418;
        case 0x155434u: goto label_155434;
        case 0x15543cu: goto label_15543c;
        case 0x155484u: goto label_155484;
        default: break;
    }

    ctx->pc = 0x155338u;

    // 0x155338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15533c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x155340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155344: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x155344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x155348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15534c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15534cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155354: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x155354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x155358: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x155358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15535c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x155360: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x155360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x155364: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x155364u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x155368: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15536c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15536cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155370: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155370u;
    {
        const bool branch_taken_0x155370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x155374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155370u;
        // 0x155374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155370) {
            ctx->pc = 0x155388u;
            goto label_155388;
        }
    }
    ctx->pc = 0x155378u;
    // 0x155378: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x15537c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x15537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x155380: 0xc068186  jal         func_1A0618
    ctx->pc = 0x155380u;
    SET_GPR_U32(ctx, 31, 0x155388u);
    ctx->pc = 0x155384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155380u;
    // 0x155384: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x155380u, 0x155388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155388u;
label_155388:
    // 0x155388: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x155388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15538c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155390: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155390u;
    {
        const bool branch_taken_0x155390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155390u;
        // 0x155394: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155390) {
            ctx->pc = 0x1553B8u;
            goto label_1553b8;
        }
    }
    ctx->pc = 0x155398u;
    // 0x155398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155398u;
    SET_GPR_U32(ctx, 31, 0x1553A0u);
    ctx->pc = 0x15539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155398u;
    // 0x15539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155398u, 0x1553A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553A0u;
label_1553a0:
    // 0x1553a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553A4u;
    SET_GPR_U32(ctx, 31, 0x1553ACu);
    ctx->pc = 0x1553A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553A4u;
    // 0x1553a8: 0xaf82913c  sw          $v0, -0x6EC4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938940), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553A4u, 0x1553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ACu;
label_1553ac:
    // 0x1553ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1553ACu;
    {
        const bool branch_taken_0x1553ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553ACu;
        // 0x1553b0: 0xaf829140  sw          $v0, -0x6EC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553ac) {
            ctx->pc = 0x155484u;
            goto label_155484;
        }
    }
    ctx->pc = 0x1553B4u;
    // 0x1553b4: 0x0  nop
    ctx->pc = 0x1553b4u;
    // NOP
label_1553b8:
    // 0x1553b8: 0x264508a0  addiu       $a1, $s2, 0x8A0
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2208));
    // 0x1553bc: 0x8f839140  lw          $v1, -0x6EC0($gp)
    ctx->pc = 0x1553bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
    // 0x1553c0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1553c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553c8: 0x8f86913c  lw          $a2, -0x6EC4($gp)
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938940)));
    // 0x1553cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1553d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1553d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1553d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1553d8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1553dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553DCu;
    SET_GPR_U32(ctx, 31, 0x1553E4u);
    ctx->pc = 0x1553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553DCu;
    // 0x1553e0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553DCu, 0x1553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553E4u;
label_1553e4:
    // 0x1553e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553E8u;
    SET_GPR_U32(ctx, 31, 0x1553F0u);
    ctx->pc = 0x1553ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553E8u;
    // 0x1553ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553E8u, 0x1553F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553F0u;
label_1553f0:
    // 0x1553f0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1553f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1553f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1553f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1553fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1553fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155400: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x155400u;
    {
        const bool branch_taken_0x155400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x155400) {
            ctx->pc = 0x155404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155400u;
            // 0x155404: 0x8e42089c  lw          $v0, 0x89C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155454u;
            goto label_155454;
        }
    }
    ctx->pc = 0x155408u;
    // 0x155408: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15540c: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x15540cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x155410: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x155414: 0x0  nop
    ctx->pc = 0x155414u;
    // NOP
label_155418:
    // 0x155418: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x155418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15541c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15541Cu;
    {
        const bool branch_taken_0x15541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15541Cu;
        // 0x155420: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15541c) {
            ctx->pc = 0x155434u;
            goto label_155434;
        }
    }
    ctx->pc = 0x155424u;
    // 0x155424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155428: 0x26a56e00  addiu       $a1, $s5, 0x6E00
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28160));
    // 0x15542c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x15542Cu;
    SET_GPR_U32(ctx, 31, 0x155434u);
    ctx->pc = 0x155430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15542Cu;
    // 0x155430: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x15542Cu, 0x155434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155434u;
label_155434:
    // 0x155434: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x155438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155434u;
    // 0x155438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x155440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x155444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155448: 0x1454fff3  bne         $v0, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x155448u;
    {
        const bool branch_taken_0x155448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x15544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155448u;
        // 0x15544c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155448) {
            ctx->pc = 0x155418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155418;
        }
    }
    ctx->pc = 0x155450u;
    // 0x155450: 0x8e42089c  lw          $v0, 0x89C($s2)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2204)));
label_155454:
    // 0x155454: 0x8e440898  lw          $a0, 0x898($s2)
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x155458: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x155458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15545c: 0x8e4308a0  lw          $v1, 0x8A0($s2)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
    // 0x155460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155464: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x155464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x155468: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x155468u;
    {
        const bool branch_taken_0x155468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155468) {
            ctx->pc = 0x15546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155468u;
            // 0x15546c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155488u;
            goto label_155488;
        }
    }
    ctx->pc = 0x155470u;
    // 0x155470: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x155474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155478: 0x24a56e00  addiu       $a1, $a1, 0x6E00
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28160));
    // 0x15547c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x15547Cu;
    SET_GPR_U32(ctx, 31, 0x155484u);
    ctx->pc = 0x155480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15547Cu;
    // 0x155480: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x15547Cu, 0x155484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155484u;
label_155484:
    // 0x155484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155488:
    // 0x155488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15548c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15548cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155494: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x155494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155498: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15549c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1554a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1554A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A0u;
        // 0x1554a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1554A8u;
}
