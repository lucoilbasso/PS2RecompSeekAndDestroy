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

// Function: entry_00174dd8
// Address: 0x174dd8 - 0x174de8
void entry_00174dd8_0x174dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174dd8_0x174dd8");
#endif

    ctx->pc = 0x174dd8u;

    // 0x174dd8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174DD8u;
    {
        const bool branch_taken_0x174dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD8u;
        // 0x174ddc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd8) {
            ctx->pc = 0x174DE8u;
            return;
        }
    }
    ctx->pc = 0x174DE0u;
    // 0x174de0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174DE0u;
    SET_GPR_U32(ctx, 31, 0x174DE8u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174DE0u, 0x174DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DE8u;
}
