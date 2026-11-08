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

// Function: entry_001a0630
// Address: 0x1a0630 - 0x1a0634
void entry_001a0630_0x1a0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0630_0x1a0630");
#endif

    ctx->pc = 0x1a0630u;

    // 0x1a0630: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1a0630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    ctx->pc = 0x1a0634u;
}
