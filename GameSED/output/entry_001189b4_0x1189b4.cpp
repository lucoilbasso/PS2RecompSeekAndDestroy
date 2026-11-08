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

// Function: entry_001189b4
// Address: 0x1189b4 - 0x1189d0
void entry_001189b4_0x1189b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001189b4_0x1189b4");
#endif

    ctx->pc = 0x1189b4u;

    // 0x1189b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1189b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1189b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1189b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1189bc: 0xa6020ff0  sh          $v0, 0xFF0($s0)
    ctx->pc = 0x1189bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 2));
    // 0x1189c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1189c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1189c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1189C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189C8u;
        // 0x1189cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189D0u;
}
