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

// Function: Cmd_GET_MINI_FLG_Entry__FP15BsSCDEntControl
// Address: 0x11a010 - 0x11a090
void Cmd_GET_MINI_FLG_Entry__FP15BsSCDEntControl_0x11a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_MINI_FLG_Entry__FP15BsSCDEntControl_0x11a010");
#endif

    switch (ctx->pc) {
        case 0x11a028u: goto label_11a028;
        case 0x11a050u: goto label_11a050;
        case 0x11a068u: goto label_11a068;
        default: break;
    }

    ctx->pc = 0x11a010u;

    // 0x11a010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a01c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a020: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A020u;
    SET_GPR_U32(ctx, 31, 0x11A028u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A020u, 0x11A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A028u;
label_11a028:
    // 0x11a028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a02c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11a030: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11a030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11a034: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x11a034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x11a038: 0x248442d8  addiu       $a0, $a0, 0x42D8
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    // 0x11a03c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a040: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A040u;
    {
        const bool branch_taken_0x11a040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A040u;
        // 0x11a044: 0x2451fcb0  addiu       $s1, $v0, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a040) {
            ctx->pc = 0x11A068u;
            goto label_11a068;
        }
    }
    ctx->pc = 0x11A048u;
    // 0x11a048: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11A048u;
    SET_GPR_U32(ctx, 31, 0x11A050u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11A048u, 0x11A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A050u;
label_11a050:
    // 0x11a050: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a054: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a058: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a05c: 0x24a542e8  addiu       $a1, $a1, 0x42E8
    ctx->pc = 0x11a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17128));
    // 0x11a060: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A060u;
    SET_GPR_U32(ctx, 31, 0x11A068u);
    ctx->pc = 0x11A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A060u;
    // 0x11a064: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A060u, 0x11A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11a06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a070: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11a074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a078: 0x8463e1b0  lh          $v1, -0x1E50($v1)
    ctx->pc = 0x11a078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294959536)));
    // 0x11a07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a080: 0xae230400  sw          $v1, 0x400($s1)
    ctx->pc = 0x11a080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 3));
    // 0x11a084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a088: 0x3e00008  jr          $ra
    ctx->pc = 0x11A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A090u;
}
