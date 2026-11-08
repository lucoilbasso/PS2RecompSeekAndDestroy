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

// Function: entry_0019e61c
// Address: 0x19e61c - 0x19e62c
void entry_0019e61c_0x19e61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e61c_0x19e61c");
#endif

    switch (ctx->pc) {
        case 0x19e628u: goto label_19e628;
        default: break;
    }

    ctx->pc = 0x19e61cu;

    // 0x19e61c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e620: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x19E620u;
    SET_GPR_U32(ctx, 31, 0x19E628u);
    ctx->pc = 0x19E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E620u;
    // 0x19e624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x19E620u, 0x19E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E628u;
label_19e628:
    // 0x19e628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x19e62cu;
}
