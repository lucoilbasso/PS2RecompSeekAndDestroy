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

// Function: Part_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork
// Address: 0x16b0a0 - 0x16b110
void Part_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork_0x16b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Part_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork_0x16b0a0");
#endif

    switch (ctx->pc) {
        case 0x16b0ccu: goto label_16b0cc;
        case 0x16b0e4u: goto label_16b0e4;
        default: break;
    }

    ctx->pc = 0x16b0a0u;

    // 0x16b0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b0a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16b0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b0b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b0b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b0b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b0c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b0c4: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16B0C4u;
    SET_GPR_U32(ctx, 31, 0x16B0CCu);
    ctx->pc = 0x16B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0C4u;
    // 0x16b0c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16B0C4u, 0x16B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0CCu;
label_16b0cc:
    // 0x16b0cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x16b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b0d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16b0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b0d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16b0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x16b0d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16b0dc: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16B0DCu;
    SET_GPR_U32(ctx, 31, 0x16B0E4u);
    ctx->pc = 0x16B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0DCu;
    // 0x16b0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16B0DCu, 0x16B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0E4u;
label_16b0e4:
    // 0x16b0e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x16b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16b0e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b0ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16b0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b0f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16b0f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b0fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b100: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b104: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x16b104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x16b108: 0x3e00008  jr          $ra
    ctx->pc = 0x16B108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B108u;
        // 0x16b10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B110u;
}
