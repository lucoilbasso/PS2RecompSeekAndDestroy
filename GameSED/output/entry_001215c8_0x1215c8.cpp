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

// Function: entry_001215c8
// Address: 0x1215c8 - 0x1215d4
void entry_001215c8_0x1215c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215c8_0x1215c8");
#endif

    ctx->pc = 0x1215c8u;

    // 0x1215c8: 0xc4c00100  lwc1        $f0, 0x100($a2)
    ctx->pc = 0x1215c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1215cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1215ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1215d0: 0xe4c000fc  swc1        $f0, 0xFC($a2)
    ctx->pc = 0x1215d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 252), bits); }
    ctx->pc = 0x1215d4u;
}
