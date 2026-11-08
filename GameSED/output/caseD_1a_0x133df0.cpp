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

// Function: caseD_1a
// Address: 0x133df0 - 0x133e14
void caseD_1a_0x133df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x133df0");
#endif

    ctx->pc = 0x133df0u;

    // 0x133df0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x133df4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133df8: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x133dfc: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x133dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x133e00: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x133e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133E04u;
    {
        const bool branch_taken_0x133e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e04) {
            ctx->pc = 0x133E14u;
            return;
        }
    }
    ctx->pc = 0x133E0Cu;
    // 0x133e0c: 0xc061920  jal         func_186480
    ctx->pc = 0x133E0Cu;
    SET_GPR_U32(ctx, 31, 0x133E14u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133E0Cu, 0x133E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E14u;
}
