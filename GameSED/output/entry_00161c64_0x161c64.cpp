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

// Function: entry_00161c64
// Address: 0x161c64 - 0x161c74
void entry_00161c64_0x161c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161c64_0x161c64");
#endif

    ctx->pc = 0x161c64u;

    // 0x161c64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x161C64u;
    {
        const bool branch_taken_0x161c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C64u;
        // 0x161c68: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c64) {
            ctx->pc = 0x161C74u;
            return;
        }
    }
    ctx->pc = 0x161C6Cu;
    // 0x161c6c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x161c6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x161c70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161c74u;
}
