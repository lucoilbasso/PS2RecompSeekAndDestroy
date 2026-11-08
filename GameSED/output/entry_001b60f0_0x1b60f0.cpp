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

// Function: entry_001b60f0
// Address: 0x1b60f0 - 0x1b60f4
void entry_001b60f0_0x1b60f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b60f0_0x1b60f0");
#endif

    ctx->pc = 0x1b60f0u;

    // 0x1b60f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1b60f4u;
}
