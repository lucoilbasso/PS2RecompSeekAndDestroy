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

// Function: entry_0016e8c0
// Address: 0x16e8c0 - 0x16e8f8
void entry_0016e8c0_0x16e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e8c0_0x16e8c0");
#endif

    ctx->pc = 0x16e8c0u;

    // 0x16e8c0: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16e8c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16e8c4: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16e8c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e8c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x16E8C8u;
    {
        const bool branch_taken_0x16e8c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C8u;
        // 0x16e8cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c8) {
            ctx->pc = 0x16E8F8u;
            return;
        }
    }
    ctx->pc = 0x16E8D0u;
    // 0x16e8d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8d4: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x16e8d4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x16e8d8: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16e8d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16e8dc: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16e8dcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16e8e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16e8e4: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e8e8: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x16e8e8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x16e8ec: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x16e8ecu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x16e8f0: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x16e8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x16e8f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16e8f8u;
}
