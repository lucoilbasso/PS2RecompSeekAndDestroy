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

// Function: WBoardInitLocal__FP7WcBoardP7FSize32
// Address: 0x191310 - 0x191384
void WBoardInitLocal__FP7WcBoardP7FSize32_0x191310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WBoardInitLocal__FP7WcBoardP7FSize32_0x191310");
#endif

    ctx->pc = 0x191310u;

    // 0x191310: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x191310u;
    {
        const bool branch_taken_0x191310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191310) {
            ctx->pc = 0x19137Cu;
            goto label_19137c;
        }
    }
    ctx->pc = 0x191318u;
    // 0x191318: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x191318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19131c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19131cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191320: 0xe4800220  swc1        $f0, 0x220($a0)
    ctx->pc = 0x191320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
    // 0x191324: 0xc4850170  lwc1        $f5, 0x170($a0)
    ctx->pc = 0x191324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191328: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x191328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19132c: 0xe4820228  swc1        $f2, 0x228($a0)
    ctx->pc = 0x19132cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    // 0x191330: 0xe4800224  swc1        $f0, 0x224($a0)
    ctx->pc = 0x191330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x191334: 0xe482022c  swc1        $f2, 0x22C($a0)
    ctx->pc = 0x191334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
    // 0x191338: 0xc4810178  lwc1        $f1, 0x178($a0)
    ctx->pc = 0x191338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19133c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191340: 0xc4830174  lwc1        $f3, 0x174($a0)
    ctx->pc = 0x191340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191344: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x191344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x191348: 0xc484017c  lwc1        $f4, 0x17C($a0)
    ctx->pc = 0x191348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19134c: 0x0  nop
    ctx->pc = 0x19134cu;
    // NOP
    // 0x191350: 0x0  nop
    ctx->pc = 0x191350u;
    // NOP
    // 0x191354: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x191354u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x191358: 0xe4800230  swc1        $f0, 0x230($a0)
    ctx->pc = 0x191358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x19135c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191360: 0xe482023c  swc1        $f2, 0x23C($a0)
    ctx->pc = 0x191360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 572), bits); }
    // 0x191364: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x191364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x191368: 0xe4820238  swc1        $f2, 0x238($a0)
    ctx->pc = 0x191368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x19136c: 0x0  nop
    ctx->pc = 0x19136cu;
    // NOP
    // 0x191370: 0x0  nop
    ctx->pc = 0x191370u;
    // NOP
    // 0x191374: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x191374u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x191378: 0xe4810234  swc1        $f1, 0x234($a0)
    ctx->pc = 0x191378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
label_19137c:
    // 0x19137c: 0x3e00008  jr          $ra
    ctx->pc = 0x19137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191384u;
}
