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

// Function: __tf10ApcHetomov
// Address: 0x1dbdf0 - 0x1dbe74
void ps2___tf10ApcHetomov_0x1dbdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf10ApcHetomov_0x1dbdf0");
#endif

    switch (ctx->pc) {
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe44u: goto label_1dbe44;
        case 0x1dbe58u: goto label_1dbe58;
        default: break;
    }

    ctx->pc = 0x1dbdf0u;

    // 0x1dbdf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbdf4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dbdf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbdfc: 0x24511258  addiu       $s1, $v0, 0x1258
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x1dbe00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411258u));
    // 0x1dbe04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbe08: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DBE08u;
    {
        const bool branch_taken_0x1dbe08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE08u;
        // 0x1dbe0c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe08) {
            ctx->pc = 0x1DBE5Cu;
            goto label_1dbe5c;
        }
    }
    ctx->pc = 0x1DBE10u;
    // 0x1dbe10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dbe14: 0x24501268  addiu       $s0, $v0, 0x1268
    ctx->pc = 0x1dbe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x1dbe18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411268u));
    // 0x1dbe1c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DBE1Cu;
    {
        const bool branch_taken_0x1dbe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe1c) {
            ctx->pc = 0x1DBE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBE1Cu;
            // 0x1dbe20: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBE48u;
            goto label_1dbe48;
        }
    }
    ctx->pc = 0x1DBE24u;
    // 0x1dbe24: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DBE24u;
    SET_GPR_U32(ctx, 31, 0x1DBE2Cu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DBE24u, 0x1DBE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE2Cu;
label_1dbe2c:
    // 0x1dbe2c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dbe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dbe30: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dbe34: 0x24a57528  addiu       $a1, $a1, 0x7528
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29992));
    // 0x1dbe38: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1dbe3c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DBE3Cu;
    SET_GPR_U32(ctx, 31, 0x1DBE44u);
    ctx->pc = 0x1DBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE3Cu;
    // 0x1dbe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DBE3Cu, 0x1DBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE44u;
label_1dbe44:
    // 0x1dbe44: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1dbe48:
    // 0x1dbe48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dbe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe50: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DBE50u;
    SET_GPR_U32(ctx, 31, 0x1DBE58u);
    ctx->pc = 0x1DBE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE50u;
    // 0x1dbe54: 0x24a57568  addiu       $a1, $a1, 0x7568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DBE50u, 0x1DBE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE58u;
label_1dbe58:
    // 0x1dbe58: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1dbe5c:
    // 0x1dbe5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbe60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbe64: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x1dbe68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE6Cu;
        // 0x1dbe70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE74u;
}
