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

// Function: entry_001871b0
// Address: 0x1871b0 - 0x1871b8
void entry_001871b0_0x1871b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001871b0_0x1871b0");
#endif

    ctx->pc = 0x1871b0u;

    // 0x1871b0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1871b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1871b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1871b8u;
}
