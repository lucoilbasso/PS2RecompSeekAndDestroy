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

// Function: entry_00103a58
// Address: 0x103a58 - 0x103a78
void entry_00103a58_0x103a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a58_0x103a58");
#endif

    switch (ctx->pc) {
        case 0x103a6cu: goto label_103a6c;
        default: break;
    }

    ctx->pc = 0x103a58u;

    // 0x103a58: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x103a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x103a5c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A5Cu;
    {
        const bool branch_taken_0x103a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103a5c) {
            ctx->pc = 0x103A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A5Cu;
            // 0x103a60: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103A78u;
            return;
        }
    }
    ctx->pc = 0x103A64u;
    // 0x103a64: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A64u;
    SET_GPR_U32(ctx, 31, 0x103A6Cu);
    ctx->pc = 0x103A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A64u;
    // 0x103a68: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A64u, 0x103A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A6Cu;
label_103a6c:
    // 0x103a6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x103A6Cu;
    {
        const bool branch_taken_0x103a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A6Cu;
        // 0x103a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a6c) {
            ctx->pc = 0x103A9Cu;
            return;
        }
    }
    ctx->pc = 0x103A74u;
    // 0x103a74: 0x0  nop
    ctx->pc = 0x103a74u;
    // NOP
    ctx->pc = 0x103a78u;
}
