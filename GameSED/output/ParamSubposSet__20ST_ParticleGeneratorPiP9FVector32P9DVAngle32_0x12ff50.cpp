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

// Function: ParamSubposSet__20ST_ParticleGeneratorPiP9FVector32P9DVAngle32
// Address: 0x12ff50 - 0x130130
void ParamSubposSet__20ST_ParticleGeneratorPiP9FVector32P9DVAngle32_0x12ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParamSubposSet__20ST_ParticleGeneratorPiP9FVector32P9DVAngle32_0x12ff50");
#endif

    switch (ctx->pc) {
        case 0x12ff9cu: goto label_12ff9c;
        case 0x12ffc0u: goto label_12ffc0;
        case 0x12ffe8u: goto label_12ffe8;
        case 0x12fffcu: goto label_12fffc;
        case 0x130028u: goto label_130028;
        case 0x130030u: goto label_130030;
        case 0x130050u: goto label_130050;
        case 0x130078u: goto label_130078;
        case 0x1300a0u: goto label_1300a0;
        case 0x1300c0u: goto label_1300c0;
        default: break;
    }

    ctx->pc = 0x12ff50u;

    // 0x12ff50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ff54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ff58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ff58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ff60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12ff60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ff6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ff70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12ff74: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12ff74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ff78: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x12ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12ff7c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x12ff7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ff80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff84: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x12ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12ff88: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x12ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x12ff8c: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x12ff8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x12ff90: 0xae32007c  sw          $s2, 0x7C($s1)
    ctx->pc = 0x12ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 18));
    // 0x12ff94: 0xc04844a  jal         func_121128
    ctx->pc = 0x12FF94u;
    SET_GPR_U32(ctx, 31, 0x12FF9Cu);
    ctx->pc = 0x12FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF94u;
    // 0x12ff98: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12FF94u, 0x12FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF9Cu;
label_12ff9c:
    // 0x12ff9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12FFA0u;
    {
        const bool branch_taken_0x12ffa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFA0u;
        // 0x12ffa4: 0x2626006c  addiu       $a2, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffa0) {
            ctx->pc = 0x12FFF0u;
            goto label_12fff0;
        }
    }
    ctx->pc = 0x12FFA8u;
    // 0x12ffa8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x12ffa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ffac: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x12ffacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ffb0: 0x2485002c  addiu       $a1, $a0, 0x2C
    ctx->pc = 0x12ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x12ffb4: 0xa6230132  sh          $v1, 0x132($s1)
    ctx->pc = 0x12ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ffb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ffbc: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x12ffbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_12ffc0:
    // 0x12ffc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ffc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12ffc8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12ffcc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12ffd0: 0x0  nop
    ctx->pc = 0x12ffd0u;
    // NOP
    // 0x12ffd4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FFD4u;
    {
        const bool branch_taken_0x12ffd4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x12FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD4u;
        // 0x12ffd8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd4) {
            ctx->pc = 0x12FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FFDCu;
    // 0x12ffdc: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x12ffdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12ffe0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12FFE0u;
    {
        const bool branch_taken_0x12ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFE0u;
        // 0x12ffe4: 0xa6220066  sh          $v0, 0x66($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffe0) {
            ctx->pc = 0x130110u;
            goto label_130110;
        }
    }
    ctx->pc = 0x12FFE8u;
label_12ffe8:
    // 0x12ffe8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12FFE8u;
    {
        const bool branch_taken_0x12ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFE8u;
        // 0x12ffec: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffe8) {
            ctx->pc = 0x13010Cu;
            goto label_13010c;
        }
    }
    ctx->pc = 0x12FFF0u;
label_12fff0:
    // 0x12fff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fff4: 0xc04844a  jal         func_121128
    ctx->pc = 0x12FFF4u;
    SET_GPR_U32(ctx, 31, 0x12FFFCu);
    ctx->pc = 0x12FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFF4u;
    // 0x12fff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12FFF4u, 0x12FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFFCu;
label_12fffc:
    // 0x12fffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130000: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130000u;
    {
        const bool branch_taken_0x130000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130000u;
        // 0x130004: 0x2630006c  addiu       $s0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130000) {
            ctx->pc = 0x130018u;
            goto label_130018;
        }
    }
    ctx->pc = 0x130008u;
    // 0x130008: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x130008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13000c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x130010: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x130010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x130014: 0xa6230132  sh          $v1, 0x132($s1)
    ctx->pc = 0x130014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 3));
label_130018:
    // 0x130018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13001c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13001cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130020: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x130024: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x130024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130028:
    // 0x130028: 0xc04844a  jal         func_121128
    ctx->pc = 0x130028u;
    SET_GPR_U32(ctx, 31, 0x130030u);
    ctx->pc = 0x13002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130028u;
    // 0x13002c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130028u, 0x130030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130030u;
label_130030:
    // 0x130030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130034: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x130034u;
    {
        const bool branch_taken_0x130034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x130038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130034u;
        // 0x130038: 0x268994f0  addiu       $t1, $s4, -0x6B10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130034) {
            ctx->pc = 0x1300A8u;
            goto label_1300a8;
        }
    }
    ctx->pc = 0x13003Cu;
    // 0x13003c: 0x268894f0  addiu       $t0, $s4, -0x6B10
    ctx->pc = 0x13003cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939888));
    // 0x130040: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x130040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130048: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13004c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130050:
    // 0x130050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x130050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130054: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x130054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x130058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130058u;
    {
        const bool branch_taken_0x130058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130058u;
        // 0x13005c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130058) {
            ctx->pc = 0x130080u;
            goto label_130080;
        }
    }
    ctx->pc = 0x130060u;
    // 0x130060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x130064: 0x28c2002c  slti        $v0, $a2, 0x2C
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x130068: 0x0  nop
    ctx->pc = 0x130068u;
    // NOP
    // 0x13006c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13006Cu;
    {
        const bool branch_taken_0x13006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13006Cu;
        // 0x130070: 0x24640048  addiu       $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13006c) {
            ctx->pc = 0x130050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130050;
        }
    }
    ctx->pc = 0x130074u;
    // 0x130074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x130074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130078:
    // 0x130078: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x130078u;
    {
        const bool branch_taken_0x130078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130078u;
        // 0x13007c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130078) {
            ctx->pc = 0x13010Cu;
            goto label_13010c;
        }
    }
    ctx->pc = 0x130080u;
label_130080:
    // 0x130080: 0x0  nop
    ctx->pc = 0x130080u;
    // NOP
    // 0x130084: 0x0  nop
    ctx->pc = 0x130084u;
    // NOP
    // 0x130088: 0x0  nop
    ctx->pc = 0x130088u;
    // NOP
    // 0x13008c: 0x0  nop
    ctx->pc = 0x13008cu;
    // NOP
    // 0x130090: 0x0  nop
    ctx->pc = 0x130090u;
    // NOP
    // 0x130094: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x130094u;
    {
        const bool branch_taken_0x130094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130094u;
        // 0x130098: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130094) {
            ctx->pc = 0x130078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130078;
        }
    }
    ctx->pc = 0x13009Cu;
    // 0x13009c: 0x0  nop
    ctx->pc = 0x13009cu;
    // NOP
label_1300a0:
    // 0x1300a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1300A0u;
    {
        const bool branch_taken_0x1300a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300A0u;
        // 0x1300a4: 0xc91821  addu        $v1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a0) {
            ctx->pc = 0x1300E8u;
            goto label_1300e8;
        }
    }
    ctx->pc = 0x1300A8u;
label_1300a8:
    // 0x1300a8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1300ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1300acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1300b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b4: 0x25230040  addiu       $v1, $t1, 0x40
    ctx->pc = 0x1300b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1300b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1300b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300bc: 0x0  nop
    ctx->pc = 0x1300bcu;
    // NOP
label_1300c0:
    // 0x1300c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1300c4: 0x10e2fff6  beq         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1300C4u;
    {
        const bool branch_taken_0x1300c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1300C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300C4u;
        // 0x1300c8: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300c4) {
            ctx->pc = 0x1300A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1300a0;
        }
    }
    ctx->pc = 0x1300CCu;
    // 0x1300cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1300d0: 0x28a2002c  slti        $v0, $a1, 0x2C
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x1300d4: 0x0  nop
    ctx->pc = 0x1300d4u;
    // NOP
    // 0x1300d8: 0x0  nop
    ctx->pc = 0x1300d8u;
    // NOP
    // 0x1300dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1300DCu;
    {
        const bool branch_taken_0x1300dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300DCu;
        // 0x1300e0: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300dc) {
            ctx->pc = 0x1300C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1300c0;
        }
    }
    ctx->pc = 0x1300E4u;
    // 0x1300e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1300e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1300e8:
    // 0x1300e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1300e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1300ec: 0x1262ffbe  beq         $s3, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1300ECu;
    {
        const bool branch_taken_0x1300ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1300F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300ECu;
        // 0x1300f0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300ec) {
            ctx->pc = 0x12FFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x1300F4u;
    // 0x1300f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1300f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1300f8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1300fc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x130100: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x130100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x130104: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x130104u;
    {
        const bool branch_taken_0x130104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130104u;
        // 0x130108: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130104) {
            ctx->pc = 0x130028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130028;
        }
    }
    ctx->pc = 0x13010Cu;
label_13010c:
    // 0x13010c: 0xa6330066  sh          $s3, 0x66($s1)
    ctx->pc = 0x13010cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 19));
label_130110:
    // 0x130110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13011c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13011cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130120: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130124: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130128: 0x3e00008  jr          $ra
    ctx->pc = 0x130128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130128u;
        // 0x13012c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130130u;
}
