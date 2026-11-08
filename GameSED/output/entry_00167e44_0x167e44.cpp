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

// Function: entry_00167e44
// Address: 0x167e44 - 0x167e74
void entry_00167e44_0x167e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167e44_0x167e44");
#endif

    ctx->pc = 0x167e44u;

    // 0x167e44: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x167e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x167e48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167e4c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x167e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x167e50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x167e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167e58: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x167e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x167e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167e60: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x167e64: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x167e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x167e68: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x167e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167e6c: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x167E6Cu;
    {
        const bool branch_taken_0x167e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E6Cu;
        // 0x167e70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e6c) {
            ctx->pc = 0x167C80u;
            return;
        }
    }
    ctx->pc = 0x167E74u;
}
