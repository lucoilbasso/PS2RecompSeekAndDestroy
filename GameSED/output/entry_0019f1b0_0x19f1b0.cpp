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

// Function: entry_0019f1b0
// Address: 0x19f1b0 - 0x19f1b8
void entry_0019f1b0_0x19f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1b0_0x19f1b0");
#endif

    ctx->pc = 0x19f1b0u;

    // 0x19f1b0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19f1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f1b4: 0xe31023  subu        $v0, $a3, $v1
    ctx->pc = 0x19f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x19f1b8u;
}
