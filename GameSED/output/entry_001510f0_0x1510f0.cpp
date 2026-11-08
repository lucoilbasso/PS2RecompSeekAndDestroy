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

// Function: entry_001510f0
// Address: 0x1510f0 - 0x151114
void entry_001510f0_0x1510f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001510f0_0x1510f0");
#endif

    ctx->pc = 0x1510f0u;

    // 0x1510f0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1510f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1510f4: 0x460300a8  max.s       $f2, $f0, $f3
    ctx->pc = 0x1510f4u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1510f8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1510F8u;
    {
        const bool branch_taken_0x1510f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510F8u;
        // 0x1510fc: 0x460011c7  neg.s       $f7, $f2 (Delay Slot)
        ctx->f[7] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510f8) {
            ctx->pc = 0x151114u;
            return;
        }
    }
    ctx->pc = 0x151100u;
    // 0x151100: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x151100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x151104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151108: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x151108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x15110c: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x15110cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x151110: 0x460601e8  max.s       $f7, $f0, $f6
    ctx->pc = 0x151110u;
    ctx->f[7] = std::max(ctx->f[0], ctx->f[6]);
    ctx->pc = 0x151114u;
}
