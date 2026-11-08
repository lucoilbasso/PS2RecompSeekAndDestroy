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

// Function: entry_001924b8
// Address: 0x1924b8 - 0x1924e4
void entry_001924b8_0x1924b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924b8_0x1924b8");
#endif

    ctx->pc = 0x1924b8u;

    // 0x1924b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1924b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1924bc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1924BCu;
    {
        const bool branch_taken_0x1924bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924BCu;
        // 0x1924c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924bc) {
            ctx->pc = 0x1924E4u;
            return;
        }
    }
    ctx->pc = 0x1924C4u;
    // 0x1924c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1924c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924c8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1924c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1924cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1924ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1924d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1924d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1924d4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1924d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1924d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1924d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1924dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1924dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1924e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1924e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->pc = 0x1924e4u;
}
