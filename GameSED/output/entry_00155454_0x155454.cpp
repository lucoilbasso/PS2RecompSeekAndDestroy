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

// Function: entry_00155454
// Address: 0x155454 - 0x155484
void entry_00155454_0x155454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155454_0x155454");
#endif

    ctx->pc = 0x155454u;

    // 0x155454: 0x8e440898  lw          $a0, 0x898($s2)
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x155458: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x155458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x15545c: 0x8e4308a0  lw          $v1, 0x8A0($s2)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
    // 0x155460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155464: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x155464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x155468: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x155468u;
    {
        const bool branch_taken_0x155468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155468) {
            ctx->pc = 0x15546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155468u;
            // 0x15546c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155488u;
            return;
        }
    }
    ctx->pc = 0x155470u;
    // 0x155470: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x155474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155478: 0x24a56e00  addiu       $a1, $a1, 0x6E00
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28160));
    // 0x15547c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x15547Cu;
    SET_GPR_U32(ctx, 31, 0x155484u);
    ctx->pc = 0x155480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15547Cu;
    // 0x155480: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x15547Cu, 0x155484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155484u;
}
