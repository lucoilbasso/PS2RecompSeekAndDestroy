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

// Function: entry_00185d10
// Address: 0x185d10 - 0x185d14
void entry_00185d10_0x185d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d10_0x185d10");
#endif

    ctx->pc = 0x185d10u;

    // 0x185d10: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x185d14u;
}
