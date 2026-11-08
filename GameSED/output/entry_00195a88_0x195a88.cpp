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

// Function: entry_00195a88
// Address: 0x195a88 - 0x195b98
void entry_00195a88_0x195a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a88_0x195a88");
#endif

    ctx->pc = 0x195a88u;

    // 0x195a88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x195a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195a8c: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x195a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x195a90: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x195a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x195a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195a98: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x195a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x195a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195aa0: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x195aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x195aa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x195aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x195aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195aac: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x195aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x195ab0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195ab4: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x195ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195ab8: 0x3c07302e  lui         $a3, 0x302E
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12334 << 16));
    // 0x195abc: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x195abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x195ac0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x195ac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x195ac4: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x195ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x195ac8: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195acc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x195accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195ad0: 0x240a0368  addiu       $t2, $zero, 0x368
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x195ad4: 0x260c0240  addiu       $t4, $s0, 0x240
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x195ad8: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x195ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x195adc: 0xc6800180  lwc1        $f0, 0x180($s4)
    ctx->pc = 0x195adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ae0: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x195ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x195ae4: 0xc681017c  lwc1        $f1, 0x17C($s4)
    ctx->pc = 0x195ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ae8: 0xe6210214  swc1        $f1, 0x214($s1)
    ctx->pc = 0x195ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x195aec: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x195aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x195af0: 0xfe2301d0  sd          $v1, 0x1D0($s1)
    ctx->pc = 0x195af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 3));
    // 0x195af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195afc: 0xfe2401d8  sd          $a0, 0x1D8($s1)
    ctx->pc = 0x195afcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 4));
    // 0x195b00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x195b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x195b04: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x195b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x195b08: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x195b08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x195b0c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x195b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x195b10: 0xfe2801f0  sd          $t0, 0x1F0($s1)
    ctx->pc = 0x195b10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 8));
    // 0x195b14: 0xfe2901f8  sd          $t1, 0x1F8($s1)
    ctx->pc = 0x195b14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 9));
    // 0x195b18: 0x8e840158  lw          $a0, 0x158($s4)
    ctx->pc = 0x195b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x195b1c: 0x8ec2019c  lw          $v0, 0x19C($s6)
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 412)));
    // 0x195b20: 0x8ec30198  lw          $v1, 0x198($s6)
    ctx->pc = 0x195b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 408)));
    // 0x195b24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x195b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x195b28: 0xfe290208  sd          $t1, 0x208($s1)
    ctx->pc = 0x195b28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 9));
    // 0x195b2c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x195b30: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x195b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x195b34: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x195b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x195b38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x195b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x195b3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195b40: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x195b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x195b44: 0xfe230200  sd          $v1, 0x200($s1)
    ctx->pc = 0x195b44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 512), GPR_U64(ctx, 3));
    // 0x195b48: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195b4c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195b50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x195B50u;
    {
        const bool branch_taken_0x195b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B50u;
        // 0x195b54: 0x260b0250  addiu       $t3, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b50) {
            ctx->pc = 0x195B98u;
            return;
        }
    }
    ctx->pc = 0x195B58u;
    // 0x195b58: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x195b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x195b5c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x195b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x195b60: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x195b64: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x195b68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x195b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x195b6c: 0xfd640008  sd          $a0, 0x8($t3)
    ctx->pc = 0x195b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 4));
    // 0x195b70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x195b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195b74: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x195b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x195b78: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x195b78u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x195b7c: 0x26090270  addiu       $t1, $s0, 0x270
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x195b80: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x195b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x195b84: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x195b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x195b88: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x195b88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x195b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x195b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x195b90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x195B90u;
    {
        const bool branch_taken_0x195b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B90u;
        // 0x195b94: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b90) {
            ctx->pc = 0x195BC8u;
            return;
        }
    }
    ctx->pc = 0x195B98u;
}
