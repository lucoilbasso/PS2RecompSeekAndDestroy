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

// Function: entry_00154b7c
// Address: 0x154b7c - 0x154b80
void entry_00154b7c_0x154b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b7c_0x154b7c");
#endif

    ctx->pc = 0x154b7cu;

    // 0x154b7c: 0x8e42037c  lw          $v0, 0x37C($s2)
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
    ctx->pc = 0x154b80u;
}
