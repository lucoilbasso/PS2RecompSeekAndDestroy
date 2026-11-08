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

// Function: entry_0019b7f4
// Address: 0x19b7f4 - 0x19b7f8
void entry_0019b7f4_0x19b7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7f4_0x19b7f4");
#endif

    ctx->pc = 0x19b7f4u;

    // 0x19b7f4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x19b7f8u;
}
