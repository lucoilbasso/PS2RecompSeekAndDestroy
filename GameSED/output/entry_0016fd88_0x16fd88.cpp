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

// Function: entry_0016fd88
// Address: 0x16fd88 - 0x16fd8c
void entry_0016fd88_0x16fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fd88_0x16fd88");
#endif

    ctx->pc = 0x16fd88u;

    // 0x16fd88: 0x26710080  addiu       $s1, $s3, 0x80
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->pc = 0x16fd8cu;
}
