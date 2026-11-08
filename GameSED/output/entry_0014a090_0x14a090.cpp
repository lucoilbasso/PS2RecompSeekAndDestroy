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

// Function: entry_0014a090
// Address: 0x14a090 - 0x14a0e0
void entry_0014a090_0x14a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a090_0x14a090");
#endif

    ctx->pc = 0x14a090u;

    // 0x14a090: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x14a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x14a094: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a09c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14a09cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14a0a0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x14a0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x14a0a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a0a8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14a0ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14a0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14a0b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14a0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14a0b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14a0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14a0b8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14a0b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a0bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a0c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a0c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14A0C4u;
    {
        const bool branch_taken_0x14a0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C4u;
        // 0x14a0c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c4) {
            ctx->pc = 0x14A0E0u;
            return;
        }
    }
    ctx->pc = 0x14A0CCu;
    // 0x14a0cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14a0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14a0d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14a0d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a0d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a0dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14a0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x14a0e0u;
}
