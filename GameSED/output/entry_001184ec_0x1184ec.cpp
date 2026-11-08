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

// Function: entry_001184ec
// Address: 0x1184ec - 0x1184f0
void entry_001184ec_0x1184ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184ec_0x1184ec");
#endif

    ctx->pc = 0x1184ecu;

    // 0x1184ec: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1184ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1184f0u;
}
