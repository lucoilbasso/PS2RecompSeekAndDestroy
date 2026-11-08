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

// Function: entry_0018ab38
// Address: 0x18ab38 - 0x18ab44
void entry_0018ab38_0x18ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab38_0x18ab38");
#endif

    ctx->pc = 0x18ab38u;

    // 0x18ab38: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18ab3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab40: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x18ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x18ab44u;
}
