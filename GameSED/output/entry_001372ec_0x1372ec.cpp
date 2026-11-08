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

// Function: entry_001372ec
// Address: 0x1372ec - 0x1372f0
void entry_001372ec_0x1372ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001372ec_0x1372ec");
#endif

    ctx->pc = 0x1372ecu;

    // 0x1372ec: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1372ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x1372f0u;
}
