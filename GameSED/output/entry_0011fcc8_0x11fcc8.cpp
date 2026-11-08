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

// Function: entry_0011fcc8
// Address: 0x11fcc8 - 0x11fccc
void entry_0011fcc8_0x11fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcc8_0x11fcc8");
#endif

    ctx->pc = 0x11fcc8u;

    // 0x11fcc8: 0xe4a10080  swc1        $f1, 0x80($a1)
    ctx->pc = 0x11fcc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    ctx->pc = 0x11fcccu;
}
