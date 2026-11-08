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

// Function: entry_001b9cb8
// Address: 0x1b9cb8 - 0x1b9d08
void entry_001b9cb8_0x1b9cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9cb8_0x1b9cb8");
#endif

    switch (ctx->pc) {
        case 0x1b9cccu: goto label_1b9ccc;
        case 0x1b9ce4u: goto label_1b9ce4;
        case 0x1b9cecu: goto label_1b9cec;
        case 0x1b9cf4u: goto label_1b9cf4;
        default: break;
    }

    ctx->pc = 0x1b9cb8u;

    // 0x1b9cb8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b9cbc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b9cc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b9cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b9cc4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B9CC4u;
    SET_GPR_U32(ctx, 31, 0x1B9CCCu);
    ctx->pc = 0x1B9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CC4u;
    // 0x1b9cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B9CC4u, 0x1B9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CCCu;
label_1b9ccc:
    // 0x1b9ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b9cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cd0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b9cd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cdc: 0xc06bc78  jal         func_1AF1E0
    ctx->pc = 0x1B9CDCu;
    SET_GPR_U32(ctx, 31, 0x1B9CE4u);
    ctx->pc = 0x1B9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CDCu;
    // 0x1b9ce0: 0x24a59c78  addiu       $a1, $a1, -0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1E0u, 0x1B9CDCu, 0x1B9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CE4u;
label_1b9ce4:
    // 0x1b9ce4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B9CE4u;
    SET_GPR_U32(ctx, 31, 0x1B9CECu);
    ctx->pc = 0x1B9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CE4u;
    // 0x1b9ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B9CE4u, 0x1B9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CECu;
label_1b9cec:
    // 0x1b9cec: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B9CECu;
    SET_GPR_U32(ctx, 31, 0x1B9CF4u);
    ctx->pc = 0x1B9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CECu;
    // 0x1b9cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B9CECu, 0x1B9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CF4u;
label_1b9cf4:
    // 0x1b9cf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b9cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9cf8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1b9cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9cfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b9cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D00u;
        // 0x1b9d04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D08u;
}
