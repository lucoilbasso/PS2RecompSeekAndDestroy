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

// Function: caseD_0
// Address: 0x15ab20 - 0x15ab48
void caseD_0_0x15ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x15ab20");
#endif

    ctx->pc = 0x15ab20u;

    // 0x15ab20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15ab24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ab28: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x15ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab2c: 0xc502002c  lwc1        $f2, 0x2C($t0)
    ctx->pc = 0x15ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ab30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15ab30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15ab34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15ab34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15ab38: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15ab38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x15ab3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15AB3Cu;
    {
        const bool branch_taken_0x15ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB3Cu;
        // 0x15ab40: 0xe5020024  swc1        $f2, 0x24($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab3c) {
            ctx->pc = 0x15AB7Cu;
            return;
        }
    }
    ctx->pc = 0x15AB44u;
    // 0x15ab44: 0x0  nop
    ctx->pc = 0x15ab44u;
    // NOP
    ctx->pc = 0x15ab48u;
}
