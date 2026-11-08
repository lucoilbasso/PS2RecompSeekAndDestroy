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

// Function: entry_00109918
// Address: 0x109918 - 0x10994c
void entry_00109918_0x109918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109918_0x109918");
#endif

    switch (ctx->pc) {
        case 0x10992cu: goto label_10992c;
        case 0x109948u: goto label_109948;
        default: break;
    }

    ctx->pc = 0x109918u;

    // 0x109918: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10991c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109920: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109924: 0xc04110c  jal         func_104430
    ctx->pc = 0x109924u;
    SET_GPR_U32(ctx, 31, 0x10992Cu);
    ctx->pc = 0x109928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109924u;
    // 0x109928: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109924u, 0x10992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10992Cu;
label_10992c:
    // 0x10992c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x109934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109938: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109938u;
    {
        const bool branch_taken_0x109938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109938) {
            ctx->pc = 0x10994Cu;
            return;
        }
    }
    ctx->pc = 0x109940u;
    // 0x109940: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109940u;
    SET_GPR_U32(ctx, 31, 0x109948u);
    ctx->pc = 0x109944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109940u;
    // 0x109944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109940u, 0x109948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109948u;
label_109948:
    // 0x109948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10994cu;
}
