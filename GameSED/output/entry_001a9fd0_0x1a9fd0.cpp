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

// Function: entry_001a9fd0
// Address: 0x1a9fd0 - 0x1aa000
void entry_001a9fd0_0x1a9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fd0_0x1a9fd0");
#endif

    ctx->pc = 0x1a9fd0u;

    // 0x1a9fd0: 0xc4850028  lwc1        $f5, 0x28($a0)
    ctx->pc = 0x1a9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a9fd4: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x1a9fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1a9fd8: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x1a9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9fdc: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x1a9fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a9fe0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x1a9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fe4: 0x0  nop
    ctx->pc = 0x1a9fe4u;
    // NOP
    // 0x1a9fe8: 0x0  nop
    ctx->pc = 0x1a9fe8u;
    // NOP
    // 0x1a9fec: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1a9fecu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[7]); }
    // 0x1a9ff0: 0x0  nop
    ctx->pc = 0x1a9ff0u;
    // NOP
    // 0x1a9ff4: 0x0  nop
    ctx->pc = 0x1a9ff4u;
    // NOP
    // 0x1a9ff8: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1a9ff8u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x1a9ffc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1a9ffcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    ctx->pc = 0x1aa000u;
}
