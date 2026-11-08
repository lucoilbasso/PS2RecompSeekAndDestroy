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

// Function: entry_0011a674
// Address: 0x11a674 - 0x11a688
void entry_0011a674_0x11a674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a674_0x11a674");
#endif

    ctx->pc = 0x11a674u;

    // 0x11a674: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11A674u;
    {
        const bool branch_taken_0x11a674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A674u;
        // 0x11a678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a674) {
            ctx->pc = 0x11A6A0u;
            return;
        }
    }
    ctx->pc = 0x11A67Cu;
    // 0x11a67c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11a680: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11A680u;
    SET_GPR_U32(ctx, 31, 0x11A688u);
    ctx->pc = 0x11A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A680u;
    // 0x11a684: 0x24844328  addiu       $a0, $a0, 0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11A680u, 0x11A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A688u;
}
