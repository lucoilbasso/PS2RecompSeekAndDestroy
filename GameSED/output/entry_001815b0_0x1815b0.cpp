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

// Function: entry_001815b0
// Address: 0x1815b0 - 0x181630
void entry_001815b0_0x1815b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001815b0_0x1815b0");
#endif

    ctx->pc = 0x1815b0u;

    // 0x1815b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1815b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1815b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1815b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1815bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1815bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1815c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1815c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1815c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1815c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1815ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1815d0: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1815d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1815d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1815d8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1815dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1815dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1815e0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1815e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1815e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815e8: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1815ec: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1815ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1815f0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1815f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1815f4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1815f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1815f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1815f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1815fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1815fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x181600: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x181600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x181604: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x181604u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x181608: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18160c: 0x1052807  srav        $a1, $a1, $t0
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x181610: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x181610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x181614: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x181614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x181618: 0x122a80a  movz        $s5, $t1, $v0
    ctx->pc = 0x181618u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x18161c: 0x123a00a  movz        $s4, $t1, $v1
    ctx->pc = 0x18161cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 9));
    // 0x181620: 0xae15005c  sw          $s5, 0x5C($s0)
    ctx->pc = 0x181620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 21));
    // 0x181624: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181628: 0xae140058  sw          $s4, 0x58($s0)
    ctx->pc = 0x181628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
    // 0x18162c: 0xa78821  addu        $s1, $a1, $a3
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x181630u;
}
