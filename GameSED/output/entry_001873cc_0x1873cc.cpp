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

// Function: entry_001873cc
// Address: 0x1873cc - 0x1873d0
void entry_001873cc_0x1873cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873cc_0x1873cc");
#endif

    ctx->pc = 0x1873ccu;

    // 0x1873cc: 0xe48c01b0  swc1        $f12, 0x1B0($a0)
    ctx->pc = 0x1873ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    ctx->pc = 0x1873d0u;
}
