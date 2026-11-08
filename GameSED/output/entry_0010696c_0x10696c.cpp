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

// Function: entry_0010696c
// Address: 0x10696c - 0x106974
void entry_0010696c_0x10696c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010696c_0x10696c");
#endif

    ctx->pc = 0x10696cu;

    // 0x10696c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106970: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x106974u;
}
