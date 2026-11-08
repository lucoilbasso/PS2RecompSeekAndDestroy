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

// Function: entry_00165124
// Address: 0x165124 - 0x165138
void entry_00165124_0x165124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165124_0x165124");
#endif

    ctx->pc = 0x165124u;

    // 0x165124: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16512c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165130: 0xac531108  sw          $s3, 0x1108($v0)
    ctx->pc = 0x165130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4360), GPR_U32(ctx, 19));
    // 0x165134: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x165134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x165138u;
}
