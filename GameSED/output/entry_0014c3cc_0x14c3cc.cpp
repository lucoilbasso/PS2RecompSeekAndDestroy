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

// Function: entry_0014c3cc
// Address: 0x14c3cc - 0x14c3e4
void entry_0014c3cc_0x14c3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c3cc_0x14c3cc");
#endif

    switch (ctx->pc) {
        case 0x14c3e0u: goto label_14c3e0;
        default: break;
    }

    ctx->pc = 0x14c3ccu;

    // 0x14c3cc: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x14c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x14c3d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C3D0u;
    {
        const bool branch_taken_0x14c3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3d0) {
            ctx->pc = 0x14C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3D0u;
            // 0x14c3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3E4u;
            return;
        }
    }
    ctx->pc = 0x14C3D8u;
    // 0x14c3d8: 0xc056a0c  jal         func_15A830
    ctx->pc = 0x14C3D8u;
    SET_GPR_U32(ctx, 31, 0x14C3E0u);
    ctx->pc = 0x15A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A830u, 0x14C3D8u, 0x14C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3E0u;
label_14c3e0:
    // 0x14c3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14c3e4u;
}
