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

// Function: Finish__6WcFile
// Address: 0x17cf20 - 0x17cf5c
void Finish__6WcFile_0x17cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__6WcFile_0x17cf20");
#endif

    switch (ctx->pc) {
        case 0x17cf34u: goto label_17cf34;
        case 0x17cf3cu: goto label_17cf3c;
        case 0x17cf44u: goto label_17cf44;
        case 0x17cf4cu: goto label_17cf4c;
        default: break;
    }

    ctx->pc = 0x17cf20u;

    // 0x17cf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cf28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17cf2c: 0xc05f452  jal         func_17D148
    ctx->pc = 0x17CF2Cu;
    SET_GPR_U32(ctx, 31, 0x17CF34u);
    ctx->pc = 0x17CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF2Cu;
    // 0x17cf30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D148u, 0x17CF2Cu, 0x17CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF34u;
label_17cf34:
    // 0x17cf34: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x17CF34u;
    SET_GPR_U32(ctx, 31, 0x17CF3Cu);
    ctx->pc = 0x17CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF34u;
    // 0x17cf38: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x17CF34u, 0x17CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF3Cu;
label_17cf3c:
    // 0x17cf3c: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17CF3Cu;
    SET_GPR_U32(ctx, 31, 0x17CF44u);
    ctx->pc = 0x17CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF3Cu;
    // 0x17cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17CF3Cu, 0x17CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF44u;
label_17cf44:
    // 0x17cf44: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17CF44u;
    SET_GPR_U32(ctx, 31, 0x17CF4Cu);
    ctx->pc = 0x17CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF44u;
    // 0x17cf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17CF44u, 0x17CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF4Cu;
label_17cf4c:
    // 0x17cf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf54: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF54u;
        // 0x17cf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF5Cu;
}
