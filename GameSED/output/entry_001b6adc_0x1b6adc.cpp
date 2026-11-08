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

// Function: entry_001b6adc
// Address: 0x1b6adc - 0x1b6ae4
void entry_001b6adc_0x1b6adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6adc_0x1b6adc");
#endif

    ctx->pc = 0x1b6adcu;

    // 0x1b6adc: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x1b6ae0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1b6ae4u;
}
