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

// Function: prt_1a7f9c_37e266fb
// Address: 0x1a7f9c - 0x1a7fb0
void prt_1a7f9c_37e266fb_0x1a7f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prt_1a7f9c_37e266fb_0x1a7f9c");
#endif

    switch (ctx->pc) {
        case 0x1a7fa4u: goto label_1a7fa4;
        default: break;
    }

    ctx->pc = 0x1a7f9cu;

    // 0x1a7f9c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7FA4u);
    ctx->pc = 0x1A7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F9Cu;
    // 0x1a7fa0: 0x2684d900  addiu       $a0, $s4, -0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A7F9Cu, 0x1A7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FA4u;
label_1a7fa4:
    // 0x1a7fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7FA4u;
    {
        const bool branch_taken_0x1a7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FA4u;
        // 0x1a7fa8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fa4) {
            ctx->pc = 0x1A7FBCu;
            return;
        }
    }
    ctx->pc = 0x1A7FACu;
    // 0x1a7fac: 0x0  nop
    ctx->pc = 0x1a7facu;
    // NOP
    ctx->pc = 0x1a7fb0u;
}
