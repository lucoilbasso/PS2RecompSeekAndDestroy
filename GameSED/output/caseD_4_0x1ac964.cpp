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

// Function: caseD_4
// Address: 0x1ac964 - 0x1ac970
void caseD_4_0x1ac964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ac964");
#endif

    ctx->pc = 0x1ac964u;

    // 0x1ac964: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x1ac964u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x1ac968: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ac96c: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x1ac96cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 2) & 0x00000C0Cu;
    ctx->pc = 0x1ac970u;
}
