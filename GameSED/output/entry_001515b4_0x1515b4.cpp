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

// Function: entry_001515b4
// Address: 0x1515b4 - 0x1515f4
void entry_001515b4_0x1515b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001515b4_0x1515b4");
#endif

    ctx->pc = 0x1515b4u;

    // 0x1515b4: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x1515b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1515b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515bc: 0xc6010414  lwc1        $f1, 0x414($s0)
    ctx->pc = 0x1515bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1515c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1515c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1515c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1515c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1515c8: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x1515c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1515cc: 0xe6020634  swc1        $f2, 0x634($s0)
    ctx->pc = 0x1515ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
    // 0x1515d0: 0xc4a14014  lwc1        $f1, 0x4014($a1)
    ctx->pc = 0x1515d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1515d4: 0x46070832  c.eq.s      $f1, $f7
    ctx->pc = 0x1515d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1515D8u;
    {
        const bool branch_taken_0x1515d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1515d8) {
            ctx->pc = 0x1515F4u;
            return;
        }
    }
    ctx->pc = 0x1515E0u;
    // 0x1515e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1515e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1515e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1515e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1515e8: 0x46070029  min.s       $f0, $f0, $f7
    ctx->pc = 0x1515e8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[7]);
    // 0x1515ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1515ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1515f0: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x1515f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
    ctx->pc = 0x1515f4u;
}
