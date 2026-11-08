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

// Function: entry_00158050
// Address: 0x158050 - 0x15805c
void entry_00158050_0x158050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158050_0x158050");
#endif

    ctx->pc = 0x158050u;

    // 0x158050: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x158050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158054: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158058: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    ctx->pc = 0x15805cu;
}
