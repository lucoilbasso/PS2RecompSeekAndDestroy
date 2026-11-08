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

// Function: entry_0019f828
// Address: 0x19f828 - 0x19f84c
void entry_0019f828_0x19f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f828_0x19f828");
#endif

    ctx->pc = 0x19f828u;

    // 0x19f828: 0x0  nop
    ctx->pc = 0x19f828u;
    // NOP
    // 0x19f82c: 0x0  nop
    ctx->pc = 0x19f82cu;
    // NOP
    // 0x19f830: 0x0  nop
    ctx->pc = 0x19f830u;
    // NOP
    // 0x19f834: 0x0  nop
    ctx->pc = 0x19f834u;
    // NOP
    // 0x19f838: 0x0  nop
    ctx->pc = 0x19f838u;
    // NOP
    // 0x19f83c: 0x5050fff8  beql        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F83Cu;
    {
        const bool branch_taken_0x19f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x19f83c) {
            ctx->pc = 0x19F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F83Cu;
            // 0x19f840: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F820u;
            return;
        }
    }
    ctx->pc = 0x19F844u;
    // 0x19f844: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19f844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19f848: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x19f84cu;
}
