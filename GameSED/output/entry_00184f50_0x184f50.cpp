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

// Function: entry_00184f50
// Address: 0x184f50 - 0x184fa4
void entry_00184f50_0x184f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184f50_0x184f50");
#endif

    ctx->pc = 0x184f50u;

    // 0x184f50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f58: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x184f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184f5c: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x184f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x184f60: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x184f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x184f64: 0x0  nop
    ctx->pc = 0x184f64u;
    // NOP
    // 0x184f68: 0x0  nop
    ctx->pc = 0x184f68u;
    // NOP
    // 0x184f6c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x184f6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x184f70: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x184f74: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x184f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x184f78: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x184f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184f7c: 0x0  nop
    ctx->pc = 0x184f7cu;
    // NOP
    // 0x184f80: 0x0  nop
    ctx->pc = 0x184f80u;
    // NOP
    // 0x184f84: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x184f84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x184f88: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x184f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x184f8c: 0x0  nop
    ctx->pc = 0x184f8cu;
    // NOP
    // 0x184f90: 0x0  nop
    ctx->pc = 0x184f90u;
    // NOP
    // 0x184f94: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x184f94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x184f98: 0xe6020038  swc1        $f2, 0x38($s0)
    ctx->pc = 0x184f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x184f9c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x184f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x184fa0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x184fa4u;
}
