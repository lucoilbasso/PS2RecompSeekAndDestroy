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

// Function: entry_001c2af8
// Address: 0x1c2af8 - 0x1c2b18
void entry_001c2af8_0x1c2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2af8_0x1c2af8");
#endif

    ctx->pc = 0x1c2af8u;

    // 0x1c2af8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2AF8u;
    {
        const bool branch_taken_0x1c2af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AF8u;
        // 0x1c2afc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2af8) {
            ctx->pc = 0x1C2B34u;
            return;
        }
    }
    ctx->pc = 0x1C2B00u;
    // 0x1c2b00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B00u;
    {
        const bool branch_taken_0x1c2b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B00u;
        // 0x1c2b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b00) {
            ctx->pc = 0x1C2B18u;
            return;
        }
    }
    ctx->pc = 0x1C2B08u;
    // 0x1c2b08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B08u;
        // 0x1c2b0c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1C2B10u;
    // 0x1c2b10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2B10u;
    {
        const bool branch_taken_0x1c2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B10u;
        // 0x1c2b14: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b10) {
            ctx->pc = 0x1C2B40u;
            return;
        }
    }
    ctx->pc = 0x1C2B18u;
}
