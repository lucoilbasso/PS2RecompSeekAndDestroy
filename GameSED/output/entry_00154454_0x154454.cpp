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

// Function: entry_00154454
// Address: 0x154454 - 0x154458
void entry_00154454_0x154454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154454_0x154454");
#endif

    ctx->pc = 0x154454u;

    // 0x154454: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    ctx->pc = 0x154458u;
}
