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

// Function: entry_00161080
// Address: 0x161080 - 0x161098
void entry_00161080_0x161080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161080_0x161080");
#endif

    switch (ctx->pc) {
        case 0x161094u: goto label_161094;
        default: break;
    }

    ctx->pc = 0x161080u;

    // 0x161080: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x161084: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x161084u;
    {
        const bool branch_taken_0x161084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161084) {
            ctx->pc = 0x161088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161084u;
            // 0x161088: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161098u;
            return;
        }
    }
    ctx->pc = 0x16108Cu;
    // 0x16108c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16108Cu;
    SET_GPR_U32(ctx, 31, 0x161094u);
    ctx->pc = 0x161090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16108Cu;
    // 0x161090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16108Cu, 0x161094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161094u;
label_161094:
    // 0x161094: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x161098u;
}
