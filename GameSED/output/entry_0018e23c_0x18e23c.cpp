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

// Function: entry_0018e23c
// Address: 0x18e23c - 0x18e240
void entry_0018e23c_0x18e23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e23c_0x18e23c");
#endif

    ctx->pc = 0x18e23cu;

    // 0x18e23c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18e240u;
}
