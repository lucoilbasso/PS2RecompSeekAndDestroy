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

// Function: TargetLink__8WcDaemonP8WcDaemon
// Address: 0x19a040 - 0x19a0c4
void TargetLink__8WcDaemonP8WcDaemon_0x19a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TargetLink__8WcDaemonP8WcDaemon_0x19a040");
#endif

    switch (ctx->pc) {
        case 0x19a040u: goto label_19a040;
        case 0x19a044u: goto label_19a044;
        case 0x19a048u: goto label_19a048;
        case 0x19a04cu: goto label_19a04c;
        case 0x19a050u: goto label_19a050;
        case 0x19a054u: goto label_19a054;
        case 0x19a058u: goto label_19a058;
        case 0x19a05cu: goto label_19a05c;
        case 0x19a060u: goto label_19a060;
        case 0x19a064u: goto label_19a064;
        case 0x19a068u: goto label_19a068;
        case 0x19a06cu: goto label_19a06c;
        case 0x19a070u: goto label_19a070;
        case 0x19a074u: goto label_19a074;
        case 0x19a078u: goto label_19a078;
        case 0x19a07cu: goto label_19a07c;
        case 0x19a080u: goto label_19a080;
        case 0x19a084u: goto label_19a084;
        case 0x19a088u: goto label_19a088;
        case 0x19a08cu: goto label_19a08c;
        case 0x19a090u: goto label_19a090;
        case 0x19a094u: goto label_19a094;
        case 0x19a098u: goto label_19a098;
        case 0x19a09cu: goto label_19a09c;
        case 0x19a0a0u: goto label_19a0a0;
        case 0x19a0a4u: goto label_19a0a4;
        case 0x19a0a8u: goto label_19a0a8;
        case 0x19a0acu: goto label_19a0ac;
        case 0x19a0b0u: goto label_19a0b0;
        case 0x19a0b4u: goto label_19a0b4;
        case 0x19a0b8u: goto label_19a0b8;
        case 0x19a0bcu: goto label_19a0bc;
        case 0x19a0c0u: goto label_19a0c0;
        default: break;
    }

    ctx->pc = 0x19a040u;

label_19a040:
    // 0x19a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19a044:
    // 0x19a044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19a048:
    // 0x19a048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19a04c:
    // 0x19a04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19a050:
    // 0x19a050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a054:
    // 0x19a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19a058:
    // 0x19a058: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_19a05c:
    // 0x19a05c: 0x50900015  beql        $a0, $s0, . + 4 + (0x15 << 2)
label_19a060:
    if (ctx->pc == 0x19A060u) {
        ctx->pc = 0x19A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A05Cu;
        // 0x19a060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A064u;
        goto label_19a064;
    }
    ctx->pc = 0x19A05Cu;
    {
        const bool branch_taken_0x19a05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x19a05c) {
            ctx->pc = 0x19A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A05Cu;
            // 0x19a060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A0B4u;
            goto label_19a0b4;
        }
    }
    ctx->pc = 0x19A064u;
label_19a064:
    // 0x19a064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_19a068:
    if (ctx->pc == 0x19A068u) {
        ctx->pc = 0x19A06Cu;
        goto label_19a06c;
    }
    ctx->pc = 0x19A064u;
    {
        const bool branch_taken_0x19a064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a064) {
            ctx->pc = 0x19A078u;
            goto label_19a078;
        }
    }
    ctx->pc = 0x19A06Cu;
label_19a06c:
    // 0x19a06c: 0xc066844  jal         func_19A110
label_19a070:
    if (ctx->pc == 0x19A070u) {
        ctx->pc = 0x19A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A06Cu;
        // 0x19a070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A074u;
        goto label_19a074;
    }
    ctx->pc = 0x19A06Cu;
    SET_GPR_U32(ctx, 31, 0x19A074u);
    ctx->pc = 0x19A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A06Cu;
    // 0x19a070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A110u, 0x19A06Cu, 0x19A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A074u;
label_19a074:
    // 0x19a074: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x19a074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_19a078:
    // 0x19a078: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_19a07c:
    if (ctx->pc == 0x19A07Cu) {
        ctx->pc = 0x19A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A078u;
        // 0x19a07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A080u;
        goto label_19a080;
    }
    ctx->pc = 0x19A078u;
    {
        const bool branch_taken_0x19a078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a078) {
            ctx->pc = 0x19A07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A078u;
            // 0x19a07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A0B4u;
            goto label_19a0b4;
        }
    }
    ctx->pc = 0x19A080u;
label_19a080:
    // 0x19a080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a084:
    // 0x19a084: 0xc066832  jal         func_19A0C8
label_19a088:
    if (ctx->pc == 0x19A088u) {
        ctx->pc = 0x19A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A084u;
        // 0x19a088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A08Cu;
        goto label_19a08c;
    }
    ctx->pc = 0x19A084u;
    SET_GPR_U32(ctx, 31, 0x19A08Cu);
    ctx->pc = 0x19A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A084u;
    // 0x19a088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A0C8u, 0x19A084u, 0x19A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A08Cu;
label_19a08c:
    // 0x19a08c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19a090:
    // 0x19a090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a094:
    // 0x19a094: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19a098:
    // 0x19a098: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x19a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_19a09c:
    // 0x19a09c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a0a0:
    // 0x19a0a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a0a4:
    // 0x19a0a4: 0x60f809  jalr        $v1
label_19a0a8:
    if (ctx->pc == 0x19A0A8u) {
        ctx->pc = 0x19A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A4u;
        // 0x19a0a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0ACu;
        goto label_19a0ac;
    }
    ctx->pc = 0x19A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A0ACu);
        ctx->pc = 0x19A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A4u;
        // 0x19a0a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A0A4u, 0x19A0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A0ACu;
label_19a0ac:
    // 0x19a0ac: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x19a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_19a0b0:
    // 0x19a0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a0b4:
    // 0x19a0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19a0b8:
    // 0x19a0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a0bc:
    // 0x19a0bc: 0x3e00008  jr          $ra
label_19a0c0:
    if (ctx->pc == 0x19A0C0u) {
        ctx->pc = 0x19A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0BCu;
        // 0x19a0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0C4u;
        goto label_fallthrough_0x19a0bc;
    }
    ctx->pc = 0x19A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0BCu;
        // 0x19a0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a0bc:
    ctx->pc = 0x19A0C4u;
}
