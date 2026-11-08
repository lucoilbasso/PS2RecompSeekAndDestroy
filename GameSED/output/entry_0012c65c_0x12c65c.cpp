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

// Function: entry_0012c65c
// Address: 0x12c65c - 0x12c660
void entry_0012c65c_0x12c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c65c_0x12c65c");
#endif

    ctx->pc = 0x12c65cu;

    // 0x12c65c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->pc = 0x12c660u;
}
