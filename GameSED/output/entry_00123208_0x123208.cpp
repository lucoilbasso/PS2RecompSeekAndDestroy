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

// Function: entry_00123208
// Address: 0x123208 - 0x123234
void entry_00123208_0x123208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123208_0x123208");
#endif

    switch (ctx->pc) {
        case 0x123214u: goto label_123214;
        case 0x12322cu: goto label_12322c;
        default: break;
    }

    ctx->pc = 0x123208u;

label_123208:
    // 0x123208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12320c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12320Cu;
    SET_GPR_U32(ctx, 31, 0x123214u);
    ctx->pc = 0x123210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12320Cu;
    // 0x123210: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12320Cu, 0x123214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123214u;
label_123214:
    // 0x123214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12321c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123220: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x123224: 0xc0485e0  jal         func_121780
    ctx->pc = 0x123224u;
    SET_GPR_U32(ctx, 31, 0x12322Cu);
    ctx->pc = 0x123228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123224u;
    // 0x123228: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121780u, 0x123224u, 0x12322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12322Cu;
label_12322c:
    // 0x12322c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12322Cu;
    {
        const bool branch_taken_0x12322c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12322Cu;
        // 0x123230: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12322c) {
            ctx->pc = 0x123208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123208;
        }
    }
    ctx->pc = 0x123234u;
}
