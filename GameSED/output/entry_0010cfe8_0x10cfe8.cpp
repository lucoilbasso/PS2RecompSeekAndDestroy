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

// Function: entry_0010cfe8
// Address: 0x10cfe8 - 0x10d044
void entry_0010cfe8_0x10cfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cfe8_0x10cfe8");
#endif

    switch (ctx->pc) {
        case 0x10d004u: goto label_10d004;
        case 0x10d00cu: goto label_10d00c;
        case 0x10d018u: goto label_10d018;
        case 0x10d028u: goto label_10d028;
        default: break;
    }

    ctx->pc = 0x10cfe8u;

    // 0x10cfe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfec: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x10cff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cff4: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x10cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x10cff8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10cffc: 0xc06215a  jal         func_188568
    ctx->pc = 0x10CFFCu;
    SET_GPR_U32(ctx, 31, 0x10D004u);
    ctx->pc = 0x10D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFFCu;
    // 0x10d000: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188568u, 0x10CFFCu, 0x10D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D004u;
label_10d004:
    // 0x10d004: 0xc044206  jal         func_110818
    ctx->pc = 0x10D004u;
    SET_GPR_U32(ctx, 31, 0x10D00Cu);
    ctx->pc = 0x110818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110818u, 0x10D004u, 0x10D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D00Cu;
label_10d00c:
    // 0x10d00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d010: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10D010u;
    SET_GPR_U32(ctx, 31, 0x10D018u);
    ctx->pc = 0x10D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D010u;
    // 0x10d014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10D010u, 0x10D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D018u;
label_10d018:
    // 0x10d018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d01c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d020: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10D020u;
    SET_GPR_U32(ctx, 31, 0x10D028u);
    ctx->pc = 0x10D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D020u;
    // 0x10d024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10D020u, 0x10D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D028u;
label_10d028:
    // 0x10d028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D03Cu;
        // 0x10d040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D044u;
}
