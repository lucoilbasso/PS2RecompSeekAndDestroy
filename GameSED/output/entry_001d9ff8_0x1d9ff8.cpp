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

// Function: entry_001d9ff8
// Address: 0x1d9ff8 - 0x1da030
void entry_001d9ff8_0x1d9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9ff8_0x1d9ff8");
#endif

    ctx->pc = 0x1d9ff8u;

    // 0x1d9ff8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1d9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1d9ffc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1da000: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1da000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1da004: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1da004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1da008: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1da008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1da00c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1da00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1da010: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1da010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1da014: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1da014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1da018: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1da018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1da01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da028: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA028u;
        // 0x1da02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA030u;
}
