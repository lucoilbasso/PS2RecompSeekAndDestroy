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

// Function: entry_001cfcd0
// Address: 0x1cfcd0 - 0x1cfcf4
void entry_001cfcd0_0x1cfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfcd0_0x1cfcd0");
#endif

    ctx->pc = 0x1cfcd0u;

    // 0x1cfcd0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1cfcd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cfcd4: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x1CFCD4u;
    {
        const bool branch_taken_0x1cfcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcd4) {
            ctx->pc = 0x1CFCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFCD4u;
            // 0x1cfcd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFEB8u;
            return;
        }
    }
    ctx->pc = 0x1CFCDCu;
    // 0x1cfcdc: 0x503008c  bgezl       $t0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1CFCDCu;
    {
        const bool branch_taken_0x1cfcdc = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1cfcdc) {
            ctx->pc = 0x1CFCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFCDCu;
            // 0x1cfce0: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF10u;
            return;
        }
    }
    ctx->pc = 0x1CFCE4u;
    // 0x1cfce4: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfce8: 0x5605ffef  bnel        $s0, $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CFCE8u;
    {
        const bool branch_taken_0x1cfce8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cfce8) {
            ctx->pc = 0x1CFCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFCE8u;
            // 0x1cfcec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFCA8u;
            return;
        }
    }
    ctx->pc = 0x1CFCF0u;
    // 0x1cfcf0: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x1cfcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
    ctx->pc = 0x1cfcf4u;
}
