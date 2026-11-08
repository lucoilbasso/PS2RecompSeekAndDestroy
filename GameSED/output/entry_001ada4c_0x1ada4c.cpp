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

// Function: entry_001ada4c
// Address: 0x1ada4c - 0x1ada7c
void entry_001ada4c_0x1ada4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada4c_0x1ada4c");
#endif

    switch (ctx->pc) {
        case 0x1ada6cu: goto label_1ada6c;
        default: break;
    }

    ctx->pc = 0x1ada4cu;

    // 0x1ada4c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ada50: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ada50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ada54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA54u;
    {
        const bool branch_taken_0x1ada54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA54u;
        // 0x1ada58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada54) {
            ctx->pc = 0x1ADA7Cu;
            return;
        }
    }
    ctx->pc = 0x1ADA5Cu;
    // 0x1ada5c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ada60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada64: 0xc06b74e  jal         func_1ADD38
    ctx->pc = 0x1ADA64u;
    SET_GPR_U32(ctx, 31, 0x1ADA6Cu);
    ctx->pc = 0x1ADA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA64u;
    // 0x1ada68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADD38u, 0x1ADA64u, 0x1ADA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA6Cu;
label_1ada6c:
    // 0x1ada6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ada70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ada74: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ada78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ada7cu;
}
