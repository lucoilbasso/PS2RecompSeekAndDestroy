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

// Function: ClassJobRelease__8WcEntity
// Address: 0x1dd428 - 0x1dd468
void ClassJobRelease__8WcEntity_0x1dd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__8WcEntity_0x1dd428");
#endif

    switch (ctx->pc) {
        case 0x1dd448u: goto label_1dd448;
        case 0x1dd458u: goto label_1dd458;
        default: break;
    }

    ctx->pc = 0x1dd428u;

    // 0x1dd428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd434: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd43c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd440: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DD440u;
    SET_GPR_U32(ctx, 31, 0x1DD448u);
    ctx->pc = 0x1DD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD440u;
    // 0x1dd444: 0x248415a8  addiu       $a0, $a0, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DD440u, 0x1DD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD448u;
label_1dd448:
    // 0x1dd448: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd450: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DD450u;
    SET_GPR_U32(ctx, 31, 0x1DD458u);
    ctx->pc = 0x1DD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD450u;
    // 0x1dd454: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DD450u, 0x1DD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD458u;
label_1dd458:
    // 0x1dd458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd45c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd460: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD460u;
        // 0x1dd464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD468u;
}
