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

// Function: entry_001323e0
// Address: 0x1323e0 - 0x1323ec
void entry_001323e0_0x1323e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001323e0_0x1323e0");
#endif

    switch (ctx->pc) {
        case 0x1323e8u: goto label_1323e8;
        default: break;
    }

    ctx->pc = 0x1323e0u;

    // 0x1323e0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323E0u;
    SET_GPR_U32(ctx, 31, 0x1323E8u);
    ctx->pc = 0x1323E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323E0u;
    // 0x1323e4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323E0u, 0x1323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323E8u;
label_1323e8:
    // 0x1323e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1323ecu;
}
