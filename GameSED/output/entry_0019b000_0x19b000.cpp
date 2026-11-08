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

// Function: entry_0019b000
// Address: 0x19b000 - 0x19b004
void entry_0019b000_0x19b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b000_0x19b000");
#endif

    ctx->pc = 0x19b000u;

    // 0x19b000: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19b000u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19b004u;
}
