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

// Function: entry_001a3a34
// Address: 0x1a3a34 - 0x1a3a38
void entry_001a3a34_0x1a3a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3a34_0x1a3a34");
#endif

    ctx->pc = 0x1a3a34u;

    // 0x1a3a34: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x1a3a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->pc = 0x1a3a38u;
}
