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

// Function: entry_001588e8
// Address: 0x1588e8 - 0x1588ec
void entry_001588e8_0x1588e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588e8_0x1588e8");
#endif

    ctx->pc = 0x1588e8u;

    // 0x1588e8: 0xacea0094  sw          $t2, 0x94($a3)
    ctx->pc = 0x1588e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 10));
    ctx->pc = 0x1588ecu;
}
