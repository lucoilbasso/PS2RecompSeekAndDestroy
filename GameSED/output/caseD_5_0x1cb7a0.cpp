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

// Function: caseD_5
// Address: 0x1cb7a0 - 0x1cb7dc
void caseD_5_0x1cb7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cb7a0");
#endif

    switch (ctx->pc) {
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b8u: goto label_1cb7b8;
        default: break;
    }

    ctx->pc = 0x1cb7a0u;

    // 0x1cb7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a4: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7A4u;
    SET_GPR_U32(ctx, 31, 0x1CB7ACu);
    ctx->pc = 0x1CB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A4u;
    // 0x1cb7a8: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7A4u, 0x1CB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7ACu;
label_1cb7ac:
    // 0x1cb7ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7b0: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7B0u;
    SET_GPR_U32(ctx, 31, 0x1CB7B8u);
    ctx->pc = 0x1CB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7B0u;
    // 0x1cb7b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7B0u, 0x1CB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7B8u;
label_1cb7b8:
    // 0x1cb7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7bc: 0x962203f8  lhu         $v0, 0x3F8($s1)
    ctx->pc = 0x1cb7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1016)));
    // 0x1cb7c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb7c4: 0x10a200b2  beq         $a1, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1CB7C4u;
    {
        const bool branch_taken_0x1cb7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7C4u;
        // 0x1cb7c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7c4) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB7CCu;
    // 0x1cb7cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb7d0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7d8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->pc = 0x1cb7dcu;
}
