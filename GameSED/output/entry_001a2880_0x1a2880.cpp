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

// Function: entry_001a2880
// Address: 0x1a2880 - 0x1a2888
void entry_001a2880_0x1a2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2880_0x1a2880");
#endif

    ctx->pc = 0x1a2880u;

    // 0x1a2880: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2884: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a2884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x1a2888u;
}
