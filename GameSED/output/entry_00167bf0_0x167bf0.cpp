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

// Function: entry_00167bf0
// Address: 0x167bf0 - 0x167c18
void entry_00167bf0_0x167bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167bf0_0x167bf0");
#endif

    ctx->pc = 0x167bf0u;

    // 0x167bf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x167bf4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x167bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167bf8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x167bfc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x167c00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167c04: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x167c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167c08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167c0c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x167c10: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x167C10u;
    {
        const bool branch_taken_0x167c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C10u;
        // 0x167c14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c10) {
            ctx->pc = 0x167A98u;
            return;
        }
    }
    ctx->pc = 0x167C18u;
}
