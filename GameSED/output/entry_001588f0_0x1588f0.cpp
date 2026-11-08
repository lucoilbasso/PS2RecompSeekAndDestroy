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

// Function: entry_001588f0
// Address: 0x1588f0 - 0x1588f4
void entry_001588f0_0x1588f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588f0_0x1588f0");
#endif

    ctx->pc = 0x1588f0u;

    // 0x1588f0: 0xe4e20098  swc1        $f2, 0x98($a3)
    ctx->pc = 0x1588f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
    ctx->pc = 0x1588f4u;
}
