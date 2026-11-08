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

// Function: default
// Address: 0x133344 - 0x133364
void ps2_default_0x133344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x133344");
#endif

    switch (ctx->pc) {
        case 0x13334cu: goto label_13334c;
        default: break;
    }

    ctx->pc = 0x133344u;

    // 0x133344: 0xc04171a  jal         func_105C68
    ctx->pc = 0x133344u;
    SET_GPR_U32(ctx, 31, 0x13334Cu);
    ctx->pc = 0x133348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133344u;
    // 0x133348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x133344u, 0x13334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13334Cu;
label_13334c:
    // 0x13334c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13334cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x133354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x133358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13335c: 0x3e00008  jr          $ra
    ctx->pc = 0x13335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13335Cu;
        // 0x133360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133364u;
}
