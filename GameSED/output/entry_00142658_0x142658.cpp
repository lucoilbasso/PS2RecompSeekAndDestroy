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

// Function: entry_00142658
// Address: 0x142658 - 0x142660
void entry_00142658_0x142658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142658_0x142658");
#endif

    ctx->pc = 0x142658u;

    // 0x142658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14265c: 0xac620194  sw          $v0, 0x194($v1)
    ctx->pc = 0x14265cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 2));
    ctx->pc = 0x142660u;
}
