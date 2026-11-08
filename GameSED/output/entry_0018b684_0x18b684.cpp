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

// Function: entry_0018b684
// Address: 0x18b684 - 0x18b688
void entry_0018b684_0x18b684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b684_0x18b684");
#endif

    ctx->pc = 0x18b684u;

    // 0x18b684: 0x2442b6a8  addiu       $v0, $v0, -0x4958
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
    ctx->pc = 0x18b688u;
}
