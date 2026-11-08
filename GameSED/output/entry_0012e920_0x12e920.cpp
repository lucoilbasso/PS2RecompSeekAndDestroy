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

// Function: entry_0012e920
// Address: 0x12e920 - 0x12e928
void entry_0012e920_0x12e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e920_0x12e920");
#endif

    ctx->pc = 0x12e920u;

    // 0x12e920: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x12e920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x12e924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12e928u;
}
