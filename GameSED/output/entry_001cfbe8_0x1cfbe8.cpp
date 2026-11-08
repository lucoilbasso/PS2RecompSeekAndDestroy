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

// Function: entry_001cfbe8
// Address: 0x1cfbe8 - 0x1cfbf0
void entry_001cfbe8_0x1cfbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbe8_0x1cfbe8");
#endif

    ctx->pc = 0x1cfbe8u;

    // 0x1cfbe8: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x1cfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x1cfbec: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x1cfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->pc = 0x1cfbf0u;
}
