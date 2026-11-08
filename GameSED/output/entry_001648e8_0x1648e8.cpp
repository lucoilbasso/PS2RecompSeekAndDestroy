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

// Function: entry_001648e8
// Address: 0x1648e8 - 0x164938
void entry_001648e8_0x1648e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648e8_0x1648e8");
#endif

    switch (ctx->pc) {
        case 0x1648f8u: goto label_1648f8;
        case 0x164904u: goto label_164904;
        default: break;
    }

    ctx->pc = 0x1648e8u;

    // 0x1648e8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1648E8u;
    {
        const bool branch_taken_0x1648e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1648ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648E8u;
        // 0x1648ec: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648e8) {
            ctx->pc = 0x164A08u;
            return;
        }
    }
    ctx->pc = 0x1648F0u;
    // 0x1648f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1648F0u;
    SET_GPR_U32(ctx, 31, 0x1648F8u);
    ctx->pc = 0x1648F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648F0u;
    // 0x1648f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1648F0u, 0x1648F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648F8u;
label_1648f8:
    // 0x1648f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1648f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1648FCu;
    SET_GPR_U32(ctx, 31, 0x164904u);
    ctx->pc = 0x164900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648FCu;
    // 0x164900: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1648FCu, 0x164904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164904u;
label_164904:
    // 0x164904: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x164904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16490c: 0x56420016  bnel        $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16490c) {
            ctx->pc = 0x164910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16490Cu;
            // 0x164910: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164968u;
            return;
        }
    }
    ctx->pc = 0x164914u;
    // 0x164914: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x164918: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x164918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16491c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x16491cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164920: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x164920u;
    {
        const bool branch_taken_0x164920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164920u;
        // 0x164924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164920) {
            ctx->pc = 0x16495Cu;
            return;
        }
    }
    ctx->pc = 0x164928u;
    // 0x164928: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x164928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16492c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x16492cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164930: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x164930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x164938u;
}
