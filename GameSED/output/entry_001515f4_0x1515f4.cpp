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

// Function: entry_001515f4
// Address: 0x1515f4 - 0x151658
void entry_001515f4_0x1515f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001515f4_0x1515f4");
#endif

    ctx->pc = 0x1515f4u;

    // 0x1515f4: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1515f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1515f8: 0xc6030624  lwc1        $f3, 0x624($s0)
    ctx->pc = 0x1515f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1515fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1515fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x151600: 0xc7818260  lwc1        $f1, -0x7DA0($gp)
    ctx->pc = 0x151600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151604: 0xc6020634  lwc1        $f2, 0x634($s0)
    ctx->pc = 0x151604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151608: 0xc7858264  lwc1        $f5, -0x7D9C($gp)
    ctx->pc = 0x151608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15160c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15160cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x151610: 0xc6010628  lwc1        $f1, 0x628($s0)
    ctx->pc = 0x151610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151614: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x151614u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x151618: 0xc6000414  lwc1        $f0, 0x414($s0)
    ctx->pc = 0x151618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15161c: 0xc6040620  lwc1        $f4, 0x620($s0)
    ctx->pc = 0x15161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151620: 0xc7868268  lwc1        $f6, -0x7D98($gp)
    ctx->pc = 0x151620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x151624: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x151624u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x151628: 0xe6070528  swc1        $f7, 0x528($s0)
    ctx->pc = 0x151628u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
    // 0x15162c: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x15162cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x151630: 0xe6030624  swc1        $f3, 0x624($s0)
    ctx->pc = 0x151630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    // 0x151634: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x151634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x151638: 0xe6070438  swc1        $f7, 0x438($s0)
    ctx->pc = 0x151638u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
    // 0x15163c: 0xe6070488  swc1        $f7, 0x488($s0)
    ctx->pc = 0x15163cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1160), bits); }
    // 0x151640: 0xe6040620  swc1        $f4, 0x620($s0)
    ctx->pc = 0x151640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x151644: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x151644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x151648: 0xe60704d8  swc1        $f7, 0x4D8($s0)
    ctx->pc = 0x151648u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1240), bits); }
    // 0x15164c: 0xe6000414  swc1        $f0, 0x414($s0)
    ctx->pc = 0x15164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
    // 0x151650: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x151650u;
    {
        const bool branch_taken_0x151650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151650u;
        // 0x151654: 0xe6010628  swc1        $f1, 0x628($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151650) {
            ctx->pc = 0x15186Cu;
            return;
        }
    }
    ctx->pc = 0x151658u;
}
