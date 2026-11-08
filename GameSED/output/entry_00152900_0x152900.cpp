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

// Function: entry_00152900
// Address: 0x152900 - 0x152950
void entry_00152900_0x152900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152900_0x152900");
#endif

    switch (ctx->pc) {
        case 0x152908u: goto label_152908;
        default: break;
    }

    ctx->pc = 0x152900u;

    // 0x152900: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152900u;
    SET_GPR_U32(ctx, 31, 0x152908u);
    ctx->pc = 0x152904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152900u;
    // 0x152904: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152900u, 0x152908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152908u;
label_152908:
    // 0x152908: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x152908u;
    {
        const bool branch_taken_0x152908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152908u;
        // 0x15290c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152908) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152910u;
    // 0x152910: 0x2643071c  addiu       $v1, $s2, 0x71C
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x152914: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152918: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x152918u;
    {
        const bool branch_taken_0x152918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152918) {
            ctx->pc = 0x152A5Cu;
            return;
        }
    }
    ctx->pc = 0x152920u;
    // 0x152920: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x152920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152924: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x152924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152928: 0x8c621200  lw          $v0, 0x1200($v1)
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4608)));
    // 0x15292c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15292Cu;
    {
        const bool branch_taken_0x15292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15292Cu;
        // 0x152930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15292c) {
            ctx->pc = 0x1529A4u;
            return;
        }
    }
    ctx->pc = 0x152934u;
    // 0x152934: 0x24631200  addiu       $v1, $v1, 0x1200
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x152938: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15293c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x152940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152940u;
    {
        const bool branch_taken_0x152940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152940u;
        // 0x152944: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152940) {
            ctx->pc = 0x152950u;
            return;
        }
    }
    ctx->pc = 0x152948u;
    // 0x152948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x152948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15294c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x15294cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x152950u;
}
