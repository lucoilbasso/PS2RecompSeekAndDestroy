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

// Function: Init__7WcImagePc
// Address: 0x17e420 - 0x17e484
void Init__7WcImagePc_0x17e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcImagePc_0x17e420");
#endif

    switch (ctx->pc) {
        case 0x17e43cu: goto label_17e43c;
        case 0x17e470u: goto label_17e470;
        default: break;
    }

    ctx->pc = 0x17e420u;

    // 0x17e420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e434: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x17E434u;
    SET_GPR_U32(ctx, 31, 0x17E43Cu);
    ctx->pc = 0x17E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E434u;
    // 0x17e438: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x17E434u, 0x17E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E43Cu;
label_17e43c:
    // 0x17e43c: 0x24020205  addiu       $v0, $zero, 0x205
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x17e440: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e444: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17e444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17e448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e44c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x17e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x17e450: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e454: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x17e454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x17e458: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x17e458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17e45c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x17e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17e460: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17e460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17e464: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17e464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17e468: 0xc05f922  jal         func_17E488
    ctx->pc = 0x17E468u;
    SET_GPR_U32(ctx, 31, 0x17E470u);
    ctx->pc = 0x17E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E468u;
    // 0x17e46c: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E488u, 0x17E468u, 0x17E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E470u;
label_17e470:
    // 0x17e470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E47Cu;
        // 0x17e480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E484u;
}
