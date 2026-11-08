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

// Function: entry_0019086c
// Address: 0x19086c - 0x190884
void entry_0019086c_0x19086c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019086c_0x19086c");
#endif

    ctx->pc = 0x19086cu;

    // 0x19086c: 0x46010004  c1          0x10004
    ctx->pc = 0x19086cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x190870: 0x0  nop
    ctx->pc = 0x190870u;
    // NOP
    // 0x190874: 0x0  nop
    ctx->pc = 0x190874u;
    // NOP
    // 0x190878: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x190878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x19087c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x190880: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x190880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x190884u;
}
