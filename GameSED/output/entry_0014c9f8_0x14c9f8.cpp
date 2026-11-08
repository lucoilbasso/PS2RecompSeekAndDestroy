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

// Function: entry_0014c9f8
// Address: 0x14c9f8 - 0x14ca08
void entry_0014c9f8_0x14c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c9f8_0x14c9f8");
#endif

    ctx->pc = 0x14c9f8u;

    // 0x14c9f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c9fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14c9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca00: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14CA00u;
    SET_GPR_U32(ctx, 31, 0x14CA08u);
    ctx->pc = 0x14CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA00u;
    // 0x14ca04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14CA00u, 0x14CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA08u;
}
