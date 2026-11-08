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

// Function: Cmd_STAGE_START_Entry__FP15BsSCDEntControl
// Address: 0x13eaf8 - 0x13eb64
void Cmd_STAGE_START_Entry__FP15BsSCDEntControl_0x13eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_START_Entry__FP15BsSCDEntControl_0x13eaf8");
#endif

    switch (ctx->pc) {
        case 0x13eaf8u: goto label_13eaf8;
        case 0x13eafcu: goto label_13eafc;
        case 0x13eb00u: goto label_13eb00;
        case 0x13eb04u: goto label_13eb04;
        case 0x13eb08u: goto label_13eb08;
        case 0x13eb0cu: goto label_13eb0c;
        case 0x13eb10u: goto label_13eb10;
        case 0x13eb14u: goto label_13eb14;
        case 0x13eb18u: goto label_13eb18;
        case 0x13eb1cu: goto label_13eb1c;
        case 0x13eb20u: goto label_13eb20;
        case 0x13eb24u: goto label_13eb24;
        case 0x13eb28u: goto label_13eb28;
        case 0x13eb2cu: goto label_13eb2c;
        case 0x13eb30u: goto label_13eb30;
        case 0x13eb34u: goto label_13eb34;
        case 0x13eb38u: goto label_13eb38;
        case 0x13eb3cu: goto label_13eb3c;
        case 0x13eb40u: goto label_13eb40;
        case 0x13eb44u: goto label_13eb44;
        case 0x13eb48u: goto label_13eb48;
        case 0x13eb4cu: goto label_13eb4c;
        case 0x13eb50u: goto label_13eb50;
        case 0x13eb54u: goto label_13eb54;
        case 0x13eb58u: goto label_13eb58;
        case 0x13eb5cu: goto label_13eb5c;
        case 0x13eb60u: goto label_13eb60;
        default: break;
    }

    ctx->pc = 0x13eaf8u;

label_13eaf8:
    // 0x13eaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13eafc:
    // 0x13eafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13eb00:
    // 0x13eb00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13eb04:
    // 0x13eb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13eb08:
    // 0x13eb08: 0xc043ff8  jal         func_10FFE0
label_13eb0c:
    if (ctx->pc == 0x13EB0Cu) {
        ctx->pc = 0x13EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB08u;
        // 0x13eb0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB10u;
        goto label_13eb10;
    }
    ctx->pc = 0x13EB08u;
    SET_GPR_U32(ctx, 31, 0x13EB10u);
    ctx->pc = 0x13EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB08u;
    // 0x13eb0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFE0u, 0x13EB08u, 0x13EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB10u;
label_13eb10:
    // 0x13eb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13eb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13eb14:
    // 0x13eb14: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13eb18:
    // 0x13eb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13eb1c:
    // 0x13eb1c: 0xc044002  jal         func_110008
label_13eb20:
    if (ctx->pc == 0x13EB20u) {
        ctx->pc = 0x13EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB1Cu;
        // 0x13eb20: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB24u;
        goto label_13eb24;
    }
    ctx->pc = 0x13EB1Cu;
    SET_GPR_U32(ctx, 31, 0x13EB24u);
    ctx->pc = 0x13EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB1Cu;
    // 0x13eb20: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110008u, 0x13EB1Cu, 0x13EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB24u;
label_13eb24:
    // 0x13eb24: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x13eb24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_13eb28:
    // 0x13eb28: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_13eb2c:
    // 0x13eb2c: 0x8ce70214  lw          $a3, 0x214($a3)
    ctx->pc = 0x13eb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 532)));
label_13eb30:
    // 0x13eb30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13eb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13eb34:
    // 0x13eb34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13eb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13eb38:
    // 0x13eb38: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x13eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_13eb3c:
    // 0x13eb3c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_13eb40:
    // 0x13eb40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13eb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13eb44:
    // 0x13eb44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13eb48:
    // 0x13eb48: 0x60f809  jalr        $v1
label_13eb4c:
    if (ctx->pc == 0x13EB4Cu) {
        ctx->pc = 0x13EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB48u;
        // 0x13eb4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB50u;
        goto label_13eb50;
    }
    ctx->pc = 0x13EB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13EB50u);
        ctx->pc = 0x13EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB48u;
        // 0x13eb4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB48u, 0x13EB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EB50u;
label_13eb50:
    // 0x13eb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13eb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13eb54:
    // 0x13eb54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13eb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13eb58:
    // 0x13eb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eb5c:
    // 0x13eb5c: 0x3e00008  jr          $ra
label_13eb60:
    if (ctx->pc == 0x13EB60u) {
        ctx->pc = 0x13EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB5Cu;
        // 0x13eb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB64u;
        goto label_fallthrough_0x13eb5c;
    }
    ctx->pc = 0x13EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB5Cu;
        // 0x13eb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13eb5c:
    ctx->pc = 0x13EB64u;
}
