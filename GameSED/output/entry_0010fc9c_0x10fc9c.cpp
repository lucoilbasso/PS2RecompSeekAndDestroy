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

// Function: entry_0010fc9c
// Address: 0x10fc9c - 0x10fcc0
void entry_0010fc9c_0x10fc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc9c_0x10fc9c");
#endif

    ctx->pc = 0x10fc9cu;

    // 0x10fc9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FC9Cu;
    {
        const bool branch_taken_0x10fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC9Cu;
        // 0x10fca0: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc9c) {
            ctx->pc = 0x10FCC0u;
            return;
        }
    }
    ctx->pc = 0x10FCA4u;
    // 0x10fca4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x10fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x10fca8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10fcac: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x10fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10fcb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10fcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10fcb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10fcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10fcb8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fcbc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x10fcbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x10fcc0u;
}
