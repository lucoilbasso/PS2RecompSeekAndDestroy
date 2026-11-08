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

// Function: entry_00190f10
// Address: 0x190f10 - 0x190fd0
void entry_00190f10_0x190f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190f10_0x190f10");
#endif

    ctx->pc = 0x190f10u;

    // 0x190f10: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x190f10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x190f14: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x190f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x190f18: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x190f18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x190f1c: 0x24f80010  addiu       $t8, $a3, 0x10
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190f20: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190f20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x190f24: 0x27070020  addiu       $a3, $t8, 0x20
    ctx->pc = 0x190f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x190f28: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x190f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x190f2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190f30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190f34: 0x27090010  addiu       $t1, $t8, 0x10
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190f38: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x190f38u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x190f3c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x190f40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x190f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x190f44: 0x34638007  ori         $v1, $v1, 0x8007
    ctx->pc = 0x190f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32775);
    // 0x190f48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x190f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x190f4c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x190f50: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x190f50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x190f54: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x190f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x190f58: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x190f58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x190f5c: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x190f5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f60: 0x30a1023  subu        $v0, $t8, $t2
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 10)));
    // 0x190f64: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190f68: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190f6c: 0xde280018  ld          $t0, 0x18($s1)
    ctx->pc = 0x190f6cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x190f70: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x190f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x190f74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x190f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190f78: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x190f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x190f7c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x190f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190f80: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x190f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x190f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190f88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190f8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x190f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190f90: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x190f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x190f94: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x190f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x190f98: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x190f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x190f9c: 0x34c624e2  ori         $a2, $a2, 0x24E2
    ctx->pc = 0x190f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9442);
    // 0x190fa0: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x190fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x190fa4: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x190fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x190fa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fac: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x190facu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x190fb0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190fb4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x190fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x190fb8: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x190fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x190fbc: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x190fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x190fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190fc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190fc8: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190fcc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x190fd0u;
}
