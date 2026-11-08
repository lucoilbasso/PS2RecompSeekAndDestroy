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

// Function: entry_001ab8a8
// Address: 0x1ab8a8 - 0x1ab8bc
void entry_001ab8a8_0x1ab8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab8a8_0x1ab8a8");
#endif

    switch (ctx->pc) {
        case 0x1ab8b4u: goto label_1ab8b4;
        default: break;
    }

    ctx->pc = 0x1ab8a8u;

    // 0x1ab8a8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab8ac: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB8ACu;
    SET_GPR_U32(ctx, 31, 0x1AB8B4u);
    ctx->pc = 0x1AB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8ACu;
    // 0x1ab8b0: 0x248497b0  addiu       $a0, $a0, -0x6850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB8ACu, 0x1AB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8B4u;
label_1ab8b4:
    // 0x1ab8b4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1AB8B4u;
    {
        const bool branch_taken_0x1ab8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B4u;
        // 0x1ab8b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b4) {
            ctx->pc = 0x1ABB64u;
            return;
        }
    }
    ctx->pc = 0x1AB8BCu;
}
