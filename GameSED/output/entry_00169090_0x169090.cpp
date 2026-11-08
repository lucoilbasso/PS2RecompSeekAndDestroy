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

// Function: entry_00169090
// Address: 0x169090 - 0x1690b4
void entry_00169090_0x169090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169090_0x169090");
#endif

    ctx->pc = 0x169090u;

    // 0x169090: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x169090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x169094: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x169094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x169098: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16909c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1690a0: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x1690a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1690a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1690a8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1690a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1690ac: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1690ACu;
    {
        const bool branch_taken_0x1690ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1690B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690ACu;
        // 0x1690b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690ac) {
            ctx->pc = 0x168ED0u;
            return;
        }
    }
    ctx->pc = 0x1690B4u;
}
