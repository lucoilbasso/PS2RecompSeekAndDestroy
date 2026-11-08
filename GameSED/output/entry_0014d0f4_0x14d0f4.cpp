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

// Function: entry_0014d0f4
// Address: 0x14d0f4 - 0x14d0f8
void entry_0014d0f4_0x14d0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0f4_0x14d0f4");
#endif

    ctx->pc = 0x14d0f4u;

    // 0x14d0f4: 0x2442d148  addiu       $v0, $v0, -0x2EB8
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955336));
    ctx->pc = 0x14d0f8u;
}
