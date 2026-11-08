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

// Function: entry_0011fed8
// Address: 0x11fed8 - 0x11fedc
void entry_0011fed8_0x11fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fed8_0x11fed8");
#endif

    ctx->pc = 0x11fed8u;

    // 0x11fed8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x11fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    ctx->pc = 0x11fedcu;
}
