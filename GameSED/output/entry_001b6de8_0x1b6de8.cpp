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

// Function: entry_001b6de8
// Address: 0x1b6de8 - 0x1b6dec
void entry_001b6de8_0x1b6de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6de8_0x1b6de8");
#endif

    ctx->pc = 0x1b6de8u;

    // 0x1b6de8: 0xaed1aa28  sw          $s1, -0x55D8($s6)
    ctx->pc = 0x1b6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294945320), GPR_U32(ctx, 17));
    ctx->pc = 0x1b6decu;
}
