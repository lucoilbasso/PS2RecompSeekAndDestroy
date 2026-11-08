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

// Function: $L5
// Address: 0x1d0ba4 - 0x1d0bc8
void ps2__L5_0x1d0ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x1d0ba4");
#endif

    ctx->pc = 0x1d0ba4u;

label_1d0ba4:
    // 0x1d0ba4: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x1d0ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x1d0ba8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d0ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d0bac: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x1d0bacu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0bb0: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x1d0bb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x1d0bb4: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x1d0bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x1d0bb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0bbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d0bc0: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0BC0u;
    {
        const bool branch_taken_0x1d0bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BC0u;
        // 0x1d0bc4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bc0) {
            ctx->pc = 0x1D0BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ba4;
        }
    }
    ctx->pc = 0x1D0BC8u;
}
