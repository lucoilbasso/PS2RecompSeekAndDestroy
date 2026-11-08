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

// Function: entry_001b3630
// Address: 0x1b3630 - 0x1b3640
void entry_001b3630_0x1b3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3630_0x1b3630");
#endif

    ctx->pc = 0x1b3630u;

    // 0x1b3630: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1b3630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1b3634: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3638: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b363c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b363cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b3640u;
}
