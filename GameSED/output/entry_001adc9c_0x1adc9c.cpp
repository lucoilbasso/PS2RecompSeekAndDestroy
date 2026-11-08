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

// Function: entry_001adc9c
// Address: 0x1adc9c - 0x1adca4
void entry_001adc9c_0x1adc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adc9c_0x1adc9c");
#endif

    ctx->pc = 0x1adc9cu;

    // 0x1adc9c: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adca0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x1adca4u;
}
