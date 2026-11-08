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

// Function: entry_0010fa14
// Address: 0x10fa14 - 0x10fa2c
void entry_0010fa14_0x10fa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa14_0x10fa14");
#endif

    ctx->pc = 0x10fa14u;

    // 0x10fa14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FA14u;
    {
        const bool branch_taken_0x10fa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA14u;
        // 0x10fa18: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa14) {
            ctx->pc = 0x10FA2Cu;
            return;
        }
    }
    ctx->pc = 0x10FA1Cu;
    // 0x10fa1c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10fa20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10fa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10fa24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10fa24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10fa28: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x10fa2cu;
}
