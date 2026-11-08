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

// Function: entry_0016174c
// Address: 0x16174c - 0x161750
void entry_0016174c_0x16174c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016174c_0x16174c");
#endif

    ctx->pc = 0x16174cu;

    // 0x16174c: 0x24901a60  addiu       $s0, $a0, 0x1A60
    ctx->pc = 0x16174cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
    ctx->pc = 0x161750u;
}
