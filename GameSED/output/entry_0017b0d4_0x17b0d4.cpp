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

// Function: entry_0017b0d4
// Address: 0x17b0d4 - 0x17b0d8
void entry_0017b0d4_0x17b0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0d4_0x17b0d4");
#endif

    ctx->pc = 0x17b0d4u;

    // 0x17b0d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17b0d8u;
}
