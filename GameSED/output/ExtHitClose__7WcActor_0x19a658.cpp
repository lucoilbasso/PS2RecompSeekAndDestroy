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

// Function: ExtHitClose__7WcActor
// Address: 0x19a658 - 0x19a6a8
void ExtHitClose__7WcActor_0x19a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtHitClose__7WcActor_0x19a658");
#endif

    switch (ctx->pc) {
        case 0x19a680u: goto label_19a680;
        case 0x19a688u: goto label_19a688;
        default: break;
    }

    ctx->pc = 0x19a658u;

    // 0x19a658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a65c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a66c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x19a670: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A670u;
    {
        const bool branch_taken_0x19a670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A670u;
        // 0x19a674: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a670) {
            ctx->pc = 0x19A698u;
            goto label_19a698;
        }
    }
    ctx->pc = 0x19A678u;
    // 0x19a678: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x19a678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19a67c: 0x0  nop
    ctx->pc = 0x19a67cu;
    // NOP
label_19a680:
    // 0x19a680: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x19A680u;
    SET_GPR_U32(ctx, 31, 0x19A688u);
    ctx->pc = 0x19A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A680u;
    // 0x19a684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x19A680u, 0x19A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A688u;
label_19a688:
    // 0x19a688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a68c: 0x5480fffc  bnel        $a0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19A68Cu;
    {
        const bool branch_taken_0x19a68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a68c) {
            ctx->pc = 0x19A690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A68Cu;
            // 0x19a690: 0x8c900018  lw          $s0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a680;
        }
    }
    ctx->pc = 0x19A694u;
    // 0x19a694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a698:
    // 0x19a698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a69c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6A0u;
        // 0x19a6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A6A8u;
}
