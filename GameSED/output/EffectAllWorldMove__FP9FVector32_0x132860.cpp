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

// Function: EffectAllWorldMove__FP9FVector32
// Address: 0x132860 - 0x1328d0
void EffectAllWorldMove__FP9FVector32_0x132860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectAllWorldMove__FP9FVector32_0x132860");
#endif

    switch (ctx->pc) {
        case 0x1328a8u: goto label_1328a8;
        case 0x1328b0u: goto label_1328b0;
        default: break;
    }

    ctx->pc = 0x132860u;

    // 0x132860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132864: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x132864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x132868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13286c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13286cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132878: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x13287c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x132880: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x132884: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x132884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x132888: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x132888u;
    {
        const bool branch_taken_0x132888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132888u;
        // 0x13288c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132888) {
            ctx->pc = 0x1328BCu;
            goto label_1328bc;
        }
    }
    ctx->pc = 0x132890u;
    // 0x132890: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x132890u;
    {
        const bool branch_taken_0x132890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x132894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132890u;
        // 0x132894: 0x8c900150  lw          $s0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132890) {
            ctx->pc = 0x1328BCu;
            goto label_1328bc;
        }
    }
    ctx->pc = 0x132898u;
    // 0x132898: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x132898u;
    {
        const bool branch_taken_0x132898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132898) {
            ctx->pc = 0x13289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132898u;
            // 0x13289c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1328C0u;
            goto label_1328c0;
        }
    }
    ctx->pc = 0x1328A0u;
    // 0x1328a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1328a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328a4: 0x0  nop
    ctx->pc = 0x1328a4u;
    // NOP
label_1328a8:
    // 0x1328a8: 0xc04c308  jal         func_130C20
    ctx->pc = 0x1328A8u;
    SET_GPR_U32(ctx, 31, 0x1328B0u);
    ctx->pc = 0x1328ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328A8u;
    // 0x1328ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C20u, 0x1328A8u, 0x1328B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328B0u;
label_1328b0:
    // 0x1328b0: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x1328b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1328b4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1328B4u;
    {
        const bool branch_taken_0x1328b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1328B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328B4u;
        // 0x1328b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328b4) {
            ctx->pc = 0x1328A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1328a8;
        }
    }
    ctx->pc = 0x1328BCu;
label_1328bc:
    // 0x1328bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1328bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1328c0:
    // 0x1328c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1328c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1328c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1328c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1328c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1328C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328C8u;
        // 0x1328cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328D0u;
}
