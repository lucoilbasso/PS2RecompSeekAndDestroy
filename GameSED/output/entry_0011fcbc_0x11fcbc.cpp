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

// Function: entry_0011fcbc
// Address: 0x11fcbc - 0x11fcc0
void entry_0011fcbc_0x11fcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcbc_0x11fcbc");
#endif

    ctx->pc = 0x11fcbcu;

    // 0x11fcbc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x11fcbcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    ctx->pc = 0x11fcc0u;
}
