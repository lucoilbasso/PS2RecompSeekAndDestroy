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

// Function: caseD_b
// Address: 0x1cb970 - 0x1cb980
void caseD_b_0x1cb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1cb970");
#endif

    ctx->pc = 0x1cb970u;

    // 0x1cb970: 0x8e240478  lw          $a0, 0x478($s1)
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x1cb974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb978: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cb978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb97c: 0x24820480  addiu       $v0, $a0, 0x480
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->pc = 0x1cb980u;
}
