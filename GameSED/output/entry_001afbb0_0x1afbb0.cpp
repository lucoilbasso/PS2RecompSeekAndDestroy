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

// Function: entry_001afbb0
// Address: 0x1afbb0 - 0x1afbdc
void entry_001afbb0_0x1afbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbb0_0x1afbb0");
#endif

    switch (ctx->pc) {
        case 0x1afbb8u: goto label_1afbb8;
        case 0x1afbccu: goto label_1afbcc;
        default: break;
    }

    ctx->pc = 0x1afbb0u;

    // 0x1afbb0: 0xc06bd10  jal         func_1AF440
    ctx->pc = 0x1AFBB0u;
    SET_GPR_U32(ctx, 31, 0x1AFBB8u);
    ctx->pc = 0x1AFBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBB0u;
    // 0x1afbb4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF440u, 0x1AFBB0u, 0x1AFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBB8u;
label_1afbb8:
    // 0x1afbb8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1afbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1afbbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AFBBCu;
    {
        const bool branch_taken_0x1afbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBBCu;
        // 0x1afbc0: 0x8e42a96c  lw          $v0, -0x5694($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbbc) {
            ctx->pc = 0x1AFBE8u;
            return;
        }
    }
    ctx->pc = 0x1AFBC4u;
    // 0x1afbc4: 0xc073d52  jal         func_1CF548
    ctx->pc = 0x1AFBC4u;
    SET_GPR_U32(ctx, 31, 0x1AFBCCu);
    ctx->pc = 0x1CF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF548u, 0x1AFBC4u, 0x1AFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBCCu;
label_1afbcc:
    // 0x1afbcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1afbd0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBD0u;
    {
        const bool branch_taken_0x1afbd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBD0u;
        // 0x1afbd4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbd0) {
            ctx->pc = 0x1AFBDCu;
            return;
        }
    }
    ctx->pc = 0x1AFBD8u;
    // 0x1afbd8: 0x42000038  ei
    ctx->pc = 0x1afbd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1afbdcu;
}
