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

// Function: entry_001ca288
// Address: 0x1ca288 - 0x1ca294
void entry_001ca288_0x1ca288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca288_0x1ca288");
#endif

    ctx->pc = 0x1ca288u;

    // 0x1ca288: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ca288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ca28c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ca290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1ca294u;
}
