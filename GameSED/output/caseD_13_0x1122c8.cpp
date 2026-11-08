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

// Function: caseD_13
// Address: 0x1122c8 - 0x112300
void caseD_13_0x1122c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1122c8");
#endif

    switch (ctx->pc) {
        case 0x1122d0u: goto label_1122d0;
        case 0x1122ecu: goto label_1122ec;
        default: break;
    }

    ctx->pc = 0x1122c8u;

    // 0x1122c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1122C8u;
    SET_GPR_U32(ctx, 31, 0x1122D0u);
    ctx->pc = 0x1122CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122C8u;
    // 0x1122cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1122C8u, 0x1122D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122D0u;
label_1122d0:
    // 0x1122d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1122d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1122d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122d8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1122dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1122dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1122e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1122e4: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x1122E4u;
    SET_GPR_U32(ctx, 31, 0x1122ECu);
    ctx->pc = 0x1122E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122E4u;
    // 0x1122e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x1122E4u, 0x1122ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122ECu;
label_1122ec:
    // 0x1122ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122ECu;
    {
        const bool branch_taken_0x1122ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122ec) {
            ctx->pc = 0x1122F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122ECu;
            // 0x1122f0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112300u;
            return;
        }
    }
    ctx->pc = 0x1122F4u;
    // 0x1122f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1122f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1122F8u;
    {
        const bool branch_taken_0x1122f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122F8u;
        // 0x1122fc: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122f8) {
            ctx->pc = 0x112328u;
            return;
        }
    }
    ctx->pc = 0x112300u;
}
