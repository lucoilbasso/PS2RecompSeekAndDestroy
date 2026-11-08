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

// Function: entry_00104738
// Address: 0x104738 - 0x104748
void entry_00104738_0x104738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104738_0x104738");
#endif

    ctx->pc = 0x104738u;

    // 0x104738: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10473c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x10473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x104740: 0xc041228  jal         func_1048A0
    ctx->pc = 0x104740u;
    SET_GPR_U32(ctx, 31, 0x104748u);
    ctx->pc = 0x104744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104740u;
    // 0x104744: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104740u, 0x104748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104748u;
}
