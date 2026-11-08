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

// Function: UpDownGunDirection__9ApcCqtanki
// Address: 0x161688 - 0x16173c
void UpDownGunDirection__9ApcCqtanki_0x161688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDownGunDirection__9ApcCqtanki_0x161688");
#endif

    switch (ctx->pc) {
        case 0x1616d4u: goto label_1616d4;
        case 0x161704u: goto label_161704;
        case 0x16172cu: goto label_16172c;
        default: break;
    }

    ctx->pc = 0x161688u;

    // 0x161688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16168c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161690: 0x24901a60  addiu       $s0, $a0, 0x1A60
    ctx->pc = 0x161690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
    // 0x161694: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x161698: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x161698u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x16169c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16169cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1616a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1616a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1616a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1616a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1616a8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1616A8u;
    {
        const bool branch_taken_0x1616a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616a8) {
            ctx->pc = 0x16172Cu;
            goto label_16172c;
        }
    }
    ctx->pc = 0x1616B0u;
    // 0x1616b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1616b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1616b4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1616B4u;
    {
        const bool branch_taken_0x1616b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616b4) {
            ctx->pc = 0x1616B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1616B4u;
            // 0x1616b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161730u;
            goto label_161730;
        }
    }
    ctx->pc = 0x1616BCu;
    // 0x1616bc: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x1616bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x1616c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1616c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1616c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1616c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1616c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616cc: 0xc0618da  jal         func_186368
    ctx->pc = 0x1616CCu;
    SET_GPR_U32(ctx, 31, 0x1616D4u);
    ctx->pc = 0x1616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616CCu;
    // 0x1616d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1616CCu, 0x1616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616D4u;
label_1616d4:
    // 0x1616d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1616d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616d8: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1616d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1616dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1616dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616e0: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1616e4: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1616e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1616e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616ec: 0x8e090040  lw          $t1, 0x40($s0)
    ctx->pc = 0x1616ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1616f0: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x1616f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1616f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1616F4u;
    {
        const bool branch_taken_0x1616f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616F4u;
        // 0x1616f8: 0x123182a  slt         $v1, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616f4) {
            ctx->pc = 0x161710u;
            goto label_161710;
        }
    }
    ctx->pc = 0x1616FCu;
    // 0x1616fc: 0xc0618da  jal         func_186368
    ctx->pc = 0x1616FCu;
    SET_GPR_U32(ctx, 31, 0x161704u);
    ctx->pc = 0x161700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616FCu;
    // 0x161700: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1616FCu, 0x161704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161704u;
label_161704:
    // 0x161704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161704u;
    {
        const bool branch_taken_0x161704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161704u;
        // 0x161708: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161704) {
            ctx->pc = 0x161730u;
            goto label_161730;
        }
    }
    ctx->pc = 0x16170Cu;
    // 0x16170c: 0x0  nop
    ctx->pc = 0x16170cu;
    // NOP
label_161710:
    // 0x161710: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161710u;
    {
        const bool branch_taken_0x161710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161710u;
        // 0x161714: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161710) {
            ctx->pc = 0x161730u;
            goto label_161730;
        }
    }
    ctx->pc = 0x161718u;
    // 0x161718: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16171c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161724: 0xc0618da  jal         func_186368
    ctx->pc = 0x161724u;
    SET_GPR_U32(ctx, 31, 0x16172Cu);
    ctx->pc = 0x161728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161724u;
    // 0x161728: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x161724u, 0x16172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16172Cu;
label_16172c:
    // 0x16172c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16172cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161730:
    // 0x161730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x161730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161734: 0x3e00008  jr          $ra
    ctx->pc = 0x161734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161734u;
        // 0x161738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16173Cu;
}
