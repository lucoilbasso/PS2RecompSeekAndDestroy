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

// Function: Enable__7WcWorldPv
// Address: 0x1877a0 - 0x187848
void Enable__7WcWorldPv_0x1877a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Enable__7WcWorldPv_0x1877a0");
#endif

    switch (ctx->pc) {
        case 0x1877f4u: goto label_1877f4;
        case 0x187814u: goto label_187814;
        case 0x187830u: goto label_187830;
        default: break;
    }

    ctx->pc = 0x1877a0u;

    // 0x1877a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1877a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1877a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1877a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1877a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1877acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1877b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1877b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1877b4: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1877b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1877b8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1877B8u;
    {
        const bool branch_taken_0x1877b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B8u;
        // 0x1877bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b8) {
            ctx->pc = 0x187834u;
            goto label_187834;
        }
    }
    ctx->pc = 0x1877C0u;
    // 0x1877c0: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1877c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1877c8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1877cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1877CCu;
    {
        const bool branch_taken_0x1877cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877CCu;
        // 0x1877d0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877cc) {
            ctx->pc = 0x1877E0u;
            goto label_1877e0;
        }
    }
    ctx->pc = 0x1877D4u;
    // 0x1877d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1877d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1877D8u;
    {
        const bool branch_taken_0x1877d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877D8u;
        // 0x1877dc: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877d8) {
            ctx->pc = 0x187818u;
            goto label_187818;
        }
    }
    ctx->pc = 0x1877E0u;
label_1877e0:
    // 0x1877e0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1877E0u;
    {
        const bool branch_taken_0x1877e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E0u;
        // 0x1877e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877e0) {
            ctx->pc = 0x1877ECu;
            goto label_1877ec;
        }
    }
    ctx->pc = 0x1877E8u;
    // 0x1877e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1877e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1877ec:
    // 0x1877ec: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1877ECu;
    SET_GPR_U32(ctx, 31, 0x1877F4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1877ECu, 0x1877F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877F4u;
label_1877f4:
    // 0x1877f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1877f8: 0x24a57f08  addiu       $a1, $a1, 0x7F08
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32520));
    // 0x1877fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1877fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187800: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187804u;
    {
        const bool branch_taken_0x187804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187804u;
        // 0x187808: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187804) {
            ctx->pc = 0x187814u;
            goto label_187814;
        }
    }
    ctx->pc = 0x18780Cu;
    // 0x18780c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18780Cu;
    SET_GPR_U32(ctx, 31, 0x187814u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18780Cu, 0x187814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187814u;
label_187814:
    // 0x187814: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x187814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_187818:
    // 0x187818: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x18781c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187820: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x187824: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x187824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x187828: 0xc062218  jal         func_188860
    ctx->pc = 0x187828u;
    SET_GPR_U32(ctx, 31, 0x187830u);
    ctx->pc = 0x18782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187828u;
    // 0x18782c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188860u, 0x187828u, 0x187830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187830u;
label_187830:
    // 0x187830: 0xae30015c  sw          $s0, 0x15C($s1)
    ctx->pc = 0x187830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 16));
label_187834:
    // 0x187834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18783c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187840: 0x3e00008  jr          $ra
    ctx->pc = 0x187840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187840u;
        // 0x187844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187848u;
}
