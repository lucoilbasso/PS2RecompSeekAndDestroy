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

// Function: entry_0016b1dc
// Address: 0x16b1dc - 0x16b240
void entry_0016b1dc_0x16b1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1dc_0x16b1dc");
#endif

    switch (ctx->pc) {
        case 0x16b1ecu: goto label_16b1ec;
        case 0x16b228u: goto label_16b228;
        case 0x16b230u: goto label_16b230;
        default: break;
    }

    ctx->pc = 0x16b1dcu;

    // 0x16b1dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b1e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b1e4: 0xc06408c  jal         func_190230
    ctx->pc = 0x16B1E4u;
    SET_GPR_U32(ctx, 31, 0x16B1ECu);
    ctx->pc = 0x16B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1E4u;
    // 0x16b1e8: 0x24050303  addiu       $a1, $zero, 0x303 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x16B1E4u, 0x16B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1ECu;
label_16b1ec:
    // 0x16b1ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16b1f0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x16b1f4: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x16b1f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16b200: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x16b200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x16b204: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x16b204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
    // 0x16b208: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16b20c: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x16b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
    // 0x16b210: 0x1605000b  bne         $s0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B210u;
    {
        const bool branch_taken_0x16b210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B210u;
        // 0x16b214: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b210) {
            ctx->pc = 0x16B240u;
            return;
        }
    }
    ctx->pc = 0x16B218u;
    // 0x16b218: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16b21c: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16b220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B220u;
    SET_GPR_U32(ctx, 31, 0x16B228u);
    ctx->pc = 0x16B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B220u;
    // 0x16b224: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B220u, 0x16B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B228u;
label_16b228:
    // 0x16b228: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B228u;
    SET_GPR_U32(ctx, 31, 0x16B230u);
    ctx->pc = 0x16B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B228u;
    // 0x16b22c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B228u, 0x16B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B230u;
label_16b230:
    // 0x16b230: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16b234: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16B234u;
    {
        const bool branch_taken_0x16b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B234u;
        // 0x16b238: 0x246503d0  addiu       $a1, $v1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b234) {
            ctx->pc = 0x16B260u;
            return;
        }
    }
    ctx->pc = 0x16B23Cu;
    // 0x16b23c: 0x0  nop
    ctx->pc = 0x16b23cu;
    // NOP
    ctx->pc = 0x16b240u;
}
