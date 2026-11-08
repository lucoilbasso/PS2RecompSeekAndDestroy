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

// Function: entry_0012c4e0
// Address: 0x12c4e0 - 0x12c4e4
void entry_0012c4e0_0x12c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4e0_0x12c4e0");
#endif

    ctx->pc = 0x12c4e0u;

    // 0x12c4e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12c4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    ctx->pc = 0x12c4e4u;
}
