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

// Function: caseD_36
// Address: 0x165e98 - 0x165ec0
void caseD_36_0x165e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_36_0x165e98");
#endif

    switch (ctx->pc) {
        case 0x165eb4u: goto label_165eb4;
        default: break;
    }

    ctx->pc = 0x165e98u;

    // 0x165e98: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165e9c: 0x544000e4  bnel        $v0, $zero, . + 4 + (0xE4 << 2)
    ctx->pc = 0x165E9Cu;
    {
        const bool branch_taken_0x165e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e9c) {
            ctx->pc = 0x165EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E9Cu;
            // 0x165ea0: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165EA4u;
    // 0x165ea4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x165ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165eac: 0xc068584  jal         func_1A1610
    ctx->pc = 0x165EACu;
    SET_GPR_U32(ctx, 31, 0x165EB4u);
    ctx->pc = 0x165EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EACu;
    // 0x165eb0: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165EACu, 0x165EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EB4u;
label_165eb4:
    // 0x165eb4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165eb8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x165EB8u;
    {
        const bool branch_taken_0x165eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EB8u;
        // 0x165ebc: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165eb8) {
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165EC0u;
}
