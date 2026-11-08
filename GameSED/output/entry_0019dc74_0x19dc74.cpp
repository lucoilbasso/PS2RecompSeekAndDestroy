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

// Function: entry_0019dc74
// Address: 0x19dc74 - 0x19dc78
void entry_0019dc74_0x19dc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc74_0x19dc74");
#endif

    ctx->pc = 0x19dc74u;

    // 0x19dc74: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x19dc74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x19dc78u;
}
