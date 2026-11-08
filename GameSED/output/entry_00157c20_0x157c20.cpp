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

// Function: entry_00157c20
// Address: 0x157c20 - 0x157c28
void entry_00157c20_0x157c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c20_0x157c20");
#endif

    ctx->pc = 0x157c20u;

    // 0x157c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c24: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x157c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x157c28u;
}
