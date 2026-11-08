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

// Function: entry_001775b8
// Address: 0x1775b8 - 0x1775f0
void entry_001775b8_0x1775b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001775b8_0x1775b8");
#endif

    switch (ctx->pc) {
        case 0x1775d8u: goto label_1775d8;
        default: break;
    }

    ctx->pc = 0x1775b8u;

    // 0x1775b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1775bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1775BCu;
    {
        const bool branch_taken_0x1775bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1775C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775BCu;
        // 0x1775c0: 0x26110034  addiu       $s1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775bc) {
            ctx->pc = 0x1775F0u;
            return;
        }
    }
    ctx->pc = 0x1775C4u;
    // 0x1775c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1775c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775d0: 0xc06e550  jal         func_1B9540
    ctx->pc = 0x1775D0u;
    SET_GPR_U32(ctx, 31, 0x1775D8u);
    ctx->pc = 0x1775D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775D0u;
    // 0x1775d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9540u, 0x1775D0u, 0x1775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775D8u;
label_1775d8:
    // 0x1775d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775dc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1775dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1775e0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1775e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1775e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1775E4u;
    {
        const bool branch_taken_0x1775e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775E4u;
        // 0x1775e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775e4) {
            ctx->pc = 0x1776C8u;
            return;
        }
    }
    ctx->pc = 0x1775ECu;
    // 0x1775ec: 0x0  nop
    ctx->pc = 0x1775ecu;
    // NOP
    ctx->pc = 0x1775f0u;
}
