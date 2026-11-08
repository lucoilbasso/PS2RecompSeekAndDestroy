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

// Function: entry_00122008
// Address: 0x122008 - 0x12204c
void entry_00122008_0x122008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122008_0x122008");
#endif

    ctx->pc = 0x122008u;

    // 0x122008: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x122008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12200c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12200cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122010: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x122010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x122014: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x122014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122018: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x122018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x12201c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122020: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x122024: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x122024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x122028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12202c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x12202Cu;
    {
        const bool branch_taken_0x12202c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12202c) {
            ctx->pc = 0x122030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12202Cu;
            // 0x122030: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12204Cu;
            return;
        }
    }
    ctx->pc = 0x122034u;
    // 0x122034: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x122038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12203c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12203cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x122040: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x122040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122044: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x122048: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x122048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x12204cu;
}
