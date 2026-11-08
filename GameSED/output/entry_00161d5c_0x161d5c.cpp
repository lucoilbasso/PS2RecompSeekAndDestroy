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

// Function: entry_00161d5c
// Address: 0x161d5c - 0x161d6c
void entry_00161d5c_0x161d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161d5c_0x161d5c");
#endif

    ctx->pc = 0x161d5cu;

    // 0x161d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161D5Cu;
    {
        const bool branch_taken_0x161d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D5Cu;
        // 0x161d60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d5c) {
            ctx->pc = 0x161D6Cu;
            return;
        }
    }
    ctx->pc = 0x161D64u;
    // 0x161d64: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161d64u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161d68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161d6cu;
}
