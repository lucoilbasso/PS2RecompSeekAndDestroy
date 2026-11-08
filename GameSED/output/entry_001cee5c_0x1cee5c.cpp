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

// Function: entry_001cee5c
// Address: 0x1cee5c - 0x1cee64
void entry_001cee5c_0x1cee5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cee5c_0x1cee5c");
#endif

    ctx->pc = 0x1cee5cu;

    // 0x1cee5c: 0x24420d10  addiu       $v0, $v0, 0xD10
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x1cee60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cee64u;
}
