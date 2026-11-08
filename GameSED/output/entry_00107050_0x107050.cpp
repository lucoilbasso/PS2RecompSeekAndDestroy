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

// Function: entry_00107050
// Address: 0x107050 - 0x1070bc
void entry_00107050_0x107050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107050_0x107050");
#endif

    switch (ctx->pc) {
        case 0x107078u: goto label_107078;
        case 0x10708cu: goto label_10708c;
        default: break;
    }

    ctx->pc = 0x107050u;

    // 0x107050: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x107050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x107054: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x107054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x107058: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x107058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10705c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x10705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x107060: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x107060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x107064: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x107064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x107068: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x10706c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10706cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107070: 0xc04110c  jal         func_104430
    ctx->pc = 0x107070u;
    SET_GPR_U32(ctx, 31, 0x107078u);
    ctx->pc = 0x107074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107070u;
    // 0x107074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107070u, 0x107078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107078u;
label_107078:
    // 0x107078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10707c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x107080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107084: 0xc04110c  jal         func_104430
    ctx->pc = 0x107084u;
    SET_GPR_U32(ctx, 31, 0x10708Cu);
    ctx->pc = 0x107088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107084u;
    // 0x107088: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107084u, 0x10708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10708Cu;
label_10708c:
    // 0x10708c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107090: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x107094: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x107094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x107098: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10709c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10709Cu;
    {
        const bool branch_taken_0x10709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10709c) {
            ctx->pc = 0x107158u;
            return;
        }
    }
    ctx->pc = 0x1070A4u;
    // 0x1070a4: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1070a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1070a8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1070a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1070ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1070ACu;
    {
        const bool branch_taken_0x1070ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1070ac) {
            ctx->pc = 0x1070BCu;
            return;
        }
    }
    ctx->pc = 0x1070B4u;
    // 0x1070b4: 0xc061920  jal         func_186480
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1070B4u, 0x1070BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070BCu;
}
