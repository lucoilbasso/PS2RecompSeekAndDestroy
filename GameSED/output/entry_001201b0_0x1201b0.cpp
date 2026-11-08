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

// Function: entry_001201b0
// Address: 0x1201b0 - 0x1201c8
void entry_001201b0_0x1201b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001201b0_0x1201b0");
#endif

    ctx->pc = 0x1201b0u;

    // 0x1201b0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1201B0u;
    {
        const bool branch_taken_0x1201b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201B0u;
        // 0x1201b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201b0) {
            ctx->pc = 0x1201C8u;
            return;
        }
    }
    ctx->pc = 0x1201B8u;
    // 0x1201b8: 0xc7808098  lwc1        $f0, -0x7F68($gp)
    ctx->pc = 0x1201b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1201BCu;
    {
        const bool branch_taken_0x1201bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201BCu;
        // 0x1201c0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201bc) {
            ctx->pc = 0x1201F0u;
            return;
        }
    }
    ctx->pc = 0x1201C4u;
    // 0x1201c4: 0x0  nop
    ctx->pc = 0x1201c4u;
    // NOP
    ctx->pc = 0x1201c8u;
}
