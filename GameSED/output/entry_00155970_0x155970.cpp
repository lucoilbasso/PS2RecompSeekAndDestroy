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

// Function: entry_00155970
// Address: 0x155970 - 0x155998
void entry_00155970_0x155970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155970_0x155970");
#endif

    switch (ctx->pc) {
        case 0x155980u: goto label_155980;
        default: break;
    }

    ctx->pc = 0x155970u;

    // 0x155970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155974: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x155978: 0xc0585d0  jal         func_161740
    ctx->pc = 0x155978u;
    SET_GPR_U32(ctx, 31, 0x155980u);
    ctx->pc = 0x15597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155978u;
    // 0x15597c: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x155978u, 0x155980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155980u;
label_155980:
    // 0x155980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15598c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155990: 0x3e00008  jr          $ra
    ctx->pc = 0x155990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155990u;
        // 0x155994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155998u;
}
