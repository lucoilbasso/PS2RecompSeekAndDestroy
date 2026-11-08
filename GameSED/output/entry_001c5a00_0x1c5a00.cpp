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

// Function: entry_001c5a00
// Address: 0x1c5a00 - 0x1c5a08
void entry_001c5a00_0x1c5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a00_0x1c5a00");
#endif

    ctx->pc = 0x1c5a00u;

    // 0x1c5a00: 0x2622eec0  addiu       $v0, $s1, -0x1140
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962880));
    // 0x1c5a04: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x1c5a08u;
}
