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

// Function: entry_001cdc00
// Address: 0x1cdc00 - 0x1cdc0c
void entry_001cdc00_0x1cdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc00_0x1cdc00");
#endif

    ctx->pc = 0x1cdc00u;

    // 0x1cdc00: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1cdc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1cdc04: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cdc08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1cdc0cu;
}
