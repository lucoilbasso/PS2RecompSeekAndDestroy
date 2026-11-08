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

// Function: entry_0019b9c0
// Address: 0x19b9c0 - 0x19b9c4
void entry_0019b9c0_0x19b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b9c0_0x19b9c0");
#endif

    ctx->pc = 0x19b9c0u;

    // 0x19b9c0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x19b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19b9c4u;
}
