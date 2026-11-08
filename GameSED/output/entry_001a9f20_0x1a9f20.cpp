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

// Function: entry_001a9f20
// Address: 0x1a9f20 - 0x1a9f64
void entry_001a9f20_0x1a9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9f20_0x1a9f20");
#endif

    ctx->pc = 0x1a9f20u;

    // 0x1a9f20: 0x46084882  mul.s       $f2, $f9, $f8
    ctx->pc = 0x1a9f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a9f24: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x1a9f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1a9f28: 0x0  nop
    ctx->pc = 0x1a9f28u;
    // NOP
    // 0x1a9f2c: 0x0  nop
    ctx->pc = 0x1a9f2cu;
    // NOP
    // 0x1a9f30: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x1a9f30u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[7]); }
    // 0x1a9f34: 0x0  nop
    ctx->pc = 0x1a9f34u;
    // NOP
    // 0x1a9f38: 0x0  nop
    ctx->pc = 0x1a9f38u;
    // NOP
    // 0x1a9f3c: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1a9f3cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x1a9f40: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x1a9f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1a9f44: 0x0  nop
    ctx->pc = 0x1a9f44u;
    // NOP
    // 0x1a9f48: 0x0  nop
    ctx->pc = 0x1a9f48u;
    // NOP
    // 0x1a9f4c: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1a9f4cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[7]); }
    // 0x1a9f50: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1a9f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a9f54: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x1a9f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x1a9f58: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1a9f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1a9f5c: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x1a9f5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1a9f60: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1a9f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    ctx->pc = 0x1a9f64u;
}
