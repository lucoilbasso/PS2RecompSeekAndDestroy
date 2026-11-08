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

// Function: entry_0019b5c4
// Address: 0x19b5c4 - 0x19b5c8
void entry_0019b5c4_0x19b5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b5c4_0x19b5c4");
#endif

    ctx->pc = 0x19b5c4u;

    // 0x19b5c4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19b5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19b5c8u;
}
