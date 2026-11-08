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

// Function: entry_0015c650
// Address: 0x15c650 - 0x15c690
void entry_0015c650_0x15c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c650_0x15c650");
#endif

    ctx->pc = 0x15c650u;

label_15c650:
    // 0x15c650: 0x443001e  bgezl       $v0, . + 4 + (0x1E << 2)
label_15c654:
    if (ctx->pc == 0x15C654u) {
        ctx->pc = 0x15C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C650u;
        // 0x15c654: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C658u;
        goto label_15c658;
    }
    ctx->pc = 0x15C650u;
    {
        const bool branch_taken_0x15c650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c650) {
            ctx->pc = 0x15C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C650u;
            // 0x15c654: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C6CCu;
            return;
        }
    }
    ctx->pc = 0x15C658u;
label_15c658:
    // 0x15c658: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c65c:
    // 0x15c65c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15c660:
    // 0x15c660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15c664:
    // 0x15c664: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_15c668:
    if (ctx->pc == 0x15C668u) {
        ctx->pc = 0x15C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C664u;
        // 0x15c668: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C66Cu;
        goto label_15c66c;
    }
    ctx->pc = 0x15C664u;
    {
        const bool branch_taken_0x15c664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C664u;
        // 0x15c668: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c664) {
            ctx->pc = 0x15C6B4u;
            return;
        }
    }
    ctx->pc = 0x15C66Cu;
label_15c66c:
    // 0x15c66c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c670:
    // 0x15c670: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c674:
    if (ctx->pc == 0x15C674u) {
        ctx->pc = 0x15C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C670u;
        // 0x15c674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C678u;
        goto label_15c678;
    }
    ctx->pc = 0x15C670u;
    {
        const bool branch_taken_0x15c670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C670u;
        // 0x15c674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c670) {
            ctx->pc = 0x15C690u;
            return;
        }
    }
    ctx->pc = 0x15C678u;
label_15c678:
    // 0x15c678: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c67c:
    // 0x15c67c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c680:
    // 0x15c680: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c684:
    // 0x15c684: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c688:
    // 0x15c688: 0x60f809  jalr        $v1
label_15c68c:
    if (ctx->pc == 0x15C68Cu) {
        ctx->pc = 0x15C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C688u;
        // 0x15c68c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C690u;
        goto label_fallthrough_0x15c688;
    }
    ctx->pc = 0x15C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C690u);
        ctx->pc = 0x15C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C688u;
        // 0x15c68c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C688u, 0x15C690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15c688:
    ctx->pc = 0x15C690u;
}
