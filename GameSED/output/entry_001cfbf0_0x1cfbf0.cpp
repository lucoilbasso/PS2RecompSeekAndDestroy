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

// Function: entry_001cfbf0
// Address: 0x1cfbf0 - 0x1cfbf8
void entry_001cfbf0_0x1cfbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbf0_0x1cfbf0");
#endif

    ctx->pc = 0x1cfbf0u;

    // 0x1cfbf0: 0xad700008  sw          $s0, 0x8($t3)
    ctx->pc = 0x1cfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 16));
    // 0x1cfbf4: 0xad10000c  sw          $s0, 0xC($t0)
    ctx->pc = 0x1cfbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x1cfbf8u;
}
