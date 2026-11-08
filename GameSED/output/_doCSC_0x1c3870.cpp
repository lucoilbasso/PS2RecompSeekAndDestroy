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

// Function: _doCSC
// Address: 0x1c3870 - 0x1c3998
void _doCSC_0x1c3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC_0x1c3870");
#endif

    switch (ctx->pc) {
        case 0x1c38a0u: goto label_1c38a0;
        case 0x1c38c4u: goto label_1c38c4;
        case 0x1c3908u: goto label_1c3908;
        case 0x1c3918u: goto label_1c3918;
        case 0x1c392cu: goto label_1c392c;
        case 0x1c3938u: goto label_1c3938;
        case 0x1c3960u: goto label_1c3960;
        default: break;
    }

    ctx->pc = 0x1c3870u;

    // 0x1c3870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3874: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3878: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1c3878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1c387c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3880: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c3880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c3884: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c3884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3888: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1c3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1c388c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c388cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3890: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c3890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c3894: 0x138980  sll         $s1, $s3, 6
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1c3898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c389c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c389cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c38a0:
    // 0x1c38a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c38a4: 0x0  nop
    ctx->pc = 0x1c38a4u;
    // NOP
    // 0x1c38a8: 0x0  nop
    ctx->pc = 0x1c38a8u;
    // NOP
    // 0x1c38ac: 0x0  nop
    ctx->pc = 0x1c38acu;
    // NOP
    // 0x1c38b0: 0x0  nop
    ctx->pc = 0x1c38b0u;
    // NOP
    // 0x1c38b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C38B4u;
    {
        const bool branch_taken_0x1c38b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c38b4) {
            ctx->pc = 0x1C38A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c38a0;
        }
    }
    ctx->pc = 0x1C38BCu;
    // 0x1c38bc: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C38BCu;
    SET_GPR_U32(ctx, 31, 0x1C38C4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C38BCu, 0x1C38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38C4u;
label_1c38c4:
    // 0x1c38c4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c38c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c38d0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x1c38d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x1c38d4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c38d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c38d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c38e0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1c38e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1c38e4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1c38e4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 17));
    // 0x1c38e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38ec: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c38f0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c38f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c38f4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4));
    // 0x1c38f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C38F8u;
    {
        const bool branch_taken_0x1c38f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38f8) {
            ctx->pc = 0x1C38FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38F8u;
            // 0x1c38fc: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C390Cu;
            goto label_1c390c;
        }
    }
    ctx->pc = 0x1C3900u;
    // 0x1c3900: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3900u;
    SET_GPR_U32(ctx, 31, 0x1C3908u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3900u, 0x1C3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3908u;
label_1c3908:
    // 0x1c3908: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_1c390c:
    // 0x1c390c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3910: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C3910u;
    SET_GPR_U32(ctx, 31, 0x1C3918u);
    ctx->pc = 0x1C3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3910u;
    // 0x1c3914: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C3910u, 0x1C3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3918u;
label_1c3918:
    // 0x1c3918: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x1c391c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3920: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c3920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c3924: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3924u;
    SET_GPR_U32(ctx, 31, 0x1C392Cu);
    ctx->pc = 0x1C3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3924u;
    // 0x1c3928: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3924u, 0x1C392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C392Cu;
label_1c392c:
    // 0x1c392c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3930: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c3934: 0x0  nop
    ctx->pc = 0x1c3934u;
    // NOP
label_1c3938:
    // 0x1c3938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c393c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1c3940: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3944: 0x0  nop
    ctx->pc = 0x1c3944u;
    // NOP
    // 0x1c3948: 0x0  nop
    ctx->pc = 0x1c3948u;
    // NOP
    // 0x1c394c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C394Cu;
    {
        const bool branch_taken_0x1c394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c394c) {
            ctx->pc = 0x1C3938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3938;
        }
    }
    ctx->pc = 0x1C3954u;
    // 0x1c3954: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3958: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c395c: 0x0  nop
    ctx->pc = 0x1c395cu;
    // NOP
label_1c3960:
    // 0x1c3960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3964: 0x0  nop
    ctx->pc = 0x1c3964u;
    // NOP
    // 0x1c3968: 0x0  nop
    ctx->pc = 0x1c3968u;
    // NOP
    // 0x1c396c: 0x0  nop
    ctx->pc = 0x1c396cu;
    // NOP
    // 0x1c3970: 0x0  nop
    ctx->pc = 0x1c3970u;
    // NOP
    // 0x1c3974: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3974u;
    {
        const bool branch_taken_0x1c3974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3974) {
            ctx->pc = 0x1C3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3960;
        }
    }
    ctx->pc = 0x1C397Cu;
    // 0x1c397c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3980: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1c3980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3984: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c3984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3988: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1c3988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c398c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c398cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3990: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3990u;
        // 0x1c3994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3998u;
}
