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

// Function: entry_0013b164
// Address: 0x13b164 - 0x13b1b0
void entry_0013b164_0x13b164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b164_0x13b164");
#endif

    ctx->pc = 0x13b164u;

    // 0x13b164: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b168: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x13b16c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x13b170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b174: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x13b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x13b178: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b17c: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x13b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x13b180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13b180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13b184: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13b184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b188: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b18c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13b18cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b190: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13B190u;
    {
        const bool branch_taken_0x13b190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B190u;
        // 0x13b194: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b190) {
            ctx->pc = 0x13B1B0u;
            return;
        }
    }
    ctx->pc = 0x13B198u;
    // 0x13b198: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13b198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13b19c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13b1a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13b1a4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13b1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b1a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13b1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x13b1ac: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    ctx->pc = 0x13b1b0u;
}
