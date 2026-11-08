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

// Function: entry_0019af00
// Address: 0x19af00 - 0x19af04
void entry_0019af00_0x19af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af00_0x19af00");
#endif

    ctx->pc = 0x19af00u;

    // 0x19af00: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19af00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x19af04u;
}
