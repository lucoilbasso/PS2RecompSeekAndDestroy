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

// Function: entry_001a2a6c
// Address: 0x1a2a6c - 0x1a2a9c
void entry_001a2a6c_0x1a2a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a6c_0x1a2a6c");
#endif

    ctx->pc = 0x1a2a6cu;

    // 0x1a2a6c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a2a70: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a2a74: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1a2a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a2a78: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a2a7c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a2a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2a88: 0x0  nop
    ctx->pc = 0x1a2a88u;
    // NOP
    // 0x1a2a8c: 0x0  nop
    ctx->pc = 0x1a2a8cu;
    // NOP
    // 0x1a2a90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a2a90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a2a94: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1a2a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1a2a98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1a2a9cu;
}
