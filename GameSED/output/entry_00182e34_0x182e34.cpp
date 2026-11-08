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

// Function: entry_00182e34
// Address: 0x182e34 - 0x182e50
void entry_00182e34_0x182e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182e34_0x182e34");
#endif

    ctx->pc = 0x182e34u;

    // 0x182e34: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x182e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x182e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x182E3Cu;
    {
        const bool branch_taken_0x182e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e3c) {
            ctx->pc = 0x182E50u;
            return;
        }
    }
    ctx->pc = 0x182E44u;
    // 0x182e44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182e48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x182E48u;
    {
        const bool branch_taken_0x182e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182e48) {
            ctx->pc = 0x182E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182E48u;
            // 0x182e4c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182E58u;
            return;
        }
    }
    ctx->pc = 0x182E50u;
}
