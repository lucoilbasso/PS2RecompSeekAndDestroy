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

// Function: entry_00192f50
// Address: 0x192f50 - 0x192f88
void entry_00192f50_0x192f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192f50_0x192f50");
#endif

    ctx->pc = 0x192f50u;

    // 0x192f50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x192f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192f54: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192f5c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x192f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x192f60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192f64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192f64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192f68: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192f6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F6Cu;
    {
        const bool branch_taken_0x192f6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F6Cu;
        // 0x192f70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f6c) {
            ctx->pc = 0x192F88u;
            return;
        }
    }
    ctx->pc = 0x192F74u;
    // 0x192f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192F7Cu;
    {
        const bool branch_taken_0x192f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F7Cu;
        // 0x192f80: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f7c) {
            ctx->pc = 0x192FA0u;
            return;
        }
    }
    ctx->pc = 0x192F84u;
    // 0x192f84: 0x0  nop
    ctx->pc = 0x192f84u;
    // NOP
    ctx->pc = 0x192f88u;
}
