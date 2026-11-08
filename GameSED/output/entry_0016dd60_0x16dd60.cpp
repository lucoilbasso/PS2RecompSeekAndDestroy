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

// Function: entry_0016dd60
// Address: 0x16dd60 - 0x16dd70
void entry_0016dd60_0x16dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd60_0x16dd60");
#endif

    ctx->pc = 0x16dd60u;

    // 0x16dd60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16dd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dd64: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16DD64u;
    {
        const bool branch_taken_0x16dd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD64u;
        // 0x16dd68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd64) {
            ctx->pc = 0x16DDA8u;
            return;
        }
    }
    ctx->pc = 0x16DD6Cu;
    // 0x16dd6c: 0xc78084b8  lwc1        $f0, -0x7B48($gp)
    ctx->pc = 0x16dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x16dd70u;
}
