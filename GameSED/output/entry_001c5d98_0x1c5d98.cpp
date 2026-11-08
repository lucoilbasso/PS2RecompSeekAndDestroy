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

// Function: entry_001c5d98
// Address: 0x1c5d98 - 0x1c5e18
void entry_001c5d98_0x1c5d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d98_0x1c5d98");
#endif

    switch (ctx->pc) {
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5e00u: goto label_1c5e00;
        default: break;
    }

    ctx->pc = 0x1c5d98u;

    // 0x1c5d98: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c5d98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c5d9c: 0x2451eef0  addiu       $s1, $v0, -0x1110
    ctx->pc = 0x1c5d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x1c5da0: 0x2610f400  addiu       $s0, $s0, -0xC00
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    // 0x1c5da4: 0xac53eef0  sw          $s3, -0x1110($v0)
    ctx->pc = 0x1c5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962928), GPR_U32(ctx, 19));
    // 0x1c5da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c5da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dac: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1c5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1c5db0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1c5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c5db4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1c5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1c5db8: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C5DB8u;
    SET_GPR_U32(ctx, 31, 0x1C5DC0u);
    ctx->pc = 0x1C5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DB8u;
    // 0x1c5dbc: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C5DB8u, 0x1C5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DC0u;
label_1c5dc0:
    // 0x1c5dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dc4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1c5dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5dc8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1C5DC8u;
    SET_GPR_U32(ctx, 31, 0x1C5DD0u);
    ctx->pc = 0x1C5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DC8u;
    // 0x1c5dcc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1C5DC8u, 0x1C5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DD0u;
label_1c5dd0:
    // 0x1c5dd0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c5dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5dd4: 0x3c0b001c  lui         $t3, 0x1C
    ctx->pc = 0x1c5dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28 << 16));
    // 0x1c5dd8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1c5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1c5ddc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c5de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de4: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5de8: 0x256b5c88  addiu       $t3, $t3, 0x5C88
    ctx->pc = 0x1c5de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 23688));
    // 0x1c5dec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5df0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5df4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c5df8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5DF8u;
    SET_GPR_U32(ctx, 31, 0x1C5E00u);
    ctx->pc = 0x1C5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DF8u;
    // 0x1c5dfc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5DF8u, 0x1C5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E00u;
label_1c5e00:
    // 0x1c5e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e04: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5E04u;
    {
        const bool branch_taken_0x1c5e04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E04u;
        // 0x1c5e08: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e04) {
            ctx->pc = 0x1C5E18u;
            return;
        }
    }
    ctx->pc = 0x1C5E0Cu;
    // 0x1c5e0c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5E10u;
    {
        const bool branch_taken_0x1c5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E10u;
        // 0x1c5e14: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e10) {
            ctx->pc = 0x1C5E20u;
            return;
        }
    }
    ctx->pc = 0x1C5E18u;
}
