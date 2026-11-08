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

// Function: entry_001baca0
// Address: 0x1baca0 - 0x1bacd0
void entry_001baca0_0x1baca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baca0_0x1baca0");
#endif

    ctx->pc = 0x1baca0u;

    // 0x1baca0: 0xac80c0a4  sw          $zero, -0x3F5C($a0)
    ctx->pc = 0x1baca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951076), GPR_U32(ctx, 0));
    // 0x1baca4: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BACA4u;
    {
        const bool branch_taken_0x1baca4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACA4u;
        // 0x1baca8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baca4) {
            ctx->pc = 0x1BACFCu;
            return;
        }
    }
    ctx->pc = 0x1BACACu;
    // 0x1bacac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BACACu;
    {
        const bool branch_taken_0x1bacac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACACu;
        // 0x1bacb0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacac) {
            ctx->pc = 0x1BACFCu;
            return;
        }
    }
    ctx->pc = 0x1BACB4u;
    // 0x1bacb4: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BACB4u;
    {
        const bool branch_taken_0x1bacb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB4u;
        // 0x1bacb8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacb4) {
            ctx->pc = 0x1BACFCu;
            return;
        }
    }
    ctx->pc = 0x1BACBCu;
    // 0x1bacbc: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951056)));
    // 0x1bacc0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BACC0u;
    {
        const bool branch_taken_0x1bacc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC0u;
        // 0x1bacc4: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacc0) {
            ctx->pc = 0x1BACD0u;
            return;
        }
    }
    ctx->pc = 0x1BACC8u;
    // 0x1bacc8: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BACC8u;
    SET_GPR_U32(ctx, 31, 0x1BACD0u);
    ctx->pc = 0x1BACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACC8u;
    // 0x1baccc: 0x2484b030  addiu       $a0, $a0, -0x4FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BACC8u, 0x1BACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACD0u;
}
