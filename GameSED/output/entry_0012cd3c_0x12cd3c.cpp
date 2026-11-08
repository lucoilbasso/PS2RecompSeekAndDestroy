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

// Function: entry_0012cd3c
// Address: 0x12cd3c - 0x12cd44
void entry_0012cd3c_0x12cd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd3c_0x12cd3c");
#endif

    ctx->pc = 0x12cd3cu;

    // 0x12cd3c: 0xe6010118  swc1        $f1, 0x118($s0)
    ctx->pc = 0x12cd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cd40: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x12cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x12cd44u;
}
