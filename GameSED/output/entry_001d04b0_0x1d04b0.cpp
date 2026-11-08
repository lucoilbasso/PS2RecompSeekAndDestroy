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

// Function: entry_001d04b0
// Address: 0x1d04b0 - 0x1d04d4
void entry_001d04b0_0x1d04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d04b0_0x1d04b0");
#endif

    switch (ctx->pc) {
        case 0x1d04c4u: goto label_1d04c4;
        default: break;
    }

    ctx->pc = 0x1d04b0u;

    // 0x1d04b0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1d04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d04b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D04B4u;
    {
        const bool branch_taken_0x1d04b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B4u;
        // 0x1d04b8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b4) {
            ctx->pc = 0x1D04D4u;
            return;
        }
    }
    ctx->pc = 0x1D04BCu;
    // 0x1d04bc: 0xc0740e4  jal         func_1D0390
    ctx->pc = 0x1D04BCu;
    SET_GPR_U32(ctx, 31, 0x1D04C4u);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D04BCu, 0x1D04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04C4u;
label_1d04c4:
    // 0x1d04c4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D04C4u;
    {
        const bool branch_taken_0x1d04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C4u;
        // 0x1d04c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c4) {
            ctx->pc = 0x1D0544u;
            return;
        }
    }
    ctx->pc = 0x1D04CCu;
    // 0x1d04cc: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1d04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d04d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1d04d4u;
}
