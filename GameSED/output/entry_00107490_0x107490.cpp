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

// Function: entry_00107490
// Address: 0x107490 - 0x1074e8
void entry_00107490_0x107490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107490_0x107490");
#endif

    switch (ctx->pc) {
        case 0x1074a4u: goto label_1074a4;
        case 0x1074ccu: goto label_1074cc;
        case 0x1074e0u: goto label_1074e0;
        default: break;
    }

    ctx->pc = 0x107490u;

    // 0x107490: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x107490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x107494: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x107494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x107498: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x107498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10749c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10749Cu;
    SET_GPR_U32(ctx, 31, 0x1074A4u);
    ctx->pc = 0x1074A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10749Cu;
    // 0x1074a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10749Cu, 0x1074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074A4u;
label_1074a4:
    // 0x1074a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1074a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074a8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1074ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1074acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1074b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1074b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1074b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1074bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x1074E8u;
            return;
        }
    }
    ctx->pc = 0x1074C4u;
    // 0x1074c4: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x1074C4u;
    SET_GPR_U32(ctx, 31, 0x1074CCu);
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x1074C4u, 0x1074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074CCu;
label_1074cc:
    // 0x1074cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1074ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1074d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1074d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1074d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074d8: 0xc061372  jal         func_184DC8
    ctx->pc = 0x1074D8u;
    SET_GPR_U32(ctx, 31, 0x1074E0u);
    ctx->pc = 0x1074DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074D8u;
    // 0x1074dc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x1074D8u, 0x1074E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074E0u;
label_1074e0:
    // 0x1074e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1074E0u;
    {
        const bool branch_taken_0x1074e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E0u;
        // 0x1074e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074e0) {
            ctx->pc = 0x107530u;
            return;
        }
    }
    ctx->pc = 0x1074E8u;
}
