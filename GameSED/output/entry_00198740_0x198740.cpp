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

// Function: entry_00198740
// Address: 0x198740 - 0x19874c
void entry_00198740_0x198740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198740_0x198740");
#endif

    ctx->pc = 0x198740u;

    // 0x198740: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x198740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198744: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198744u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198748: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x198748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    ctx->pc = 0x19874cu;
}
