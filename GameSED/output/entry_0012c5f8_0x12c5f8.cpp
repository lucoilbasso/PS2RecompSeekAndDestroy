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

// Function: entry_0012c5f8
// Address: 0x12c5f8 - 0x12c618
void entry_0012c5f8_0x12c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c5f8_0x12c5f8");
#endif

    ctx->pc = 0x12c5f8u;

    // 0x12c5f8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x12c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c5fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c600: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c604: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x12c604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c608: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12C608u;
    {
        const bool branch_taken_0x12c608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C608u;
        // 0x12c60c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c608) {
            ctx->pc = 0x12C618u;
            return;
        }
    }
    ctx->pc = 0x12C610u;
    // 0x12c610: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12c610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x12c614: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x12c614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->pc = 0x12c618u;
}
