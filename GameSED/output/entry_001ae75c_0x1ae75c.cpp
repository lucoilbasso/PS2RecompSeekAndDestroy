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

// Function: entry_001ae75c
// Address: 0x1ae75c - 0x1ae798
void entry_001ae75c_0x1ae75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae75c_0x1ae75c");
#endif

    ctx->pc = 0x1ae75cu;

    // 0x1ae75c: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x1ae75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ae760: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ae764: 0x51702  srl         $v0, $a1, 28
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1ae768: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE768u;
    {
        const bool branch_taken_0x1ae768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE768u;
        // 0x1ae76c: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae768) {
            ctx->pc = 0x1AE798u;
            return;
        }
    }
    ctx->pc = 0x1AE770u;
    // 0x1ae770: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1ae774: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1ae774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ae778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae77c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1ae77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae784: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ae784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ae788: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae78c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae790: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE790u;
        // 0x1ae794: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE798u;
}
