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

// Function: caseD_14
// Address: 0x112340 - 0x112398
void caseD_14_0x112340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x112340");
#endif

    switch (ctx->pc) {
        case 0x112348u: goto label_112348;
        case 0x112364u: goto label_112364;
        case 0x11238cu: goto label_11238c;
        default: break;
    }

    ctx->pc = 0x112340u;

    // 0x112340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112340u;
    SET_GPR_U32(ctx, 31, 0x112348u);
    ctx->pc = 0x112344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112340u;
    // 0x112344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112340u, 0x112348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112348u;
label_112348:
    // 0x112348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11234c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112350: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112358: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11235c: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x11235Cu;
    SET_GPR_U32(ctx, 31, 0x112364u);
    ctx->pc = 0x112360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11235Cu;
    // 0x112360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x11235Cu, 0x112364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112364u;
label_112364:
    // 0x112364: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112364u;
    {
        const bool branch_taken_0x112364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112364u;
        // 0x112368: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112364) {
            ctx->pc = 0x112398u;
            return;
        }
    }
    ctx->pc = 0x11236Cu;
    // 0x11236c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112370: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x112370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x112374: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x112374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x112378: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x112378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11237c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11237cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x112380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x112380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112384: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x112384u;
    SET_GPR_U32(ctx, 31, 0x11238Cu);
    ctx->pc = 0x112388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112384u;
    // 0x112388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x112384u, 0x11238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11238Cu;
label_11238c:
    // 0x11238c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11238Cu;
    {
        const bool branch_taken_0x11238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11238c) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x112394u;
    // 0x112394: 0x0  nop
    ctx->pc = 0x112394u;
    // NOP
    ctx->pc = 0x112398u;
}
