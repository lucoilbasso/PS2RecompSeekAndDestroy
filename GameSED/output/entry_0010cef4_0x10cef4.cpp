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

// Function: entry_0010cef4
// Address: 0x10cef4 - 0x10cf60
void entry_0010cef4_0x10cef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cef4_0x10cef4");
#endif

    switch (ctx->pc) {
        case 0x10cf04u: goto label_10cf04;
        case 0x10cf24u: goto label_10cf24;
        case 0x10cf34u: goto label_10cf34;
        default: break;
    }

    ctx->pc = 0x10cef4u;

    // 0x10cef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cef8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cefc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CEFCu;
    SET_GPR_U32(ctx, 31, 0x10CF04u);
    ctx->pc = 0x10CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEFCu;
    // 0x10cf00: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CEFCu, 0x10CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF04u;
label_10cf04:
    // 0x10cf04: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cf08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10cf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10cf10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cf14: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10CF14u;
    {
        const bool branch_taken_0x10cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF14u;
        // 0x10cf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf14) {
            ctx->pc = 0x10CF68u;
            return;
        }
    }
    ctx->pc = 0x10CF1Cu;
    // 0x10cf1c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CF1Cu;
    SET_GPR_U32(ctx, 31, 0x10CF24u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CF1Cu, 0x10CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF24u;
label_10cf24:
    // 0x10cf24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf2c: 0xc0410e4  jal         func_104390
    ctx->pc = 0x10CF2Cu;
    SET_GPR_U32(ctx, 31, 0x10CF34u);
    ctx->pc = 0x10CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF2Cu;
    // 0x10cf30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x10CF2Cu, 0x10CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF34u;
label_10cf34:
    // 0x10cf34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10cf38: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10cf38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf40: 0x24a53c60  addiu       $a1, $a1, 0x3C60
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
    // 0x10cf44: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10cf48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10cf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CF4Cu;
    {
        const bool branch_taken_0x10cf4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF4Cu;
        // 0x10cf50: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf4c) {
            ctx->pc = 0x10CF60u;
            return;
        }
    }
    ctx->pc = 0x10CF54u;
    // 0x10cf54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x10cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10cf58: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CF58u;
    {
        const bool branch_taken_0x10cf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cf58) {
            ctx->pc = 0x10CF68u;
            return;
        }
    }
    ctx->pc = 0x10CF60u;
}
