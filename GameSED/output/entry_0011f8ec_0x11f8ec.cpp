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

// Function: entry_0011f8ec
// Address: 0x11f8ec - 0x11f8f0
void entry_0011f8ec_0x11f8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f8ec_0x11f8ec");
#endif

    ctx->pc = 0x11f8ecu;

    // 0x11f8ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x11f8f0u;
}
