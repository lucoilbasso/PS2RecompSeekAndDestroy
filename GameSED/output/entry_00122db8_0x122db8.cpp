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

// Function: entry_00122db8
// Address: 0x122db8 - 0x122f34
void entry_00122db8_0x122db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122db8_0x122db8");
#endif

    ctx->pc = 0x122db8u;

    // 0x122db8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122dbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122dc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x122dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x122dc4: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x122dc8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x122dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x122dcc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x122dccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x122dd0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x122dd4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x122dd8: 0x34c64242  ori         $a2, $a2, 0x4242
    ctx->pc = 0x122dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16962);
    // 0x122ddc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x122de0: 0x34c64e26  ori         $a2, $a2, 0x4E26
    ctx->pc = 0x122de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20006);
    // 0x122de4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x122de4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x122de8: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x122dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122df0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122df4: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x122df8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x122df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dfc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x122dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x122e00: 0x3c07a03a  lui         $a3, 0xA03A
    ctx->pc = 0x122e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41018 << 16));
    // 0x122e04: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x122e08: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x122e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x122e0c: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x122e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x122e10: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x122e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x122e14: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e18: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x122e18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x122e1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x122e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x122e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x122e24: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x122e28: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x122e28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x122e2c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e30: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x122e30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x122e34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e38: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122e40: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e44: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x122e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x122e48: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122e50: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x122e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e54: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x122e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x122e58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e64: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x122e64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x122e68: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x122e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122e6c: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x122e70: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x122e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x122e74: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x122e74u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x122e78: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x122e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x122e7c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x122e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x122e84: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e88: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x122e88u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x122e8c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e94: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x122e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122e98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x122e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e9c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x122e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ea0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122ea4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x122ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x122ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eac: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x122eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x122eb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122eb4: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x122eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x122eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ec0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122ec4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x122ec8: 0xfd060008  sd          $a2, 0x8($t0)
    ctx->pc = 0x122ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 6));
    // 0x122ecc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x122eccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x122ed0: 0xe5140004  swc1        $f20, 0x4($t0)
    ctx->pc = 0x122ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x122ed4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x122ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ed8: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x122ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122edc: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x122edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ee0: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x122ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x122ee4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x122ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x122ee8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x122ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x122eec: 0xe4f40008  swc1        $f20, 0x8($a3)
    ctx->pc = 0x122eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x122ef0: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x122ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ef4: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x122ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122ef8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x122ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122efc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x122efcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x122f00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x122f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x122f04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x122f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x122f08: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x122f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x122f0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x122f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f10: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x122f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122f14: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x122f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122f18: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x122f18u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x122f1c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x122f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x122f20: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x122f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x122f24: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x122f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x122f28: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x122f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122f2c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x122f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x122f30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->pc = 0x122f34u;
}
