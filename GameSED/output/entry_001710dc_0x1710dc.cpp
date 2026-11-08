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

// Function: entry_001710dc
// Address: 0x1710dc - 0x1710e0
void entry_001710dc_0x1710dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710dc_0x1710dc");
#endif

    ctx->pc = 0x1710dcu;

    // 0x1710dc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1710dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1710e0u;
}
