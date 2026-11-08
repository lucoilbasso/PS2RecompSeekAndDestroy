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

// Function: entry_001201c8
// Address: 0x1201c8 - 0x1201e0
void entry_001201c8_0x1201c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001201c8_0x1201c8");
#endif

    ctx->pc = 0x1201c8u;

    // 0x1201c8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1201C8u;
    {
        const bool branch_taken_0x1201c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201C8u;
        // 0x1201cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201c8) {
            ctx->pc = 0x1201E0u;
            return;
        }
    }
    ctx->pc = 0x1201D0u;
    // 0x1201d0: 0xc780809c  lwc1        $f0, -0x7F64($gp)
    ctx->pc = 0x1201d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1201D4u;
    {
        const bool branch_taken_0x1201d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201D4u;
        // 0x1201d8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201d4) {
            ctx->pc = 0x1201F0u;
            return;
        }
    }
    ctx->pc = 0x1201DCu;
    // 0x1201dc: 0x0  nop
    ctx->pc = 0x1201dcu;
    // NOP
    ctx->pc = 0x1201e0u;
}
