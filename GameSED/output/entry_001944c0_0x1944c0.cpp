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

// Function: entry_001944c0
// Address: 0x1944c0 - 0x1944d0
void entry_001944c0_0x1944c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001944c0_0x1944c0");
#endif

    ctx->pc = 0x1944c0u;

    // 0x1944c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1944c4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1944c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1944c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1944cc: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x1944ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x1944d0u;
}
