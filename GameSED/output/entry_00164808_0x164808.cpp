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

// Function: entry_00164808
// Address: 0x164808 - 0x164840
void entry_00164808_0x164808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164808_0x164808");
#endif

    switch (ctx->pc) {
        case 0x164818u: goto label_164818;
        default: break;
    }

    ctx->pc = 0x164808u;

    // 0x164808: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x164808u;
    {
        const bool branch_taken_0x164808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164808) {
            ctx->pc = 0x16480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164808u;
            // 0x16480c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1648E8u;
            return;
        }
    }
    ctx->pc = 0x164810u;
    // 0x164810: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x164810u;
    SET_GPR_U32(ctx, 31, 0x164818u);
    ctx->pc = 0x164814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164810u;
    // 0x164814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x164810u, 0x164818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164818u;
label_164818:
    // 0x164818: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16481c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164820: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x164824: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x164824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164828: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164828u;
        // 0x16482c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164828) {
            ctx->pc = 0x164840u;
            return;
        }
    }
    ctx->pc = 0x164830u;
    // 0x164830: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164834: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x164834u;
    {
        const bool branch_taken_0x164834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164834) {
            ctx->pc = 0x164838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164834u;
            // 0x164838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164854u;
            return;
        }
    }
    ctx->pc = 0x16483Cu;
    // 0x16483c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x164840u;
}
