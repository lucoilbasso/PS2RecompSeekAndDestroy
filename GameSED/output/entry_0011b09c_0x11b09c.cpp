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

// Function: entry_0011b09c
// Address: 0x11b09c - 0x11b0c4
void entry_0011b09c_0x11b09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b09c_0x11b09c");
#endif

    switch (ctx->pc) {
        case 0x11b0c0u: goto label_11b0c0;
        default: break;
    }

    ctx->pc = 0x11b09cu;

    // 0x11b09c: 0x8e423410  lw          $v0, 0x3410($s2)
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13328)));
    // 0x11b0a0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x11b0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b0a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B0A4u;
    {
        const bool branch_taken_0x11b0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A4u;
        // 0x11b0a8: 0x26443410  addiu       $a0, $s2, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a4) {
            ctx->pc = 0x11B0C4u;
            return;
        }
    }
    ctx->pc = 0x11B0ACu;
    // 0x11b0ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b0b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x11b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b0b8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B0B8u;
    SET_GPR_U32(ctx, 31, 0x11B0C0u);
    ctx->pc = 0x11B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0B8u;
    // 0x11b0bc: 0x24a54780  addiu       $a1, $a1, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B0B8u, 0x11B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0C0u;
label_11b0c0:
    // 0x11b0c0: 0x26443410  addiu       $a0, $s2, 0x3410
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13328));
    ctx->pc = 0x11b0c4u;
}
