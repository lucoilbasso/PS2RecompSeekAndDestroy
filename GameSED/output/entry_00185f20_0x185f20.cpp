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

// Function: entry_00185f20
// Address: 0x185f20 - 0x185f2c
void entry_00185f20_0x185f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f20_0x185f20");
#endif

    ctx->pc = 0x185f20u;

    // 0x185f20: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x185f24: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185f28: 0x244763b0  addiu       $a3, $v0, 0x63B0
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    ctx->pc = 0x185f2cu;
}
