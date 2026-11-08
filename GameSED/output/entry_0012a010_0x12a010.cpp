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

// Function: entry_0012a010
// Address: 0x12a010 - 0x12a030
void entry_0012a010_0x12a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a010_0x12a010");
#endif

    switch (ctx->pc) {
        case 0x12a018u: goto label_12a018;
        default: break;
    }

    ctx->pc = 0x12a010u;

    // 0x12a010: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12A010u;
    SET_GPR_U32(ctx, 31, 0x12A018u);
    ctx->pc = 0x12A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A010u;
    // 0x12a014: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12A010u, 0x12A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A018u;
label_12a018:
    // 0x12a018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12a018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a01c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A020u;
    {
        const bool branch_taken_0x12a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A020u;
        // 0x12a024: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a020) {
            ctx->pc = 0x12A030u;
            return;
        }
    }
    ctx->pc = 0x12A028u;
    // 0x12a028: 0x31023  negu        $v0, $v1
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x12a02c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x12a030u;
}
