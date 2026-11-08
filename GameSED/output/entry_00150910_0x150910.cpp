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

// Function: entry_00150910
// Address: 0x150910 - 0x15093c
void entry_00150910_0x150910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150910_0x150910");
#endif

    ctx->pc = 0x150910u;

    // 0x150910: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x150910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150914: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x150914u;
    {
        const bool branch_taken_0x150914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150914u;
        // 0x150918: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150914) {
            ctx->pc = 0x15093Cu;
            return;
        }
    }
    ctx->pc = 0x15091Cu;
    // 0x15091c: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x15091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150920: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x150920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x150924: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x150924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150928: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x150928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15092c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x15092cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x150930: 0x4602bdc0  add.s       $f23, $f23, $f2
    ctx->pc = 0x150930u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x150934: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x150934u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x150938: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x150938u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    ctx->pc = 0x15093cu;
}
