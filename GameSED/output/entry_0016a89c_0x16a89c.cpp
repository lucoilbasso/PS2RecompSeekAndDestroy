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

// Function: entry_0016a89c
// Address: 0x16a89c - 0x16a8ec
void entry_0016a89c_0x16a89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a89c_0x16a89c");
#endif

    switch (ctx->pc) {
        case 0x16a8b8u: goto label_16a8b8;
        case 0x16a8d4u: goto label_16a8d4;
        default: break;
    }

    ctx->pc = 0x16a89cu;

    // 0x16a89c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16a8a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a8a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x16a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16a8a8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x16a8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8b0: 0xc04110c  jal         func_104430
    ctx->pc = 0x16A8B0u;
    SET_GPR_U32(ctx, 31, 0x16A8B8u);
    ctx->pc = 0x16A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8B0u;
    // 0x16a8b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A8B0u, 0x16A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8B8u;
label_16a8b8:
    // 0x16a8b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8bc: 0x24022846  addiu       $v0, $zero, 0x2846
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x16a8c0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x16a8c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a8c4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A8ECu;
            return;
        }
    }
    ctx->pc = 0x16A8CCu;
    // 0x16a8cc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x16A8CCu;
    SET_GPR_U32(ctx, 31, 0x16A8D4u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x16A8CCu, 0x16A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8D4u;
label_16a8d4:
    // 0x16a8d4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16a8d8: 0x24a573a8  addiu       $a1, $a1, 0x73A8
    ctx->pc = 0x16a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29608));
    // 0x16a8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x16a8e4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E4u;
    // 0x16a8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A8E4u, 0x16A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ECu;
}
