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

// Function: entry_0012c4ec
// Address: 0x12c4ec - 0x12c4f4
void entry_0012c4ec_0x12c4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4ec_0x12c4ec");
#endif

    ctx->pc = 0x12c4ecu;

    // 0x12c4ec: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x12c4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12c4f0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x12c4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x12c4f4u;
}
