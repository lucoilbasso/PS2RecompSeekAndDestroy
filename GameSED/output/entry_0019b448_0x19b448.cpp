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

// Function: entry_0019b448
// Address: 0x19b448 - 0x19b44c
void entry_0019b448_0x19b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b448_0x19b448");
#endif

    ctx->pc = 0x19b448u;

    // 0x19b448: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x19b44cu;
}
