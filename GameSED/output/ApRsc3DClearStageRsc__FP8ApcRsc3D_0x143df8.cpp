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

// Function: ApRsc3DClearStageRsc__FP8ApcRsc3D
// Address: 0x143df8 - 0x14408c
void ApRsc3DClearStageRsc__FP8ApcRsc3D_0x143df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DClearStageRsc__FP8ApcRsc3D_0x143df8");
#endif

    switch (ctx->pc) {
        case 0x143df8u: goto label_143df8;
        case 0x143dfcu: goto label_143dfc;
        case 0x143e00u: goto label_143e00;
        case 0x143e04u: goto label_143e04;
        case 0x143e08u: goto label_143e08;
        case 0x143e0cu: goto label_143e0c;
        case 0x143e10u: goto label_143e10;
        case 0x143e14u: goto label_143e14;
        case 0x143e18u: goto label_143e18;
        case 0x143e1cu: goto label_143e1c;
        case 0x143e20u: goto label_143e20;
        case 0x143e24u: goto label_143e24;
        case 0x143e28u: goto label_143e28;
        case 0x143e2cu: goto label_143e2c;
        case 0x143e30u: goto label_143e30;
        case 0x143e34u: goto label_143e34;
        case 0x143e38u: goto label_143e38;
        case 0x143e3cu: goto label_143e3c;
        case 0x143e40u: goto label_143e40;
        case 0x143e44u: goto label_143e44;
        case 0x143e48u: goto label_143e48;
        case 0x143e4cu: goto label_143e4c;
        case 0x143e50u: goto label_143e50;
        case 0x143e54u: goto label_143e54;
        case 0x143e58u: goto label_143e58;
        case 0x143e5cu: goto label_143e5c;
        case 0x143e60u: goto label_143e60;
        case 0x143e64u: goto label_143e64;
        case 0x143e68u: goto label_143e68;
        case 0x143e6cu: goto label_143e6c;
        case 0x143e70u: goto label_143e70;
        case 0x143e74u: goto label_143e74;
        case 0x143e78u: goto label_143e78;
        case 0x143e7cu: goto label_143e7c;
        case 0x143e80u: goto label_143e80;
        case 0x143e84u: goto label_143e84;
        case 0x143e88u: goto label_143e88;
        case 0x143e8cu: goto label_143e8c;
        case 0x143e90u: goto label_143e90;
        case 0x143e94u: goto label_143e94;
        case 0x143e98u: goto label_143e98;
        case 0x143e9cu: goto label_143e9c;
        case 0x143ea0u: goto label_143ea0;
        case 0x143ea4u: goto label_143ea4;
        case 0x143ea8u: goto label_143ea8;
        case 0x143eacu: goto label_143eac;
        case 0x143eb0u: goto label_143eb0;
        case 0x143eb4u: goto label_143eb4;
        case 0x143eb8u: goto label_143eb8;
        case 0x143ebcu: goto label_143ebc;
        case 0x143ec0u: goto label_143ec0;
        case 0x143ec4u: goto label_143ec4;
        case 0x143ec8u: goto label_143ec8;
        case 0x143eccu: goto label_143ecc;
        case 0x143ed0u: goto label_143ed0;
        case 0x143ed4u: goto label_143ed4;
        case 0x143ed8u: goto label_143ed8;
        case 0x143edcu: goto label_143edc;
        case 0x143ee0u: goto label_143ee0;
        case 0x143ee4u: goto label_143ee4;
        case 0x143ee8u: goto label_143ee8;
        case 0x143eecu: goto label_143eec;
        case 0x143ef0u: goto label_143ef0;
        case 0x143ef4u: goto label_143ef4;
        case 0x143ef8u: goto label_143ef8;
        case 0x143efcu: goto label_143efc;
        case 0x143f00u: goto label_143f00;
        case 0x143f04u: goto label_143f04;
        case 0x143f08u: goto label_143f08;
        case 0x143f0cu: goto label_143f0c;
        case 0x143f10u: goto label_143f10;
        case 0x143f14u: goto label_143f14;
        case 0x143f18u: goto label_143f18;
        case 0x143f1cu: goto label_143f1c;
        case 0x143f20u: goto label_143f20;
        case 0x143f24u: goto label_143f24;
        case 0x143f28u: goto label_143f28;
        case 0x143f2cu: goto label_143f2c;
        case 0x143f30u: goto label_143f30;
        case 0x143f34u: goto label_143f34;
        case 0x143f38u: goto label_143f38;
        case 0x143f3cu: goto label_143f3c;
        case 0x143f40u: goto label_143f40;
        case 0x143f44u: goto label_143f44;
        case 0x143f48u: goto label_143f48;
        case 0x143f4cu: goto label_143f4c;
        case 0x143f50u: goto label_143f50;
        case 0x143f54u: goto label_143f54;
        case 0x143f58u: goto label_143f58;
        case 0x143f5cu: goto label_143f5c;
        case 0x143f60u: goto label_143f60;
        case 0x143f64u: goto label_143f64;
        case 0x143f68u: goto label_143f68;
        case 0x143f6cu: goto label_143f6c;
        case 0x143f70u: goto label_143f70;
        case 0x143f74u: goto label_143f74;
        case 0x143f78u: goto label_143f78;
        case 0x143f7cu: goto label_143f7c;
        case 0x143f80u: goto label_143f80;
        case 0x143f84u: goto label_143f84;
        case 0x143f88u: goto label_143f88;
        case 0x143f8cu: goto label_143f8c;
        case 0x143f90u: goto label_143f90;
        case 0x143f94u: goto label_143f94;
        case 0x143f98u: goto label_143f98;
        case 0x143f9cu: goto label_143f9c;
        case 0x143fa0u: goto label_143fa0;
        case 0x143fa4u: goto label_143fa4;
        case 0x143fa8u: goto label_143fa8;
        case 0x143facu: goto label_143fac;
        case 0x143fb0u: goto label_143fb0;
        case 0x143fb4u: goto label_143fb4;
        case 0x143fb8u: goto label_143fb8;
        case 0x143fbcu: goto label_143fbc;
        case 0x143fc0u: goto label_143fc0;
        case 0x143fc4u: goto label_143fc4;
        case 0x143fc8u: goto label_143fc8;
        case 0x143fccu: goto label_143fcc;
        case 0x143fd0u: goto label_143fd0;
        case 0x143fd4u: goto label_143fd4;
        case 0x143fd8u: goto label_143fd8;
        case 0x143fdcu: goto label_143fdc;
        case 0x143fe0u: goto label_143fe0;
        case 0x143fe4u: goto label_143fe4;
        case 0x143fe8u: goto label_143fe8;
        case 0x143fecu: goto label_143fec;
        case 0x143ff0u: goto label_143ff0;
        case 0x143ff4u: goto label_143ff4;
        case 0x143ff8u: goto label_143ff8;
        case 0x143ffcu: goto label_143ffc;
        case 0x144000u: goto label_144000;
        case 0x144004u: goto label_144004;
        case 0x144008u: goto label_144008;
        case 0x14400cu: goto label_14400c;
        case 0x144010u: goto label_144010;
        case 0x144014u: goto label_144014;
        case 0x144018u: goto label_144018;
        case 0x14401cu: goto label_14401c;
        case 0x144020u: goto label_144020;
        case 0x144024u: goto label_144024;
        case 0x144028u: goto label_144028;
        case 0x14402cu: goto label_14402c;
        case 0x144030u: goto label_144030;
        case 0x144034u: goto label_144034;
        case 0x144038u: goto label_144038;
        case 0x14403cu: goto label_14403c;
        case 0x144040u: goto label_144040;
        case 0x144044u: goto label_144044;
        case 0x144048u: goto label_144048;
        case 0x14404cu: goto label_14404c;
        case 0x144050u: goto label_144050;
        case 0x144054u: goto label_144054;
        case 0x144058u: goto label_144058;
        case 0x14405cu: goto label_14405c;
        case 0x144060u: goto label_144060;
        case 0x144064u: goto label_144064;
        case 0x144068u: goto label_144068;
        case 0x14406cu: goto label_14406c;
        case 0x144070u: goto label_144070;
        case 0x144074u: goto label_144074;
        case 0x144078u: goto label_144078;
        case 0x14407cu: goto label_14407c;
        case 0x144080u: goto label_144080;
        case 0x144084u: goto label_144084;
        case 0x144088u: goto label_144088;
        default: break;
    }

    ctx->pc = 0x143df8u;

label_143df8:
    // 0x143df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143dfc:
    // 0x143dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_143e00:
    // 0x143e00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143e04:
    // 0x143e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x143e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_143e08:
    // 0x143e08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x143e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_143e0c:
    // 0x143e0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x143e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_143e10:
    // 0x143e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_143e14:
    // 0x143e14: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_143e18:
    // 0x143e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_143e1c:
    // 0x143e1c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x143e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_143e20:
    // 0x143e20: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143e24:
    // 0x143e24: 0x0  nop
    ctx->pc = 0x143e24u;
    // NOP
label_143e28:
    // 0x143e28: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_143e2c:
    if (ctx->pc == 0x143E2Cu) {
        ctx->pc = 0x143E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E28u;
        // 0x143e2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E30u;
        goto label_143e30;
    }
    ctx->pc = 0x143E28u;
    {
        const bool branch_taken_0x143e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E28u;
        // 0x143e2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e28) {
            ctx->pc = 0x143E4Cu;
            goto label_143e4c;
        }
    }
    ctx->pc = 0x143E30u;
label_143e30:
    // 0x143e30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143e34:
    // 0x143e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143e38:
    // 0x143e38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143e3c:
    // 0x143e3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143e40:
    // 0x143e40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143e44:
    // 0x143e44: 0x60f809  jalr        $v1
label_143e48:
    if (ctx->pc == 0x143E48u) {
        ctx->pc = 0x143E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E44u;
        // 0x143e48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E4Cu;
        goto label_143e4c;
    }
    ctx->pc = 0x143E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143E4Cu);
        ctx->pc = 0x143E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E44u;
        // 0x143e48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E44u, 0x143E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E4Cu;
label_143e4c:
    // 0x143e4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_143e50:
    // 0x143e50: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
label_143e54:
    if (ctx->pc == 0x143E54u) {
        ctx->pc = 0x143E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E50u;
        // 0x143e54: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E58u;
        goto label_143e58;
    }
    ctx->pc = 0x143E50u;
    {
        const bool branch_taken_0x143e50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x143e50) {
            ctx->pc = 0x143E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E50u;
            // 0x143e54: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143e28;
        }
    }
    ctx->pc = 0x143E58u;
label_143e58:
    // 0x143e58: 0x8e460058  lw          $a2, 0x58($s2)
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_143e5c:
    // 0x143e5c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143e60:
    if (ctx->pc == 0x143E60u) {
        ctx->pc = 0x143E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E5Cu;
        // 0x143e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E64u;
        goto label_143e64;
    }
    ctx->pc = 0x143E5Cu;
    {
        const bool branch_taken_0x143e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E5Cu;
        // 0x143e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e5c) {
            ctx->pc = 0x143E7Cu;
            goto label_143e7c;
        }
    }
    ctx->pc = 0x143E64u;
label_143e64:
    // 0x143e64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143e68:
    // 0x143e68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143e6c:
    // 0x143e6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143e70:
    // 0x143e70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143e74:
    // 0x143e74: 0x60f809  jalr        $v1
label_143e78:
    if (ctx->pc == 0x143E78u) {
        ctx->pc = 0x143E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E74u;
        // 0x143e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E7Cu;
        goto label_143e7c;
    }
    ctx->pc = 0x143E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143E7Cu);
        ctx->pc = 0x143E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E74u;
        // 0x143e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E74u, 0x143E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E7Cu;
label_143e7c:
    // 0x143e7c: 0x8e46005c  lw          $a2, 0x5C($s2)
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_143e80:
    // 0x143e80: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143e84:
    if (ctx->pc == 0x143E84u) {
        ctx->pc = 0x143E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E80u;
        // 0x143e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E88u;
        goto label_143e88;
    }
    ctx->pc = 0x143E80u;
    {
        const bool branch_taken_0x143e80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E80u;
        // 0x143e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e80) {
            ctx->pc = 0x143EA0u;
            goto label_143ea0;
        }
    }
    ctx->pc = 0x143E88u;
label_143e88:
    // 0x143e88: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143e8c:
    // 0x143e8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143e90:
    // 0x143e90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143e94:
    // 0x143e94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143e98:
    // 0x143e98: 0x60f809  jalr        $v1
label_143e9c:
    if (ctx->pc == 0x143E9Cu) {
        ctx->pc = 0x143E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E98u;
        // 0x143e9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EA0u;
        goto label_143ea0;
    }
    ctx->pc = 0x143E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143EA0u);
        ctx->pc = 0x143E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E98u;
        // 0x143e9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E98u, 0x143EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EA0u;
label_143ea0:
    // 0x143ea0: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_143ea4:
    // 0x143ea4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ea8:
    if (ctx->pc == 0x143EA8u) {
        ctx->pc = 0x143EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA4u;
        // 0x143ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EACu;
        goto label_143eac;
    }
    ctx->pc = 0x143EA4u;
    {
        const bool branch_taken_0x143ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA4u;
        // 0x143ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ea4) {
            ctx->pc = 0x143EC4u;
            goto label_143ec4;
        }
    }
    ctx->pc = 0x143EACu;
label_143eac:
    // 0x143eac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143eb0:
    // 0x143eb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143eb4:
    // 0x143eb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143eb8:
    // 0x143eb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143ebc:
    // 0x143ebc: 0x60f809  jalr        $v1
label_143ec0:
    if (ctx->pc == 0x143EC0u) {
        ctx->pc = 0x143EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EBCu;
        // 0x143ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EC4u;
        goto label_143ec4;
    }
    ctx->pc = 0x143EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143EC4u);
        ctx->pc = 0x143EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EBCu;
        // 0x143ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EBCu, 0x143EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EC4u;
label_143ec4:
    // 0x143ec4: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_143ec8:
    // 0x143ec8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ecc:
    if (ctx->pc == 0x143ECCu) {
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143ED0u;
        goto label_143ed0;
    }
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143EE8u;
            goto label_143ee8;
        }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143ed4:
    // 0x143ed4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143ed8:
    // 0x143ed8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143edc:
    // 0x143edc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143ee0:
    // 0x143ee0: 0x60f809  jalr        $v1
label_143ee4:
    if (ctx->pc == 0x143EE4u) {
        ctx->pc = 0x143EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE0u;
        // 0x143ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EE8u;
        goto label_143ee8;
    }
    ctx->pc = 0x143EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143EE8u);
        ctx->pc = 0x143EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE0u;
        // 0x143ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EE0u, 0x143EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EE8u;
label_143ee8:
    // 0x143ee8: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_143eec:
    // 0x143eec: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ef0:
    if (ctx->pc == 0x143EF0u) {
        ctx->pc = 0x143EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EECu;
        // 0x143ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EF4u;
        goto label_143ef4;
    }
    ctx->pc = 0x143EECu;
    {
        const bool branch_taken_0x143eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EECu;
        // 0x143ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eec) {
            ctx->pc = 0x143F0Cu;
            goto label_143f0c;
        }
    }
    ctx->pc = 0x143EF4u;
label_143ef4:
    // 0x143ef4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143ef8:
    // 0x143ef8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143efc:
    // 0x143efc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f00:
    // 0x143f00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f04:
    // 0x143f04: 0x60f809  jalr        $v1
label_143f08:
    if (ctx->pc == 0x143F08u) {
        ctx->pc = 0x143F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F04u;
        // 0x143f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F0Cu;
        goto label_143f0c;
    }
    ctx->pc = 0x143F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F0Cu);
        ctx->pc = 0x143F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F04u;
        // 0x143f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F04u, 0x143F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F0Cu;
label_143f0c:
    // 0x143f0c: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x143f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_143f10:
    // 0x143f10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f14:
    if (ctx->pc == 0x143F14u) {
        ctx->pc = 0x143F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F10u;
        // 0x143f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F18u;
        goto label_143f18;
    }
    ctx->pc = 0x143F10u;
    {
        const bool branch_taken_0x143f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F10u;
        // 0x143f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f10) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143F18u;
label_143f18:
    // 0x143f18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f1c:
    // 0x143f1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f20:
    // 0x143f20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f24:
    // 0x143f24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f28:
    // 0x143f28: 0x60f809  jalr        $v1
label_143f2c:
    if (ctx->pc == 0x143F2Cu) {
        ctx->pc = 0x143F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F28u;
        // 0x143f2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F30u;
        goto label_143f30;
    }
    ctx->pc = 0x143F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F30u);
        ctx->pc = 0x143F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F28u;
        // 0x143f2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F28u, 0x143F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F30u;
label_143f30:
    // 0x143f30: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x143f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_143f34:
    // 0x143f34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f38:
    if (ctx->pc == 0x143F38u) {
        ctx->pc = 0x143F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F34u;
        // 0x143f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F3Cu;
        goto label_143f3c;
    }
    ctx->pc = 0x143F34u;
    {
        const bool branch_taken_0x143f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F34u;
        // 0x143f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f34) {
            ctx->pc = 0x143F54u;
            goto label_143f54;
        }
    }
    ctx->pc = 0x143F3Cu;
label_143f3c:
    // 0x143f3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f40:
    // 0x143f40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f44:
    // 0x143f44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f48:
    // 0x143f48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f4c:
    // 0x143f4c: 0x60f809  jalr        $v1
label_143f50:
    if (ctx->pc == 0x143F50u) {
        ctx->pc = 0x143F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F4Cu;
        // 0x143f50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F54u;
        goto label_143f54;
    }
    ctx->pc = 0x143F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F54u);
        ctx->pc = 0x143F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F4Cu;
        // 0x143f50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F4Cu, 0x143F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F54u;
label_143f54:
    // 0x143f54: 0x8e460074  lw          $a2, 0x74($s2)
    ctx->pc = 0x143f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_143f58:
    // 0x143f58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f5c:
    if (ctx->pc == 0x143F5Cu) {
        ctx->pc = 0x143F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F58u;
        // 0x143f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F60u;
        goto label_143f60;
    }
    ctx->pc = 0x143F58u;
    {
        const bool branch_taken_0x143f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F58u;
        // 0x143f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f58) {
            ctx->pc = 0x143F78u;
            goto label_143f78;
        }
    }
    ctx->pc = 0x143F60u;
label_143f60:
    // 0x143f60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f64:
    // 0x143f64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f68:
    // 0x143f68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f6c:
    // 0x143f6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f70:
    // 0x143f70: 0x60f809  jalr        $v1
label_143f74:
    if (ctx->pc == 0x143F74u) {
        ctx->pc = 0x143F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F70u;
        // 0x143f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F78u;
        goto label_143f78;
    }
    ctx->pc = 0x143F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F78u);
        ctx->pc = 0x143F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F70u;
        // 0x143f74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F70u, 0x143F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F78u;
label_143f78:
    // 0x143f78: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x143f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_143f7c:
    // 0x143f7c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f80:
    if (ctx->pc == 0x143F80u) {
        ctx->pc = 0x143F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F7Cu;
        // 0x143f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F84u;
        goto label_143f84;
    }
    ctx->pc = 0x143F7Cu;
    {
        const bool branch_taken_0x143f7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F7Cu;
        // 0x143f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f7c) {
            ctx->pc = 0x143F9Cu;
            goto label_143f9c;
        }
    }
    ctx->pc = 0x143F84u;
label_143f84:
    // 0x143f84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f88:
    // 0x143f88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f8c:
    // 0x143f8c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f90:
    // 0x143f90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f94:
    // 0x143f94: 0x60f809  jalr        $v1
label_143f98:
    if (ctx->pc == 0x143F98u) {
        ctx->pc = 0x143F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F94u;
        // 0x143f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F9Cu;
        goto label_143f9c;
    }
    ctx->pc = 0x143F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F9Cu);
        ctx->pc = 0x143F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F94u;
        // 0x143f98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F94u, 0x143F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F9Cu;
label_143f9c:
    // 0x143f9c: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x143f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_143fa0:
    // 0x143fa0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143fa4:
    if (ctx->pc == 0x143FA4u) {
        ctx->pc = 0x143FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FA0u;
        // 0x143fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FA8u;
        goto label_143fa8;
    }
    ctx->pc = 0x143FA0u;
    {
        const bool branch_taken_0x143fa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FA0u;
        // 0x143fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fa0) {
            ctx->pc = 0x143FC0u;
            goto label_143fc0;
        }
    }
    ctx->pc = 0x143FA8u;
label_143fa8:
    // 0x143fa8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143fac:
    // 0x143fac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143fb0:
    // 0x143fb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143fb4:
    // 0x143fb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143fb8:
    // 0x143fb8: 0x60f809  jalr        $v1
label_143fbc:
    if (ctx->pc == 0x143FBCu) {
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FC0u;
        goto label_143fc0;
    }
    ctx->pc = 0x143FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143FC0u);
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FB8u, 0x143FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143FC0u;
label_143fc0:
    // 0x143fc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143fc4:
    // 0x143fc4: 0xc05bedc  jal         func_16FB70
label_143fc8:
    if (ctx->pc == 0x143FC8u) {
        ctx->pc = 0x143FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FC4u;
        // 0x143fc8: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FCCu;
        goto label_143fcc;
    }
    ctx->pc = 0x143FC4u;
    SET_GPR_U32(ctx, 31, 0x143FCCu);
    ctx->pc = 0x143FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FC4u;
    // 0x143fc8: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143FC4u, 0x143FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FCCu;
label_143fcc:
    // 0x143fcc: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x143fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_143fd0:
    // 0x143fd0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_143fd4:
    // 0x143fd4: 0x0  nop
    ctx->pc = 0x143fd4u;
    // NOP
label_143fd8:
    // 0x143fd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_143fdc:
    // 0x143fdc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_143fe0:
    if (ctx->pc == 0x143FE0u) {
        ctx->pc = 0x143FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FDCu;
        // 0x143fe0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FE4u;
        goto label_143fe4;
    }
    ctx->pc = 0x143FDCu;
    {
        const bool branch_taken_0x143fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fdc) {
            ctx->pc = 0x143FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143FDCu;
            // 0x143fe0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144054u;
            goto label_144054;
        }
    }
    ctx->pc = 0x143FE4u;
label_143fe4:
    // 0x143fe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_143fe8:
    // 0x143fe8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_143fec:
    if (ctx->pc == 0x143FECu) {
        ctx->pc = 0x143FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE8u;
        // 0x143fec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FF0u;
        goto label_143ff0;
    }
    ctx->pc = 0x143FE8u;
    {
        const bool branch_taken_0x143fe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x143FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE8u;
        // 0x143fec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fe8) {
            ctx->pc = 0x144038u;
            goto label_144038;
        }
    }
    ctx->pc = 0x143FF0u;
label_143ff0:
    // 0x143ff0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_143ff4:
    // 0x143ff4: 0x0  nop
    ctx->pc = 0x143ff4u;
    // NOP
label_143ff8:
    // 0x143ff8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x143ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_143ffc:
    // 0x143ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_144000:
    // 0x144000: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144004:
    // 0x144004: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_144008:
    if (ctx->pc == 0x144008u) {
        ctx->pc = 0x144008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144004u;
        // 0x144008: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14400Cu;
        goto label_14400c;
    }
    ctx->pc = 0x144004u;
    {
        const bool branch_taken_0x144004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x144008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144004u;
        // 0x144008: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144004) {
            ctx->pc = 0x144028u;
            goto label_144028;
        }
    }
    ctx->pc = 0x14400Cu;
label_14400c:
    // 0x14400c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_144010:
    // 0x144010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144014:
    // 0x144014: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x144014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_144018:
    // 0x144018: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14401c:
    // 0x14401c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_144020:
    // 0x144020: 0x60f809  jalr        $v1
label_144024:
    if (ctx->pc == 0x144024u) {
        ctx->pc = 0x144024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144020u;
        // 0x144024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144028u;
        goto label_144028;
    }
    ctx->pc = 0x144020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144028u);
        ctx->pc = 0x144024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144020u;
        // 0x144024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144020u, 0x144028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144028u;
label_144028:
    // 0x144028: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x144028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14402c:
    // 0x14402c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14402cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_144030:
    // 0x144030: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_144034:
    if (ctx->pc == 0x144034u) {
        ctx->pc = 0x144034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144030u;
        // 0x144034: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144038u;
        goto label_144038;
    }
    ctx->pc = 0x144030u;
    {
        const bool branch_taken_0x144030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144030) {
            ctx->pc = 0x144034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144030u;
            // 0x144034: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143ff8;
        }
    }
    ctx->pc = 0x144038u;
label_144038:
    // 0x144038: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x144038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14403c:
    // 0x14403c: 0xc067f04  jal         func_19FC10
label_144040:
    if (ctx->pc == 0x144040u) {
        ctx->pc = 0x144040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14403Cu;
        // 0x144040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144044u;
        goto label_144044;
    }
    ctx->pc = 0x14403Cu;
    SET_GPR_U32(ctx, 31, 0x144044u);
    ctx->pc = 0x144040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14403Cu;
    // 0x144040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14403Cu, 0x144044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144044u;
label_144044:
    // 0x144044: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x144044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_144048:
    // 0x144048: 0xc067f04  jal         func_19FC10
label_14404c:
    if (ctx->pc == 0x14404Cu) {
        ctx->pc = 0x14404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144048u;
        // 0x14404c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144050u;
        goto label_144050;
    }
    ctx->pc = 0x144048u;
    SET_GPR_U32(ctx, 31, 0x144050u);
    ctx->pc = 0x14404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144048u;
    // 0x14404c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x144048u, 0x144050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144050u;
label_144050:
    // 0x144050: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_144054:
    // 0x144054: 0x681ffe0  bgez        $s4, . + 4 + (-0x20 << 2)
label_144058:
    if (ctx->pc == 0x144058u) {
        ctx->pc = 0x144058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144054u;
        // 0x144058: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14405Cu;
        goto label_14405c;
    }
    ctx->pc = 0x144054u;
    {
        const bool branch_taken_0x144054 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x144058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144054u;
        // 0x144058: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144054) {
            ctx->pc = 0x143FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143fd8;
        }
    }
    ctx->pc = 0x14405Cu;
label_14405c:
    // 0x14405c: 0xc05bedc  jal         func_16FB70
label_144060:
    if (ctx->pc == 0x144060u) {
        ctx->pc = 0x144060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14405Cu;
        // 0x144060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144064u;
        goto label_144064;
    }
    ctx->pc = 0x14405Cu;
    SET_GPR_U32(ctx, 31, 0x144064u);
    ctx->pc = 0x144060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14405Cu;
    // 0x144060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x14405Cu, 0x144064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144064u;
label_144064:
    // 0x144064: 0xc050d2e  jal         func_1434B8
label_144068:
    if (ctx->pc == 0x144068u) {
        ctx->pc = 0x144068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144064u;
        // 0x144068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14406Cu;
        goto label_14406c;
    }
    ctx->pc = 0x144064u;
    SET_GPR_U32(ctx, 31, 0x14406Cu);
    ctx->pc = 0x144068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144064u;
    // 0x144068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B8u, 0x144064u, 0x14406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14406Cu;
label_14406c:
    // 0x14406c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14406cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144070:
    // 0x144070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_144074:
    // 0x144074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x144074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_144078:
    // 0x144078: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x144078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14407c:
    // 0x14407c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14407cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144080:
    // 0x144080: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x144080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_144084:
    // 0x144084: 0x3e00008  jr          $ra
label_144088:
    if (ctx->pc == 0x144088u) {
        ctx->pc = 0x144088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144084u;
        // 0x144088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14408Cu;
        goto label_fallthrough_0x144084;
    }
    ctx->pc = 0x144084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144084u;
        // 0x144088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144084:
    ctx->pc = 0x14408Cu;
}
