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

// Function: entry_00116b60
// Address: 0x116b60 - 0x116ba0
void entry_00116b60_0x116b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b60_0x116b60");
#endif

    switch (ctx->pc) {
        case 0x116b78u: goto label_116b78;
        case 0x116b88u: goto label_116b88;
        default: break;
    }

    ctx->pc = 0x116b60u;

    // 0x116b60: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x116b64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x116B64u;
    {
        const bool branch_taken_0x116b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B64u;
        // 0x116b68: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b64) {
            ctx->pc = 0x116BB0u;
            return;
        }
    }
    ctx->pc = 0x116B6Cu;
    // 0x116b6c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116b70: 0xc041882  jal         func_106208
    ctx->pc = 0x116B70u;
    SET_GPR_U32(ctx, 31, 0x116B78u);
    ctx->pc = 0x116B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B70u;
    // 0x116b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116B70u, 0x116B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B78u;
label_116b78:
    // 0x116b78: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116b7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116b80: 0xc041882  jal         func_106208
    ctx->pc = 0x116B80u;
    SET_GPR_U32(ctx, 31, 0x116B88u);
    ctx->pc = 0x116B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B80u;
    // 0x116b84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116B80u, 0x116B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B88u;
label_116b88:
    // 0x116b88: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x116B88u;
    {
        const bool branch_taken_0x116b88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b88) {
            ctx->pc = 0x116B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B88u;
            // 0x116b8c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116BA0u;
            return;
        }
    }
    ctx->pc = 0x116B90u;
    // 0x116b90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116b94: 0x54550007  bnel        $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x116B94u;
    {
        const bool branch_taken_0x116b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x116b94) {
            ctx->pc = 0x116B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B94u;
            // 0x116b98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116BB4u;
            return;
        }
    }
    ctx->pc = 0x116B9Cu;
    // 0x116b9c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x116b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x116ba0u;
}
