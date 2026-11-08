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

// Function: entry_00147c90
// Address: 0x147c90 - 0x147cb8
void entry_00147c90_0x147c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c90_0x147c90");
#endif

    ctx->pc = 0x147c90u;

    // 0x147c90: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x147c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147c94: 0xc621025c  lwc1        $f1, 0x25C($s1)
    ctx->pc = 0x147c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147c98: 0xc6200264  lwc1        $f0, 0x264($s1)
    ctx->pc = 0x147c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147c9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x147c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x147ca0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x147ca4: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x147ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x147ca8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x147cac: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x147cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x147cb0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x147CB0u;
    {
        const bool branch_taken_0x147cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147cb0) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147CB8u;
}
