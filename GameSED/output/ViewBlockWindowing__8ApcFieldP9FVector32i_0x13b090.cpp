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

// Function: ViewBlockWindowing__8ApcFieldP9FVector32i
// Address: 0x13b090 - 0x13b4d0
void ViewBlockWindowing__8ApcFieldP9FVector32i_0x13b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ViewBlockWindowing__8ApcFieldP9FVector32i_0x13b090");
#endif

    switch (ctx->pc) {
        case 0x13b0e0u: goto label_13b0e0;
        case 0x13b264u: goto label_13b264;
        case 0x13b28cu: goto label_13b28c;
        case 0x13b35cu: goto label_13b35c;
        case 0x13b36cu: goto label_13b36c;
        case 0x13b37cu: goto label_13b37c;
        case 0x13b38cu: goto label_13b38c;
        case 0x13b3a0u: goto label_13b3a0;
        case 0x13b3dcu: goto label_13b3dc;
        case 0x13b3f0u: goto label_13b3f0;
        case 0x13b3f8u: goto label_13b3f8;
        case 0x13b418u: goto label_13b418;
        case 0x13b434u: goto label_13b434;
        case 0x13b464u: goto label_13b464;
        case 0x13b494u: goto label_13b494;
        case 0x13b49cu: goto label_13b49c;
        default: break;
    }

    ctx->pc = 0x13b090u;

    // 0x13b090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13b094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b09c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b0a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13b0a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b0ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b0b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13b0b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13b0b8: 0xe7b70050  swc1        $f23, 0x50($sp)
    ctx->pc = 0x13b0b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13b0bc: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x13b0bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13b0c0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x13b0c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13b0c4: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x13b0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13b0c8: 0x8e5501e4  lw          $s5, 0x1E4($s2)
    ctx->pc = 0x13b0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x13b0cc: 0x26b40300  addiu       $s4, $s5, 0x300
    ctx->pc = 0x13b0ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
    // 0x13b0d0: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x13b0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13b0d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x13b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13b0d8: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x13B0D8u;
    SET_GPR_U32(ctx, 31, 0x13B0E0u);
    ctx->pc = 0x13B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B0D8u;
    // 0x13b0dc: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x13B0D8u, 0x13B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0E0u;
label_13b0e0:
    // 0x13b0e0: 0x8e4501e0  lw          $a1, 0x1E0($s2)
    ctx->pc = 0x13b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13b0e4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x13b0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13b0e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13b0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b0ec: 0x544000ec  bnel        $v0, $zero, . + 4 + (0xEC << 2)
    ctx->pc = 0x13B0ECu;
    {
        const bool branch_taken_0x13b0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b0ec) {
            ctx->pc = 0x13B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B0ECu;
            // 0x13b0f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B4A0u;
            goto label_13b4a0;
        }
    }
    ctx->pc = 0x13B0F4u;
    // 0x13b0f4: 0x8ea60320  lw          $a2, 0x320($s5)
    ctx->pc = 0x13b0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x13b0f8: 0x10c000bd  beqz        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x13B0F8u;
    {
        const bool branch_taken_0x13b0f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0F8u;
        // 0x13b0fc: 0x24030126  addiu       $v1, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0f8) {
            ctx->pc = 0x13B3F0u;
            goto label_13b3f0;
        }
    }
    ctx->pc = 0x13B100u;
    // 0x13b100: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x13b104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b108: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13b10c: 0x144300b8  bne         $v0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x13B10Cu;
    {
        const bool branch_taken_0x13b10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B10Cu;
        // 0x13b110: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b10c) {
            ctx->pc = 0x13B3F0u;
            goto label_13b3f0;
        }
    }
    ctx->pc = 0x13B114u;
    // 0x13b114: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x13B114u;
    {
        const bool branch_taken_0x13b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B114u;
        // 0x13b118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b114) {
            ctx->pc = 0x13B3F0u;
            goto label_13b3f0;
        }
    }
    ctx->pc = 0x13B11Cu;
    // 0x13b11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b120: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13b120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x13b124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b128: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13b128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b12c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b130: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x13b130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x13b134: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b138: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b13c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13b13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b140: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b144: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13b144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b148: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13B148u;
    {
        const bool branch_taken_0x13b148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B148u;
        // 0x13b14c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b148) {
            ctx->pc = 0x13B164u;
            goto label_13b164;
        }
    }
    ctx->pc = 0x13B150u;
    // 0x13b150: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13b150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13b154: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b158: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b15c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13b15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b160: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13b164:
    // 0x13b164: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b168: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x13b16c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x13b170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b174: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x13b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x13b178: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b17c: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x13b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x13b180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b184: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13b184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b18c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13b18cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b190: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13B190u;
    {
        const bool branch_taken_0x13b190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B190u;
        // 0x13b194: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b190) {
            ctx->pc = 0x13B1B0u;
            goto label_13b1b0;
        }
    }
    ctx->pc = 0x13B198u;
    // 0x13b198: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13b198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13b19c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b1a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b1a4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13b1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b1a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13b1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x13b1ac: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_13b1b0:
    // 0x13b1b0: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x13b1b4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13b1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b1b8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x13b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x13b1bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13b1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b1c0: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x13b1c0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13b1c4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13b1c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13b1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b1cc: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x13b1d0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B1D0u;
    {
        const bool branch_taken_0x13b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1d0) {
            ctx->pc = 0x13B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1D0u;
            // 0x13b1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1E8u;
            goto label_13b1e8;
        }
    }
    ctx->pc = 0x13B1D8u;
    // 0x13b1d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x13b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x13b1dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x13b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x13b1e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b1e4: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x13b1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
label_13b1e8:
    // 0x13b1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b1ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B1ECu;
    {
        const bool branch_taken_0x13b1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1ECu;
        // 0x13b1f0: 0x21140  sll         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1ec) {
            ctx->pc = 0x13B200u;
            goto label_13b200;
        }
    }
    ctx->pc = 0x13B1F4u;
    // 0x13b1f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13b1f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B1F8u;
    {
        const bool branch_taken_0x13b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1F8u;
        // 0x13b1fc: 0x24423fe0  addiu       $v0, $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1f8) {
            ctx->pc = 0x13B204u;
            goto label_13b204;
        }
    }
    ctx->pc = 0x13B200u;
label_13b200:
    // 0x13b200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13b200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b204:
    // 0x13b204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b208: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13B208u;
    {
        const bool branch_taken_0x13b208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b208) {
            ctx->pc = 0x13B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B208u;
            // 0x13b20c: 0x8e0201f8  lw          $v0, 0x1F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B238u;
            goto label_13b238;
        }
    }
    ctx->pc = 0x13B210u;
    // 0x13b210: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x13b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x13b214: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B214u;
    {
        const bool branch_taken_0x13b214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B214u;
        // 0x13b218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b214) {
            ctx->pc = 0x13B234u;
            goto label_13b234;
        }
    }
    ctx->pc = 0x13B21Cu;
    // 0x13b21c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b220: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x13b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x13b224: 0xe60001fc  swc1        $f0, 0x1FC($s0)
    ctx->pc = 0x13b224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x13b228: 0xae1101f4  sw          $s1, 0x1F4($s0)
    ctx->pc = 0x13b228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 17));
    // 0x13b22c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x13b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b230: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x13b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_13b234:
    // 0x13b234: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x13b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_13b238:
    // 0x13b238: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x13B238u;
    {
        const bool branch_taken_0x13b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B238u;
        // 0x13b23c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b238) {
            ctx->pc = 0x13B384u;
            goto label_13b384;
        }
    }
    ctx->pc = 0x13B240u;
    // 0x13b240: 0xc6150170  lwc1        $f21, 0x170($s0)
    ctx->pc = 0x13b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b244: 0xc60c01fc  lwc1        $f12, 0x1FC($s0)
    ctx->pc = 0x13b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b248: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13b248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13b24c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x13b24cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x13b250: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x13b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x13b254: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13b254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x13b258: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x13b258u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x13b25c: 0xc067bea  jal         func_19EFA8
    ctx->pc = 0x13B25Cu;
    SET_GPR_U32(ctx, 31, 0x13B264u);
    ctx->pc = 0x13B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B25Cu;
    // 0x13b260: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EFA8u, 0x13B25Cu, 0x13B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B264u;
label_13b264:
    // 0x13b264: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x13b264u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b268: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B268u;
    {
        const bool branch_taken_0x13b268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B268u;
        // 0x13b26c: 0xc6140174  lwc1        $f20, 0x174($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b268) {
            ctx->pc = 0x13B278u;
            goto label_13b278;
        }
    }
    ctx->pc = 0x13B270u;
    // 0x13b270: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x13b270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x13b274: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b278:
    // 0x13b278: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x13b278u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x13b27c: 0xc60c0200  lwc1        $f12, 0x200($s0)
    ctx->pc = 0x13b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b280: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x13b280u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x13b284: 0xc067bea  jal         func_19EFA8
    ctx->pc = 0x13B284u;
    SET_GPR_U32(ctx, 31, 0x13B28Cu);
    ctx->pc = 0x13B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B284u;
    // 0x13b288: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EFA8u, 0x13B284u, 0x13B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B28Cu;
label_13b28c:
    // 0x13b28c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x13b28cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b290: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B290u;
    {
        const bool branch_taken_0x13b290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b290) {
            ctx->pc = 0x13B2A0u;
            goto label_13b2a0;
        }
    }
    ctx->pc = 0x13B298u;
    // 0x13b298: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13b298u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x13b29c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13b29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_13b2a0:
    // 0x13b2a0: 0x5260001e  beql        $s3, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x13B2A0u;
    {
        const bool branch_taken_0x13b2a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b2a0) {
            ctx->pc = 0x13B2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B2A0u;
            // 0x13b2a4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B31Cu;
            goto label_13b31c;
        }
    }
    ctx->pc = 0x13B2A8u;
    // 0x13b2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b2b0: 0x4600a028  max.s       $f0, $f20, $f0
    ctx->pc = 0x13b2b0u;
    ctx->f[0] = std::max(ctx->f[20], ctx->f[0]);
    // 0x13b2b4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x13b2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x13b2b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b2bc: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x13b2bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b2c0: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x13b2c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13b2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13b2c8: 0x0  nop
    ctx->pc = 0x13b2c8u;
    // NOP
    // 0x13b2cc: 0x0  nop
    ctx->pc = 0x13b2ccu;
    // NOP
    // 0x13b2d0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x13b2d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x13b2d4: 0xe6150170  swc1        $f21, 0x170($s0)
    ctx->pc = 0x13b2d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x13b2d8: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x13b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x13b2dc: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x13b2dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x13b2e0: 0xe602017c  swc1        $f2, 0x17C($s0)
    ctx->pc = 0x13b2e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x13b2e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13b2e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13b2e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13B2E8u;
    {
        const bool branch_taken_0x13b2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2E8u;
        // 0x13b2ec: 0xe6010180  swc1        $f1, 0x180($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2e8) {
            ctx->pc = 0x13B300u;
            goto label_13b300;
        }
    }
    ctx->pc = 0x13B2F0u;
    // 0x13b2f0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13b2f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B2F4u;
    {
        const bool branch_taken_0x13b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2F4u;
        // 0x13b2f8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2f4) {
            ctx->pc = 0x13B314u;
            goto label_13b314;
        }
    }
    ctx->pc = 0x13B2FCu;
    // 0x13b2fc: 0x0  nop
    ctx->pc = 0x13b2fcu;
    // NOP
label_13b300:
    // 0x13b300: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13b304: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13b308: 0xe616017c  swc1        $f22, 0x17C($s0)
    ctx->pc = 0x13b308u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x13b30c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b310: 0xe6030180  swc1        $f3, 0x180($s0)
    ctx->pc = 0x13b310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_13b314:
    // 0x13b314: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x13b314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x13b318: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13b31c:
    // 0x13b31c: 0x26060178  addiu       $a2, $s0, 0x178
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x13b320: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13b324: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b328: 0x704312a8  pceqb       $v0, $v0, $v1
    ctx->pc = 0x13b328u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13b32c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13b330: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x13b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x13b334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b338: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13b33c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b340: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13b340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b344: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13B344u;
    {
        const bool branch_taken_0x13b344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B344u;
        // 0x13b348: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b344) {
            ctx->pc = 0x13B37Cu;
            goto label_13b37c;
        }
    }
    ctx->pc = 0x13B34Cu;
    // 0x13b34c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x13b34cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b350: 0x24060666  addiu       $a2, $zero, 0x666
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    // 0x13b354: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B354u;
    SET_GPR_U32(ctx, 31, 0x13B35Cu);
    ctx->pc = 0x13B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B354u;
    // 0x13b358: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B354u, 0x13B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B35Cu;
label_13b35c:
    // 0x13b35c: 0x26040179  addiu       $a0, $s0, 0x179
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 377));
    // 0x13b360: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x13b360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13b364: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B364u;
    SET_GPR_U32(ctx, 31, 0x13B36Cu);
    ctx->pc = 0x13B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B364u;
    // 0x13b368: 0x24060666  addiu       $a2, $zero, 0x666 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B364u, 0x13B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B36Cu;
label_13b36c:
    // 0x13b36c: 0x2604017a  addiu       $a0, $s0, 0x17A
    ctx->pc = 0x13b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 378));
    // 0x13b370: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x13b370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13b374: 0xc067c76  jal         func_19F1D8
    ctx->pc = 0x13B374u;
    SET_GPR_U32(ctx, 31, 0x13B37Cu);
    ctx->pc = 0x13B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B374u;
    // 0x13b378: 0x24060666  addiu       $a2, $zero, 0x666 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1638));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1D8u, 0x13B374u, 0x13B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B37Cu;
label_13b37c:
    // 0x13b37c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13B37Cu;
    {
        const bool branch_taken_0x13b37c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b37c) {
            ctx->pc = 0x13B380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B37Cu;
            // 0x13b380: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B384u;
            goto label_13b384;
        }
    }
    ctx->pc = 0x13B384u;
label_13b384:
    // 0x13b384: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x13B384u;
    SET_GPR_U32(ctx, 31, 0x13B38Cu);
    ctx->pc = 0x13B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B384u;
    // 0x13b388: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13B384u, 0x13B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B38Cu;
label_13b38c:
    // 0x13b38c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13B38Cu;
    {
        const bool branch_taken_0x13b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b38c) {
            ctx->pc = 0x13B3F0u;
            goto label_13b3f0;
        }
    }
    ctx->pc = 0x13B394u;
    // 0x13b394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b398: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x13B398u;
    SET_GPR_U32(ctx, 31, 0x13B3A0u);
    ctx->pc = 0x13B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B398u;
    // 0x13b39c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x13B398u, 0x13B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3A0u;
label_13b3a0:
    // 0x13b3a0: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x13b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x13b3a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B3A4u;
    {
        const bool branch_taken_0x13b3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3A4u;
        // 0x13b3a8: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3a4) {
            ctx->pc = 0x13B3E8u;
            goto label_13b3e8;
        }
    }
    ctx->pc = 0x13B3ACu;
    // 0x13b3ac: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x13b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b3b0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13b3b4: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x13b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b3b8: 0x24846850  addiu       $a0, $a0, 0x6850
    ctx->pc = 0x13b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26704));
    // 0x13b3bc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x13b3c0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x13b3c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b3c4: 0x9209017a  lbu         $t1, 0x17A($s0)
    ctx->pc = 0x13b3c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 378)));
    // 0x13b3c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b3cc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x13b3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x13b3d0: 0x92070178  lbu         $a3, 0x178($s0)
    ctx->pc = 0x13b3d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13b3d4: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13B3D4u;
    SET_GPR_U32(ctx, 31, 0x13B3DCu);
    ctx->pc = 0x13B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3D4u;
    // 0x13b3d8: 0x92080179  lbu         $t0, 0x179($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 377)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13B3D4u, 0x13B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3DCu;
label_13b3dc:
    // 0x13b3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B3DCu;
    {
        const bool branch_taken_0x13b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b3dc) {
            ctx->pc = 0x13B3F0u;
            goto label_13b3f0;
        }
    }
    ctx->pc = 0x13B3E4u;
    // 0x13b3e4: 0x0  nop
    ctx->pc = 0x13b3e4u;
    // NOP
label_13b3e8:
    // 0x13b3e8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13B3E8u;
    SET_GPR_U32(ctx, 31, 0x13B3F0u);
    ctx->pc = 0x13B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3E8u;
    // 0x13b3ec: 0x24846868  addiu       $a0, $a0, 0x6868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13B3E8u, 0x13B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3F0u;
label_13b3f0:
    // 0x13b3f0: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13B3F0u;
    SET_GPR_U32(ctx, 31, 0x13B3F8u);
    ctx->pc = 0x13B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3F0u;
    // 0x13b3f4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13B3F0u, 0x13B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3F8u;
label_13b3f8:
    // 0x13b3f8: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13b3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13b400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b404: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B404u;
    {
        const bool branch_taken_0x13b404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b404) {
            ctx->pc = 0x13B464u;
            goto label_13b464;
        }
    }
    ctx->pc = 0x13B40Cu;
    // 0x13b40c: 0x26b00080  addiu       $s0, $s5, 0x80
    ctx->pc = 0x13b40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x13b410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b414: 0x0  nop
    ctx->pc = 0x13b414u;
    // NOP
label_13b418:
    // 0x13b418: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b41c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B41Cu;
    {
        const bool branch_taken_0x13b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B41Cu;
        // 0x13b420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b41c) {
            ctx->pc = 0x13B434u;
            goto label_13b434;
        }
    }
    ctx->pc = 0x13B424u;
    // 0x13b424: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x13b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x13b428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13b428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b42c: 0xc04ed34  jal         func_13B4D0
    ctx->pc = 0x13B42Cu;
    SET_GPR_U32(ctx, 31, 0x13B434u);
    ctx->pc = 0x13B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B42Cu;
    // 0x13b430: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B4D0u, 0x13B42Cu, 0x13B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B434u;
label_13b434:
    // 0x13b434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b438: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x13b438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x13b43c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13B43Cu;
    {
        const bool branch_taken_0x13b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B43Cu;
        // 0x13b440: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b43c) {
            ctx->pc = 0x13B418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b418;
        }
    }
    ctx->pc = 0x13B444u;
    // 0x13b444: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13b448: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13b44c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13b450: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b45c: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x13B45Cu;
    SET_GPR_U32(ctx, 31, 0x13B464u);
    ctx->pc = 0x13B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B45Cu;
    // 0x13b460: 0xae4201e0  sw          $v0, 0x1E0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x13B45Cu, 0x13B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B464u;
label_13b464:
    // 0x13b464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13b468: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13b46c: 0x8c420208  lw          $v0, 0x208($v0)
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x13b470: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B470u;
    {
        const bool branch_taken_0x13b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b470) {
            ctx->pc = 0x13B48Cu;
            goto label_13b48c;
        }
    }
    ctx->pc = 0x13B478u;
    // 0x13b478: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13b47c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13b480: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x13b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13b484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B484u;
    {
        const bool branch_taken_0x13b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b484) {
            ctx->pc = 0x13B494u;
            goto label_13b494;
        }
    }
    ctx->pc = 0x13B48Cu;
label_13b48c:
    // 0x13b48c: 0xc0518aa  jal         func_1462A8
    ctx->pc = 0x13B48Cu;
    SET_GPR_U32(ctx, 31, 0x13B494u);
    ctx->pc = 0x13B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B48Cu;
    // 0x13b490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1462A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1462A8u, 0x13B48Cu, 0x13B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B494u;
label_13b494:
    // 0x13b494: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13B494u;
    SET_GPR_U32(ctx, 31, 0x13B49Cu);
    ctx->pc = 0x13B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B494u;
    // 0x13b498: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13B494u, 0x13B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B49Cu;
label_13b49c:
    // 0x13b49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b4a0:
    // 0x13b4a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b4a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b4a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b4a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b4ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b4acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b4b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13b4b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b4b8: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x13b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13b4bc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x13b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b4c0: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x13b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b4c4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4C8u;
        // 0x13b4cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B4D0u;
}
