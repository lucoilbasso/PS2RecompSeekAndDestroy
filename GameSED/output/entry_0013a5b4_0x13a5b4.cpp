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

// Function: entry_0013a5b4
// Address: 0x13a5b4 - 0x13a5b8
void entry_0013a5b4_0x13a5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a5b4_0x13a5b4");
#endif

    ctx->pc = 0x13a5b4u;

    // 0x13a5b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x13a5b8u;
}
