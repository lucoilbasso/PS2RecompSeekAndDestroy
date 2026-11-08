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

// Function: entry_0014f63c
// Address: 0x14f63c - 0x14f654
void entry_0014f63c_0x14f63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f63c_0x14f63c");
#endif

    ctx->pc = 0x14f63cu;

    // 0x14f63c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14f63cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14f640: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14f640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f644: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F644u;
    {
        const bool branch_taken_0x14f644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F644u;
        // 0x14f648: 0x8c900690  lw          $s0, 0x690($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f644) {
            ctx->pc = 0x14F654u;
            return;
        }
    }
    ctx->pc = 0x14F64Cu;
    // 0x14f64c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x14f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x14f650: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14f650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x14f654u;
}
