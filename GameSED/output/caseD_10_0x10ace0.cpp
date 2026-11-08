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

// Function: caseD_10
// Address: 0x10ace0 - 0x10acf0
void caseD_10_0x10ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x10ace0");
#endif

    ctx->pc = 0x10ace0u;

    // 0x10ace0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10ace4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ace8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x10ACE8u;
    SET_GPR_U32(ctx, 31, 0x10ACF0u);
    ctx->pc = 0x10ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACE8u;
    // 0x10acec: 0x24843bd8  addiu       $a0, $a0, 0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x10ACE8u, 0x10ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACF0u;
}
