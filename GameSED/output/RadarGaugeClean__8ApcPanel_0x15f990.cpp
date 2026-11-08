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

// Function: RadarGaugeClean__8ApcPanel
// Address: 0x15f990 - 0x15fa78
void RadarGaugeClean__8ApcPanel_0x15f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RadarGaugeClean__8ApcPanel_0x15f990");
#endif

    switch (ctx->pc) {
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        default: break;
    }

    ctx->pc = 0x15f990u;

label_15f990:
    // 0x15f990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15f994:
    // 0x15f994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15f998:
    // 0x15f998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f99c:
    // 0x15f99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f9a0:
    // 0x15f9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15f9a4:
    // 0x15f9a4: 0x8e260f30  lw          $a2, 0xF30($s1)
    ctx->pc = 0x15f9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3888)));
label_15f9a8:
    // 0x15f9a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15f9ac:
    if (ctx->pc == 0x15F9ACu) {
        ctx->pc = 0x15F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9A8u;
        // 0x15f9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9B0u;
        goto label_15f9b0;
    }
    ctx->pc = 0x15F9A8u;
    {
        const bool branch_taken_0x15f9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9A8u;
        // 0x15f9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9a8) {
            ctx->pc = 0x15F9C8u;
            goto label_15f9c8;
        }
    }
    ctx->pc = 0x15F9B0u;
label_15f9b0:
    // 0x15f9b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15f9b4:
    // 0x15f9b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15f9b8:
    // 0x15f9b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f9bc:
    // 0x15f9bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f9c0:
    // 0x15f9c0: 0x60f809  jalr        $v1
label_15f9c4:
    if (ctx->pc == 0x15F9C4u) {
        ctx->pc = 0x15F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9C0u;
        // 0x15f9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9C8u;
        goto label_15f9c8;
    }
    ctx->pc = 0x15F9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F9C8u);
        ctx->pc = 0x15F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9C0u;
        // 0x15f9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F9C0u, 0x15F9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F9C8u;
label_15f9c8:
    // 0x15f9c8: 0x8e260f34  lw          $a2, 0xF34($s1)
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3892)));
label_15f9cc:
    // 0x15f9cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15f9d0:
    if (ctx->pc == 0x15F9D0u) {
        ctx->pc = 0x15F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9CCu;
        // 0x15f9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9D4u;
        goto label_15f9d4;
    }
    ctx->pc = 0x15F9CCu;
    {
        const bool branch_taken_0x15f9cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9CCu;
        // 0x15f9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9cc) {
            ctx->pc = 0x15F9ECu;
            goto label_15f9ec;
        }
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15f9d8:
    // 0x15f9d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15f9dc:
    // 0x15f9dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f9e0:
    // 0x15f9e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f9e4:
    // 0x15f9e4: 0x60f809  jalr        $v1
label_15f9e8:
    if (ctx->pc == 0x15F9E8u) {
        ctx->pc = 0x15F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9E4u;
        // 0x15f9e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9ECu;
        goto label_15f9ec;
    }
    ctx->pc = 0x15F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F9ECu);
        ctx->pc = 0x15F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9E4u;
        // 0x15f9e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F9E4u, 0x15F9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F9ECu;
label_15f9ec:
    // 0x15f9ec: 0x8e220f38  lw          $v0, 0xF38($s1)
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3896)));
label_15f9f0:
    // 0x15f9f0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_15f9f4:
    if (ctx->pc == 0x15F9F4u) {
        ctx->pc = 0x15F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9F0u;
        // 0x15f9f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9F8u;
        goto label_15f9f8;
    }
    ctx->pc = 0x15F9F0u;
    {
        const bool branch_taken_0x15f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9f0) {
            ctx->pc = 0x15F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F9F0u;
            // 0x15f9f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA68u;
            goto label_15fa68;
        }
    }
    ctx->pc = 0x15F9F8u;
label_15f9f8:
    // 0x15f9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f9fc:
    // 0x15f9fc: 0xc05bedc  jal         func_16FB70
label_15fa00:
    if (ctx->pc == 0x15FA00u) {
        ctx->pc = 0x15FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9FCu;
        // 0x15fa00: 0x26300f3c  addiu       $s0, $s1, 0xF3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA04u;
        goto label_15fa04;
    }
    ctx->pc = 0x15F9FCu;
    SET_GPR_U32(ctx, 31, 0x15FA04u);
    ctx->pc = 0x15FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9FCu;
    // 0x15fa00: 0x26300f3c  addiu       $s0, $s1, 0xF3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3900));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F9FCu, 0x15FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA04u;
label_15fa04:
    // 0x15fa04: 0x8e260f38  lw          $a2, 0xF38($s1)
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3896)));
label_15fa08:
    // 0x15fa08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa0c:
    // 0x15fa0c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x15fa0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_15fa10:
    // 0x15fa10: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15fa14:
    // 0x15fa14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15fa18:
    // 0x15fa18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15fa1c:
    // 0x15fa1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15fa20:
    // 0x15fa20: 0x60f809  jalr        $v1
label_15fa24:
    if (ctx->pc == 0x15FA24u) {
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA20u;
        // 0x15fa24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA28u;
        goto label_15fa28;
    }
    ctx->pc = 0x15FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FA28u);
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA20u;
        // 0x15fa24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA20u, 0x15FA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA28u;
label_15fa28:
    // 0x15fa28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15fa2c:
    // 0x15fa2c: 0x0  nop
    ctx->pc = 0x15fa2cu;
    // NOP
label_15fa30:
    // 0x15fa30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_15fa34:
    // 0x15fa34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15fa34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_15fa38:
    // 0x15fa38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa3c:
    // 0x15fa3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15fa40:
    // 0x15fa40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15fa44:
    // 0x15fa44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15fa48:
    // 0x15fa48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15fa4c:
    // 0x15fa4c: 0x60f809  jalr        $v1
label_15fa50:
    if (ctx->pc == 0x15FA50u) {
        ctx->pc = 0x15FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA4Cu;
        // 0x15fa50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA54u;
        goto label_15fa54;
    }
    ctx->pc = 0x15FA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FA54u);
        ctx->pc = 0x15FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA4Cu;
        // 0x15fa50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA4Cu, 0x15FA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA54u;
label_15fa54:
    // 0x15fa54: 0x623fff6  bgezl       $s1, . + 4 + (-0xA << 2)
label_15fa58:
    if (ctx->pc == 0x15FA58u) {
        ctx->pc = 0x15FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA54u;
        // 0x15fa58: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA5Cu;
        goto label_15fa5c;
    }
    ctx->pc = 0x15FA54u;
    {
        const bool branch_taken_0x15fa54 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x15fa54) {
            ctx->pc = 0x15FA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FA54u;
            // 0x15fa58: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fa30;
        }
    }
    ctx->pc = 0x15FA5Cu;
label_15fa5c:
    // 0x15fa5c: 0xc05bedc  jal         func_16FB70
label_15fa60:
    if (ctx->pc == 0x15FA60u) {
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA64u;
        goto label_15fa64;
    }
    ctx->pc = 0x15FA5Cu;
    SET_GPR_U32(ctx, 31, 0x15FA64u);
    ctx->pc = 0x15FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA5Cu;
    // 0x15fa60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15FA5Cu, 0x15FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15fa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15fa68:
    // 0x15fa68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15fa68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15fa6c:
    // 0x15fa6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15fa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15fa70:
    // 0x15fa70: 0x3e00008  jr          $ra
label_15fa74:
    if (ctx->pc == 0x15FA74u) {
        ctx->pc = 0x15FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA70u;
        // 0x15fa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA78u;
        goto label_fallthrough_0x15fa70;
    }
    ctx->pc = 0x15FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA70u;
        // 0x15fa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15fa70:
    ctx->pc = 0x15FA78u;
}
