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

// Function: entry_001747ec
// Address: 0x1747ec - 0x1747f0
void entry_001747ec_0x1747ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001747ec_0x1747ec");
#endif

    ctx->pc = 0x1747ecu;

    // 0x1747ec: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1747ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x1747f0u;
}
