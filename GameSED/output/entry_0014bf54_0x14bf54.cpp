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

// Function: entry_0014bf54
// Address: 0x14bf54 - 0x14bfcc
void entry_0014bf54_0x14bf54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bf54_0x14bf54");
#endif

    ctx->pc = 0x14bf54u;

    // 0x14bf54: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x14bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x14bf58: 0x262501d0  addiu       $a1, $s1, 0x1D0
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x14bf5c: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14bf60: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x14bf64: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14bf64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bf68: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x14bf6c: 0x922301ed  lbu         $v1, 0x1ED($s1)
    ctx->pc = 0x14bf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 493)));
    // 0x14bf70: 0x246300f7  addiu       $v1, $v1, 0xF7
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 247));
    // 0x14bf74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14bf78: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x14bf78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14bf7c: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x14BF7Cu;
    {
        const bool branch_taken_0x14bf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf7c) {
            ctx->pc = 0x14BF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF7Cu;
            // 0x14bf80: 0xc62001e0  lwc1        $f0, 0x1E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C078u;
            return;
        }
    }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x14bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bf88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14bf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf8c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14bf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14bf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14bf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bf94: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14bf98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bf9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14bf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14bfa0: 0x8e450328  lw          $a1, 0x328($s2)
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14bfa4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14bfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bfa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bfac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14bfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bfb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14BFB0u;
    {
        const bool branch_taken_0x14bfb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFB0u;
        // 0x14bfb4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfb0) {
            ctx->pc = 0x14BFCCu;
            return;
        }
    }
    ctx->pc = 0x14BFB8u;
    // 0x14bfb8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14bfb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14bfbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bfc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bfc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bfc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14bfc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bfc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x14bfccu;
}
