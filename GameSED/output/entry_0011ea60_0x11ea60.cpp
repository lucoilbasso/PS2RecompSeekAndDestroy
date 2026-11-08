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

// Function: entry_0011ea60
// Address: 0x11ea60 - 0x11ea94
void entry_0011ea60_0x11ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea60_0x11ea60");
#endif

    ctx->pc = 0x11ea60u;

    // 0x11ea60: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x11ea64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ea64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ea68: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ea68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11ea6c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x11ea6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ea70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11ea70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ea74: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x11EA74u;
    {
        const bool branch_taken_0x11ea74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ea74) {
            ctx->pc = 0x11EA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EA74u;
            // 0x11ea78: 0xc6000050  lwc1        $f0, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EA94u;
            return;
        }
    }
    ctx->pc = 0x11EA7Cu;
    // 0x11ea7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ea7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ea80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11ea84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ea84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ea88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11ea88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ea8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11ea90: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x11ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11ea94u;
}
