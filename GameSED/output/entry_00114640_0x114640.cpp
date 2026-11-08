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

// Function: entry_00114640
// Address: 0x114640 - 0x114650
void entry_00114640_0x114640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114640_0x114640");
#endif

    ctx->pc = 0x114640u;

    // 0x114640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114644: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x114648: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x114648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11464c: 0xac230730  sw          $v1, 0x730($at)
    ctx->pc = 0x11464cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1840), GPR_U32(ctx, 3));
    ctx->pc = 0x114650u;
}
