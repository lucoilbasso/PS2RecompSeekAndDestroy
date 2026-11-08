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

// Function: Cmd_POLYGON_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10c4a8 - 0x10c520
void Cmd_POLYGON_MAKE_Entry__FP15BsSCDEntControl_0x10c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_MAKE_Entry__FP15BsSCDEntControl_0x10c4a8");
#endif

    switch (ctx->pc) {
        case 0x10c4d0u: goto label_10c4d0;
        case 0x10c4dcu: goto label_10c4dc;
        case 0x10c4e8u: goto label_10c4e8;
        case 0x10c4f4u: goto label_10c4f4;
        case 0x10c504u: goto label_10c504;
        default: break;
    }

    ctx->pc = 0x10c4a8u;

    // 0x10c4a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c4b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c4bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c4c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10c4c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c4c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C4C8u;
    SET_GPR_U32(ctx, 31, 0x10C4D0u);
    ctx->pc = 0x10C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4C8u;
    // 0x10c4cc: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C4C8u, 0x10C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4D0u;
label_10c4d0:
    // 0x10c4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C4D4u;
    SET_GPR_U32(ctx, 31, 0x10C4DCu);
    ctx->pc = 0x10C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4D4u;
    // 0x10c4d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C4D4u, 0x10C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4DCu;
label_10c4dc:
    // 0x10c4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C4E0u;
    SET_GPR_U32(ctx, 31, 0x10C4E8u);
    ctx->pc = 0x10C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4E0u;
    // 0x10c4e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C4E0u, 0x10C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4E8u;
label_10c4e8:
    // 0x10c4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4ec: 0xc06406e  jal         func_1901B8
    ctx->pc = 0x10C4ECu;
    SET_GPR_U32(ctx, 31, 0x10C4F4u);
    ctx->pc = 0x10C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4ECu;
    // 0x10c4f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x10C4ECu, 0x10C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4F4u;
label_10c4f4:
    // 0x10c4f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10c4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4fc: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10C4FCu;
    SET_GPR_U32(ctx, 31, 0x10C504u);
    ctx->pc = 0x10C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4FCu;
    // 0x10c500: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10C4FCu, 0x10C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C504u;
label_10c504:
    // 0x10c504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c50c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10c510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c518: 0x3e00008  jr          $ra
    ctx->pc = 0x10C518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C518u;
        // 0x10c51c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C520u;
}
