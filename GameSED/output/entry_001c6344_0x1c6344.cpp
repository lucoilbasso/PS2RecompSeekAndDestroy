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

// Function: entry_001c6344
// Address: 0x1c6344 - 0x1c63dc
void entry_001c6344_0x1c6344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6344_0x1c6344");
#endif

    switch (ctx->pc) {
        case 0x1c6368u: goto label_1c6368;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6398u: goto label_1c6398;
        case 0x1c63c4u: goto label_1c63c4;
        default: break;
    }

    ctx->pc = 0x1c6344u;

    // 0x1c6344: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c6344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6348: 0x2451eef0  addiu       $s1, $v0, -0x1110
    ctx->pc = 0x1c6348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x1c634c: 0xac54eef0  sw          $s4, -0x1110($v0)
    ctx->pc = 0x1c634cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962928), GPR_U32(ctx, 20));
    // 0x1c6350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6354: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1c6354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1c6358: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1c6358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1c635c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1c635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c6360: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C6360u;
    SET_GPR_U32(ctx, 31, 0x1C6368u);
    ctx->pc = 0x1C6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6360u;
    // 0x1c6364: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C6360u, 0x1C6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6368u;
label_1c6368:
    // 0x1c6368: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c6368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c636c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6370: 0x2610eea0  addiu       $s0, $s0, -0x1160
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962848));
    // 0x1c6374: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c637c: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C637Cu;
    SET_GPR_U32(ctx, 31, 0x1C6384u);
    ctx->pc = 0x1C6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C637Cu;
    // 0x1c6380: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C637Cu, 0x1C6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6384u;
label_1c6384:
    // 0x1c6384: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1c6384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1c6388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c638c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1c638cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1c6390: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1C6390u;
    SET_GPR_U32(ctx, 31, 0x1C6398u);
    ctx->pc = 0x1C6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6390u;
    // 0x1c6394: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1C6390u, 0x1C6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6398u;
label_1c6398:
    // 0x1c6398: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c639c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c63a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63a4: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c63a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c63ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c63b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c63b4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c63b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c63b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c63bc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C63BCu;
    SET_GPR_U32(ctx, 31, 0x1C63C4u);
    ctx->pc = 0x1C63C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63BCu;
    // 0x1c63c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C63BCu, 0x1C63C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63C4u;
label_1c63c4:
    // 0x1c63c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c63c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C63C8u;
    {
        const bool branch_taken_0x1c63c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63C8u;
        // 0x1c63cc: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63c8) {
            ctx->pc = 0x1C63DCu;
            return;
        }
    }
    ctx->pc = 0x1C63D0u;
    // 0x1c63d0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c63d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63D4u;
    {
        const bool branch_taken_0x1c63d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63D4u;
        // 0x1c63d8: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63d4) {
            ctx->pc = 0x1C63E4u;
            return;
        }
    }
    ctx->pc = 0x1C63DCu;
}
