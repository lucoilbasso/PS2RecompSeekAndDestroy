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

// Function: entry_0016cd58
// Address: 0x16cd58 - 0x16cd70
void entry_0016cd58_0x16cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cd58_0x16cd58");
#endif

    switch (ctx->pc) {
        case 0x16cd60u: goto label_16cd60;
        default: break;
    }

    ctx->pc = 0x16cd58u;

    // 0x16cd58: 0xc061422  jal         func_185088
    ctx->pc = 0x16CD58u;
    SET_GPR_U32(ctx, 31, 0x16CD60u);
    ctx->pc = 0x16CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD58u;
    // 0x16cd5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16CD58u, 0x16CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD60u;
label_16cd60:
    // 0x16cd60: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16cd64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16CD64u;
    {
        const bool branch_taken_0x16cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD64u;
        // 0x16cd68: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd64) {
            ctx->pc = 0x16CDACu;
            return;
        }
    }
    ctx->pc = 0x16CD6Cu;
    // 0x16cd6c: 0x0  nop
    ctx->pc = 0x16cd6cu;
    // NOP
    ctx->pc = 0x16cd70u;
}
