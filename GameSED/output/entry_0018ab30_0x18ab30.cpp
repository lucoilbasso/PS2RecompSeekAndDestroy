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

// Function: entry_0018ab30
// Address: 0x18ab30 - 0x18ab38
void entry_0018ab30_0x18ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab30_0x18ab30");
#endif

    ctx->pc = 0x18ab30u;

    // 0x18ab30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ab34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x18ab38u;
}
