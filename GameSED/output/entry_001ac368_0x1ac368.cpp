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

// Function: entry_001ac368
// Address: 0x1ac368 - 0x1ac37c
void entry_001ac368_0x1ac368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac368_0x1ac368");
#endif

    ctx->pc = 0x1ac368u;

    // 0x1ac368: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ac368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ac36c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC36Cu;
    {
        const bool branch_taken_0x1ac36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac36c) {
            ctx->pc = 0x1AC370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC36Cu;
            // 0x1ac370: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC37Cu;
            return;
        }
    }
    ctx->pc = 0x1AC374u;
    // 0x1ac374: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC37Cu;
}
