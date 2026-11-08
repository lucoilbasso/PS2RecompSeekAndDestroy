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

// Function: entry_001013a0
// Address: 0x1013a0 - 0x1013e4
void entry_001013a0_0x1013a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001013a0_0x1013a0");
#endif

    switch (ctx->pc) {
        case 0x1013a8u: goto label_1013a8;
        case 0x1013b4u: goto label_1013b4;
        case 0x1013e0u: goto label_1013e0;
        default: break;
    }

    ctx->pc = 0x1013a0u;

    // 0x1013a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1013A0u;
    SET_GPR_U32(ctx, 31, 0x1013A8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1013A0u, 0x1013A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013A8u;
label_1013a8:
    // 0x1013a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1013a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013ac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1013ACu;
    SET_GPR_U32(ctx, 31, 0x1013B4u);
    ctx->pc = 0x1013B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013ACu;
    // 0x1013b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1013ACu, 0x1013B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013B4u;
label_1013b4:
    // 0x1013b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1013b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013b8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1013B8u;
    {
        const bool branch_taken_0x1013b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013B8u;
        // 0x1013bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013b8) {
            ctx->pc = 0x101418u;
            return;
        }
    }
    ctx->pc = 0x1013C0u;
    // 0x1013c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1013c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1013c8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1013cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1013ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1013d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1013D0u;
    {
        const bool branch_taken_0x1013d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1013d0) {
            ctx->pc = 0x1013D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1013D0u;
            // 0x1013d4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1013E4u;
            return;
        }
    }
    ctx->pc = 0x1013D8u;
    // 0x1013d8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1013D8u;
    SET_GPR_U32(ctx, 31, 0x1013E0u);
    ctx->pc = 0x1013DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013D8u;
    // 0x1013dc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1013D8u, 0x1013E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013E0u;
label_1013e0:
    // 0x1013e0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1013e4u;
}
