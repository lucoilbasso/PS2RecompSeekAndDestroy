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

// Function: entry_00142964
// Address: 0x142964 - 0x142970
void entry_00142964_0x142964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142964_0x142964");
#endif

    ctx->pc = 0x142964u;

    // 0x142964: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142968: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x142968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14296c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14296cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x142970u;
}
