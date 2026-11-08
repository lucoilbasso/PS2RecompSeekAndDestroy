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

// Function: entry_0019bb88
// Address: 0x19bb88 - 0x19bb8c
void entry_0019bb88_0x19bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb88_0x19bb88");
#endif

    ctx->pc = 0x19bb88u;

    // 0x19bb88: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x19bb8cu;
}
