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

// Function: entry_0018bdd4
// Address: 0x18bdd4 - 0x18bde8
void entry_0018bdd4_0x18bdd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bdd4_0x18bdd4");
#endif

    ctx->pc = 0x18bdd4u;

    // 0x18bdd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18bdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bdd8: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x18bdd8u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x18bddc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bde0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18bde0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18bde4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18bde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x18bde8u;
}
