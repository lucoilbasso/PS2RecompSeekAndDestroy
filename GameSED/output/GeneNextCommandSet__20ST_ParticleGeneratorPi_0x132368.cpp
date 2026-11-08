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

// Function: GeneNextCommandSet__20ST_ParticleGeneratorPi
// Address: 0x132368 - 0x13240c
void GeneNextCommandSet__20ST_ParticleGeneratorPi_0x132368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneNextCommandSet__20ST_ParticleGeneratorPi_0x132368");
#endif

    switch (ctx->pc) {
        case 0x132384u: goto label_132384;
        case 0x1323b8u: goto label_1323b8;
        case 0x1323d0u: goto label_1323d0;
        case 0x1323e8u: goto label_1323e8;
        default: break;
    }

    ctx->pc = 0x132368u;

    // 0x132368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13236c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132374: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x132374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13237c: 0xc048464  jal         func_121190
    ctx->pc = 0x13237Cu;
    SET_GPR_U32(ctx, 31, 0x132384u);
    ctx->pc = 0x132380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13237Cu;
    // 0x132380: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121190u, 0x13237Cu, 0x132384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132384u;
label_132384:
    // 0x132384: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132388: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x13238c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132390: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132390u;
    {
        const bool branch_taken_0x132390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132390u;
        // 0x132394: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132390) {
            ctx->pc = 0x1323B0u;
            goto label_1323b0;
        }
    }
    ctx->pc = 0x132398u;
    // 0x132398: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13239c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x13239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1323a0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1323a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1323a4: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1323a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1323a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1323A8u;
    {
        const bool branch_taken_0x1323a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323A8u;
        // 0x1323ac: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323a8) {
            ctx->pc = 0x1323FCu;
            goto label_1323fc;
        }
    }
    ctx->pc = 0x1323B0u;
label_1323b0:
    // 0x1323b0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323B0u;
    SET_GPR_U32(ctx, 31, 0x1323B8u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323B0u, 0x1323B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323B8u;
label_1323b8:
    // 0x1323b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323BCu;
    {
        const bool branch_taken_0x1323bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323BCu;
        // 0x1323c0: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323bc) {
            ctx->pc = 0x1323C8u;
            goto label_1323c8;
        }
    }
    ctx->pc = 0x1323C4u;
    // 0x1323c4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1323c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_1323c8:
    // 0x1323c8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323C8u;
    SET_GPR_U32(ctx, 31, 0x1323D0u);
    ctx->pc = 0x1323CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323C8u;
    // 0x1323cc: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323C8u, 0x1323D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323D0u;
label_1323d0:
    // 0x1323d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323D4u;
    {
        const bool branch_taken_0x1323d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323D4u;
        // 0x1323d8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323d4) {
            ctx->pc = 0x1323E0u;
            goto label_1323e0;
        }
    }
    ctx->pc = 0x1323DCu;
    // 0x1323dc: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1323dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_1323e0:
    // 0x1323e0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323E0u;
    SET_GPR_U32(ctx, 31, 0x1323E8u);
    ctx->pc = 0x1323E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323E0u;
    // 0x1323e4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323E0u, 0x1323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323E8u;
label_1323e8:
    // 0x1323e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323ECu;
    {
        const bool branch_taken_0x1323ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ECu;
        // 0x1323f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323ec) {
            ctx->pc = 0x1323F8u;
            goto label_1323f8;
        }
    }
    ctx->pc = 0x1323F4u;
    // 0x1323f4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1323f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1323f8:
    // 0x1323f8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1323f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1323fc:
    // 0x1323fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1323fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x132400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132404: 0x3e00008  jr          $ra
    ctx->pc = 0x132404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132404u;
        // 0x132408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13240Cu;
}
