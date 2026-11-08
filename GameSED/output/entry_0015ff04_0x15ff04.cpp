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

// Function: entry_0015ff04
// Address: 0x15ff04 - 0x15ff30
void entry_0015ff04_0x15ff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff04_0x15ff04");
#endif

    ctx->pc = 0x15ff04u;

    // 0x15ff04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ff08: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15FF08u;
    {
        const bool branch_taken_0x15ff08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ff08) {
            ctx->pc = 0x15FF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF08u;
            // 0x15ff0c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF50u;
            return;
        }
    }
    ctx->pc = 0x15FF10u;
    // 0x15ff10: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15ff14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF14u;
    {
        const bool branch_taken_0x15ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF14u;
        // 0x15ff18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff14) {
            ctx->pc = 0x15FF30u;
            return;
        }
    }
    ctx->pc = 0x15FF1Cu;
    // 0x15ff1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ff20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FF20u;
    {
        const bool branch_taken_0x15ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF20u;
        // 0x15ff24: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff20) {
            ctx->pc = 0x15FF40u;
            return;
        }
    }
    ctx->pc = 0x15FF28u;
    // 0x15ff28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15FF28u;
    {
        const bool branch_taken_0x15ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF28u;
        // 0x15ff2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff28) {
            ctx->pc = 0x15FF88u;
            return;
        }
    }
    ctx->pc = 0x15FF30u;
}
