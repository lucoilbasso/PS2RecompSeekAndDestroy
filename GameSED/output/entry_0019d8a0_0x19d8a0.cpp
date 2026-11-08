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

// Function: entry_0019d8a0
// Address: 0x19d8a0 - 0x19d8c0
void entry_0019d8a0_0x19d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d8a0_0x19d8a0");
#endif

    ctx->pc = 0x19d8a0u;

    // 0x19d8a0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D8A0u;
    {
        const bool branch_taken_0x19d8a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8A0u;
        // 0x19d8a4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8a0) {
            ctx->pc = 0x19D8C0u;
            return;
        }
    }
    ctx->pc = 0x19D8A8u;
    // 0x19d8a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d8ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d8b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d8b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d8b4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x19d8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x19d8b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19D8B8u;
    {
        const bool branch_taken_0x19d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8B8u;
        // 0x19d8bc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8b8) {
            ctx->pc = 0x19D934u;
            return;
        }
    }
    ctx->pc = 0x19D8C0u;
}
