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

// Function: entry_0010f860
// Address: 0x10f860 - 0x10f870
void entry_0010f860_0x10f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f860_0x10f860");
#endif

    ctx->pc = 0x10f860u;

    // 0x10f860: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f864: 0x122823  negu        $a1, $s2
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x10f868: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F868u;
    SET_GPR_U32(ctx, 31, 0x10F870u);
    ctx->pc = 0x10F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F868u;
    // 0x10f86c: 0x2484d188  addiu       $a0, $a0, -0x2E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F868u, 0x10F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F870u;
}
