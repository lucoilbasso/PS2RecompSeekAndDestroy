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

// Function: entry_0018e718
// Address: 0x18e718 - 0x18e71c
void entry_0018e718_0x18e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e718_0x18e718");
#endif

    ctx->pc = 0x18e718u;

    // 0x18e718: 0x24461688  addiu       $a2, $v0, 0x1688
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5768));
    ctx->pc = 0x18e71cu;
}
