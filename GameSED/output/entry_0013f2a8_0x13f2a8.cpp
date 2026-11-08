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

// Function: entry_0013f2a8
// Address: 0x13f2a8 - 0x13f2e0
void entry_0013f2a8_0x13f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f2a8_0x13f2a8");
#endif

    switch (ctx->pc) {
        case 0x13f2bcu: goto label_13f2bc;
        default: break;
    }

    ctx->pc = 0x13f2a8u;

    // 0x13f2a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13f2ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13f2b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f2b4: 0xc061a46  jal         func_186918
    ctx->pc = 0x13F2B4u;
    SET_GPR_U32(ctx, 31, 0x13F2BCu);
    ctx->pc = 0x13F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2B4u;
    // 0x13f2b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F2B4u, 0x13F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2BCu;
label_13f2bc:
    // 0x13f2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F2C0u;
    {
        const bool branch_taken_0x13f2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2C0u;
        // 0x13f2c4: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2c0) {
            ctx->pc = 0x13F2E0u;
            return;
        }
    }
    ctx->pc = 0x13F2C8u;
    // 0x13f2c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13f2cc: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13f2d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F2D0u;
    {
        const bool branch_taken_0x13f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f2d0) {
            ctx->pc = 0x13F2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F2D0u;
            // 0x13f2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F2E4u;
            return;
        }
    }
    ctx->pc = 0x13F2D8u;
    // 0x13f2d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F2D8u;
    {
        const bool branch_taken_0x13f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2D8u;
        // 0x13f2dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2d8) {
            ctx->pc = 0x13F2E4u;
            return;
        }
    }
    ctx->pc = 0x13F2E0u;
}
