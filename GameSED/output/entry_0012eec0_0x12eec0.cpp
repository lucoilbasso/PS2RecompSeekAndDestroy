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

// Function: entry_0012eec0
// Address: 0x12eec0 - 0x12eecc
void entry_0012eec0_0x12eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eec0_0x12eec0");
#endif

    switch (ctx->pc) {
        case 0x12eec8u: goto label_12eec8;
        default: break;
    }

    ctx->pc = 0x12eec0u;

    // 0x12eec0: 0xc04c92a  jal         func_1324A8
    ctx->pc = 0x12EEC0u;
    SET_GPR_U32(ctx, 31, 0x12EEC8u);
    ctx->pc = 0x12EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEC0u;
    // 0x12eec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324A8u, 0x12EEC0u, 0x12EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEC8u;
label_12eec8:
    // 0x12eec8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x12eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->pc = 0x12eeccu;
}
