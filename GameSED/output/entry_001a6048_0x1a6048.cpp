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

// Function: entry_001a6048
// Address: 0x1a6048 - 0x1a604c
void entry_001a6048_0x1a6048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6048_0x1a6048");
#endif

    ctx->pc = 0x1a6048u;

    // 0x1a6048: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->pc = 0x1a604cu;
}
