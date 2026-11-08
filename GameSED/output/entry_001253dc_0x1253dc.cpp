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

// Function: entry_001253dc
// Address: 0x1253dc - 0x12543c
void entry_001253dc_0x1253dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001253dc_0x1253dc");
#endif

    ctx->pc = 0x1253dcu;

    // 0x1253dc: 0x8ea201bc  lw          $v0, 0x1BC($s5)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1253e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1253e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1253e4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1253e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1253e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1253e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1253ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1253ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1253f0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1253f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1253f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1253f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1253f8: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x1253f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x1253fc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1253fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x125400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125404: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x125408: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12540c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12540cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x125410: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x125410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125414: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x125414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x125418: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x125418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12541c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12541Cu;
    {
        const bool branch_taken_0x12541c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12541Cu;
        // 0x125420: 0x31a02  srl         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12541c) {
            ctx->pc = 0x12543Cu;
            return;
        }
    }
    ctx->pc = 0x125424u;
    // 0x125424: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x125424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x125428: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x125428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12542c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12542cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x125430: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x125430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x125434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x125434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x125438: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x125438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x12543cu;
}
