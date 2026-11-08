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

// Function: entry_0014ac2c
// Address: 0x14ac2c - 0x14ac3c
void entry_0014ac2c_0x14ac2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac2c_0x14ac2c");
#endif

    ctx->pc = 0x14ac2cu;

    // 0x14ac2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ac30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14ac30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac34: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14AC34u;
    SET_GPR_U32(ctx, 31, 0x14AC3Cu);
    ctx->pc = 0x14AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC34u;
    // 0x14ac38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14AC34u, 0x14AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC3Cu;
}
