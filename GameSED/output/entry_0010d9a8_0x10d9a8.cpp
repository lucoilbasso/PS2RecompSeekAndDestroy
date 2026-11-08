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

// Function: entry_0010d9a8
// Address: 0x10d9a8 - 0x10da10
void entry_0010d9a8_0x10d9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d9a8_0x10d9a8");
#endif

    switch (ctx->pc) {
        case 0x10d9c0u: goto label_10d9c0;
        case 0x10d9dcu: goto label_10d9dc;
        case 0x10d9e8u: goto label_10d9e8;
        case 0x10d9f4u: goto label_10d9f4;
        default: break;
    }

    ctx->pc = 0x10d9a8u;

    // 0x10d9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d9ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d9b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d9b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d9b8: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D9B8u;
    SET_GPR_U32(ctx, 31, 0x10D9C0u);
    ctx->pc = 0x10D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9B8u;
    // 0x10d9bc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D9B8u, 0x10D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9C0u;
label_10d9c0:
    // 0x10d9c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x10d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10d9c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10d9cc: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D9CCu;
    {
        const bool branch_taken_0x10d9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d9cc) {
            ctx->pc = 0x10D9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D9CCu;
            // 0x10d9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DA10u;
            return;
        }
    }
    ctx->pc = 0x10D9D4u;
    // 0x10d9d4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9D4u;
    SET_GPR_U32(ctx, 31, 0x10D9DCu);
    ctx->pc = 0x10D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9D4u;
    // 0x10d9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9D4u, 0x10D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9DCu;
label_10d9dc:
    // 0x10d9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9e0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9E0u;
    SET_GPR_U32(ctx, 31, 0x10D9E8u);
    ctx->pc = 0x10D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9E0u;
    // 0x10d9e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9E0u, 0x10D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9E8u;
label_10d9e8:
    // 0x10d9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9ec: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10D9ECu;
    SET_GPR_U32(ctx, 31, 0x10D9F4u);
    ctx->pc = 0x10D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9ECu;
    // 0x10d9f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10D9ECu, 0x10D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D9F4u;
label_10d9f4:
    // 0x10d9f4: 0x926301dc  lbu         $v1, 0x1DC($s3)
    ctx->pc = 0x10d9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x10d9f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x10d9fc: 0x926401dd  lbu         $a0, 0x1DD($s3)
    ctx->pc = 0x10d9fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 477)));
    // 0x10da00: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x10da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x10da04: 0x926301de  lbu         $v1, 0x1DE($s3)
    ctx->pc = 0x10da04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 478)));
    // 0x10da08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10DA08u;
    {
        const bool branch_taken_0x10da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA08u;
        // 0x10da0c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da08) {
            ctx->pc = 0x10DA88u;
            return;
        }
    }
    ctx->pc = 0x10DA10u;
}
