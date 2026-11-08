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

// Function: caseD_c
// Address: 0x111ef0 - 0x111ef8
void caseD_c_0x111ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x111ef0");
#endif

    ctx->pc = 0x111ef0u;

    // 0x111ef0: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef4: 0x8f938a30  lw          $s3, -0x75D0($gp)
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    ctx->pc = 0x111ef8u;
}
