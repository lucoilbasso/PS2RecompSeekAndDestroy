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

// Function: entry_00142930
// Address: 0x142930 - 0x142944
void entry_00142930_0x142930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142930_0x142930");
#endif

    ctx->pc = 0x142930u;

    // 0x142930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142934: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x142938: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14293c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14293cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x142940: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x142944u;
}
