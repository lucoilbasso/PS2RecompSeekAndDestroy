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

// Function: entry_001ca3c0
// Address: 0x1ca3c0 - 0x1ca3d8
void entry_001ca3c0_0x1ca3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3c0_0x1ca3c0");
#endif

    ctx->pc = 0x1ca3c0u;

    // 0x1ca3c0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA3C0u;
    {
        const bool branch_taken_0x1ca3c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3C0u;
        // 0x1ca3c4: 0x41078  dsll        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3c0) {
            ctx->pc = 0x1CA3D8u;
            return;
        }
    }
    ctx->pc = 0x1CA3C8u;
    // 0x1ca3c8: 0x86202f  dsubu       $a0, $a0, $a2
    ctx->pc = 0x1ca3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x1ca3cc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ca3d0: 0x41078  dsll        $v0, $a0, 1
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
    // 0x1ca3d4: 0x0  nop
    ctx->pc = 0x1ca3d4u;
    // NOP
    ctx->pc = 0x1ca3d8u;
}
