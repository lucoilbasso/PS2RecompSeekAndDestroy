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

// Function: entry_001b7d50
// Address: 0x1b7d50 - 0x1b7d5c
void entry_001b7d50_0x1b7d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d50_0x1b7d50");
#endif

    ctx->pc = 0x1b7d50u;

    // 0x1b7d50: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b7d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7d54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b7d58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1b7d5cu;
}
