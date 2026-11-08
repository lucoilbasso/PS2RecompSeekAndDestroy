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

// Function: entry_0018ce74
// Address: 0x18ce74 - 0x18ce90
void entry_0018ce74_0x18ce74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce74_0x18ce74");
#endif

    ctx->pc = 0x18ce74u;

    // 0x18ce74: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18ce78: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CE78u;
    {
        const bool branch_taken_0x18ce78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE78u;
        // 0x18ce7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce78) {
            ctx->pc = 0x18CED0u;
            return;
        }
    }
    ctx->pc = 0x18CE80u;
    // 0x18ce80: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x18ce80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce84: 0x250a0002  addiu       $t2, $t0, 0x2
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x18ce88: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ce8c: 0x0  nop
    ctx->pc = 0x18ce8cu;
    // NOP
    ctx->pc = 0x18ce90u;
}
