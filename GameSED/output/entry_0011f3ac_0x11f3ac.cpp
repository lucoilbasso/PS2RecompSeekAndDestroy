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

// Function: entry_0011f3ac
// Address: 0x11f3ac - 0x11f3b0
void entry_0011f3ac_0x11f3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3ac_0x11f3ac");
#endif

    ctx->pc = 0x11f3acu;

    // 0x11f3ac: 0xe4440080  swc1        $f4, 0x80($v0)
    ctx->pc = 0x11f3acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    ctx->pc = 0x11f3b0u;
}
