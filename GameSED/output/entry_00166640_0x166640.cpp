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

// Function: entry_00166640
// Address: 0x166640 - 0x1668d0
void entry_00166640_0x166640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166640_0x166640");
#endif

    switch (ctx->pc) {
        case 0x166694u: goto label_166694;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666f4u: goto label_1666f4;
        case 0x166724u: goto label_166724;
        case 0x166754u: goto label_166754;
        case 0x166784u: goto label_166784;
        case 0x1667d0u: goto label_1667d0;
        case 0x1667f0u: goto label_1667f0;
        case 0x166810u: goto label_166810;
        case 0x166830u: goto label_166830;
        case 0x166858u: goto label_166858;
        case 0x166878u: goto label_166878;
        case 0x1668a4u: goto label_1668a4;
        case 0x1668c4u: goto label_1668c4;
        default: break;
    }

    ctx->pc = 0x166640u;

label_166640:
    // 0x166640: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x166640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_166644:
    // 0x166644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166648:
    // 0x166648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16664c:
    // 0x16664c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_166650:
    // 0x166650: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x166650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_166654:
    // 0x166654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166658:
    // 0x166658: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x166658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_16665c:
    // 0x16665c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_166660:
    if (ctx->pc == 0x166660u) {
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166664u;
        goto label_166664;
    }
    ctx->pc = 0x16665Cu;
    {
        const bool branch_taken_0x16665c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16665c) {
            ctx->pc = 0x166640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166640;
        }
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_166668:
    // 0x166668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16666c:
    // 0x16666c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166670:
    // 0x166670: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166674:
    // 0x166674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166678:
    // 0x166678: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16667c:
    // 0x16667c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166680:
    // 0x166680: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166684:
    // 0x166684: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166688:
    // 0x166688: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16668c:
    // 0x16668c: 0x60f809  jalr        $v1
label_166690:
    if (ctx->pc == 0x166690u) {
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166694u;
        goto label_166694;
    }
    ctx->pc = 0x16668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166694u);
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16668Cu, 0x166694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166694u;
label_166694:
    // 0x166694: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_166698:
    // 0x166698: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16669c:
    // 0x16669c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1666a0:
    // 0x1666a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1666a4:
    // 0x1666a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1666a8:
    // 0x1666a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1666a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1666ac:
    // 0x1666ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1666acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1666b0:
    // 0x1666b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1666b4:
    // 0x1666b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1666b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1666b8:
    // 0x1666b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1666bc:
    // 0x1666bc: 0x60f809  jalr        $v1
label_1666c0:
    if (ctx->pc == 0x1666C0u) {
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666C4u;
        goto label_1666c4;
    }
    ctx->pc = 0x1666BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1666C4u);
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666BCu, 0x1666C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666C4u;
label_1666c4:
    // 0x1666c4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1666c8:
    // 0x1666c8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1666c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1666cc:
    // 0x1666cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1666ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1666d0:
    // 0x1666d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1666d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1666d4:
    // 0x1666d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1666d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1666d8:
    // 0x1666d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1666d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1666dc:
    // 0x1666dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1666dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1666e0:
    // 0x1666e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1666e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1666e4:
    // 0x1666e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1666e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1666e8:
    // 0x1666e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1666e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1666ec:
    // 0x1666ec: 0x60f809  jalr        $v1
label_1666f0:
    if (ctx->pc == 0x1666F0u) {
        ctx->pc = 0x1666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ECu;
        // 0x1666f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666F4u;
        goto label_1666f4;
    }
    ctx->pc = 0x1666ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1666F4u);
        ctx->pc = 0x1666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ECu;
        // 0x1666f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666ECu, 0x1666F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666F4u;
label_1666f4:
    // 0x1666f4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1666f8:
    // 0x1666f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1666fc:
    // 0x1666fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1666fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166700:
    // 0x166700: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166704:
    // 0x166704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166708:
    // 0x166708: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16670c:
    // 0x16670c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166710:
    // 0x166710: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166714:
    // 0x166714: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166718:
    // 0x166718: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16671c:
    // 0x16671c: 0x60f809  jalr        $v1
label_166720:
    if (ctx->pc == 0x166720u) {
        ctx->pc = 0x166720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16671Cu;
        // 0x166720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166724u;
        goto label_166724;
    }
    ctx->pc = 0x16671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166724u);
        ctx->pc = 0x166720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16671Cu;
        // 0x166720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16671Cu, 0x166724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166724u;
label_166724:
    // 0x166724: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166728:
    // 0x166728: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16672c:
    // 0x16672c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166730:
    // 0x166730: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166734:
    // 0x166734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166738:
    // 0x166738: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16673c:
    // 0x16673c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166740:
    // 0x166740: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166744:
    // 0x166744: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166748:
    // 0x166748: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16674c:
    // 0x16674c: 0x60f809  jalr        $v1
label_166750:
    if (ctx->pc == 0x166750u) {
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166754u;
        goto label_166754;
    }
    ctx->pc = 0x16674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166754u);
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16674Cu, 0x166754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166754u;
label_166754:
    // 0x166754: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166758:
    // 0x166758: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16675c:
    // 0x16675c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16675cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166760:
    // 0x166760: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166764:
    // 0x166764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166768:
    // 0x166768: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16676c:
    // 0x16676c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166770:
    // 0x166770: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166774:
    // 0x166774: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166778:
    // 0x166778: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16677c:
    // 0x16677c: 0x60f809  jalr        $v1
label_166780:
    if (ctx->pc == 0x166780u) {
        ctx->pc = 0x166780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16677Cu;
        // 0x166780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166784u;
        goto label_166784;
    }
    ctx->pc = 0x16677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166784u);
        ctx->pc = 0x166780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16677Cu;
        // 0x166780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16677Cu, 0x166784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166784u;
label_166784:
    // 0x166784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166788:
    // 0x166788: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x166788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_16678c:
    // 0x16678c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16678cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166790:
    // 0x166790: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166794:
    // 0x166794: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166798:
    // 0x166798: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x166798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16679c:
    // 0x16679c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1667a0:
    // 0x1667a0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1667a0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1667a4:
    // 0x1667a4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1667a4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1667a8:
    // 0x1667a8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1667a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1667ac:
    // 0x1667ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1667acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1667b0:
    // 0x1667b0: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x1667b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1667b4:
    // 0x1667b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667b8:
    // 0x1667b8: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667bc:
    // 0x1667bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1667bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1667c0:
    // 0x1667c0: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_1667c4:
    // 0x1667c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1667c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1667c8:
    // 0x1667c8: 0xc0618c2  jal         func_186308
label_1667cc:
    if (ctx->pc == 0x1667CCu) {
        ctx->pc = 0x1667CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C8u;
        // 0x1667cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667D0u;
        goto label_1667d0;
    }
    ctx->pc = 0x1667C8u;
    SET_GPR_U32(ctx, 31, 0x1667D0u);
    ctx->pc = 0x1667CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667C8u;
    // 0x1667cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1667C8u, 0x1667D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667D0u;
label_1667d0:
    // 0x1667d0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1667d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1667d4:
    // 0x1667d4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667d8:
    // 0x1667d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667dc:
    // 0x1667dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1667dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1667e0:
    // 0x1667e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1667e4:
    // 0x1667e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1667e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1667e8:
    // 0x1667e8: 0xc0618c2  jal         func_186308
label_1667ec:
    if (ctx->pc == 0x1667ECu) {
        ctx->pc = 0x1667ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667E8u;
        // 0x1667ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667F0u;
        goto label_1667f0;
    }
    ctx->pc = 0x1667E8u;
    SET_GPR_U32(ctx, 31, 0x1667F0u);
    ctx->pc = 0x1667ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667E8u;
    // 0x1667ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1667E8u, 0x1667F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667F0u;
label_1667f0:
    // 0x1667f0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1667f4:
    // 0x1667f4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1667f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667f8:
    // 0x1667f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667fc:
    // 0x1667fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166800:
    // 0x166800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166804:
    // 0x166804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166808:
    // 0x166808: 0xc0618c2  jal         func_186308
label_16680c:
    if (ctx->pc == 0x16680Cu) {
        ctx->pc = 0x16680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166808u;
        // 0x16680c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166810u;
        goto label_166810;
    }
    ctx->pc = 0x166808u;
    SET_GPR_U32(ctx, 31, 0x166810u);
    ctx->pc = 0x16680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166808u;
    // 0x16680c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x166808u, 0x166810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166810u;
label_166810:
    // 0x166810: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166814:
    // 0x166814: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166818:
    // 0x166818: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x166818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16681c:
    // 0x16681c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16681cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166820:
    // 0x166820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166824:
    // 0x166824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166828:
    // 0x166828: 0xc0618c2  jal         func_186308
label_16682c:
    if (ctx->pc == 0x16682Cu) {
        ctx->pc = 0x16682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166828u;
        // 0x16682c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166830u;
        goto label_166830;
    }
    ctx->pc = 0x166828u;
    SET_GPR_U32(ctx, 31, 0x166830u);
    ctx->pc = 0x16682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166828u;
    // 0x16682c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x166828u, 0x166830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166830u;
label_166830:
    // 0x166830: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166834:
    // 0x166834: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x166834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_166838:
    // 0x166838: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_16683c:
    // 0x16683c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166840:
    // 0x166840: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166844:
    // 0x166844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166848:
    // 0x166848: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_16684c:
    // 0x16684c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166850:
    // 0x166850: 0xc0618f2  jal         func_1863C8
label_166854:
    if (ctx->pc == 0x166854u) {
        ctx->pc = 0x166854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166850u;
        // 0x166854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166858u;
        goto label_166858;
    }
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 31, 0x166858u);
    ctx->pc = 0x166854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166850u;
    // 0x166854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x166850u, 0x166858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166858u;
label_166858:
    // 0x166858: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_16685c:
    // 0x16685c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166860:
    // 0x166860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166864:
    // 0x166864: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166868:
    // 0x166868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16686c:
    // 0x16686c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166870:
    // 0x166870: 0xc0618f2  jal         func_1863C8
label_166874:
    if (ctx->pc == 0x166874u) {
        ctx->pc = 0x166874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166870u;
        // 0x166874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166878u;
        goto label_166878;
    }
    ctx->pc = 0x166870u;
    SET_GPR_U32(ctx, 31, 0x166878u);
    ctx->pc = 0x166874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166870u;
    // 0x166874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x166870u, 0x166878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166878u;
label_166878:
    // 0x166878: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16687c:
    // 0x16687c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x16687cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166880:
    // 0x166880: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166884:
    // 0x166884: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166888:
    // 0x166888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16688c:
    // 0x16688c: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x16688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166890:
    // 0x166890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166894:
    // 0x166894: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_166898:
    // 0x166898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16689c:
    // 0x16689c: 0xc0618f2  jal         func_1863C8
label_1668a0:
    if (ctx->pc == 0x1668A0u) {
        ctx->pc = 0x1668A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16689Cu;
        // 0x1668a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668A4u;
        goto label_1668a4;
    }
    ctx->pc = 0x16689Cu;
    SET_GPR_U32(ctx, 31, 0x1668A4u);
    ctx->pc = 0x1668A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16689Cu;
    // 0x1668a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16689Cu, 0x1668A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668A4u;
label_1668a4:
    // 0x1668a4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1668a8:
    // 0x1668a8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1668ac:
    // 0x1668ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1668acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1668b0:
    // 0x1668b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1668b4:
    // 0x1668b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1668b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1668b8:
    // 0x1668b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1668bc:
    // 0x1668bc: 0xc0618f2  jal         func_1863C8
label_1668c0:
    if (ctx->pc == 0x1668C0u) {
        ctx->pc = 0x1668C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668BCu;
        // 0x1668c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668C4u;
        goto label_1668c4;
    }
    ctx->pc = 0x1668BCu;
    SET_GPR_U32(ctx, 31, 0x1668C4u);
    ctx->pc = 0x1668C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668BCu;
    // 0x1668c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1668BCu, 0x1668C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C4u;
label_1668c4:
    // 0x1668c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1668c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1668c8:
    // 0x1668c8: 0x100002b8  b           . + 4 + (0x2B8 << 2)
label_1668cc:
    if (ctx->pc == 0x1668CCu) {
        ctx->pc = 0x1668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C8u;
        // 0x1668cc: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668D0u;
        goto label_fallthrough_0x1668c8;
    }
    ctx->pc = 0x1668C8u;
    {
        const bool branch_taken_0x1668c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C8u;
        // 0x1668cc: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668c8) {
            ctx->pc = 0x1673ACu;
            return;
        }
    }
label_fallthrough_0x1668c8:
    ctx->pc = 0x1668D0u;
}
