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

// Function: entry_001187b0
// Address: 0x1187b0 - 0x1187c4
void entry_001187b0_0x1187b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187b0_0x1187b0");
#endif

    ctx->pc = 0x1187b0u;

    // 0x1187b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1187B0u;
    {
        const bool branch_taken_0x1187b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B0u;
        // 0x1187b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b0) {
            ctx->pc = 0x1187DCu;
            return;
        }
    }
    ctx->pc = 0x1187B8u;
    // 0x1187b8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1187b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1187bc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1187BCu;
    SET_GPR_U32(ctx, 31, 0x1187C4u);
    ctx->pc = 0x1187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187BCu;
    // 0x1187c0: 0x248442d8  addiu       $a0, $a0, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1187BCu, 0x1187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187C4u;
}
