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

// Function: entry_00157c50
// Address: 0x157c50 - 0x157c74
void entry_00157c50_0x157c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c50_0x157c50");
#endif

    ctx->pc = 0x157c50u;

    // 0x157c50: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x157c54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x157c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157c58: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x157c5c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x157c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x157c60: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x157c64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C64u;
    {
        const bool branch_taken_0x157c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C64u;
        // 0x157c68: 0x267503b0  addiu       $s5, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c64) {
            ctx->pc = 0x157C74u;
            return;
        }
    }
    ctx->pc = 0x157C6Cu;
    // 0x157c6c: 0xc061920  jal         func_186480
    ctx->pc = 0x157C6Cu;
    SET_GPR_U32(ctx, 31, 0x157C74u);
    ctx->pc = 0x157C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C6Cu;
    // 0x157c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157C6Cu, 0x157C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C74u;
}
