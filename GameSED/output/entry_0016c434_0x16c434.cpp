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

// Function: entry_0016c434
// Address: 0x16c434 - 0x16c480
void entry_0016c434_0x16c434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c434_0x16c434");
#endif

    switch (ctx->pc) {
        case 0x16c444u: goto label_16c444;
        default: break;
    }

    ctx->pc = 0x16c434u;

    // 0x16c434: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x16c434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x16c438: 0x2610ed50  addiu       $s0, $s0, -0x12B0
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962512));
    // 0x16c43c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16C43Cu;
    SET_GPR_U32(ctx, 31, 0x16C444u);
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16C43Cu, 0x16C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C444u;
label_16c444:
    // 0x16c444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c448: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16c44c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x16C44Cu;
    {
        const bool branch_taken_0x16c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c44c) {
            ctx->pc = 0x16C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C44Cu;
            // 0x16c450: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C48Cu;
            return;
        }
    }
    ctx->pc = 0x16C454u;
    // 0x16c454: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x16c454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c458: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x16c458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x16c45c: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x16c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
    // 0x16c460: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x16c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16c464: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x16c464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c468: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x16c468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16c46c: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x16c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
    // 0x16c470: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16c470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x16c474: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16c474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16c478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C478u;
    {
        const bool branch_taken_0x16c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C478u;
        // 0x16c47c: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c478) {
            ctx->pc = 0x16C488u;
            return;
        }
    }
    ctx->pc = 0x16C480u;
}
