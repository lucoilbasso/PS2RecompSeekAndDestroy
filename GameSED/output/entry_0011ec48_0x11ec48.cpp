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

// Function: entry_0011ec48
// Address: 0x11ec48 - 0x11ec54
void entry_0011ec48_0x11ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec48_0x11ec48");
#endif

    ctx->pc = 0x11ec48u;

    // 0x11ec48: 0xc4c100a4  lwc1        $f1, 0xA4($a2)
    ctx->pc = 0x11ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec50: 0xe4c00094  swc1        $f0, 0x94($a2)
    ctx->pc = 0x11ec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
    ctx->pc = 0x11ec54u;
}
