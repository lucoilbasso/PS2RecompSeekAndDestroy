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

// Function: entry_001c6558
// Address: 0x1c6558 - 0x1c65bc
void entry_001c6558_0x1c6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6558_0x1c6558");
#endif

    switch (ctx->pc) {
        case 0x1c6574u: goto label_1c6574;
        case 0x1c65a4u: goto label_1c65a4;
        default: break;
    }

    ctx->pc = 0x1c6558u;

    // 0x1c6558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c655c: 0x2450eef0  addiu       $s0, $v0, -0x1110
    ctx->pc = 0x1c655cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x1c6560: 0xac53eef0  sw          $s3, -0x1110($v0)
    ctx->pc = 0x1c6560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962928), GPR_U32(ctx, 19));
    // 0x1c6564: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1c6564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1c6568: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1c6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c656c: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C656Cu;
    SET_GPR_U32(ctx, 31, 0x1C6574u);
    ctx->pc = 0x1C6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C656Cu;
    // 0x1c6570: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C656Cu, 0x1C6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6574u;
label_1c6574:
    // 0x1c6574: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1c6574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6578: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c6578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c657c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c657cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6584: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c6584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c6588: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c6588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c658c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c6590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6594: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c6594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c6598: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c6598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c659c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C659Cu;
    SET_GPR_U32(ctx, 31, 0x1C65A4u);
    ctx->pc = 0x1C65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C659Cu;
    // 0x1c65a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C659Cu, 0x1C65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65A4u;
label_1c65a4:
    // 0x1c65a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c65a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C65A8u;
    {
        const bool branch_taken_0x1c65a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65A8u;
        // 0x1c65ac: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65a8) {
            ctx->pc = 0x1C65BCu;
            return;
        }
    }
    ctx->pc = 0x1C65B0u;
    // 0x1c65b0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c65b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65B4u;
    {
        const bool branch_taken_0x1c65b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B4u;
        // 0x1c65b8: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b4) {
            ctx->pc = 0x1C65C4u;
            return;
        }
    }
    ctx->pc = 0x1C65BCu;
}
