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

// Function: entry_00101314
// Address: 0x101314 - 0x101338
void entry_00101314_0x101314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101314_0x101314");
#endif

    switch (ctx->pc) {
        case 0x10131cu: goto label_10131c;
        default: break;
    }

    ctx->pc = 0x101314u;

    // 0x101314: 0xc068086  jal         func_1A0218
    ctx->pc = 0x101314u;
    SET_GPR_U32(ctx, 31, 0x10131Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x101314u, 0x10131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10131Cu;
label_10131c:
    // 0x10131c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10131Cu;
    {
        const bool branch_taken_0x10131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10131c) {
            ctx->pc = 0x101338u;
            return;
        }
    }
    ctx->pc = 0x101324u;
    // 0x101324: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10132c: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
    // 0x101330: 0xc068186  jal         func_1A0618
    ctx->pc = 0x101330u;
    SET_GPR_U32(ctx, 31, 0x101338u);
    ctx->pc = 0x101334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101330u;
    // 0x101334: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x101330u, 0x101338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101338u;
}
