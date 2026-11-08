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

// Function: entry_0015a0a0
// Address: 0x15a0a0 - 0x15a0a4
void entry_0015a0a0_0x15a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0a0_0x15a0a0");
#endif

    ctx->pc = 0x15a0a0u;

    // 0x15a0a0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x15a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    ctx->pc = 0x15a0a4u;
}
