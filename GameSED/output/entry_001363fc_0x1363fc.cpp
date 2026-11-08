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

// Function: entry_001363fc
// Address: 0x1363fc - 0x13643c
void entry_001363fc_0x1363fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363fc_0x1363fc");
#endif

    switch (ctx->pc) {
        case 0x136424u: goto label_136424;
        default: break;
    }

    ctx->pc = 0x1363fcu;

    // 0x1363fc: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x136400: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x136400u;
    {
        const bool branch_taken_0x136400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136400u;
        // 0x136404: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136400) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136408u;
    // 0x136408: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13640c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x136410: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x136410u;
    {
        const bool branch_taken_0x136410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136410) {
            ctx->pc = 0x136414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136410u;
            // 0x136414: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13643Cu;
            return;
        }
    }
    ctx->pc = 0x136418u;
    // 0x136418: 0x260401fc  addiu       $a0, $s0, 0x1FC
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x13641c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13641Cu;
    SET_GPR_U32(ctx, 31, 0x136424u);
    ctx->pc = 0x136420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13641Cu;
    // 0x136420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13641Cu, 0x136424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136424u;
label_136424:
    // 0x136424: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x136428: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13642c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136430: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136434: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x136434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x136438: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x13643cu;
}
