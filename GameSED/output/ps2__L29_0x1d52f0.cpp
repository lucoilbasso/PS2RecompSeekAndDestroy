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

// Function: $L29
// Address: 0x1d52f0 - 0x1d52fc
void ps2__L29_0x1d52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L29_0x1d52f0");
#endif

    ctx->pc = 0x1d52f0u;

    // 0x1d52f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d52f4: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52F4u;
    {
        const bool branch_taken_0x1d52f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F4u;
        // 0x1d52f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f4) {
            ctx->pc = 0x1D5318u;
            return;
        }
    }
    ctx->pc = 0x1D52FCu;
}
