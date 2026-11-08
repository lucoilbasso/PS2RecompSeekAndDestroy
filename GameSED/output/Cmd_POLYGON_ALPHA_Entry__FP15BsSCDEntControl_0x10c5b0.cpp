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

// Function: Cmd_POLYGON_ALPHA_Entry__FP15BsSCDEntControl
// Address: 0x10c5b0 - 0x10c61c
void Cmd_POLYGON_ALPHA_Entry__FP15BsSCDEntControl_0x10c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_ALPHA_Entry__FP15BsSCDEntControl_0x10c5b0");
#endif

    switch (ctx->pc) {
        case 0x10c5dcu: goto label_10c5dc;
        case 0x10c5e8u: goto label_10c5e8;
        case 0x10c5f4u: goto label_10c5f4;
        case 0x10c604u: goto label_10c604;
        default: break;
    }

    ctx->pc = 0x10c5b0u;

    // 0x10c5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c5b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c5b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c5cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10c5d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c5d4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C5D4u;
    SET_GPR_U32(ctx, 31, 0x10C5DCu);
    ctx->pc = 0x10C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5D4u;
    // 0x10c5d8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C5D4u, 0x10C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5DCu;
label_10c5dc:
    // 0x10c5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C5E0u;
    SET_GPR_U32(ctx, 31, 0x10C5E8u);
    ctx->pc = 0x10C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5E0u;
    // 0x10c5e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C5E0u, 0x10C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5E8u;
label_10c5e8:
    // 0x10c5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C5ECu;
    SET_GPR_U32(ctx, 31, 0x10C5F4u);
    ctx->pc = 0x10C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5ECu;
    // 0x10c5f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C5ECu, 0x10C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5F4u;
label_10c5f4:
    // 0x10c5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5fc: 0xc0640f2  jal         func_1903C8
    ctx->pc = 0x10C5FCu;
    SET_GPR_U32(ctx, 31, 0x10C604u);
    ctx->pc = 0x10C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5FCu;
    // 0x10c600: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1903C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1903C8u, 0x10C5FCu, 0x10C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C604u;
label_10c604:
    // 0x10c604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c60c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c60cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c610: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c614: 0x3e00008  jr          $ra
    ctx->pc = 0x10C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C614u;
        // 0x10c618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C61Cu;
}
