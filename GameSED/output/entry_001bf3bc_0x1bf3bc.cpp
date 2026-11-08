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

// Function: entry_001bf3bc
// Address: 0x1bf3bc - 0x1bf3cc
void entry_001bf3bc_0x1bf3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf3bc_0x1bf3bc");
#endif

    switch (ctx->pc) {
        case 0x1bf3c4u: goto label_1bf3c4;
        default: break;
    }

    ctx->pc = 0x1bf3bcu;

    // 0x1bf3bc: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF3BCu;
    SET_GPR_U32(ctx, 31, 0x1BF3C4u);
    ctx->pc = 0x1BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3BCu;
    // 0x1bf3c0: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF3BCu, 0x1BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3C4u;
label_1bf3c4:
    // 0x1bf3c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1BF3C4u;
    {
        const bool branch_taken_0x1bf3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C4u;
        // 0x1bf3c8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3c4) {
            ctx->pc = 0x1BF4D8u;
            return;
        }
    }
    ctx->pc = 0x1BF3CCu;
}
