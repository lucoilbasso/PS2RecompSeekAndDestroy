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

// Function: entry_001bc784
// Address: 0x1bc784 - 0x1bc788
void entry_001bc784_0x1bc784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc784_0x1bc784");
#endif

    ctx->pc = 0x1bc784u;

    // 0x1bc784: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1bc788u;
}
