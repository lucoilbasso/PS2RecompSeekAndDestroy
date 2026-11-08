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

// Function: caseD_2
// Address: 0x1b21a0 - 0x1b21c0
void caseD_2_0x1b21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b21a0");
#endif

    ctx->pc = 0x1b21a0u;

    // 0x1b21a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b21a4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A4u;
        // 0x1b21a8: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B21E0u;
            return;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1b21acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b21b0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B21B0u;
    {
        const bool branch_taken_0x1b21b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21b0) {
            ctx->pc = 0x1B21E0u;
            return;
        }
    }
    ctx->pc = 0x1B21B8u;
    // 0x1b21b8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1b21bc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x1b21c0u;
}
