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

// Function: entry_0014b0c0
// Address: 0x14b0c0 - 0x14b0e4
void entry_0014b0c0_0x14b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b0c0_0x14b0c0");
#endif

    switch (ctx->pc) {
        case 0x14b0e0u: goto label_14b0e0;
        default: break;
    }

    ctx->pc = 0x14b0c0u;

    // 0x14b0c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b0c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B0C4u;
    {
        const bool branch_taken_0x14b0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b0c4) {
            ctx->pc = 0x14B0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B0C4u;
            // 0x14b0c8: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B0E4u;
            return;
        }
    }
    ctx->pc = 0x14B0CCu;
    // 0x14b0cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0d4: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b0d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B0D8u;
    SET_GPR_U32(ctx, 31, 0x14B0E0u);
    ctx->pc = 0x14B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0D8u;
    // 0x14b0dc: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B0D8u, 0x14B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0E0u;
label_14b0e0:
    // 0x14b0e0: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->pc = 0x14b0e4u;
}
