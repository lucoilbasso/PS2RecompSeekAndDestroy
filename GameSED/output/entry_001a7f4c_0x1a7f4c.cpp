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

// Function: entry_001a7f4c
// Address: 0x1a7f4c - 0x1a7f6c
void entry_001a7f4c_0x1a7f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7f4c_0x1a7f4c");
#endif

    switch (ctx->pc) {
        case 0x1a7f68u: goto label_1a7f68;
        default: break;
    }

    ctx->pc = 0x1a7f4cu;

    // 0x1a7f4c: 0x8f829080  lw          $v0, -0x6F80($gp)
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a7f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7F50u;
    {
        const bool branch_taken_0x1a7f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f50) {
            ctx->pc = 0x1A7F80u;
            return;
        }
    }
    ctx->pc = 0x1A7F58u;
    // 0x1a7f58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7F58u;
    {
        const bool branch_taken_0x1a7f58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F58u;
        // 0x1a7f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f58) {
            ctx->pc = 0x1A7F6Cu;
            return;
        }
    }
    ctx->pc = 0x1A7F60u;
    // 0x1a7f60: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A7F60u;
    SET_GPR_U32(ctx, 31, 0x1A7F68u);
    ctx->pc = 0x1A7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F60u;
    // 0x1a7f64: 0x26a4d8f8  addiu       $a0, $s5, -0x2708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A7F60u, 0x1A7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F68u;
label_1a7f68:
    // 0x1a7f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7f6cu;
}
