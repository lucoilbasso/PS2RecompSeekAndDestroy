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

// Function: entry_0016cb38
// Address: 0x16cb38 - 0x16cb70
void entry_0016cb38_0x16cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cb38_0x16cb38");
#endif

    ctx->pc = 0x16cb38u;

    // 0x16cb38: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16cb38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16cb3c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16cb3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cb40: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x16CB40u;
    {
        const bool branch_taken_0x16cb40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB40u;
        // 0x16cb44: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb40) {
            ctx->pc = 0x16CB70u;
            return;
        }
    }
    ctx->pc = 0x16CB48u;
    // 0x16cb48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb4c: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x16cb4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x16cb50: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16cb50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16cb54: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16cb54u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16cb58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16cb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16cb5c: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cb60: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x16cb60u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x16cb64: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x16cb64u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x16cb68: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x16cb68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x16cb6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16cb70u;
}
