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

// Function: entry_001412f8
// Address: 0x1412f8 - 0x141318
void entry_001412f8_0x1412f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001412f8_0x1412f8");
#endif

    ctx->pc = 0x1412f8u;

    // 0x1412f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1412fc: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x141300: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x141300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x141304: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x141304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x141308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141308u;
    {
        const bool branch_taken_0x141308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141308) {
            ctx->pc = 0x141318u;
            return;
        }
    }
    ctx->pc = 0x141310u;
    // 0x141310: 0xc061920  jal         func_186480
    ctx->pc = 0x141310u;
    SET_GPR_U32(ctx, 31, 0x141318u);
    ctx->pc = 0x141314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141310u;
    // 0x141314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x141310u, 0x141318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141318u;
}
