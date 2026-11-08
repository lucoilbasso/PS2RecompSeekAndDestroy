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

// Function: entry_00132064
// Address: 0x132064 - 0x132080
void entry_00132064_0x132064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132064_0x132064");
#endif

    switch (ctx->pc) {
        case 0x132070u: goto label_132070;
        default: break;
    }

    ctx->pc = 0x132064u;

    // 0x132064: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x132064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x132068: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132068u;
    SET_GPR_U32(ctx, 31, 0x132070u);
    ctx->pc = 0x13206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132068u;
    // 0x13206c: 0x24845f90  addiu       $a0, $a0, 0x5F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132068u, 0x132070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132070u;
label_132070:
    // 0x132070: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x132074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132074u;
    {
        const bool branch_taken_0x132074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132074u;
        // 0x132078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132074) {
            ctx->pc = 0x13209Cu;
            return;
        }
    }
    ctx->pc = 0x13207Cu;
    // 0x13207c: 0x0  nop
    ctx->pc = 0x13207cu;
    // NOP
    ctx->pc = 0x132080u;
}
