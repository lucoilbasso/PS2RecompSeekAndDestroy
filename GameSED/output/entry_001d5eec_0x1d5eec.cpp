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

// Function: entry_001d5eec
// Address: 0x1d5eec - 0x1d5ef0
void entry_001d5eec_0x1d5eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5eec_0x1d5eec");
#endif

    ctx->pc = 0x1d5eecu;

    // 0x1d5eec: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->pc = 0x1d5ef0u;
}
