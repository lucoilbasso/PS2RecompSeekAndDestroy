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

// Function: $L3
// Address: 0x1d0b8c - 0x1d0ba4
void ps2__L3_0x1d0b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L3_0x1d0b8c");
#endif

    ctx->pc = 0x1d0b8cu;

    // 0x1d0b8c: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x1d0b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x1d0b90: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x1d0b94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0b98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d0b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d0b9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0B9Cu;
    {
        const bool branch_taken_0x1d0b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B9Cu;
        // 0x1d0ba0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b9c) {
            ctx->pc = 0x1D0BC8u;
            return;
        }
    }
    ctx->pc = 0x1D0BA4u;
}
