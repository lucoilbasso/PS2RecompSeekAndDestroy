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

// Function: entry_0018ebe4
// Address: 0x18ebe4 - 0x18ebe8
void entry_0018ebe4_0x18ebe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebe4_0x18ebe4");
#endif

    ctx->pc = 0x18ebe4u;

    // 0x18ebe4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18ebe8u;
}
