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

// Function: entry_001382ec
// Address: 0x1382ec - 0x1382f4
void entry_001382ec_0x1382ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001382ec_0x1382ec");
#endif

    ctx->pc = 0x1382ecu;

    // 0x1382ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1382ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1382f0: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x1382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    ctx->pc = 0x1382f4u;
}
