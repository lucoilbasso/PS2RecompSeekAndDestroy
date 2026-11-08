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

// Function: entry_00121570
// Address: 0x121570 - 0x121590
void entry_00121570_0x121570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121570_0x121570");
#endif

    ctx->pc = 0x121570u;

    // 0x121570: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x121574: 0xc4c000fc  lwc1        $f0, 0xFC($a2)
    ctx->pc = 0x121574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121578: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x121578u;
    {
        const bool branch_taken_0x121578 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x12157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121578u;
        // 0x12157c: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121578) {
            ctx->pc = 0x121590u;
            return;
        }
    }
    ctx->pc = 0x121580u;
    // 0x121580: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x121580u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121584: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121588u;
    {
        const bool branch_taken_0x121588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121588u;
        // 0x12158c: 0xc4c00104  lwc1        $f0, 0x104($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121588) {
            ctx->pc = 0x1215ACu;
            return;
        }
    }
    ctx->pc = 0x121590u;
}
