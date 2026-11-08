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

// Function: entry_0012eeb0
// Address: 0x12eeb0 - 0x12eec0
void entry_0012eeb0_0x12eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eeb0_0x12eeb0");
#endif

    switch (ctx->pc) {
        case 0x12eeb8u: goto label_12eeb8;
        default: break;
    }

    ctx->pc = 0x12eeb0u;

    // 0x12eeb0: 0xc04c928  jal         func_1324A0
    ctx->pc = 0x12EEB0u;
    SET_GPR_U32(ctx, 31, 0x12EEB8u);
    ctx->pc = 0x12EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEB0u;
    // 0x12eeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324A0u, 0x12EEB0u, 0x12EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEB8u;
label_12eeb8:
    // 0x12eeb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EEB8u;
    {
        const bool branch_taken_0x12eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB8u;
        // 0x12eebc: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb8) {
            ctx->pc = 0x12EECCu;
            return;
        }
    }
    ctx->pc = 0x12EEC0u;
}
