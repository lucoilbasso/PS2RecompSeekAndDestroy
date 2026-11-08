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

// Function: entry_00192e7c
// Address: 0x192e7c - 0x192e98
void entry_00192e7c_0x192e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192e7c_0x192e7c");
#endif

    ctx->pc = 0x192e7cu;

    // 0x192e7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192e80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192E80u;
    {
        const bool branch_taken_0x192e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E80u;
        // 0x192e84: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e80) {
            ctx->pc = 0x192E98u;
            return;
        }
    }
    ctx->pc = 0x192E88u;
    // 0x192e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192E90u;
    {
        const bool branch_taken_0x192e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E90u;
        // 0x192e94: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e90) {
            ctx->pc = 0x192EB4u;
            return;
        }
    }
    ctx->pc = 0x192E98u;
}
