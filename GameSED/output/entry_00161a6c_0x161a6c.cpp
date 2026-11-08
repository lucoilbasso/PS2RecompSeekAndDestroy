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

// Function: entry_00161a6c
// Address: 0x161a6c - 0x161a7c
void entry_00161a6c_0x161a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a6c_0x161a6c");
#endif

    ctx->pc = 0x161a6cu;

    // 0x161a6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161A6Cu;
    {
        const bool branch_taken_0x161a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A6Cu;
        // 0x161a70: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a6c) {
            ctx->pc = 0x161A7Cu;
            return;
        }
    }
    ctx->pc = 0x161A74u;
    // 0x161a74: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161a74u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161a78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161a7cu;
}
