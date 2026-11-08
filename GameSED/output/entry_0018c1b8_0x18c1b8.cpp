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

// Function: entry_0018c1b8
// Address: 0x18c1b8 - 0x18c1e8
void entry_0018c1b8_0x18c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c1b8_0x18c1b8");
#endif

    ctx->pc = 0x18c1b8u;

    // 0x18c1b8: 0x1558000b  bne         $t2, $t8, . + 4 + (0xB << 2)
    ctx->pc = 0x18C1B8u;
    {
        const bool branch_taken_0x18c1b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B8u;
        // 0x18c1bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1b8) {
            ctx->pc = 0x18C1E8u;
            return;
        }
    }
    ctx->pc = 0x18C1C0u;
    // 0x18c1c0: 0x33c21000  andi        $v0, $fp, 0x1000
    ctx->pc = 0x18c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4096);
    // 0x18c1c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C1C4u;
    {
        const bool branch_taken_0x18c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c1c4) {
            ctx->pc = 0x18C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C1C4u;
            // 0x18c1c8: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C1ECu;
            return;
        }
    }
    ctx->pc = 0x18C1CCu;
    // 0x18c1cc: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x18c1ccu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c1d4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c1d8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x18c1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x18c1dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C1E0u;
    {
        const bool branch_taken_0x18c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1E0u;
        // 0x18c1e4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1e0) {
            ctx->pc = 0x18C1F0u;
            return;
        }
    }
    ctx->pc = 0x18C1E8u;
}
