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

// Function: entry_0019b7f8
// Address: 0x19b7f8 - 0x19b7fc
void entry_0019b7f8_0x19b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7f8_0x19b7f8");
#endif

    ctx->pc = 0x19b7f8u;

    // 0x19b7f8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19b7fcu;
}
