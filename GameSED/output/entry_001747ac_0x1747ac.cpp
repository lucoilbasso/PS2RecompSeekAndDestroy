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

// Function: entry_001747ac
// Address: 0x1747ac - 0x1747b0
void entry_001747ac_0x1747ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001747ac_0x1747ac");
#endif

    ctx->pc = 0x1747acu;

    // 0x1747ac: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1747acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x1747b0u;
}
