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

// Function: entry_0014afd0
// Address: 0x14afd0 - 0x14b000
void entry_0014afd0_0x14afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014afd0_0x14afd0");
#endif

    switch (ctx->pc) {
        case 0x14afd8u: goto label_14afd8;
        default: break;
    }

    ctx->pc = 0x14afd0u;

    // 0x14afd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AFD0u;
    SET_GPR_U32(ctx, 31, 0x14AFD8u);
    ctx->pc = 0x14AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFD0u;
    // 0x14afd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AFD0u, 0x14AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFD8u;
label_14afd8:
    // 0x14afd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14afd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afdc: 0x5071000e  beql        $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14AFDCu;
    {
        const bool branch_taken_0x14afdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x14afdc) {
            ctx->pc = 0x14AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFDCu;
            // 0x14afe0: 0x8e62018c  lw          $v0, 0x18C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            return;
        }
    }
    ctx->pc = 0x14AFE4u;
    // 0x14afe4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x14afe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14afe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AFE8u;
    {
        const bool branch_taken_0x14afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14afe8) {
            ctx->pc = 0x14AFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFE8u;
            // 0x14afec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B000u;
            return;
        }
    }
    ctx->pc = 0x14AFF0u;
    // 0x14aff0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AFF0u;
    {
        const bool branch_taken_0x14aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aff0) {
            ctx->pc = 0x14AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFF0u;
            // 0x14aff4: 0x8e62024c  lw          $v0, 0x24C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            return;
        }
    }
    ctx->pc = 0x14AFF8u;
    // 0x14aff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14AFF8u;
    {
        const bool branch_taken_0x14aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFF8u;
        // 0x14affc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aff8) {
            ctx->pc = 0x14B020u;
            return;
        }
    }
    ctx->pc = 0x14B000u;
}
