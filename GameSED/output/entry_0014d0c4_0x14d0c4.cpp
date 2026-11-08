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

// Function: entry_0014d0c4
// Address: 0x14d0c4 - 0x14d0c8
void entry_0014d0c4_0x14d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0c4_0x14d0c4");
#endif

    ctx->pc = 0x14d0c4u;

    // 0x14d0c4: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    ctx->pc = 0x14d0c8u;
}
