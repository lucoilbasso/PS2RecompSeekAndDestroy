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

// Function: entry_00191c94
// Address: 0x191c94 - 0x191c9c
void entry_00191c94_0x191c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c94_0x191c94");
#endif

    ctx->pc = 0x191c94u;

    // 0x191c94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191c98: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x191c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
    ctx->pc = 0x191c9cu;
}
