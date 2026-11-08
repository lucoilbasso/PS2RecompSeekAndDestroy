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

// Function: entry_0011ed14
// Address: 0x11ed14 - 0x11ed1c
void entry_0011ed14_0x11ed14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ed14_0x11ed14");
#endif

    ctx->pc = 0x11ed14u;

    // 0x11ed14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed18: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    ctx->pc = 0x11ed1cu;
}
