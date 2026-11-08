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

// Function: entry_00148e3c
// Address: 0x148e3c - 0x148e48
void entry_00148e3c_0x148e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e3c_0x148e3c");
#endif

    ctx->pc = 0x148e3cu;

    // 0x148e3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x148e40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x148e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x148e44: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x148e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    ctx->pc = 0x148e48u;
}
