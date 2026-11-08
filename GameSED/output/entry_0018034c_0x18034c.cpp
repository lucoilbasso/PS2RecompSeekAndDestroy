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

// Function: entry_0018034c
// Address: 0x18034c - 0x180350
void entry_0018034c_0x18034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018034c_0x18034c");
#endif

    ctx->pc = 0x18034cu;

    // 0x18034c: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x18034cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x180350u;
}
