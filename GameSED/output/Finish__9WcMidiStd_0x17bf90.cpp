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

// Function: Finish__9WcMidiStd
// Address: 0x17bf90 - 0x17bff4
void Finish__9WcMidiStd_0x17bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9WcMidiStd_0x17bf90");
#endif

    switch (ctx->pc) {
        case 0x17bfb8u: goto label_17bfb8;
        case 0x17bfc4u: goto label_17bfc4;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bfdcu: goto label_17bfdc;
        default: break;
    }

    ctx->pc = 0x17bf90u;

    // 0x17bf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bf94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bf98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bf98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17bfa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bfa4: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17bfa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bfac: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17bfacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17bfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfb4: 0x0  nop
    ctx->pc = 0x17bfb4u;
    // NOP
label_17bfb8:
    // 0x17bfb8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17bfbc: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17BFBCu;
    SET_GPR_U32(ctx, 31, 0x17BFC4u);
    ctx->pc = 0x17BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFBCu;
    // 0x17bfc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17BFBCu, 0x17BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFC4u;
label_17bfc4:
    // 0x17bfc4: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17BFC4u;
    {
        const bool branch_taken_0x17bfc4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17bfc4) {
            ctx->pc = 0x17BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BFC4u;
            // 0x17bfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bfb8;
        }
    }
    ctx->pc = 0x17BFCCu;
    // 0x17bfcc: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17BFCCu;
    SET_GPR_U32(ctx, 31, 0x17BFD4u);
    ctx->pc = 0x17BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFCCu;
    // 0x17bfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17BFCCu, 0x17BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFD4u;
label_17bfd4:
    // 0x17bfd4: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17BFD4u;
    SET_GPR_U32(ctx, 31, 0x17BFDCu);
    ctx->pc = 0x17BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFD4u;
    // 0x17bfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17BFD4u, 0x17BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFDCu;
label_17bfdc:
    // 0x17bfdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bfe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bfe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bfe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bfe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bfe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFECu;
        // 0x17bff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFF4u;
}
