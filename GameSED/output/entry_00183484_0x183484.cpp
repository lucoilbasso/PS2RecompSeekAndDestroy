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

// Function: entry_00183484
// Address: 0x183484 - 0x183488
void entry_00183484_0x183484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183484_0x183484");
#endif

    ctx->pc = 0x183484u;

    // 0x183484: 0x24031803  addiu       $v1, $zero, 0x1803
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6147));
    ctx->pc = 0x183488u;
}
