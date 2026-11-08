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

// Function: entry_0017bd74
// Address: 0x17bd74 - 0x17bd84
void entry_0017bd74_0x17bd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bd74_0x17bd74");
#endif

    ctx->pc = 0x17bd74u;

    // 0x17bd74: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17bd78: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bd7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd80: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x17bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x17bd84u;
}
