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

// Function: entry_0017cb3c
// Address: 0x17cb3c - 0x17cb48
void entry_0017cb3c_0x17cb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cb3c_0x17cb3c");
#endif

    ctx->pc = 0x17cb3cu;

    // 0x17cb3c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17cb40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cb44: 0x9442e9d0  lhu         $v0, -0x1630($v0)
    ctx->pc = 0x17cb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961616)));
    ctx->pc = 0x17cb48u;
}
