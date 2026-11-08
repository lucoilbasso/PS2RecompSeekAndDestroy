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

// Function: entry_00155c40
// Address: 0x155c40 - 0x155c44
void entry_00155c40_0x155c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c40_0x155c40");
#endif

    ctx->pc = 0x155c40u;

    // 0x155c40: 0x8e02037c  lw          $v0, 0x37C($s0)
    ctx->pc = 0x155c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    ctx->pc = 0x155c44u;
}
