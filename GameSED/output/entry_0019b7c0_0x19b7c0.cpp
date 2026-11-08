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

// Function: entry_0019b7c0
// Address: 0x19b7c0 - 0x19b7c4
void entry_0019b7c0_0x19b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7c0_0x19b7c0");
#endif

    ctx->pc = 0x19b7c0u;

    // 0x19b7c0: 0xa06d0000  sb          $t5, 0x0($v1)
    ctx->pc = 0x19b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
    ctx->pc = 0x19b7c4u;
}
