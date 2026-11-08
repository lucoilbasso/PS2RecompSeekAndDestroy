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

// Function: entry_001a99cc
// Address: 0x1a99cc - 0x1a99d0
void entry_001a99cc_0x1a99cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a99cc_0x1a99cc");
#endif

    ctx->pc = 0x1a99ccu;

    // 0x1a99cc: 0xe484009c  swc1        $f4, 0x9C($a0)
    ctx->pc = 0x1a99ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    ctx->pc = 0x1a99d0u;
}
