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

// Function: entry_00183ee8
// Address: 0x183ee8 - 0x183eec
void entry_00183ee8_0x183ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ee8_0x183ee8");
#endif

    ctx->pc = 0x183ee8u;

    // 0x183ee8: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x183ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x183eecu;
}
