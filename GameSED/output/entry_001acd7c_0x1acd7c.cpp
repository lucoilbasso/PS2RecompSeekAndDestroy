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

// Function: entry_001acd7c
// Address: 0x1acd7c - 0x1acd88
void entry_001acd7c_0x1acd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acd7c_0x1acd7c");
#endif

    ctx->pc = 0x1acd7cu;

    // 0x1acd7c: 0x34423810  ori         $v0, $v0, 0x3810
    ctx->pc = 0x1acd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14352);
    // 0x1acd80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1acd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1acd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1acd88u;
}
