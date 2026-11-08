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

// Function: caseD_2d
// Address: 0x169ec8 - 0x169f00
void caseD_2d_0x169ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x169ec8");
#endif

    ctx->pc = 0x169ec8u;

    // 0x169ec8: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169ecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169ed0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169ed8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169edc: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169edcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169ee4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169EE4u;
    {
        const bool branch_taken_0x169ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EE4u;
        // 0x169ee8: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ee4) {
            ctx->pc = 0x169F00u;
            return;
        }
    }
    ctx->pc = 0x169EECu;
    // 0x169eec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169ef0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ef4: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169ef8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169EF8u;
    SET_GPR_U32(ctx, 31, 0x169F00u);
    ctx->pc = 0x169EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EF8u;
    // 0x169efc: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169EF8u, 0x169F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F00u;
}
