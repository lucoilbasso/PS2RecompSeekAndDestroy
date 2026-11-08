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

// Function: entry_0011fac0
// Address: 0x11fac0 - 0x11fad0
void entry_0011fac0_0x11fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fac0_0x11fac0");
#endif

    switch (ctx->pc) {
        case 0x11fac8u: goto label_11fac8;
        default: break;
    }

    ctx->pc = 0x11fac0u;

    // 0x11fac0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11FAC0u;
    SET_GPR_U32(ctx, 31, 0x11FAC8u);
    ctx->pc = 0x11FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAC0u;
    // 0x11fac4: 0x26e44860  addiu       $a0, $s7, 0x4860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 18528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11FAC0u, 0x11FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAC8u;
label_11fac8:
    // 0x11fac8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x11FAC8u;
    {
        const bool branch_taken_0x11fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAC8u;
        // 0x11facc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fac8) {
            ctx->pc = 0x11FBFCu;
            return;
        }
    }
    ctx->pc = 0x11FAD0u;
}
