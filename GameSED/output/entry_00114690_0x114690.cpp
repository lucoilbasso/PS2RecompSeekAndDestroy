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

// Function: entry_00114690
// Address: 0x114690 - 0x11469c
void entry_00114690_0x114690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114690_0x114690");
#endif

    ctx->pc = 0x114690u;

    // 0x114690: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114694: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114694u;
    SET_GPR_U32(ctx, 31, 0x11469Cu);
    ctx->pc = 0x114698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114694u;
    // 0x114698: 0x24844268  addiu       $a0, $a0, 0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114694u, 0x11469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11469Cu;
}
