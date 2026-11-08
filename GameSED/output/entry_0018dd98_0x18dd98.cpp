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

// Function: entry_0018dd98
// Address: 0x18dd98 - 0x18dd9c
void entry_0018dd98_0x18dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd98_0x18dd98");
#endif

    ctx->pc = 0x18dd98u;

    // 0x18dd98: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x18dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    ctx->pc = 0x18dd9cu;
}
