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

// Function: entry_00150490
// Address: 0x150490 - 0x150494
void entry_00150490_0x150490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150490_0x150490");
#endif

    ctx->pc = 0x150490u;

    // 0x150490: 0x8c62402c  lw          $v0, 0x402C($v1)
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16428)));
    ctx->pc = 0x150494u;
}
