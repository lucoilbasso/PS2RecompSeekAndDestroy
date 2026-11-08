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

// Function: entry_0011616c
// Address: 0x11616c - 0x116170
void entry_0011616c_0x11616c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011616c_0x11616c");
#endif

    ctx->pc = 0x11616cu;

    // 0x11616c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    ctx->pc = 0x116170u;
}
