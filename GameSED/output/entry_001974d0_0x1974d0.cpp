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

// Function: entry_001974d0
// Address: 0x1974d0 - 0x1974dc
void entry_001974d0_0x1974d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001974d0_0x1974d0");
#endif

    switch (ctx->pc) {
        case 0x1974d8u: goto label_1974d8;
        default: break;
    }

    ctx->pc = 0x1974d0u;

    // 0x1974d0: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1974D0u;
    SET_GPR_U32(ctx, 31, 0x1974D8u);
    ctx->pc = 0x1974D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974D0u;
    // 0x1974d4: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1974D0u, 0x1974D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974D8u;
label_1974d8:
    // 0x1974d8: 0x8ed101b4  lw          $s1, 0x1B4($s6)
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    ctx->pc = 0x1974dcu;
}
