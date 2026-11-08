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

// Function: entry_0019af78
// Address: 0x19af78 - 0x19af80
void entry_0019af78_0x19af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af78_0x19af78");
#endif

    ctx->pc = 0x19af78u;

    // 0x19af78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19af78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af7c: 0x0  nop
    ctx->pc = 0x19af7cu;
    // NOP
    ctx->pc = 0x19af80u;
}
