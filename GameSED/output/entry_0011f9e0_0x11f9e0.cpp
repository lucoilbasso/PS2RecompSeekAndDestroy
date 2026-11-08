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

// Function: entry_0011f9e0
// Address: 0x11f9e0 - 0x11f9f8
void entry_0011f9e0_0x11f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f9e0_0x11f9e0");
#endif

    ctx->pc = 0x11f9e0u;

    // 0x11f9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f9e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11f9e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f9ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11F9ECu;
    {
        const bool branch_taken_0x11f9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f9ec) {
            ctx->pc = 0x11F9F8u;
            return;
        }
    }
    ctx->pc = 0x11F9F4u;
    // 0x11f9f4: 0xc7828080  lwc1        $f2, -0x7F80($gp)
    ctx->pc = 0x11f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x11f9f8u;
}
