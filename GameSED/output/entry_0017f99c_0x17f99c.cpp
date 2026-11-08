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

// Function: entry_0017f99c
// Address: 0x17f99c - 0x17f9a0
void entry_0017f99c_0x17f99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f99c_0x17f99c");
#endif

    ctx->pc = 0x17f99cu;

    // 0x17f99c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x17f9a0u;
}
