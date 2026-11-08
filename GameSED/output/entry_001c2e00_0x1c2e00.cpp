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

// Function: entry_001c2e00
// Address: 0x1c2e00 - 0x1c2e20
void entry_001c2e00_0x1c2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2e00_0x1c2e00");
#endif

    ctx->pc = 0x1c2e00u;

    // 0x1c2e00: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2E00u;
    {
        const bool branch_taken_0x1c2e00 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E00u;
        // 0x1c2e04: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e00) {
            ctx->pc = 0x1C2E34u;
            return;
        }
    }
    ctx->pc = 0x1C2E08u;
    // 0x1c2e08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E08u;
    {
        const bool branch_taken_0x1c2e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E08u;
        // 0x1c2e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e08) {
            ctx->pc = 0x1C2E20u;
            return;
        }
    }
    ctx->pc = 0x1C2E10u;
    // 0x1c2e10: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2E10u;
    {
        const bool branch_taken_0x1c2e10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2e10) {
            ctx->pc = 0x1C2E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E10u;
            // 0x1c2e14: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E38u;
            return;
        }
    }
    ctx->pc = 0x1C2E18u;
    // 0x1c2e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2E18u;
    {
        const bool branch_taken_0x1c2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E18u;
        // 0x1c2e1c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e18) {
            ctx->pc = 0x1C2E3Cu;
            return;
        }
    }
    ctx->pc = 0x1C2E20u;
}
