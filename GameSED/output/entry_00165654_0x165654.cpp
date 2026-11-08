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

// Function: entry_00165654
// Address: 0x165654 - 0x1656b8
void entry_00165654_0x165654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165654_0x165654");
#endif

    switch (ctx->pc) {
        case 0x1656b4u: goto label_1656b4;
        default: break;
    }

    ctx->pc = 0x165654u;

label_165654:
    // 0x165654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165658:
    // 0x165658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16565c:
    // 0x16565c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_165660:
    // 0x165660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_165664:
    // 0x165664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x165664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_165668:
    // 0x165668: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x165668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16566c:
    // 0x16566c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_165670:
    // 0x165670: 0x8e081230  lw          $t0, 0x1230($s0)
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_165674:
    // 0x165674: 0x1100005f  beqz        $t0, . + 4 + (0x5F << 2)
label_165678:
    if (ctx->pc == 0x165678u) {
        ctx->pc = 0x165678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165674u;
        // 0x165678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16567Cu;
        goto label_16567c;
    }
    ctx->pc = 0x165674u;
    {
        const bool branch_taken_0x165674 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x165678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165674u;
        // 0x165678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165674) {
            ctx->pc = 0x1657F4u;
            return;
        }
    }
    ctx->pc = 0x16567Cu;
label_16567c:
    // 0x16567c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_165680:
    // 0x165680: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_165684:
    if (ctx->pc == 0x165684u) {
        ctx->pc = 0x165684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165680u;
        // 0x165684: 0x8e121230  lw          $s2, 0x1230($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165688u;
        goto label_165688;
    }
    ctx->pc = 0x165680u;
    {
        const bool branch_taken_0x165680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165680) {
            ctx->pc = 0x165684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165680u;
            // 0x165684: 0x8e121230  lw          $s2, 0x1230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656B8u;
            return;
        }
    }
    ctx->pc = 0x165688u;
label_165688:
    // 0x165688: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16568c:
    // 0x16568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165690:
    // 0x165690: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_165694:
    // 0x165694: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_165698:
    // 0x165698: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16569c:
    // 0x16569c: 0x8c67009c  lw          $a3, 0x9C($v1)
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1656a0:
    // 0x1656a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1656a4:
    // 0x1656a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1656a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1656a8:
    // 0x1656a8: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1656ac:
    // 0x1656ac: 0x60f809  jalr        $v1
label_1656b0:
    if (ctx->pc == 0x1656B0u) {
        ctx->pc = 0x1656B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656ACu;
        // 0x1656b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656B4u;
        goto label_1656b4;
    }
    ctx->pc = 0x1656ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1656B4u);
        ctx->pc = 0x1656B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656ACu;
        // 0x1656b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1656ACu, 0x1656B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1656B4u;
label_1656b4:
    // 0x1656b4: 0x8e121230  lw          $s2, 0x1230($s0)
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
    ctx->pc = 0x1656b8u;
}
