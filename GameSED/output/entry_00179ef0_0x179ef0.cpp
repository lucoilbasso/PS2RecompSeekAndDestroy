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

// Function: entry_00179ef0
// Address: 0x179ef0 - 0x179ef8
void entry_00179ef0_0x179ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ef0_0x179ef0");
#endif

    ctx->pc = 0x179ef0u;

    // 0x179ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ef4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x179ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x179ef8u;
}
