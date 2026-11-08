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

// Function: entry_0010de90
// Address: 0x10de90 - 0x10deb8
void entry_0010de90_0x10de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de90_0x10de90");
#endif

    switch (ctx->pc) {
        case 0x10deacu: goto label_10deac;
        default: break;
    }

    ctx->pc = 0x10de90u;

    // 0x10de90: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DE90u;
    {
        const bool branch_taken_0x10de90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10de90) {
            ctx->pc = 0x10DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DE90u;
            // 0x10de94: 0x8e0301b0  lw          $v1, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEB8u;
            return;
        }
    }
    ctx->pc = 0x10DE98u;
    // 0x10de98: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x10de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10de9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10dea0: 0xae0401c4  sw          $a0, 0x1C4($s0)
    ctx->pc = 0x10dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 4));
    // 0x10dea4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DEA4u;
    SET_GPR_U32(ctx, 31, 0x10DEACu);
    ctx->pc = 0x10DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEA4u;
    // 0x10dea8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DEA4u, 0x10DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEACu;
label_10deac:
    // 0x10deac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10DEACu;
    {
        const bool branch_taken_0x10deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEACu;
        // 0x10deb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10deac) {
            ctx->pc = 0x10DF2Cu;
            return;
        }
    }
    ctx->pc = 0x10DEB4u;
    // 0x10deb4: 0x0  nop
    ctx->pc = 0x10deb4u;
    // NOP
    ctx->pc = 0x10deb8u;
}
