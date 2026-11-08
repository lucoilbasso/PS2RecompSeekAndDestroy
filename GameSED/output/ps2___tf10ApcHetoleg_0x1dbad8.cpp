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

// Function: __tf10ApcHetoleg
// Address: 0x1dbad8 - 0x1dbb5c
void ps2___tf10ApcHetoleg_0x1dbad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf10ApcHetoleg_0x1dbad8");
#endif

    switch (ctx->pc) {
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb40u: goto label_1dbb40;
        default: break;
    }

    ctx->pc = 0x1dbad8u;

    // 0x1dbad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbadc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dbae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbae4: 0x24511278  addiu       $s1, $v0, 0x1278
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x1dbae8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411278u));
    // 0x1dbaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbaf0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DBAF0u;
    {
        const bool branch_taken_0x1dbaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF0u;
        // 0x1dbaf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaf0) {
            ctx->pc = 0x1DBB44u;
            goto label_1dbb44;
        }
    }
    ctx->pc = 0x1DBAF8u;
    // 0x1dbaf8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dbafc: 0x24501268  addiu       $s0, $v0, 0x1268
    ctx->pc = 0x1dbafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x1dbb00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411268u));
    // 0x1dbb04: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DBB04u;
    {
        const bool branch_taken_0x1dbb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb04) {
            ctx->pc = 0x1DBB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBB04u;
            // 0x1dbb08: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB30u;
            goto label_1dbb30;
        }
    }
    ctx->pc = 0x1DBB0Cu;
    // 0x1dbb0c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DBB0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB14u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DBB0Cu, 0x1DBB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB14u;
label_1dbb14:
    // 0x1dbb14: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dbb18: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dbb1c: 0x24a57528  addiu       $a1, $a1, 0x7528
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29992));
    // 0x1dbb20: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1dbb24: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DBB24u;
    SET_GPR_U32(ctx, 31, 0x1DBB2Cu);
    ctx->pc = 0x1DBB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB24u;
    // 0x1dbb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DBB24u, 0x1DBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB2Cu;
label_1dbb2c:
    // 0x1dbb2c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1dbb30:
    // 0x1dbb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dbb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb38: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DBB38u;
    SET_GPR_U32(ctx, 31, 0x1DBB40u);
    ctx->pc = 0x1DBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB38u;
    // 0x1dbb3c: 0x24a57558  addiu       $a1, $a1, 0x7558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DBB38u, 0x1DBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB40u;
label_1dbb40:
    // 0x1dbb40: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1dbb44:
    // 0x1dbb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbb48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbb4c: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x1dbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x1dbb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbb54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB54u;
        // 0x1dbb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB5Cu;
}
