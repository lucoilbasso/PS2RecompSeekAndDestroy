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

// Function: entry_0019a6b8
// Address: 0x19a6b8 - 0x19a6bc
void entry_0019a6b8_0x19a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6b8_0x19a6b8");
#endif

    ctx->pc = 0x19a6b8u;

    // 0x19a6b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x19a6bcu;
}
