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

// Function: entry_001d3a68
// Address: 0x1d3a68 - 0x1d3aa0
void entry_001d3a68_0x1d3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3a68_0x1d3a68");
#endif

    switch (ctx->pc) {
        case 0x1d3a78u: goto label_1d3a78;
        case 0x1d3a8cu: goto label_1d3a8c;
        default: break;
    }

    ctx->pc = 0x1d3a68u;

    // 0x1d3a68: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d3a6c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d3a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d3a70: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3A70u;
    SET_GPR_U32(ctx, 31, 0x1D3A78u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3A70u, 0x1D3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A78u;
label_1d3a78:
    // 0x1d3a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a84: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3A84u;
    SET_GPR_U32(ctx, 31, 0x1D3A8Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3A84u, 0x1D3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A8Cu;
label_1d3a8c:
    // 0x1d3a8c: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1D3A8Cu;
    {
        const bool branch_taken_0x1d3a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A8Cu;
        // 0x1d3a90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a8c) {
            ctx->pc = 0x1D41D0u;
            return;
        }
    }
    ctx->pc = 0x1D3A94u;
    // 0x1d3a94: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x1D3A94u;
    {
        const bool branch_taken_0x1d3a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a94) {
            ctx->pc = 0x1D3970u;
            return;
        }
    }
    ctx->pc = 0x1D3A9Cu;
    // 0x1d3a9c: 0x0  nop
    ctx->pc = 0x1d3a9cu;
    // NOP
    ctx->pc = 0x1d3aa0u;
}
