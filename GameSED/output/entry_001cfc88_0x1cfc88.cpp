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

// Function: entry_001cfc88
// Address: 0x1cfc88 - 0x1cfc98
void entry_001cfc88_0x1cfc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc88_0x1cfc88");
#endif

    ctx->pc = 0x1cfc88u;

    // 0x1cfc88: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1cfc88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc8c: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1cfc90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cfc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc94: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->pc = 0x1cfc98u;
}
