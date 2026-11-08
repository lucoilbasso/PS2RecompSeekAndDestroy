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

// Function: entry_001857d8
// Address: 0x1857d8 - 0x185810
void entry_001857d8_0x1857d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001857d8_0x1857d8");
#endif

    switch (ctx->pc) {
        case 0x185804u: goto label_185804;
        default: break;
    }

    ctx->pc = 0x1857d8u;

label_1857d8:
    // 0x1857d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1857dc:
    // 0x1857dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1857dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1857e0:
    // 0x1857e0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_1857e4:
    if (ctx->pc == 0x1857E4u) {
        ctx->pc = 0x1857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857E0u;
        // 0x1857e4: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857E8u;
        goto label_1857e8;
    }
    ctx->pc = 0x1857E0u;
    {
        const bool branch_taken_0x1857e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1857e0) {
            ctx->pc = 0x1857E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1857E0u;
            // 0x1857e4: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185828u;
            return;
        }
    }
    ctx->pc = 0x1857E8u;
label_1857e8:
    // 0x1857e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1857ec:
    // 0x1857ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1857ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1857f0:
    // 0x1857f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1857f4:
    // 0x1857f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1857f8:
    // 0x1857f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1857fc:
    // 0x1857fc: 0x60f809  jalr        $v1
label_185800:
    if (ctx->pc == 0x185800u) {
        ctx->pc = 0x185800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857FCu;
        // 0x185800: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185804u;
        goto label_185804;
    }
    ctx->pc = 0x1857FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185804u);
        ctx->pc = 0x185800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857FCu;
        // 0x185800: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857FCu, 0x185804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185804u;
label_185804:
    // 0x185804: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_185808:
    // 0x185808: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_18580c:
    if (ctx->pc == 0x18580Cu) {
        ctx->pc = 0x18580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185808u;
        // 0x18580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185810u;
        goto label_fallthrough_0x185808;
    }
    ctx->pc = 0x185808u;
    {
        const bool branch_taken_0x185808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185808u;
        // 0x18580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185808) {
            ctx->pc = 0x185824u;
            return;
        }
    }
label_fallthrough_0x185808:
    ctx->pc = 0x185810u;
}
