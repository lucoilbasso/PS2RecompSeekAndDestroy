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

// Function: entry_0016e934
// Address: 0x16e934 - 0x16e954
void entry_0016e934_0x16e934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e934_0x16e934");
#endif

    ctx->pc = 0x16e934u;

    // 0x16e934: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e938: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E938u;
    {
        const bool branch_taken_0x16e938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e938) {
            ctx->pc = 0x16E93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E938u;
            // 0x16e93c: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E954u;
            return;
        }
    }
    ctx->pc = 0x16E940u;
    // 0x16e940: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16e944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e948: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16e948u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16e94c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16e950: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16e954u;
}
