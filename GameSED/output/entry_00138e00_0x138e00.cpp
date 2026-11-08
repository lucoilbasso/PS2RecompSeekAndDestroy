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

// Function: entry_00138e00
// Address: 0x138e00 - 0x138e14
void entry_00138e00_0x138e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e00_0x138e00");
#endif

    ctx->pc = 0x138e00u;

    // 0x138e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138e04: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x138e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138e0c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x138E0Cu;
    SET_GPR_U32(ctx, 31, 0x138E14u);
    ctx->pc = 0x138E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E0Cu;
    // 0x138e10: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x138E0Cu, 0x138E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E14u;
}
