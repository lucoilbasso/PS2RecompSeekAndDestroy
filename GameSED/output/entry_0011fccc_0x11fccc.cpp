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

// Function: entry_0011fccc
// Address: 0x11fccc - 0x11fcd0
void entry_0011fccc_0x11fccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fccc_0x11fccc");
#endif

    ctx->pc = 0x11fcccu;

    // 0x11fccc: 0xe4a50070  swc1        $f5, 0x70($a1)
    ctx->pc = 0x11fcccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    ctx->pc = 0x11fcd0u;
}
