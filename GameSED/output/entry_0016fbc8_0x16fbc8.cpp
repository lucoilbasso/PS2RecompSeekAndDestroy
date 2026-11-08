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

// Function: entry_0016fbc8
// Address: 0x16fbc8 - 0x16fbec
void entry_0016fbc8_0x16fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fbc8_0x16fbc8");
#endif

    switch (ctx->pc) {
        case 0x16fbe4u: goto label_16fbe4;
        default: break;
    }

    ctx->pc = 0x16fbc8u;

    // 0x16fbc8: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fbcc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FBCCu;
    {
        const bool branch_taken_0x16fbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fbcc) {
            ctx->pc = 0x16FBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FBCCu;
            // 0x16fbd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FBECu;
            return;
        }
    }
    ctx->pc = 0x16FBD4u;
    // 0x16fbd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fbd8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16fbdc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FBDCu;
    SET_GPR_U32(ctx, 31, 0x16FBE4u);
    ctx->pc = 0x16FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBDCu;
    // 0x16fbe0: 0x24a575b0  addiu       $a1, $a1, 0x75B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FBDCu, 0x16FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBE4u;
label_16fbe4:
    // 0x16fbe4: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fbe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x16fbecu;
}
