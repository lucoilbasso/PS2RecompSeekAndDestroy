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

// Function: entry_0016f428
// Address: 0x16f428 - 0x16f450
void entry_0016f428_0x16f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f428_0x16f428");
#endif

    switch (ctx->pc) {
        case 0x16f44cu: goto label_16f44c;
        default: break;
    }

    ctx->pc = 0x16f428u;

    // 0x16f428: 0x8f828b60  lw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x16f42c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16F42Cu;
    {
        const bool branch_taken_0x16f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F42Cu;
        // 0x16f430: 0x8f828b68  lw          $v0, -0x7498($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f42c) {
            ctx->pc = 0x16F48Cu;
            return;
        }
    }
    ctx->pc = 0x16F434u;
    // 0x16f434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F434u;
    {
        const bool branch_taken_0x16f434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F434u;
        // 0x16f438: 0x8f838b68  lw          $v1, -0x7498($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f434) {
            ctx->pc = 0x16F450u;
            return;
        }
    }
    ctx->pc = 0x16F43Cu;
    // 0x16f43c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f440: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16f440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16f444: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F444u;
    SET_GPR_U32(ctx, 31, 0x16F44Cu);
    ctx->pc = 0x16F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F444u;
    // 0x16f448: 0x24a575b0  addiu       $a1, $a1, 0x75B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F444u, 0x16F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F44Cu;
label_16f44c:
    // 0x16f44c: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    ctx->pc = 0x16f450u;
}
