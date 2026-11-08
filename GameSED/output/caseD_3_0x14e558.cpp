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

// Function: caseD_3
// Address: 0x14e558 - 0x14e5b4
void caseD_3_0x14e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14e558");
#endif

    switch (ctx->pc) {
        case 0x14e56cu: goto label_14e56c;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e590u: goto label_14e590;
        default: break;
    }

    ctx->pc = 0x14e558u;

    // 0x14e558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e55c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e564: 0xc0557d0  jal         func_155F40
    ctx->pc = 0x14E564u;
    SET_GPR_U32(ctx, 31, 0x14E56Cu);
    ctx->pc = 0x14E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E564u;
    // 0x14e568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E564u, 0x14E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E56Cu;
label_14e56c:
    // 0x14e56c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e570: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e574: 0xc05371a  jal         func_14DC68
    ctx->pc = 0x14E574u;
    SET_GPR_U32(ctx, 31, 0x14E57Cu);
    ctx->pc = 0x14E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E574u;
    // 0x14e578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E574u, 0x14E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E57Cu;
label_14e57c:
    // 0x14e57c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e580: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14e584: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
    // 0x14e588: 0xc05ac44  jal         func_16B110
    ctx->pc = 0x14E588u;
    SET_GPR_U32(ctx, 31, 0x14E590u);
    ctx->pc = 0x14E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E588u;
    // 0x14e58c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E588u, 0x14E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E590u;
label_14e590:
    // 0x14e590: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e594: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E594u;
    {
        const bool branch_taken_0x14e594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E594u;
        // 0x14e598: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e594) {
            ctx->pc = 0x14E5B4u;
            return;
        }
    }
    ctx->pc = 0x14E59Cu;
    // 0x14e59c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14e5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E5A0u;
    {
        const bool branch_taken_0x14e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5A0u;
        // 0x14e5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5a0) {
            ctx->pc = 0x14E5B4u;
            return;
        }
    }
    ctx->pc = 0x14E5A8u;
    // 0x14e5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5ac: 0xc056f3e  jal         func_15BCF8
    ctx->pc = 0x14E5ACu;
    SET_GPR_U32(ctx, 31, 0x14E5B4u);
    ctx->pc = 0x14E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5ACu;
    // 0x14e5b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF8u, 0x14E5ACu, 0x14E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B4u;
}
