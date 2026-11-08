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

// Function: entry_001215ac
// Address: 0x1215ac - 0x1215c8
void entry_001215ac_0x1215ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215ac_0x1215ac");
#endif

    ctx->pc = 0x1215acu;

    // 0x1215ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1215acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1215b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1215b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1215b4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1215b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1215b8: 0xc4c100fc  lwc1        $f1, 0xFC($a2)
    ctx->pc = 0x1215b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1215bc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1215bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1215c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1215C0u;
    {
        const bool branch_taken_0x1215c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C0u;
        // 0x1215c4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215c0) {
            ctx->pc = 0x1215D4u;
            return;
        }
    }
    ctx->pc = 0x1215C8u;
}
