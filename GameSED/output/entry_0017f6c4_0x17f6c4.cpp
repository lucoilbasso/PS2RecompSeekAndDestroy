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

// Function: entry_0017f6c4
// Address: 0x17f6c4 - 0x17f6cc
void entry_0017f6c4_0x17f6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6c4_0x17f6c4");
#endif

    ctx->pc = 0x17f6c4u;

    // 0x17f6c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f6c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x17f6ccu;
}
