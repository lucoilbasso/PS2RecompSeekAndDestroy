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

// Function: entry_001382a4
// Address: 0x1382a4 - 0x1382ac
void entry_001382a4_0x1382a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001382a4_0x1382a4");
#endif

    ctx->pc = 0x1382a4u;

    // 0x1382a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1382a8: 0xaf828a1c  sw          $v0, -0x75E4($gp)
    ctx->pc = 0x1382a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 2));
    ctx->pc = 0x1382acu;
}
