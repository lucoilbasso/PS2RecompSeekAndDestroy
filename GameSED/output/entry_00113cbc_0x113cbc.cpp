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

// Function: entry_00113cbc
// Address: 0x113cbc - 0x113ce0
void entry_00113cbc_0x113cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113cbc_0x113cbc");
#endif

    ctx->pc = 0x113cbcu;

    // 0x113cbc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113cc4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x113cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ccc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x113cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x113cd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x113cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x113CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CD8u;
        // 0x113cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CE0u;
}
