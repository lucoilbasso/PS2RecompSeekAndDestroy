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

// Function: entry_001bfa1c
// Address: 0x1bfa1c - 0x1bfa28
void entry_001bfa1c_0x1bfa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa1c_0x1bfa1c");
#endif

    ctx->pc = 0x1bfa1cu;

    // 0x1bfa1c: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
    // 0x1bfa20: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1bfa20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
    // 0x1bfa24: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bfa28u;
}
