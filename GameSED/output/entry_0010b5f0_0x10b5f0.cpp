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

// Function: entry_0010b5f0
// Address: 0x10b5f0 - 0x10b628
void entry_0010b5f0_0x10b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5f0_0x10b5f0");
#endif

    switch (ctx->pc) {
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b60cu: goto label_10b60c;
        default: break;
    }

    ctx->pc = 0x10b5f0u;

    // 0x10b5f0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B5F0u;
    SET_GPR_U32(ctx, 31, 0x10B5F8u);
    ctx->pc = 0x10B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5F0u;
    // 0x10b5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B5F0u, 0x10B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F8u;
label_10b5f8:
    // 0x10b5f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b600: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10b600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b604: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x10B604u;
    SET_GPR_U32(ctx, 31, 0x10B60Cu);
    ctx->pc = 0x10B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B604u;
    // 0x10b608: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EEF0u, 0x10B604u, 0x10B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B60Cu;
label_10b60c:
    // 0x10b60c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10b60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b610: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10b610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10b614: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10b614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b618: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10b618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10b61c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b620: 0x3e00008  jr          $ra
    ctx->pc = 0x10B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B620u;
        // 0x10b624: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B628u;
}
