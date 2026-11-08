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

// Function: entry_0017f704
// Address: 0x17f704 - 0x17f70c
void entry_0017f704_0x17f704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f704_0x17f704");
#endif

    ctx->pc = 0x17f704u;

    // 0x17f704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17f704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17f708: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x17f70cu;
}
