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

// Function: entry_00151764
// Address: 0x151764 - 0x1517a0
void entry_00151764_0x151764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151764_0x151764");
#endif

    ctx->pc = 0x151764u;

    // 0x151764: 0xc6000414  lwc1        $f0, 0x414($s0)
    ctx->pc = 0x151764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151768: 0xc6010634  lwc1        $f1, 0x634($s0)
    ctx->pc = 0x151768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15176c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15176cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x151770: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x151770u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151774: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x151774u;
    {
        const bool branch_taken_0x151774 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x151778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151774u;
        // 0x151778: 0xe6040634  swc1        $f4, 0x634($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151774) {
            ctx->pc = 0x1517A0u;
            return;
        }
    }
    ctx->pc = 0x15177Cu;
    // 0x15177c: 0xc60203b8  lwc1        $f2, 0x3B8($s0)
    ctx->pc = 0x15177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151780: 0xc783826c  lwc1        $f3, -0x7D94($gp)
    ctx->pc = 0x151780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151784: 0xc6010620  lwc1        $f1, 0x620($s0)
    ctx->pc = 0x151784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151788: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x151788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15178c: 0xc7808270  lwc1        $f0, -0x7D90($gp)
    ctx->pc = 0x15178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151790: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151794: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x151794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x151798: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x151798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15179c: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x15179cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    ctx->pc = 0x1517a0u;
}
