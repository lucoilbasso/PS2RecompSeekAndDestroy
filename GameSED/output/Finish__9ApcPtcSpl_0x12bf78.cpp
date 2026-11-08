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

// Function: Finish__9ApcPtcSpl
// Address: 0x12bf78 - 0x12bfe4
void Finish__9ApcPtcSpl_0x12bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcPtcSpl_0x12bf78");
#endif

    switch (ctx->pc) {
        case 0x12bfa0u: goto label_12bfa0;
        case 0x12bfa8u: goto label_12bfa8;
        case 0x12bfc8u: goto label_12bfc8;
        case 0x12bfd0u: goto label_12bfd0;
        default: break;
    }

    ctx->pc = 0x12bf78u;

    // 0x12bf78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bf7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bf80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12bf80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bf88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bf8c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x12bf90: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BF90u;
    {
        const bool branch_taken_0x12bf90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bf90) {
            ctx->pc = 0x12BF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BF90u;
            // 0x12bf94: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BFB8u;
            goto label_12bfb8;
        }
    }
    ctx->pc = 0x12BF98u;
    // 0x12bf98: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12bf9c: 0x0  nop
    ctx->pc = 0x12bf9cu;
    // NOP
label_12bfa0:
    // 0x12bfa0: 0xc04901c  jal         func_124070
    ctx->pc = 0x12BFA0u;
    SET_GPR_U32(ctx, 31, 0x12BFA8u);
    ctx->pc = 0x12BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFA0u;
    // 0x12bfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x12BFA0u, 0x12BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFA8u;
label_12bfa8:
    // 0x12bfa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfac: 0x54a0fffc  bnel        $a1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12BFACu;
    {
        const bool branch_taken_0x12bfac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bfac) {
            ctx->pc = 0x12BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BFACu;
            // 0x12bfb0: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfa0;
        }
    }
    ctx->pc = 0x12BFB4u;
    // 0x12bfb4: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_12bfb8:
    // 0x12bfb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BFB8u;
    {
        const bool branch_taken_0x12bfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bfb8) {
            ctx->pc = 0x12BFC8u;
            goto label_12bfc8;
        }
    }
    ctx->pc = 0x12BFC0u;
    // 0x12bfc0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x12BFC0u;
    SET_GPR_U32(ctx, 31, 0x12BFC8u);
    ctx->pc = 0x12BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFC0u;
    // 0x12bfc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x12BFC0u, 0x12BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFC8u;
label_12bfc8:
    // 0x12bfc8: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x12BFC8u;
    SET_GPR_U32(ctx, 31, 0x12BFD0u);
    ctx->pc = 0x12BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFC8u;
    // 0x12bfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x12BFC8u, 0x12BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFD0u;
label_12bfd0:
    // 0x12bfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFDCu;
        // 0x12bfe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFE4u;
}
