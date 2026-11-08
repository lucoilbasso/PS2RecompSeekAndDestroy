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

// Function: entry_0019d878
// Address: 0x19d878 - 0x19d8a0
void entry_0019d878_0x19d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d878_0x19d878");
#endif

    ctx->pc = 0x19d878u;

    // 0x19d878: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D878u;
    {
        const bool branch_taken_0x19d878 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D878u;
        // 0x19d87c: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d878) {
            ctx->pc = 0x19D8A0u;
            return;
        }
    }
    ctx->pc = 0x19D880u;
    // 0x19d880: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d884: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d884u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d888: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x19d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19d88c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x19d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d890: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x19d890u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x19d894: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19D894u;
    {
        const bool branch_taken_0x19d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D894u;
        // 0x19d898: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d894) {
            ctx->pc = 0x19D934u;
            return;
        }
    }
    ctx->pc = 0x19D89Cu;
    // 0x19d89c: 0x0  nop
    ctx->pc = 0x19d89cu;
    // NOP
    ctx->pc = 0x19d8a0u;
}
