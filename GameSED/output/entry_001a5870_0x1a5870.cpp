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

// Function: entry_001a5870
// Address: 0x1a5870 - 0x1a5874
void entry_001a5870_0x1a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5870_0x1a5870");
#endif

    ctx->pc = 0x1a5870u;

    // 0x1a5870: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x1a5874u;
}
