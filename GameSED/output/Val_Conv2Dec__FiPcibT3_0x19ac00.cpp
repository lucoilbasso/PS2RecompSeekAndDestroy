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

// Function: Val_Conv2Dec__FiPcibT3
// Address: 0x19ac00 - 0x19adf4
void Val_Conv2Dec__FiPcibT3_0x19ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Conv2Dec__FiPcibT3_0x19ac00");
#endif

    switch (ctx->pc) {
        case 0x19ac74u: goto label_19ac74;
        case 0x19ac7cu: goto label_19ac7c;
        case 0x19ac98u: goto label_19ac98;
        case 0x19acf8u: goto label_19acf8;
        case 0x19ad28u: goto label_19ad28;
        case 0x19ad78u: goto label_19ad78;
        case 0x19adb0u: goto label_19adb0;
        default: break;
    }

    ctx->pc = 0x19ac00u;

    // 0x19ac00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19ac04: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x19ac08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19ac08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac0c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x19ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x19ac10: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac14: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x19ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x19ac18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19ac18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac1c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x19ac20: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x19ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x19ac24: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x19ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x19ac28: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AC28u;
    {
        const bool branch_taken_0x19ac28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC28u;
        // 0x19ac2c: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac28) {
            ctx->pc = 0x19AC48u;
            goto label_19ac48;
        }
    }
    ctx->pc = 0x19AC30u;
    // 0x19ac30: 0x4830006  bgezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC30u;
    {
        const bool branch_taken_0x19ac30 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19ac30) {
            ctx->pc = 0x19AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC30u;
            // 0x19ac34: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC4Cu;
            goto label_19ac4c;
        }
    }
    ctx->pc = 0x19AC38u;
    // 0x19ac38: 0x41023  negu        $v0, $a0
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x19ac3c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x19ac3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ac40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AC40u;
    {
        const bool branch_taken_0x19ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC40u;
        // 0x19ac44: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac40) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19AC48u;
label_19ac48:
    // 0x19ac48: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_19ac4c:
    // 0x19ac4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19ac4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ac50:
    // 0x19ac50: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x19ac50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x19ac54: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC54u;
    {
        const bool branch_taken_0x19ac54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC54u;
        // 0x19ac58: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac54) {
            ctx->pc = 0x19AC70u;
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19AC5Cu;
    // 0x19ac5c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ac60: 0x27b10001  addiu       $s1, $sp, 0x1
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19ac64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19AC64u;
    {
        const bool branch_taken_0x19ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC64u;
        // 0x19ac68: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac64) {
            ctx->pc = 0x19ACA4u;
            goto label_19aca4;
        }
    }
    ctx->pc = 0x19AC6Cu;
    // 0x19ac6c: 0x0  nop
    ctx->pc = 0x19ac6cu;
    // NOP
label_19ac70:
    // 0x19ac70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ac74:
    // 0x19ac74: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x19AC74u;
    SET_GPR_U32(ctx, 31, 0x19AC7Cu);
    ctx->pc = 0x19AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC74u;
    // 0x19ac78: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x19AC74u, 0x19AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC7Cu;
label_19ac7c:
    // 0x19ac7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19ac80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19ac84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19ac88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ac8c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x19ac8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ac90: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x19AC90u;
    SET_GPR_U32(ctx, 31, 0x19AC98u);
    ctx->pc = 0x19AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC90u;
    // 0x19ac94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x19AC90u, 0x19AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC98u;
label_19ac98:
    // 0x19ac98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac9c: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19AC9Cu;
    {
        const bool branch_taken_0x19ac9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC9Cu;
        // 0x19aca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac9c) {
            ctx->pc = 0x19AC74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac74;
        }
    }
    ctx->pc = 0x19ACA4u;
label_19aca4:
    // 0x19aca4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19aca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aca8: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x19aca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x19acac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x19acb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ACBCu;
    {
        const bool branch_taken_0x19acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACBCu;
        // 0x19acc0: 0xfd2023  subu        $a0, $a3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acbc) {
            ctx->pc = 0x19ACE4u;
            goto label_19ace4;
        }
    }
    ctx->pc = 0x19ACC4u;
    // 0x19acc4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACC4u;
        // 0x19acc8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19ACD8u;
            goto label_19acd8;
        }
    }
    ctx->pc = 0x19ACCCu;
    // 0x19accc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19acccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19acd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ACD0u;
    {
        const bool branch_taken_0x19acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD0u;
        // 0x19acd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acd0) {
            ctx->pc = 0x19ACE0u;
            goto label_19ace0;
        }
    }
    ctx->pc = 0x19ACD8u;
label_19acd8:
    // 0x19acd8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19acd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19acdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19ace0:
    // 0x19ace0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19ace4:
    // 0x19ace4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19ACE4u;
    {
        const bool branch_taken_0x19ace4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACE4u;
        // 0x19ace8: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ace4) {
            ctx->pc = 0x19AD60u;
            goto label_19ad60;
        }
    }
    ctx->pc = 0x19ACECu;
    // 0x19acec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19ACECu;
    {
        const bool branch_taken_0x19acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACECu;
        // 0x19acf0: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acec) {
            ctx->pc = 0x19AD64u;
            goto label_19ad64;
        }
    }
    ctx->pc = 0x19ACF4u;
    // 0x19acf4: 0x0  nop
    ctx->pc = 0x19acf4u;
    // NOP
label_19acf8:
    // 0x19acf8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19acfc: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ad00: 0x0  nop
    ctx->pc = 0x19ad00u;
    // NOP
    // 0x19ad04: 0x0  nop
    ctx->pc = 0x19ad04u;
    // NOP
    // 0x19ad08: 0x0  nop
    ctx->pc = 0x19ad08u;
    // NOP
    // 0x19ad0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AD0Cu;
    {
        const bool branch_taken_0x19ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD0Cu;
        // 0x19ad10: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad0c) {
            ctx->pc = 0x19ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acf8;
        }
    }
    ctx->pc = 0x19AD14u;
    // 0x19ad14: 0x10e9002e  beq         $a3, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AD14u;
    {
        const bool branch_taken_0x19ad14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad14) {
            ctx->pc = 0x19ADD0u;
            goto label_19add0;
        }
    }
    ctx->pc = 0x19AD1Cu;
    // 0x19ad1c: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ad20: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19ad24: 0x0  nop
    ctx->pc = 0x19ad24u;
    // NOP
label_19ad28:
    // 0x19ad28: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19ad2c: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19ad30: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD30u;
    {
        const bool branch_taken_0x19ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD30u;
        // 0x19ad34: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad30) {
            ctx->pc = 0x19AD40u;
            goto label_19ad40;
        }
    }
    ctx->pc = 0x19AD38u;
    // 0x19ad38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AD38u;
    {
        const bool branch_taken_0x19ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD38u;
        // 0x19ad3c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad38) {
            ctx->pc = 0x19AD44u;
            goto label_19ad44;
        }
    }
    ctx->pc = 0x19AD40u;
label_19ad40:
    // 0x19ad40: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19ad40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_19ad44:
    // 0x19ad44: 0x0  nop
    ctx->pc = 0x19ad44u;
    // NOP
    // 0x19ad48: 0x0  nop
    ctx->pc = 0x19ad48u;
    // NOP
    // 0x19ad4c: 0x14e9fff6  bne         $a3, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AD4Cu;
    {
        const bool branch_taken_0x19ad4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD4Cu;
        // 0x19ad50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad4c) {
            ctx->pc = 0x19AD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad28;
        }
    }
    ctx->pc = 0x19AD54u;
    // 0x19ad54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19AD54u;
    {
        const bool branch_taken_0x19ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD54u;
        // 0x19ad58: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad54) {
            ctx->pc = 0x19ADD0u;
            goto label_19add0;
        }
    }
    ctx->pc = 0x19AD5Cu;
    // 0x19ad5c: 0x0  nop
    ctx->pc = 0x19ad5cu;
    // NOP
label_19ad60:
    // 0x19ad60: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x19ad60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_19ad64:
    // 0x19ad64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19AD64u;
    {
        const bool branch_taken_0x19ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD64u;
        // 0x19ad68: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad64) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD6Cu;
    // 0x19ad6c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19ad70: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19ad74: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x19ad74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_19ad78:
    // 0x19ad78: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD78u;
    {
        const bool branch_taken_0x19ad78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD78u;
        // 0x19ad7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad78) {
            ctx->pc = 0x19AD88u;
            goto label_19ad88;
        }
    }
    ctx->pc = 0x19AD80u;
    // 0x19ad80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AD80u;
    {
        const bool branch_taken_0x19ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD80u;
        // 0x19ad84: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad80) {
            ctx->pc = 0x19AD8Cu;
            goto label_19ad8c;
        }
    }
    ctx->pc = 0x19AD88u;
label_19ad88:
    // 0x19ad88: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_19ad8c:
    // 0x19ad8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ad90: 0x0  nop
    ctx->pc = 0x19ad90u;
    // NOP
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
    // 0x19ad98: 0x0  nop
    ctx->pc = 0x19ad98u;
    // NOP
    // 0x19ad9c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD9Cu;
        // 0x19ada0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad78;
        }
    }
    ctx->pc = 0x19ADA4u;
label_19ada4:
    // 0x19ada4: 0x10e9000a  beq         $a3, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x19ADA4u;
    {
        const bool branch_taken_0x19ada4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADA4u;
        // 0x19ada8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ada4) {
            ctx->pc = 0x19ADD0u;
            goto label_19add0;
        }
    }
    ctx->pc = 0x19ADACu;
    // 0x19adac: 0x0  nop
    ctx->pc = 0x19adacu;
    // NOP
label_19adb0:
    // 0x19adb0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19adb4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x19adb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19adb8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19adbc: 0x0  nop
    ctx->pc = 0x19adbcu;
    // NOP
    // 0x19adc0: 0x0  nop
    ctx->pc = 0x19adc0u;
    // NOP
    // 0x19adc4: 0x14e9fffa  bne         $a3, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ADC4u;
    {
        const bool branch_taken_0x19adc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x19ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC4u;
        // 0x19adc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adc4) {
            ctx->pc = 0x19ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19adb0;
        }
    }
    ctx->pc = 0x19ADCCu;
    // 0x19adcc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19adccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19add0:
    // 0x19add0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19add0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19add4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x19add4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19add8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19add8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19addc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19ade0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ade4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ade8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19adec: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADECu;
        // 0x19adf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ADF4u;
}
