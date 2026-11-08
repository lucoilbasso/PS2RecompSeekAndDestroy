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

// Function: entry_0019fe50
// Address: 0x19fe50 - 0x19fe74
void entry_0019fe50_0x19fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe50_0x19fe50");
#endif

    ctx->pc = 0x19fe50u;

    // 0x19fe50: 0x0  nop
    ctx->pc = 0x19fe50u;
    // NOP
    // 0x19fe54: 0x0  nop
    ctx->pc = 0x19fe54u;
    // NOP
    // 0x19fe58: 0x0  nop
    ctx->pc = 0x19fe58u;
    // NOP
    // 0x19fe5c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x19FE5Cu;
    {
        const bool branch_taken_0x19fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe5c) {
            ctx->pc = 0x19FE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE5Cu;
            // 0x19fe60: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE30u;
            return;
        }
    }
    ctx->pc = 0x19FE64u;
    // 0x19fe64: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x19fe68: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19fe6c: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x19fe70: 0x24a5d668  addiu       $a1, $a1, -0x2998
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956648));
    ctx->pc = 0x19fe74u;
}
