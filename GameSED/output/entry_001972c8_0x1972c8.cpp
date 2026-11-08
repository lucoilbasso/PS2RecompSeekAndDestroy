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

// Function: entry_001972c8
// Address: 0x1972c8 - 0x1973c8
void entry_001972c8_0x1972c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001972c8_0x1972c8");
#endif

    ctx->pc = 0x1972c8u;

    // 0x1972c8: 0xae4203c4  sw          $v0, 0x3C4($s2)
    ctx->pc = 0x1972c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 964), GPR_U32(ctx, 2));
    // 0x1972cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1972ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1972d0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1972d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1972d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1972d8: 0x264701e0  addiu       $a3, $s2, 0x1E0
    ctx->pc = 0x1972d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1972dc: 0xdea20030  ld          $v0, 0x30($s5)
    ctx->pc = 0x1972dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1972e0: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1972e4: 0xae43021c  sw          $v1, 0x21C($s2)
    ctx->pc = 0x1972e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 3));
    // 0x1972e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1972e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1972ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1972ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1972f0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x1972f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x1972f4: 0xfe420220  sd          $v0, 0x220($s2)
    ctx->pc = 0x1972f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 544), GPR_U64(ctx, 2));
    // 0x1972f8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1972fc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x197300: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197304: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x197304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197308: 0xc6200154  lwc1        $f0, 0x154($s1)
    ctx->pc = 0x197308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19730c: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x19730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x197310: 0x3c06302e  lui         $a2, 0x302E
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12334 << 16));
    // 0x197314: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x197314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x197318: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x197318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x19731c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x19731cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x197320: 0x264b0240  addiu       $t3, $s2, 0x240
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x197324: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x197324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x197328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x197328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19732c: 0xe6410228  swc1        $f1, 0x228($s2)
    ctx->pc = 0x19732cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 552), bits); }
    // 0x197330: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x197330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197334: 0xe6400210  swc1        $f0, 0x210($s2)
    ctx->pc = 0x197334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
    // 0x197338: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x197338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19733c: 0xe6410214  swc1        $f1, 0x214($s2)
    ctx->pc = 0x19733cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x197340: 0x92a20007  lbu         $v0, 0x7($s5)
    ctx->pc = 0x197340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x197344: 0xfe4301d0  sd          $v1, 0x1D0($s2)
    ctx->pc = 0x197344u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 464), GPR_U64(ctx, 3));
    // 0x197348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19734c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19734cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197350: 0xfe4401d8  sd          $a0, 0x1D8($s2)
    ctx->pc = 0x197350u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 472), GPR_U64(ctx, 4));
    // 0x197354: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x197354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x197358: 0xe6400218  swc1        $f0, 0x218($s2)
    ctx->pc = 0x197358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 536), bits); }
    // 0x19735c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x19735cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x197360: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x197360u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x197364: 0xfe490200  sd          $t1, 0x200($s2)
    ctx->pc = 0x197364u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 512), GPR_U64(ctx, 9));
    // 0x197368: 0xfe480208  sd          $t0, 0x208($s2)
    ctx->pc = 0x197368u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 520), GPR_U64(ctx, 8));
    // 0x19736c: 0xfe4901f0  sd          $t1, 0x1F0($s2)
    ctx->pc = 0x19736cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 496), GPR_U64(ctx, 9));
    // 0x197370: 0xfe4801f8  sd          $t0, 0x1F8($s2)
    ctx->pc = 0x197370u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 504), GPR_U64(ctx, 8));
    // 0x197374: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x197374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197378: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x197378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x19737c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19737Cu;
    {
        const bool branch_taken_0x19737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19737Cu;
        // 0x197380: 0x264a0250  addiu       $t2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19737c) {
            ctx->pc = 0x1973C8u;
            return;
        }
    }
    ctx->pc = 0x197384u;
    // 0x197384: 0x92a20007  lbu         $v0, 0x7($s5)
    ctx->pc = 0x197384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x197388: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x19738c: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x197390: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x197394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x197394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x197398: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x197398u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x19739c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x19739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1973a0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1973a4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1973a4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x1973a8: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x1973ac: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x1973acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1973b0: 0x92a40003  lbu         $a0, 0x3($s5)
    ctx->pc = 0x1973b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1973b4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1973b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1973b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1973b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1973bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1973BCu;
    {
        const bool branch_taken_0x1973bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973BCu;
        // 0x1973c0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973bc) {
            ctx->pc = 0x1973F8u;
            return;
        }
    }
    ctx->pc = 0x1973C4u;
    // 0x1973c4: 0x0  nop
    ctx->pc = 0x1973c4u;
    // NOP
    ctx->pc = 0x1973c8u;
}
