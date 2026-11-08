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

// Function: entry_001be4a0
// Address: 0x1be4a0 - 0x1be4b8
void entry_001be4a0_0x1be4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be4a0_0x1be4a0");
#endif

    switch (ctx->pc) {
        case 0x1be4b4u: goto label_1be4b4;
        default: break;
    }

    ctx->pc = 0x1be4a0u;

    // 0x1be4a0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1be4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4a8: 0x24c6dc00  addiu       $a2, $a2, -0x2400
    ctx->pc = 0x1be4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958080));
    // 0x1be4ac: 0xc06fa2a  jal         func_1BE8A8
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x1BE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4ACu;
    // 0x1be4b0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A8u, 0x1BE4ACu, 0x1BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be4b8u;
}
