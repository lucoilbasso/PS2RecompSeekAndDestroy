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

// Function: caseD_3
// Address: 0x165ee0 - 0x165f04
void caseD_3_0x165ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x165ee0");
#endif

    switch (ctx->pc) {
        case 0x165efcu: goto label_165efc;
        default: break;
    }

    ctx->pc = 0x165ee0u;

    // 0x165ee0: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165ee4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x165EE4u;
    {
        const bool branch_taken_0x165ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ee4) {
            ctx->pc = 0x165EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165EE4u;
            // 0x165ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F04u;
            return;
        }
    }
    ctx->pc = 0x165EECu;
    // 0x165eec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x165ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ef4: 0xc068584  jal         func_1A1610
    ctx->pc = 0x165EF4u;
    SET_GPR_U32(ctx, 31, 0x165EFCu);
    ctx->pc = 0x165EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EF4u;
    // 0x165ef8: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165EF4u, 0x165EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EFCu;
label_165efc:
    // 0x165efc: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165f04u;
}
