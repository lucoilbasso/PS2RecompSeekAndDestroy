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

// Function: entry_0019ebbc
// Address: 0x19ebbc - 0x19ebc0
void entry_0019ebbc_0x19ebbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ebbc_0x19ebbc");
#endif

    ctx->pc = 0x19ebbcu;

    // 0x19ebbc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x19ebbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x19ebc0u;
}
