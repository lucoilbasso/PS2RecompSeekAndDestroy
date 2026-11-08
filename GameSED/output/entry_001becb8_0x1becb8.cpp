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

// Function: entry_001becb8
// Address: 0x1becb8 - 0x1becf4
void entry_001becb8_0x1becb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001becb8_0x1becb8");
#endif

    switch (ctx->pc) {
        case 0x1becdcu: goto label_1becdc;
        default: break;
    }

    ctx->pc = 0x1becb8u;

label_1becb8:
    // 0x1becb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1becbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1becc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1becc4: 0x0  nop
    ctx->pc = 0x1becc4u;
    // NOP
    // 0x1becc8: 0x0  nop
    ctx->pc = 0x1becc8u;
    // NOP
    // 0x1beccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BECCCu;
    {
        const bool branch_taken_0x1beccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beccc) {
            ctx->pc = 0x1BECB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1becb8;
        }
    }
    ctx->pc = 0x1BECD4u;
    // 0x1becd4: 0xc070d9e  jal         func_1C3678
    ctx->pc = 0x1BECD4u;
    SET_GPR_U32(ctx, 31, 0x1BECDCu);
    ctx->pc = 0x1BECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECD4u;
    // 0x1becd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3678u, 0x1BECD4u, 0x1BECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECDCu;
label_1becdc:
    // 0x1becdc: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bece0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bece4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bece8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1bece8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1becec: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1bececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1becf0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1becf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1becf4u;
}
