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

// Function: entry_00152e44
// Address: 0x152e44 - 0x152e48
void entry_00152e44_0x152e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e44_0x152e44");
#endif

    ctx->pc = 0x152e44u;

    // 0x152e44: 0xe6010640  swc1        $f1, 0x640($s0)
    ctx->pc = 0x152e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    ctx->pc = 0x152e48u;
}
