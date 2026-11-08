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

// Function: entry_00192844
// Address: 0x192844 - 0x192848
void entry_00192844_0x192844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192844_0x192844");
#endif

    ctx->pc = 0x192844u;

    // 0x192844: 0x263301d0  addiu       $s3, $s1, 0x1D0
    ctx->pc = 0x192844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->pc = 0x192848u;
}
