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

// Function: entry_0014cc00
// Address: 0x14cc00 - 0x14cc20
void entry_0014cc00_0x14cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cc00_0x14cc00");
#endif

    ctx->pc = 0x14cc00u;

    // 0x14cc00: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14cc00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14cc04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14cc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14cc08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CC08u;
    {
        const bool branch_taken_0x14cc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cc08) {
            ctx->pc = 0x14CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CC08u;
            // 0x14cc0c: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CC24u;
            return;
        }
    }
    ctx->pc = 0x14CC10u;
    // 0x14cc10: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cc14: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14cc18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x14CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC18u;
    // 0x14cc1c: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CC18u, 0x14CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC20u;
}
