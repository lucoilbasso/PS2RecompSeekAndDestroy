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

// Function: entry_001955ec
// Address: 0x1955ec - 0x1955f0
void entry_001955ec_0x1955ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955ec_0x1955ec");
#endif

    ctx->pc = 0x1955ecu;

    // 0x1955ec: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x1955ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->pc = 0x1955f0u;
}
