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

// Function: entry_00111a78
// Address: 0x111a78 - 0x111a7c
void entry_00111a78_0x111a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a78_0x111a78");
#endif

    ctx->pc = 0x111a78u;

    // 0x111a78: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x111a7cu;
}
