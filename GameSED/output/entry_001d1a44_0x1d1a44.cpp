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

// Function: entry_001d1a44
// Address: 0x1d1a44 - 0x1d1a78
void entry_001d1a44_0x1d1a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a44_0x1d1a44");
#endif

    switch (ctx->pc) {
        case 0x1d1a70u: goto label_1d1a70;
        default: break;
    }

    ctx->pc = 0x1d1a44u;

    // 0x1d1a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a48: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D1A48u;
    {
        const bool branch_taken_0x1d1a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A48u;
        // 0x1d1a4c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a48) {
            ctx->pc = 0x1D1AE4u;
            return;
        }
    }
    ctx->pc = 0x1D1A50u;
    // 0x1d1a50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A50u;
        // 0x1d1a54: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1A78u;
            return;
        }
    }
    ctx->pc = 0x1D1A58u;
    // 0x1d1a58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a5c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D1A5Cu;
    {
        const bool branch_taken_0x1d1a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A5Cu;
        // 0x1d1a60: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a5c) {
            ctx->pc = 0x1D1B00u;
            return;
        }
    }
    ctx->pc = 0x1D1A64u;
    // 0x1d1a64: 0x2455c428  addiu       $s5, $v0, -0x3BD8
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
    // 0x1d1a68: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1D1A68u;
    SET_GPR_U32(ctx, 31, 0x1D1A70u);
    ctx->pc = 0x1D1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A68u;
    // 0x1d1a6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1D1A68u, 0x1D1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A70u;
label_1d1a70:
    // 0x1d1a70: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D1A70u;
    {
        const bool branch_taken_0x1d1a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A70u;
        // 0x1d1a74: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a70) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D1A78u;
}
