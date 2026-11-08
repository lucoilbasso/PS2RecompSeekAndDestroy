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

// Function: entry_00106cdc
// Address: 0x106cdc - 0x106ce0
void entry_00106cdc_0x106cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106cdc_0x106cdc");
#endif

    ctx->pc = 0x106cdcu;

    // 0x106cdc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x106cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    ctx->pc = 0x106ce0u;
}
