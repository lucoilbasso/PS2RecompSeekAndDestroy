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

// Function: entry_001b89d0
// Address: 0x1b89d0 - 0x1b89d8
void entry_001b89d0_0x1b89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b89d0_0x1b89d0");
#endif

    ctx->pc = 0x1b89d0u;

    // 0x1b89d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b89d4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1b89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x1b89d8u;
}
