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

// Function: entry_001821b0
// Address: 0x1821b0 - 0x182230
void entry_001821b0_0x1821b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001821b0_0x1821b0");
#endif

    ctx->pc = 0x1821b0u;

    // 0x1821b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1821b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1821b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1821b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1821bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1821bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1821c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1821c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1821c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1821c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1821ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1821d0: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1821d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1821d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1821d8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1821dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1821dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1821e0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1821e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821e8: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x1821e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1821ec: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1821ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1821f0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1821f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1821f4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1821f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1821f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1821f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1821fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1821fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x182200: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x182200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x182204: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x182208: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x182208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18220c: 0x1052807  srav        $a1, $a1, $t0
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x182210: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x182210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182214: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x182214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182218: 0x122f00a  movz        $fp, $t1, $v0
    ctx->pc = 0x182218u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 9));
    // 0x18221c: 0x123a80a  movz        $s5, $t1, $v1
    ctx->pc = 0x18221cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x182220: 0xae1e005c  sw          $fp, 0x5C($s0)
    ctx->pc = 0x182220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 30));
    // 0x182224: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182228: 0xae150058  sw          $s5, 0x58($s0)
    ctx->pc = 0x182228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 21));
    // 0x18222c: 0xa78821  addu        $s1, $a1, $a3
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x182230u;
}
