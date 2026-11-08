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

// Function: caseD_3b
// Address: 0x165e48 - 0x165e70
void caseD_3b_0x165e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3b_0x165e48");
#endif

    switch (ctx->pc) {
        case 0x165e64u: goto label_165e64;
        default: break;
    }

    ctx->pc = 0x165e48u;

    // 0x165e48: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165e4c: 0x544000f8  bnel        $v0, $zero, . + 4 + (0xF8 << 2)
    ctx->pc = 0x165E4Cu;
    {
        const bool branch_taken_0x165e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e4c) {
            ctx->pc = 0x165E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E4Cu;
            // 0x165e50: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165E54u;
    // 0x165e54: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x165e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e5c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x165E5Cu;
    SET_GPR_U32(ctx, 31, 0x165E64u);
    ctx->pc = 0x165E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E5Cu;
    // 0x165e60: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165E5Cu, 0x165E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E64u;
label_165e64:
    // 0x165e64: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165e68: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x165E68u;
    {
        const bool branch_taken_0x165e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E68u;
        // 0x165e6c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e68) {
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165E70u;
}
