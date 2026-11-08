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

// Function: entry_0013b0a4
// Address: 0x13b0a4 - 0x13b164
void entry_0013b0a4_0x13b0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b0a4_0x13b0a4");
#endif

    switch (ctx->pc) {
        case 0x13b0e0u: goto label_13b0e0;
        default: break;
    }

    ctx->pc = 0x13b0a4u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x13b164u;
}
