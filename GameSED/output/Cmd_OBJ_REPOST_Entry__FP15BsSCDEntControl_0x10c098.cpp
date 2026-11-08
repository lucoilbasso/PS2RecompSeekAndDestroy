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

// Function: Cmd_OBJ_REPOST_Entry__FP15BsSCDEntControl
// Address: 0x10c098 - 0x10c100
void Cmd_OBJ_REPOST_Entry__FP15BsSCDEntControl_0x10c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_REPOST_Entry__FP15BsSCDEntControl_0x10c098");
#endif

    switch (ctx->pc) {
        case 0x10c0c4u: goto label_10c0c4;
        case 0x10c0dcu: goto label_10c0dc;
        case 0x10c0ecu: goto label_10c0ec;
        default: break;
    }

    ctx->pc = 0x10c098u;

    // 0x10c098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c09c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c0a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c0b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c0b8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10c0bc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C0BCu;
    SET_GPR_U32(ctx, 31, 0x10C0C4u);
    ctx->pc = 0x10C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0BCu;
    // 0x10c0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C0BCu, 0x10C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0C4u;
label_10c0c4:
    // 0x10c0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x10c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x10c0cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C0CCu;
    {
        const bool branch_taken_0x10c0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0CCu;
        // 0x10c0d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0cc) {
            ctx->pc = 0x10C0DCu;
            goto label_10c0dc;
        }
    }
    ctx->pc = 0x10C0D4u;
    // 0x10c0d4: 0xc041160  jal         func_104580
    ctx->pc = 0x10C0D4u;
    SET_GPR_U32(ctx, 31, 0x10C0DCu);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x10C0D4u, 0x10C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0DCu;
label_10c0dc:
    // 0x10c0dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x10c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10c0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0e4: 0xc041bc0  jal         func_106F00
    ctx->pc = 0x10C0E4u;
    SET_GPR_U32(ctx, 31, 0x10C0ECu);
    ctx->pc = 0x10C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0E4u;
    // 0x10c0e8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F00u, 0x10C0E4u, 0x10C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0ECu;
label_10c0ec:
    // 0x10c0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c0f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0F8u;
        // 0x10c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C100u;
}
