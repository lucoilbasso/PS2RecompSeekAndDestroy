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

// Function: entry_001cee1c
// Address: 0x1cee1c - 0x1cee24
void entry_001cee1c_0x1cee1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cee1c_0x1cee1c");
#endif

    ctx->pc = 0x1cee1cu;

    // 0x1cee1c: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    // 0x1cee20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cee20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cee24u;
}
