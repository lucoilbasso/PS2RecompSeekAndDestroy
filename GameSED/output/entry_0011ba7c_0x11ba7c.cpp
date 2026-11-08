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

// Function: entry_0011ba7c
// Address: 0x11ba7c - 0x11ba80
void entry_0011ba7c_0x11ba7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba7c_0x11ba7c");
#endif

    ctx->pc = 0x11ba7cu;

    // 0x11ba7c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x11ba80u;
}
