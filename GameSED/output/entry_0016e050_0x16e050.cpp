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

// Function: entry_0016e050
// Address: 0x16e050 - 0x16e054
void entry_0016e050_0x16e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e050_0x16e050");
#endif

    ctx->pc = 0x16e050u;

    // 0x16e050: 0x269305e0  addiu       $s3, $s4, 0x5E0
    ctx->pc = 0x16e050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1504));
    ctx->pc = 0x16e054u;
}
