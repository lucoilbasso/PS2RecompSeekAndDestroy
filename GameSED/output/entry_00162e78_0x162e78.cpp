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

// Function: entry_00162e78
// Address: 0x162e78 - 0x162e80
void entry_00162e78_0x162e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e78_0x162e78");
#endif

    ctx->pc = 0x162e78u;

    // 0x162e78: 0x8cc21400  lw          $v0, 0x1400($a2)
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5120)));
    // 0x162e7c: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x162e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    ctx->pc = 0x162e80u;
}
