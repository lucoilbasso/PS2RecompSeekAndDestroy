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

// Function: entry_0018033c
// Address: 0x18033c - 0x180344
void entry_0018033c_0x18033c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018033c_0x18033c");
#endif

    ctx->pc = 0x18033cu;

    // 0x18033c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180340: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    ctx->pc = 0x180344u;
}
