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

// Function: entry_001662c8
// Address: 0x1662c8 - 0x1662e0
void entry_001662c8_0x1662c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001662c8_0x1662c8");
#endif

    ctx->pc = 0x1662c8u;

    // 0x1662c8: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x1662cc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1662CCu;
    {
        const bool branch_taken_0x1662cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1662D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662CCu;
        // 0x1662d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662cc) {
            ctx->pc = 0x166314u;
            return;
        }
    }
    ctx->pc = 0x1662D4u;
    // 0x1662d4: 0x26690008  addiu       $t1, $s3, 0x8
    ctx->pc = 0x1662d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1662d8: 0x264711e4  addiu       $a3, $s2, 0x11E4
    ctx->pc = 0x1662d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1662dc: 0x0  nop
    ctx->pc = 0x1662dcu;
    // NOP
    ctx->pc = 0x1662e0u;
}
