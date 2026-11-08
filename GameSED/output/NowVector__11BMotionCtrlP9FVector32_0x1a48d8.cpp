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

// Function: NowVector__11BMotionCtrlP9FVector32
// Address: 0x1a48d8 - 0x1a4938
void NowVector__11BMotionCtrlP9FVector32_0x1a48d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowVector__11BMotionCtrlP9FVector32_0x1a48d8");
#endif

    switch (ctx->pc) {
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        default: break;
    }

    ctx->pc = 0x1a48d8u;

label_1a48d8:
    // 0x1a48d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a48dc:
    // 0x1a48dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a48dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a48e0:
    // 0x1a48e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a48e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a48e4:
    // 0x1a48e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a48e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a48e8:
    // 0x1a48e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a48ec:
    // 0x1a48ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a48ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a48f0:
    // 0x1a48f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a48f4:
    // 0x1a48f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a48f8:
    if (ctx->pc == 0x1A48F8u) {
        ctx->pc = 0x1A48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F4u;
        // 0x1a48f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48FCu;
        goto label_1a48fc;
    }
    ctx->pc = 0x1A48F4u;
    {
        const bool branch_taken_0x1a48f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F4u;
        // 0x1a48f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48f4) {
            ctx->pc = 0x1A4910u;
            goto label_1a4910;
        }
    }
    ctx->pc = 0x1A48FCu;
label_1a48fc:
    // 0x1a48fc: 0x40f809  jalr        $v0
label_1a4900:
    if (ctx->pc == 0x1A4900u) {
        ctx->pc = 0x1A4904u;
        goto label_1a4904;
    }
    ctx->pc = 0x1A48FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4904u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48FCu, 0x1A4904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4904u;
label_1a4904:
    // 0x1a4904: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a4908:
    if (ctx->pc == 0x1A4908u) {
        ctx->pc = 0x1A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4904u;
        // 0x1a4908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A490Cu;
        goto label_1a490c;
    }
    ctx->pc = 0x1A4904u;
    {
        const bool branch_taken_0x1a4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4904u;
        // 0x1a4908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4904) {
            ctx->pc = 0x1A4928u;
            goto label_1a4928;
        }
    }
    ctx->pc = 0x1A490Cu;
label_1a490c:
    // 0x1a490c: 0x0  nop
    ctx->pc = 0x1a490cu;
    // NOP
label_1a4910:
    // 0x1a4910: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4914:
    // 0x1a4914: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a4918:
    // 0x1a4918: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a4918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
label_1a491c:
    // 0x1a491c: 0xc068186  jal         func_1A0618
label_1a4920:
    if (ctx->pc == 0x1A4920u) {
        ctx->pc = 0x1A4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A491Cu;
        // 0x1a4920: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4924u;
        goto label_1a4924;
    }
    ctx->pc = 0x1A491Cu;
    SET_GPR_U32(ctx, 31, 0x1A4924u);
    ctx->pc = 0x1A4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A491Cu;
    // 0x1a4920: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A491Cu, 0x1A4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4924u;
label_1a4924:
    // 0x1a4924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4928:
    // 0x1a4928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a492c:
    // 0x1a492c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4930:
    // 0x1a4930: 0x3e00008  jr          $ra
label_1a4934:
    if (ctx->pc == 0x1A4934u) {
        ctx->pc = 0x1A4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4930u;
        // 0x1a4934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4938u;
        goto label_fallthrough_0x1a4930;
    }
    ctx->pc = 0x1A4930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4930u;
        // 0x1a4934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4930:
    ctx->pc = 0x1A4938u;
}
