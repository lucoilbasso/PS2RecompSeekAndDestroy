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

// Function: entry_00140328
// Address: 0x140328 - 0x140348
void entry_00140328_0x140328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140328_0x140328");
#endif

    ctx->pc = 0x140328u;

    // 0x140328: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x140328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14032c: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x14032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140330: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x140330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x140334: 0xe64101a4  swc1        $f1, 0x1A4($s2)
    ctx->pc = 0x140334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x140338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140338u;
    {
        const bool branch_taken_0x140338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140338u;
        // 0x14033c: 0xe64001a8  swc1        $f0, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140338) {
            ctx->pc = 0x140348u;
            return;
        }
    }
    ctx->pc = 0x140340u;
    // 0x140340: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x140340u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x140344: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    ctx->pc = 0x140348u;
}
