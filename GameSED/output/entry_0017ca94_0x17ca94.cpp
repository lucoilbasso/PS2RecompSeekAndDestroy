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

// Function: entry_0017ca94
// Address: 0x17ca94 - 0x17cacc
void entry_0017ca94_0x17ca94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ca94_0x17ca94");
#endif

    switch (ctx->pc) {
        case 0x17cab0u: goto label_17cab0;
        default: break;
    }

    ctx->pc = 0x17ca94u;

    // 0x17ca94: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ca98: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x17ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17caa0: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x17caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x17caa4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17caa8: 0xc061004  jal         func_184010
    ctx->pc = 0x17CAA8u;
    SET_GPR_U32(ctx, 31, 0x17CAB0u);
    ctx->pc = 0x17CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAA8u;
    // 0x17caac: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184010u, 0x17CAA8u, 0x17CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAB0u;
label_17cab0:
    // 0x17cab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17cab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CAB4u;
    {
        const bool branch_taken_0x17cab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAB4u;
        // 0x17cab8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cab4) {
            ctx->pc = 0x17CAD0u;
            return;
        }
    }
    ctx->pc = 0x17CABCu;
    // 0x17cabc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x17cabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17cac0: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x17cac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17cac4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17cac8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x17caccu;
}
