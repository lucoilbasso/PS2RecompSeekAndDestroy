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

// Function: entry_001ae450
// Address: 0x1ae450 - 0x1ae480
void entry_001ae450_0x1ae450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae450_0x1ae450");
#endif

    ctx->pc = 0x1ae450u;

    // 0x1ae450: 0x4c0fffd  bltz        $a2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1AE450u;
    {
        const bool branch_taken_0x1ae450 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1ae450) {
            ctx->pc = 0x1AE448u;
            return;
        }
    }
    ctx->pc = 0x1AE458u;
    // 0x1ae458: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ae45c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ae45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae460: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AE460u;
    {
        const bool branch_taken_0x1ae460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE460u;
        // 0x1ae464: 0xc31018  mult        $v0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae460) {
            ctx->pc = 0x1AE448u;
            return;
        }
    }
    ctx->pc = 0x1AE468u;
    // 0x1ae468: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ae46c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ae46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae470: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ae470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ae474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae478: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE478u;
        // 0x1ae47c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE480u;
}
