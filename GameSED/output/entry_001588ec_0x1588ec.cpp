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

// Function: entry_001588ec
// Address: 0x1588ec - 0x1588f0
void entry_001588ec_0x1588ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588ec_0x1588ec");
#endif

    ctx->pc = 0x1588ecu;

    // 0x1588ec: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1588ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1588f0u;
}
