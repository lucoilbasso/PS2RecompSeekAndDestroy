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

// Function: entry_001dfe70
// Address: 0x1dfe70 - 0x1dfe80
void entry_001dfe70_0x1dfe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe70_0x1dfe70");
#endif

    ctx->pc = 0x1dfe70u;

    // 0x1dfe70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe74: 0x24a582c0  addiu       $a1, $a1, -0x7D40
    ctx->pc = 0x1dfe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    // 0x1dfe78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DFE78u;
    SET_GPR_U32(ctx, 31, 0x1DFE80u);
    ctx->pc = 0x1DFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE78u;
    // 0x1dfe7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DFE78u, 0x1DFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE80u;
}
