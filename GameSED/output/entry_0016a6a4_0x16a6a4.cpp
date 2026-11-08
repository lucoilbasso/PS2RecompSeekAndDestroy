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

// Function: entry_0016a6a4
// Address: 0x16a6a4 - 0x16a6b8
void entry_0016a6a4_0x16a6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6a4_0x16a6a4");
#endif

    switch (ctx->pc) {
        case 0x16a6b0u: goto label_16a6b0;
        default: break;
    }

    ctx->pc = 0x16a6a4u;

    // 0x16a6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6a8: 0xc05a900  jal         func_16A400
    ctx->pc = 0x16A6A8u;
    SET_GPR_U32(ctx, 31, 0x16A6B0u);
    ctx->pc = 0x16A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6A8u;
    // 0x16a6ac: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A6A8u, 0x16A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6B0u;
label_16a6b0:
    // 0x16a6b0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16A6B0u;
    {
        const bool branch_taken_0x16a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B0u;
        // 0x16a6b4: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b0) {
            ctx->pc = 0x16A820u;
            return;
        }
    }
    ctx->pc = 0x16A6B8u;
}
