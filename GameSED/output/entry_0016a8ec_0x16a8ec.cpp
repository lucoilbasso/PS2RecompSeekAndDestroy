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

// Function: entry_0016a8ec
// Address: 0x16a8ec - 0x16a920
void entry_0016a8ec_0x16a8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a8ec_0x16a8ec");
#endif

    switch (ctx->pc) {
        case 0x16a8fcu: goto label_16a8fc;
        case 0x16a918u: goto label_16a918;
        default: break;
    }

    ctx->pc = 0x16a8ecu;

    // 0x16a8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8f4: 0xc04110c  jal         func_104430
    ctx->pc = 0x16A8F4u;
    SET_GPR_U32(ctx, 31, 0x16A8FCu);
    ctx->pc = 0x16A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8F4u;
    // 0x16a8f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A8F4u, 0x16A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8FCu;
label_16a8fc:
    // 0x16a8fc: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x16a900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a904: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x16a904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a908: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A908u;
    {
        const bool branch_taken_0x16a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A908u;
        // 0x16a90c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a908) {
            ctx->pc = 0x16A920u;
            return;
        }
    }
    ctx->pc = 0x16A910u;
    // 0x16a910: 0xc05a956  jal         func_16A558
    ctx->pc = 0x16A910u;
    SET_GPR_U32(ctx, 31, 0x16A918u);
    ctx->pc = 0x16A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A910u;
    // 0x16a914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A558u, 0x16A910u, 0x16A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A918u;
label_16a918:
    // 0x16a918: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A918u;
        // 0x16a91c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16A95Cu;
            return;
        }
    }
    ctx->pc = 0x16A920u;
}
