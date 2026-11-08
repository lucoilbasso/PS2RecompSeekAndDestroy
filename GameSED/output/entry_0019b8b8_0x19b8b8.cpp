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

// Function: entry_0019b8b8
// Address: 0x19b8b8 - 0x19b8bc
void entry_0019b8b8_0x19b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8b8_0x19b8b8");
#endif

    ctx->pc = 0x19b8b8u;

    // 0x19b8b8: 0xa06d0000  sb          $t5, 0x0($v1)
    ctx->pc = 0x19b8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
    ctx->pc = 0x19b8bcu;
}
