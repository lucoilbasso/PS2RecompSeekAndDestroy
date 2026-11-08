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

// Function: entry_0011fcc0
// Address: 0x11fcc0 - 0x11fcc4
void entry_0011fcc0_0x11fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcc0_0x11fcc0");
#endif

    ctx->pc = 0x11fcc0u;

    // 0x11fcc0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x11fcc0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    ctx->pc = 0x11fcc4u;
}
