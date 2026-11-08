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

// Function: entry_001b1e0c
// Address: 0x1b1e0c - 0x1b1e1c
void entry_001b1e0c_0x1b1e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e0c_0x1b1e0c");
#endif

    switch (ctx->pc) {
        case 0x1b1e18u: goto label_1b1e18;
        default: break;
    }

    ctx->pc = 0x1b1e0cu;

    // 0x1b1e0c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b1e10: 0xc06c4ac  jal         func_1B12B0
    ctx->pc = 0x1B1E10u;
    SET_GPR_U32(ctx, 31, 0x1B1E18u);
    ctx->pc = 0x1B1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E10u;
    // 0x1b1e14: 0x24849a00  addiu       $a0, $a0, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12B0u, 0x1B1E10u, 0x1B1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E18u;
label_1b1e18:
    // 0x1b1e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1e1cu;
}
