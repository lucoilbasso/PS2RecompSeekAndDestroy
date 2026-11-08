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

// Function: SetRunEffect__20ST_ParticleGeneratoriiff
// Address: 0x130a20 - 0x130c20
void SetRunEffect__20ST_ParticleGeneratoriiff_0x130a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRunEffect__20ST_ParticleGeneratoriiff_0x130a20");
#endif

    switch (ctx->pc) {
        case 0x130ad4u: goto label_130ad4;
        case 0x130ae8u: goto label_130ae8;
        case 0x130b20u: goto label_130b20;
        case 0x130b88u: goto label_130b88;
        case 0x130b9cu: goto label_130b9c;
        case 0x130bc8u: goto label_130bc8;
        case 0x130bdcu: goto label_130bdc;
        default: break;
    }

    ctx->pc = 0x130a20u;

    // 0x130a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130a24: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x130a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x130a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130a2c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x130a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130a30: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x130a30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x130a34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x130a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x130a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130a3c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x130a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x130a40: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x130a40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x130a44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x130a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130a48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x130a48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x130a4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x130a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130A50u;
    {
        const bool branch_taken_0x130a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A50u;
        // 0x130a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a50) {
            ctx->pc = 0x130A60u;
            goto label_130a60;
        }
    }
    ctx->pc = 0x130A58u;
    // 0x130a58: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x130A58u;
    {
        const bool branch_taken_0x130a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A58u;
        // 0x130a5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a58) {
            ctx->pc = 0x130C04u;
            goto label_130c04;
        }
    }
    ctx->pc = 0x130A60u;
label_130a60:
    // 0x130a60: 0x2cc2000e  sltiu       $v0, $a2, 0xE
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x130a64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130A64u;
    {
        const bool branch_taken_0x130a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130a64) {
            ctx->pc = 0x130A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130A64u;
            // 0x130a68: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130A78u;
            goto label_130a78;
        }
    }
    ctx->pc = 0x130A6Cu;
    // 0x130a6c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x130A6Cu;
    {
        const bool branch_taken_0x130a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A6Cu;
        // 0x130a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a6c) {
            ctx->pc = 0x130C04u;
            goto label_130c04;
        }
    }
    ctx->pc = 0x130A74u;
    // 0x130a74: 0x0  nop
    ctx->pc = 0x130a74u;
    // NOP
label_130a78:
    // 0x130a78: 0x10460048  beq         $v0, $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x130A78u;
    {
        const bool branch_taken_0x130a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x130A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A78u;
        // 0x130a7c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a78) {
            ctx->pc = 0x130B9Cu;
            goto label_130b9c;
        }
    }
    ctx->pc = 0x130A80u;
    // 0x130a80: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x130a84: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x130a88: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x130a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x130a8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x130a90: 0xae0600f0  sw          $a2, 0xF0($s0)
    ctx->pc = 0x130a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 6));
    // 0x130a94: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130a98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x130a9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130aa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x130aa4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130aa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x130aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130aac: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x130aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130ab0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130ab4: 0xae06007c  sw          $a2, 0x7C($s0)
    ctx->pc = 0x130ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 6));
    // 0x130ab8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130AB8u;
    {
        const bool branch_taken_0x130ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AB8u;
        // 0x130abc: 0xae050078  sw          $a1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ab8) {
            ctx->pc = 0x130AC8u;
            goto label_130ac8;
        }
    }
    ctx->pc = 0x130AC0u;
    // 0x130ac0: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x130AC0u;
    {
        const bool branch_taken_0x130ac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ac0) {
            ctx->pc = 0x130AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130AC0u;
            // 0x130ac4: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130AECu;
            goto label_130aec;
        }
    }
    ctx->pc = 0x130AC8u;
label_130ac8:
    // 0x130ac8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x130ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x130acc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130ACCu;
    SET_GPR_U32(ctx, 31, 0x130AD4u);
    ctx->pc = 0x130AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ACCu;
    // 0x130ad0: 0x24846130  addiu       $a0, $a0, 0x6130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130ACCu, 0x130AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AD4u;
label_130ad4:
    // 0x130ad4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130ad8: 0x24a56150  addiu       $a1, $a1, 0x6150
    ctx->pc = 0x130ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
    // 0x130adc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130AE0u;
    SET_GPR_U32(ctx, 31, 0x130AE8u);
    ctx->pc = 0x130AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AE0u;
    // 0x130ae4: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130AE0u, 0x130AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AE8u;
label_130ae8:
    // 0x130ae8: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x130ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_130aec:
    // 0x130aec: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x130aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x130af0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130af4: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x130AF4u;
    {
        const bool branch_taken_0x130af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x130af4) {
            ctx->pc = 0x130AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130AF4u;
            // 0x130af8: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130B80u;
            goto label_130b80;
        }
    }
    ctx->pc = 0x130AFCu;
    // 0x130afc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x130afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b00: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x130b04: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x130b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x130b08: 0x24e4002c  addiu       $a0, $a3, 0x2C
    ctx->pc = 0x130b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x130b0c: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x130b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x130b10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130b14: 0xa6030132  sh          $v1, 0x132($s0)
    ctx->pc = 0x130b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x130b18: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x130b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x130b1c: 0x0  nop
    ctx->pc = 0x130b1cu;
    // NOP
label_130b20:
    // 0x130b20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130b24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x130b28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x130b2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x130b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x130b30: 0x0  nop
    ctx->pc = 0x130b30u;
    // NOP
    // 0x130b34: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130B34u;
    {
        const bool branch_taken_0x130b34 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x130B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B34u;
        // 0x130b38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b34) {
            ctx->pc = 0x130B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130b20;
        }
    }
    ctx->pc = 0x130B3Cu;
    // 0x130b3c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x130b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x130b40: 0x94e80038  lhu         $t0, 0x38($a3)
    ctx->pc = 0x130b40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x130b44: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x130b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x130b48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x130b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130b4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130b50: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130b54: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x130b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x130b58: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x130b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x130b5c: 0xa6080066  sh          $t0, 0x66($s0)
    ctx->pc = 0x130b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 8));
    // 0x130b60: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x130b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x130b64: 0xae0400cc  sw          $a0, 0xCC($s0)
    ctx->pc = 0x130b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
    // 0x130b68: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x130b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x130b6c: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x130b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
    // 0x130b70: 0xae070108  sw          $a3, 0x108($s0)
    ctx->pc = 0x130b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 7));
    // 0x130b74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130B74u;
    {
        const bool branch_taken_0x130b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B74u;
        // 0x130b78: 0xae09010c  sw          $t1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b74) {
            ctx->pc = 0x130B9Cu;
            goto label_130b9c;
        }
    }
    ctx->pc = 0x130B7Cu;
    // 0x130b7c: 0x0  nop
    ctx->pc = 0x130b7cu;
    // NOP
label_130b80:
    // 0x130b80: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130B80u;
    SET_GPR_U32(ctx, 31, 0x130B88u);
    ctx->pc = 0x130B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B80u;
    // 0x130b84: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130B80u, 0x130B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B88u;
label_130b88:
    // 0x130b88: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130b8c: 0x24a56190  addiu       $a1, $a1, 0x6190
    ctx->pc = 0x130b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24976));
    // 0x130b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b94: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130B94u;
    SET_GPR_U32(ctx, 31, 0x130B9Cu);
    ctx->pc = 0x130B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B94u;
    // 0x130b98: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130B94u, 0x130B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B9Cu;
label_130b9c:
    // 0x130b9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x130ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130ba4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x130ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x130ba8: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x130ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x130bac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x130bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x130bb0: 0xe6010104  swc1        $f1, 0x104($s0)
    ctx->pc = 0x130bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x130bb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130BB4u;
    {
        const bool branch_taken_0x130bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BB4u;
        // 0x130bb8: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bb4) {
            ctx->pc = 0x130BDCu;
            goto label_130bdc;
        }
    }
    ctx->pc = 0x130BBCu;
    // 0x130bbc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x130bc0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130BC0u;
    SET_GPR_U32(ctx, 31, 0x130BC8u);
    ctx->pc = 0x130BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BC0u;
    // 0x130bc4: 0x248461b8  addiu       $a0, $a0, 0x61B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130BC0u, 0x130BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130bcc: 0x24a561d8  addiu       $a1, $a1, 0x61D8
    ctx->pc = 0x130bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
    // 0x130bd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130BD4u;
    SET_GPR_U32(ctx, 31, 0x130BDCu);
    ctx->pc = 0x130BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BD4u;
    // 0x130bd8: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130BD4u, 0x130BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BDCu;
label_130bdc:
    // 0x130bdc: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x130be0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130be4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130BE4u;
    {
        const bool branch_taken_0x130be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130be4) {
            ctx->pc = 0x130BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130BE4u;
            // 0x130be8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C0Cu;
            goto label_130c0c;
        }
    }
    ctx->pc = 0x130BECu;
    // 0x130bec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x130bf0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x130bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130bf8: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x130BF8u;
    {
        const bool branch_taken_0x130bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x130bf8) {
            ctx->pc = 0x130BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130BF8u;
            // 0x130bfc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C04u;
            goto label_130c04;
        }
    }
    ctx->pc = 0x130C00u;
    // 0x130c00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_130c04:
    // 0x130c04: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x130c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x130c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130c0c:
    // 0x130c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130c10: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x130c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x130c14: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x130c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130c18: 0x3e00008  jr          $ra
    ctx->pc = 0x130C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C18u;
        // 0x130c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C20u;
}
