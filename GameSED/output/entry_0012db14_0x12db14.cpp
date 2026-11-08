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

// Function: entry_0012db14
// Address: 0x12db14 - 0x12dc8c
void entry_0012db14_0x12db14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012db14_0x12db14");
#endif

    ctx->pc = 0x12db14u;

    // 0x12db14: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12db1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12db20: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x12db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x12db24: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12db28: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x12db28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x12db2c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12db30: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x12db30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x12db34: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12db38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12db38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12db3c: 0x34844242  ori         $a0, $a0, 0x4242
    ctx->pc = 0x12db3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16962);
    // 0x12db40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12db40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12db44: 0x34844e26  ori         $a0, $a0, 0x4E26
    ctx->pc = 0x12db44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20006);
    // 0x12db48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db4c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db50: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x12db54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db58: 0x3c06a03a  lui         $a2, 0xA03A
    ctx->pc = 0x12db58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41018 << 16));
    // 0x12db5c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x12db5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x12db60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12db64: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x12db64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x12db68: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x12db68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x12db6c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x12db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x12db70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12db74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12db78: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12db78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db7c: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x12db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x12db80: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x12db80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12db84: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x12db84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x12db88: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x12db8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db94: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x12db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12db98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db9c: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x12db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x12dba0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dba4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12dba8: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbac: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x12dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x12dbb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12dbb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbbc: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x12dbbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12dbc0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x12dbc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbc4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12dbc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12dbc8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbcc: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x12dbccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12dbd0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x12dbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd4: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12dbd8: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x12dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x12dbdc: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12dbe0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbe4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x12dbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12dbe8: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x12dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x12dbec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12dbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbf4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x12dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbfc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x12dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc00: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dc04: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12dc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12dc08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc0c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x12dc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x12dc10: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dc14: 0xe5140008  swc1        $f20, 0x8($t0)
    ctx->pc = 0x12dc14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x12dc18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12dc18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dc1c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12dc20: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x12dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x12dc24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12dc28: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x12dc28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12dc2c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12dc2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12dc30: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x12dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc34: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x12dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc38: 0x7d820000  sq          $v0, 0x0($t4)
    ctx->pc = 0x12dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 2));
    // 0x12dc3c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x12dc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12dc40: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x12dc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12dc44: 0xe4f40008  swc1        $f20, 0x8($a3)
    ctx->pc = 0x12dc44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12dc48: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x12dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc4c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x12dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc50: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12dc50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12dc54: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x12dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x12dc58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x12dc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12dc5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12dc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12dc60: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12dc60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12dc64: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x12dc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12dc68: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x12dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc6c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x12dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc70: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12dc74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x12dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12dc78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x12dc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12dc7c: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x12dc7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12dc80: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x12dc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dc84: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12dc88: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    ctx->pc = 0x12dc8cu;
}
