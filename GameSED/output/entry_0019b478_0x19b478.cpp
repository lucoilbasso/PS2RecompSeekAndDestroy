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

// Function: entry_0019b478
// Address: 0x19b478 - 0x19b47c
void entry_0019b478_0x19b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b478_0x19b478");
#endif

    ctx->pc = 0x19b478u;

    // 0x19b478: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x19b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    ctx->pc = 0x19b47cu;
}
