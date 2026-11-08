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

// Function: entry_0019ee40
// Address: 0x19ee40 - 0x19ee44
void entry_0019ee40_0x19ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee40_0x19ee40");
#endif

    ctx->pc = 0x19ee40u;

    // 0x19ee40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x19ee44u;
}
