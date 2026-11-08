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

// Function: Cmd_PANEL_ATTR_EXT_Entry__FP15BsSCDEntControl
// Address: 0x10cdd8 - 0x10ce58
void Cmd_PANEL_ATTR_EXT_Entry__FP15BsSCDEntControl_0x10cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_ATTR_EXT_Entry__FP15BsSCDEntControl_0x10cdd8");
#endif

    switch (ctx->pc) {
        case 0x10cdfcu: goto label_10cdfc;
        case 0x10ce28u: goto label_10ce28;
        default: break;
    }

    ctx->pc = 0x10cdd8u;

    // 0x10cdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cde4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cde8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdf0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cdf4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CDF4u;
    SET_GPR_U32(ctx, 31, 0x10CDFCu);
    ctx->pc = 0x10CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDF4u;
    // 0x10cdf8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CDF4u, 0x10CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDFCu;
label_10cdfc:
    // 0x10cdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce00: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10ce04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CE04u;
    {
        const bool branch_taken_0x10ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE04u;
        // 0x10ce08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce04) {
            ctx->pc = 0x10CE1Cu;
            goto label_10ce1c;
        }
    }
    ctx->pc = 0x10CE0Cu;
    // 0x10ce0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ce10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ce14: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CE14u;
    {
        const bool branch_taken_0x10ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ce14) {
            ctx->pc = 0x10CE20u;
            goto label_10ce20;
        }
    }
    ctx->pc = 0x10CE1Cu;
label_10ce1c:
    // 0x10ce1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ce20:
    // 0x10ce20: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CE20u;
    SET_GPR_U32(ctx, 31, 0x10CE28u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CE20u, 0x10CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE28u;
label_10ce28:
    // 0x10ce28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE2Cu;
    {
        const bool branch_taken_0x10ce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE2Cu;
        // 0x10ce30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce2c) {
            ctx->pc = 0x10CE40u;
            goto label_10ce40;
        }
    }
    ctx->pc = 0x10CE34u;
    // 0x10ce34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE34u;
    {
        const bool branch_taken_0x10ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE34u;
        // 0x10ce38: 0xae000258  sw          $zero, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce34) {
            ctx->pc = 0x10CE48u;
            goto label_10ce48;
        }
    }
    ctx->pc = 0x10CE3Cu;
    // 0x10ce3c: 0x0  nop
    ctx->pc = 0x10ce3cu;
    // NOP
label_10ce40:
    // 0x10ce40: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10CE40u;
    {
        const bool branch_taken_0x10ce40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ce40) {
            ctx->pc = 0x10CE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CE40u;
            // 0x10ce44: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE48u;
            goto label_10ce48;
        }
    }
    ctx->pc = 0x10CE48u;
label_10ce48:
    // 0x10ce48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ce4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE50u;
        // 0x10ce54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE58u;
}
