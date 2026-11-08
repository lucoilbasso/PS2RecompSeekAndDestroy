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

// Function: entry_00158300
// Address: 0x158300 - 0x158304
void entry_00158300_0x158300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158300_0x158300");
#endif

    ctx->pc = 0x158300u;

    // 0x158300: 0xacea0094  sw          $t2, 0x94($a3)
    ctx->pc = 0x158300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 10));
    ctx->pc = 0x158304u;
}
