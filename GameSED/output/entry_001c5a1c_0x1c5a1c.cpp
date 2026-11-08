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

// Function: entry_001c5a1c
// Address: 0x1c5a1c - 0x1c5a24
void entry_001c5a1c_0x1c5a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a1c_0x1c5a1c");
#endif

    ctx->pc = 0x1c5a1cu;

    // 0x1c5a1c: 0x2622eec0  addiu       $v0, $s1, -0x1140
    ctx->pc = 0x1c5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
    // 0x1c5a20: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1c5a24u;
}
