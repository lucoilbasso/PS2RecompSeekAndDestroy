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

// Function: entry_00182d8c
// Address: 0x182d8c - 0x182dac
void entry_00182d8c_0x182d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d8c_0x182d8c");
#endif

    ctx->pc = 0x182d8cu;

    // 0x182d8c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x182d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d90: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x182D90u;
    {
        const bool branch_taken_0x182d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d90) {
            ctx->pc = 0x182D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182D90u;
            // 0x182d94: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x182DACu;
            return;
        }
    }
    ctx->pc = 0x182D98u;
    // 0x182d98: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x182d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182da0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x182DA0u;
    {
        const bool branch_taken_0x182da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182da0) {
            ctx->pc = 0x182E50u;
            return;
        }
    }
    ctx->pc = 0x182DA8u;
    // 0x182da8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x182da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x182dacu;
}
