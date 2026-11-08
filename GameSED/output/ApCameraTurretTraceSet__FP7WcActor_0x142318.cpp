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

// Function: ApCameraTurretTraceSet__FP7WcActor
// Address: 0x142318 - 0x142388
void ApCameraTurretTraceSet__FP7WcActor_0x142318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraTurretTraceSet__FP7WcActor_0x142318");
#endif

    switch (ctx->pc) {
        case 0x142334u: goto label_142334;
        default: break;
    }

    ctx->pc = 0x142318u;

    // 0x142318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14231c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142324: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142328: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14232c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14232Cu;
    SET_GPR_U32(ctx, 31, 0x142334u);
    ctx->pc = 0x142330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14232Cu;
    // 0x142330: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14232Cu, 0x142334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142334u;
label_142334:
    // 0x142334: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142338: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14233c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x14233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142340: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x142340u;
    {
        const bool branch_taken_0x142340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142340u;
        // 0x142344: 0x2444ee48  addiu       $a0, $v0, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142340) {
            ctx->pc = 0x142360u;
            goto label_142360;
        }
    }
    ctx->pc = 0x142348u;
    // 0x142348: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14234c: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14234Cu;
    {
        const bool branch_taken_0x14234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14234c) {
            ctx->pc = 0x142350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14234Cu;
            // 0x142350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142364u;
            goto label_142364;
        }
    }
    ctx->pc = 0x142354u;
    // 0x142354: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142354u;
    {
        const bool branch_taken_0x142354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142354u;
        // 0x142358: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142354) {
            ctx->pc = 0x142364u;
            goto label_142364;
        }
    }
    ctx->pc = 0x14235Cu;
    // 0x14235c: 0x0  nop
    ctx->pc = 0x14235cu;
    // NOP
label_142360:
    // 0x142360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142364:
    // 0x142364: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142368: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142368u;
    {
        const bool branch_taken_0x142368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142368u;
        // 0x14236c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142368) {
            ctx->pc = 0x142380u;
            goto label_142380;
        }
    }
    ctx->pc = 0x142370u;
    // 0x142370: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142374: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x142374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x142378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14237c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14237cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_142380:
    // 0x142380: 0x3e00008  jr          $ra
    ctx->pc = 0x142380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142380u;
        // 0x142384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142388u;
}
