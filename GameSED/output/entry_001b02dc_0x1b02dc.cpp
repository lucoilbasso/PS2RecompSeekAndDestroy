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

// Function: entry_001b02dc
// Address: 0x1b02dc - 0x1b0308
void entry_001b02dc_0x1b02dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02dc_0x1b02dc");
#endif

    switch (ctx->pc) {
        case 0x1b02f8u: goto label_1b02f8;
        default: break;
    }

    ctx->pc = 0x1b02dcu;

    // 0x1b02dc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b02e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b02e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b02e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b02e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b02e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b02ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b02ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b02f0: 0xc06c062  jal         func_1B0188
    ctx->pc = 0x1B02F0u;
    SET_GPR_U32(ctx, 31, 0x1B02F8u);
    ctx->pc = 0x1B02F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02F0u;
    // 0x1b02f4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0188u, 0x1B02F0u, 0x1B02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02F8u;
label_1b02f8:
    // 0x1b02f8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1b02f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b02fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b02fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0300: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0300u;
    {
        const bool branch_taken_0x1b0300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0300) {
            ctx->pc = 0x1B0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0300u;
            // 0x1b0304: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B02D8u;
            return;
        }
    }
    ctx->pc = 0x1B0308u;
}
