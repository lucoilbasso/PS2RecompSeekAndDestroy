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

// Function: entry_00136da8
// Address: 0x136da8 - 0x136db8
void entry_00136da8_0x136da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136da8_0x136da8");
#endif

    switch (ctx->pc) {
        case 0x136db0u: goto label_136db0;
        default: break;
    }

    ctx->pc = 0x136da8u;

    // 0x136da8: 0xc061422  jal         func_185088
    ctx->pc = 0x136DA8u;
    SET_GPR_U32(ctx, 31, 0x136DB0u);
    ctx->pc = 0x136DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA8u;
    // 0x136dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x136DA8u, 0x136DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DB0u;
label_136db0:
    // 0x136db0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x136DB0u;
    {
        const bool branch_taken_0x136db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DB0u;
        // 0x136db4: 0x26020110  addiu       $v0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136db0) {
            ctx->pc = 0x136E08u;
            return;
        }
    }
    ctx->pc = 0x136DB8u;
}
