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

// Function: entry_0011dfd8
// Address: 0x11dfd8 - 0x11dfec
void entry_0011dfd8_0x11dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfd8_0x11dfd8");
#endif

    ctx->pc = 0x11dfd8u;

    // 0x11dfd8: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFD8u;
    {
        const bool branch_taken_0x11dfd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD8u;
        // 0x11dfdc: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfd8) {
            ctx->pc = 0x11DFECu;
            return;
        }
    }
    ctx->pc = 0x11DFE0u;
    // 0x11dfe0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11dfe4: 0xc05ee40  jal         func_17B900
    ctx->pc = 0x11DFE4u;
    SET_GPR_U32(ctx, 31, 0x11DFECu);
    ctx->pc = 0x11DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFE4u;
    // 0x11dfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B900u, 0x11DFE4u, 0x11DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFECu;
}
