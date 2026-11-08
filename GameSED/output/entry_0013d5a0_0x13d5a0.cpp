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

// Function: entry_0013d5a0
// Address: 0x13d5a0 - 0x13d5a4
void entry_0013d5a0_0x13d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5a0_0x13d5a0");
#endif

    ctx->pc = 0x13d5a0u;

    // 0x13d5a0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x13d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x13d5a4u;
}
