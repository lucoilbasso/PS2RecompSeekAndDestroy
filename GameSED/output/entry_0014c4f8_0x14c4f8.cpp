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

// Function: entry_0014c4f8
// Address: 0x14c4f8 - 0x14c4fc
void entry_0014c4f8_0x14c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c4f8_0x14c4f8");
#endif

    ctx->pc = 0x14c4f8u;

    // 0x14c4f8: 0x8e30024c  lw          $s0, 0x24C($s1)
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    ctx->pc = 0x14c4fcu;
}
