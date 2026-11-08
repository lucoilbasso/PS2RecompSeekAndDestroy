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

// Function: entry_001136d8
// Address: 0x1136d8 - 0x113710
void entry_001136d8_0x1136d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001136d8_0x1136d8");
#endif

    switch (ctx->pc) {
        case 0x1136e0u: goto label_1136e0;
        case 0x1136f4u: goto label_1136f4;
        default: break;
    }

    ctx->pc = 0x1136d8u;

    // 0x1136d8: 0xc066640  jal         func_199900
    ctx->pc = 0x1136D8u;
    SET_GPR_U32(ctx, 31, 0x1136E0u);
    ctx->pc = 0x1136DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136D8u;
    // 0x1136dc: 0x26500028  addiu       $s0, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199900u, 0x1136D8u, 0x1136E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136E0u;
label_1136e0:
    // 0x1136e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1136e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1136e4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1136e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1136e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1136e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1136ec: 0xc055a50  jal         func_156940
    ctx->pc = 0x1136ECu;
    SET_GPR_U32(ctx, 31, 0x1136F4u);
    ctx->pc = 0x1136F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136ECu;
    // 0x1136f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156940u, 0x1136ECu, 0x1136F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136F4u;
label_1136f4:
    // 0x1136f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1136f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1136f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1136fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1136FCu;
    {
        const bool branch_taken_0x1136fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136FCu;
        // 0x113700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136fc) {
            ctx->pc = 0x113710u;
            return;
        }
    }
    ctx->pc = 0x113704u;
    // 0x113704: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x113708u;
    {
        const bool branch_taken_0x113708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113708u;
        // 0x11370c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113708) {
            ctx->pc = 0x113734u;
            return;
        }
    }
    ctx->pc = 0x113710u;
}
