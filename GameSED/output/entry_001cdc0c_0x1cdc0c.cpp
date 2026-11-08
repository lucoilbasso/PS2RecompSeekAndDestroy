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

// Function: entry_001cdc0c
// Address: 0x1cdc0c - 0x1cdc28
void entry_001cdc0c_0x1cdc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc0c_0x1cdc0c");
#endif

    ctx->pc = 0x1cdc0cu;

    // 0x1cdc0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdc10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdc14: 0x1064001e  beq         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CDC14u;
    {
        const bool branch_taken_0x1cdc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC14u;
        // 0x1cdc18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc14) {
            ctx->pc = 0x1CDC90u;
            return;
        }
    }
    ctx->pc = 0x1CDC1Cu;
    // 0x1cdc1c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdc20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdc24: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cdc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1cdc28u;
}
