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

// Function: entry_001468b0
// Address: 0x1468b0 - 0x1468b8
void entry_001468b0_0x1468b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001468b0_0x1468b0");
#endif

    ctx->pc = 0x1468b0u;

    // 0x1468b0: 0x25230070  addiu       $v1, $t1, 0x70
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x1468b4: 0x25820070  addiu       $v0, $t4, 0x70
    ctx->pc = 0x1468b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 112));
    ctx->pc = 0x1468b8u;
}
