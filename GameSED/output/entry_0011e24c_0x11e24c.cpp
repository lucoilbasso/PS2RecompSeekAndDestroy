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

// Function: entry_0011e24c
// Address: 0x11e24c - 0x11e250
void entry_0011e24c_0x11e24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e24c_0x11e24c");
#endif

    ctx->pc = 0x11e24cu;

    // 0x11e24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x11e250u;
}
