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

// Function: entry_0018d2b0
// Address: 0x18d2b0 - 0x18d2e0
void entry_0018d2b0_0x18d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2b0_0x18d2b0");
#endif

    switch (ctx->pc) {
        case 0x18d2d4u: goto label_18d2d4;
        default: break;
    }

    ctx->pc = 0x18d2b0u;

    // 0x18d2b0: 0x10c20219  beq         $a2, $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x18D2B0u;
    {
        const bool branch_taken_0x18d2b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B0u;
        // 0x18d2b4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b0) {
            ctx->pc = 0x18DB18u;
            return;
        }
    }
    ctx->pc = 0x18D2B8u;
    // 0x18d2b8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D2B8u;
    {
        const bool branch_taken_0x18d2b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B8u;
        // 0x18d2bc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b8) {
            ctx->pc = 0x18D2E0u;
            return;
        }
    }
    ctx->pc = 0x18D2C0u;
    // 0x18d2c0: 0x8623023c  lh          $v1, 0x23C($s1)
    ctx->pc = 0x18d2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x18d2c4: 0x1460024b  bnez        $v1, . + 4 + (0x24B << 2)
    ctx->pc = 0x18D2C4u;
    {
        const bool branch_taken_0x18d2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C4u;
        // 0x18d2c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2c4) {
            ctx->pc = 0x18DBF4u;
            return;
        }
    }
    ctx->pc = 0x18D2CCu;
    // 0x18d2cc: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x18D2CCu;
    SET_GPR_U32(ctx, 31, 0x18D2D4u);
    ctx->pc = 0x18D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2CCu;
    // 0x18d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x18D2CCu, 0x18D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2D4u;
label_18d2d4:
    // 0x18d2d4: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x18D2D4u;
    {
        const bool branch_taken_0x18d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D4u;
        // 0x18d2d8: 0x8e320214  lw          $s2, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2d4) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D2DCu;
    // 0x18d2dc: 0x0  nop
    ctx->pc = 0x18d2dcu;
    // NOP
    ctx->pc = 0x18d2e0u;
}
