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

// Function: entry_00178540
// Address: 0x178540 - 0x17855c
void entry_00178540_0x178540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178540_0x178540");
#endif

    ctx->pc = 0x178540u;

    // 0x178540: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178544: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178548: 0xac710024  sw          $s1, 0x24($v1)
    ctx->pc = 0x178548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
    // 0x17854c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178550: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x178550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178554: 0x3e00008  jr          $ra
    ctx->pc = 0x178554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178554u;
        // 0x178558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17855Cu;
}
