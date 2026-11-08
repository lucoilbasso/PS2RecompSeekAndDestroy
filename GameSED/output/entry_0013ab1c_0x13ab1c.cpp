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

// Function: entry_0013ab1c
// Address: 0x13ab1c - 0x13ab20
void entry_0013ab1c_0x13ab1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab1c_0x13ab1c");
#endif

    ctx->pc = 0x13ab1cu;

    // 0x13ab1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x13ab20u;
}
