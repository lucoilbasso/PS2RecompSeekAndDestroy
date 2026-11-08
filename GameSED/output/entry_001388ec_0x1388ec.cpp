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

// Function: entry_001388ec
// Address: 0x1388ec - 0x1388f0
void entry_001388ec_0x1388ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388ec_0x1388ec");
#endif

    ctx->pc = 0x1388ecu;

    // 0x1388ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1388ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x1388f0u;
}
