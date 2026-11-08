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

// Function: entry_001929f8
// Address: 0x1929f8 - 0x1929fc
void entry_001929f8_0x1929f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001929f8_0x1929f8");
#endif

    ctx->pc = 0x1929f8u;

    // 0x1929f8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x1929f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1929fcu;
}
