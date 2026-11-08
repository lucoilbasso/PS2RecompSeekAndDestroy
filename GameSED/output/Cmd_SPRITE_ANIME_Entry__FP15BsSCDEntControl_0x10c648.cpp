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

// Function: Cmd_SPRITE_ANIME_Entry__FP15BsSCDEntControl
// Address: 0x10c648 - 0x10c6a0
void Cmd_SPRITE_ANIME_Entry__FP15BsSCDEntControl_0x10c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_ANIME_Entry__FP15BsSCDEntControl_0x10c648");
#endif

    switch (ctx->pc) {
        case 0x10c670u: goto label_10c670;
        case 0x10c680u: goto label_10c680;
        default: break;
    }

    ctx->pc = 0x10c648u;

    // 0x10c648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c65c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c664: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c668: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C668u;
    SET_GPR_U32(ctx, 31, 0x10C670u);
    ctx->pc = 0x10C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C668u;
    // 0x10c66c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C668u, 0x10C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C670u;
label_10c670:
    // 0x10c670: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x10c670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10c674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c678: 0xc062a2a  jal         func_18A8A8
    ctx->pc = 0x10C678u;
    SET_GPR_U32(ctx, 31, 0x10C680u);
    ctx->pc = 0x10C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C678u;
    // 0x10c67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A8A8u, 0x10C678u, 0x10C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C680u;
label_10c680:
    // 0x10c680: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x10c680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x10c684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c688: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c68c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c690: 0xa6020200  sh          $v0, 0x200($s0)
    ctx->pc = 0x10c690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c698: 0x3e00008  jr          $ra
    ctx->pc = 0x10C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C698u;
        // 0x10c69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C6A0u;
}
