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

// Function: entry_00142ca8
// Address: 0x142ca8 - 0x142cc0
void entry_00142ca8_0x142ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ca8_0x142ca8");
#endif

    switch (ctx->pc) {
        case 0x142cbcu: goto label_142cbc;
        default: break;
    }

    ctx->pc = 0x142ca8u;

    // 0x142ca8: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x142ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x142cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x142CACu;
    {
        const bool branch_taken_0x142cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cac) {
            ctx->pc = 0x142CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CACu;
            // 0x142cb0: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CC0u;
            return;
        }
    }
    ctx->pc = 0x142CB4u;
    // 0x142cb4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x142CB4u;
    SET_GPR_U32(ctx, 31, 0x142CBCu);
    ctx->pc = 0x142CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CB4u;
    // 0x142cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CB4u, 0x142CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CBCu;
label_142cbc:
    // 0x142cbc: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    ctx->pc = 0x142cc0u;
}
