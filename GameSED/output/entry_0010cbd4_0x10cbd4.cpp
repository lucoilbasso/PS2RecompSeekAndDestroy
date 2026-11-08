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

// Function: entry_0010cbd4
// Address: 0x10cbd4 - 0x10cc24
void entry_0010cbd4_0x10cbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cbd4_0x10cbd4");
#endif

    switch (ctx->pc) {
        case 0x10cbdcu: goto label_10cbdc;
        case 0x10cbe8u: goto label_10cbe8;
        case 0x10cbf4u: goto label_10cbf4;
        case 0x10cc08u: goto label_10cc08;
        default: break;
    }

    ctx->pc = 0x10cbd4u;

    // 0x10cbd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBD4u;
    SET_GPR_U32(ctx, 31, 0x10CBDCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBD4u, 0x10CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBDCu;
label_10cbdc:
    // 0x10cbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbe0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBE0u;
    SET_GPR_U32(ctx, 31, 0x10CBE8u);
    ctx->pc = 0x10CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBE0u;
    // 0x10cbe4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBE0u, 0x10CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBE8u;
label_10cbe8:
    // 0x10cbe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBECu;
    SET_GPR_U32(ctx, 31, 0x10CBF4u);
    ctx->pc = 0x10CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBECu;
    // 0x10cbf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBECu, 0x10CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBF4u;
label_10cbf4:
    // 0x10cbf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10cbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc00: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10CC00u;
    SET_GPR_U32(ctx, 31, 0x10CC08u);
    ctx->pc = 0x10CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC00u;
    // 0x10cc04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10CC00u, 0x10CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC08u;
label_10cc08:
    // 0x10cc08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cc10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cc10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cc14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cc18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC1Cu;
        // 0x10cc20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC24u;
}
