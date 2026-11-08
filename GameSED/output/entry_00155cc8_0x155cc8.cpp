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

// Function: entry_00155cc8
// Address: 0x155cc8 - 0x155ccc
void entry_00155cc8_0x155cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155cc8_0x155cc8");
#endif

    ctx->pc = 0x155cc8u;

    // 0x155cc8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x155cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x155cccu;
}
