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

// Function: entry_00161c7c
// Address: 0x161c7c - 0x161ca0
void entry_00161c7c_0x161c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161c7c_0x161c7c");
#endif

    ctx->pc = 0x161c7cu;

    // 0x161c7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161C80u;
    {
        const bool branch_taken_0x161c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C80u;
        // 0x161c84: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c80) {
            ctx->pc = 0x161CA0u;
            return;
        }
    }
    ctx->pc = 0x161C88u;
    // 0x161c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161c8c: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161c90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161C94u;
    {
        const bool branch_taken_0x161c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C94u;
        // 0x161c98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c94) {
            ctx->pc = 0x161CA4u;
            return;
        }
    }
    ctx->pc = 0x161C9Cu;
    // 0x161c9c: 0x0  nop
    ctx->pc = 0x161c9cu;
    // NOP
    ctx->pc = 0x161ca0u;
}
