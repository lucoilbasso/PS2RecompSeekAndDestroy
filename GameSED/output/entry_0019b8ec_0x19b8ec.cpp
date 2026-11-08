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

// Function: entry_0019b8ec
// Address: 0x19b8ec - 0x19b8f0
void entry_0019b8ec_0x19b8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8ec_0x19b8ec");
#endif

    ctx->pc = 0x19b8ecu;

    // 0x19b8ec: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19b8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19b8f0u;
}
