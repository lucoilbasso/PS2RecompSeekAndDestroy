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

// Function: entry_00123f60
// Address: 0x123f60 - 0x123f88
void entry_00123f60_0x123f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123f60_0x123f60");
#endif

    ctx->pc = 0x123f60u;

    // 0x123f60: 0x15400027  bnez        $t2, . + 4 + (0x27 << 2)
    ctx->pc = 0x123F60u;
    {
        const bool branch_taken_0x123f60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F60u;
        // 0x123f64: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f60) {
            ctx->pc = 0x124000u;
            return;
        }
    }
    ctx->pc = 0x123F68u;
    // 0x123f68: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x123f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123f6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x123f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123f70: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x123f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x123f74: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x123f74u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x123f78: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x123f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x123f7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F7Cu;
        // 0x123f80: 0x46003182  mul.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x124000u;
            return;
        }
    }
    ctx->pc = 0x123F84u;
    // 0x123f84: 0x0  nop
    ctx->pc = 0x123f84u;
    // NOP
    ctx->pc = 0x123f88u;
}
