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

// Function: entry_0019309c
// Address: 0x19309c - 0x1930d0
void entry_0019309c_0x19309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019309c_0x19309c");
#endif

    ctx->pc = 0x19309cu;

    // 0x19309c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1930a0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1930a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1930a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1930a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1930a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1930a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1930ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1930acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1930b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1930b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1930b4: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x1930b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1930b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1930B8u;
    {
        const bool branch_taken_0x1930b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B8u;
        // 0x1930bc: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930b8) {
            ctx->pc = 0x1930D0u;
            return;
        }
    }
    ctx->pc = 0x1930C0u;
    // 0x1930c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1930c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1930c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1930c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1930c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1930C8u;
    {
        const bool branch_taken_0x1930c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930c8) {
            ctx->pc = 0x1930ECu;
            return;
        }
    }
    ctx->pc = 0x1930D0u;
}
