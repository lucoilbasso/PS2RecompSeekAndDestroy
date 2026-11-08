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

// Function: $L16
// Address: 0x1d0ce4 - 0x1d0d04
void ps2__L16_0x1d0ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L16_0x1d0ce4");
#endif

    ctx->pc = 0x1d0ce4u;

label_1d0ce4:
    // 0x1d0ce4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d0ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0ce8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1d0ce8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d0cec: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x1d0cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x1d0cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0cf4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d0cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d0cf8: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0CF8u;
    {
        const bool branch_taken_0x1d0cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cf8) {
            ctx->pc = 0x1D0CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0CF8u;
            // 0x1d0cfc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ce4;
        }
    }
    ctx->pc = 0x1D0D00u;
    // 0x1d0d00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0d04u;
}
