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

// Function: entry_0011a480
// Address: 0x11a480 - 0x11a488
void entry_0011a480_0x11a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a480_0x11a480");
#endif

    ctx->pc = 0x11a480u;

    // 0x11a480: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x11a480u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a484: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x11a488u;
}
