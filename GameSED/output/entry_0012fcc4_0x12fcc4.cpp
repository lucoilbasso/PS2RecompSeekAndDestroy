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

// Function: entry_0012fcc4
// Address: 0x12fcc4 - 0x12fcf0
void entry_0012fcc4_0x12fcc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcc4_0x12fcc4");
#endif

    ctx->pc = 0x12fcc4u;

    // 0x12fcc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fcc8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12fccc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x12fcccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x12fcd0: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12fcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fcd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCD4u;
        // 0x12fcd8: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FD00u;
            return;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0x5680ff44  bnel        $s4, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x12FCDCu;
    {
        const bool branch_taken_0x12fcdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcdc) {
            ctx->pc = 0x12FCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCDCu;
            // 0x12fce0: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9F0u;
            return;
        }
    }
    ctx->pc = 0x12FCE4u;
    // 0x12fce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCE4u;
        // 0x12fce8: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12FCECu;
    // 0x12fcec: 0x0  nop
    ctx->pc = 0x12fcecu;
    // NOP
    ctx->pc = 0x12fcf0u;
}
