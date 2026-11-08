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

// Function: entry_00100520
// Address: 0x100520 - 0x10052c
void entry_00100520_0x100520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100520_0x100520");
#endif

    ctx->pc = 0x100520u;

    // 0x100520: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x100520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x100524: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100524u;
    SET_GPR_U32(ctx, 31, 0x10052Cu);
    ctx->pc = 0x100528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100524u;
    // 0x100528: 0x24841930  addiu       $a0, $a0, 0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100524u, 0x10052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10052Cu;
}
