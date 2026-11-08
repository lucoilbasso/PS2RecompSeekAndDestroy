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

// Function: entry_00132554
// Address: 0x132554 - 0x132590
void entry_00132554_0x132554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132554_0x132554");
#endif

    switch (ctx->pc) {
        case 0x132568u: goto label_132568;
        default: break;
    }

    ctx->pc = 0x132554u;

    // 0x132554: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132558: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x132558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13255c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132560: 0xc04ba16  jal         func_12E858
    ctx->pc = 0x132560u;
    SET_GPR_U32(ctx, 31, 0x132568u);
    ctx->pc = 0x132564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132560u;
    // 0x132564: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E858u, 0x132560u, 0x132568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132568u;
label_132568:
    // 0x132568: 0xae4202f8  sw          $v0, 0x2F8($s2)
    ctx->pc = 0x132568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 2));
    // 0x13256c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13256cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132578: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x132578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13257c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13257cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132580: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x132584: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x132584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132588: 0x3e00008  jr          $ra
    ctx->pc = 0x132588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132588u;
        // 0x13258c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132590u;
}
