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

// Function: entry_00164448
// Address: 0x164448 - 0x164470
void entry_00164448_0x164448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164448_0x164448");
#endif

    ctx->pc = 0x164448u;

    // 0x164448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16444c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x164450: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x164450u;
    {
        const bool branch_taken_0x164450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164450u;
        // 0x164454: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164450) {
            ctx->pc = 0x1640A8u;
            return;
        }
    }
    ctx->pc = 0x164458u;
    // 0x164458: 0x8ea31ab0  lw          $v1, 0x1AB0($s5)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
    // 0x16445c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164460: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164460u;
    {
        const bool branch_taken_0x164460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164460) {
            ctx->pc = 0x164470u;
            return;
        }
    }
    ctx->pc = 0x164468u;
    // 0x164468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16446c: 0xaea21ab0  sw          $v0, 0x1AB0($s5)
    ctx->pc = 0x16446cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
    ctx->pc = 0x164470u;
}
