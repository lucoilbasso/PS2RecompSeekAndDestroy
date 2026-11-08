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

// Function: entry_0016be64
// Address: 0x16be64 - 0x16be9c
void entry_0016be64_0x16be64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be64_0x16be64");
#endif

    ctx->pc = 0x16be64u;

label_16be64:
    // 0x16be64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16be68:
    // 0x16be68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16be68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_16be6c:
    // 0x16be6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16be70:
    // 0x16be70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16be74:
    // 0x16be74: 0x8c6373f0  lw          $v1, 0x73F0($v1)
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29680)));
label_16be78:
    // 0x16be78: 0x600008  jr          $v1
label_16be7c:
    if (ctx->pc == 0x16BE7Cu) {
        ctx->pc = 0x16BE80u;
        goto label_16be80;
    }
    ctx->pc = 0x16BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16BE80u;
label_16be80:
    // 0x16be80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16be84:
    // 0x16be84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16be88:
    // 0x16be88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_16be8c:
    if (ctx->pc == 0x16BE8Cu) {
        ctx->pc = 0x16BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE88u;
        // 0x16be8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE90u;
        goto label_16be90;
    }
    ctx->pc = 0x16BE88u;
    {
        const bool branch_taken_0x16be88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE88u;
        // 0x16be8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be88) {
            ctx->pc = 0x16BE9Cu;
            return;
        }
    }
    ctx->pc = 0x16BE90u;
label_16be90:
    // 0x16be90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16be94:
    // 0x16be94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_16be98:
    if (ctx->pc == 0x16BE98u) {
        ctx->pc = 0x16BE9Cu;
        goto label_fallthrough_0x16be94;
    }
    ctx->pc = 0x16BE94u;
    {
        const bool branch_taken_0x16be94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16be94) {
            ctx->pc = 0x16BEA8u;
            return;
        }
    }
label_fallthrough_0x16be94:
    ctx->pc = 0x16BE9Cu;
}
