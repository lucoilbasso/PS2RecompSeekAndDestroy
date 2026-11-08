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

// Function: entry_001454d0
// Address: 0x1454d0 - 0x145504
void entry_001454d0_0x1454d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001454d0_0x1454d0");
#endif

    ctx->pc = 0x1454d0u;

    // 0x1454d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1454d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1454d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1454d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1454d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1454dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1454dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1454e0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1454e0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1454e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1454e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454e8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1454e8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1454ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1454f0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1454f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1454f4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1454F4u;
    {
        const bool branch_taken_0x1454f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1454F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454F4u;
        // 0x1454f8: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454f4) {
            ctx->pc = 0x145504u;
            return;
        }
    }
    ctx->pc = 0x1454FCu;
    // 0x1454fc: 0xc7808174  lwc1        $f0, -0x7E8C($gp)
    ctx->pc = 0x1454fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145500: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x145500u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x145504u;
}
