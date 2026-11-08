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

// Function: entry_0014c384
// Address: 0x14c384 - 0x14c388
void entry_0014c384_0x14c384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c384_0x14c384");
#endif

    ctx->pc = 0x14c384u;

    // 0x14c384: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x14c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    ctx->pc = 0x14c388u;
}
