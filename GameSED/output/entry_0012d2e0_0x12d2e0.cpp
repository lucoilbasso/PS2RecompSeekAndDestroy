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

// Function: entry_0012d2e0
// Address: 0x12d2e0 - 0x12d318
void entry_0012d2e0_0x12d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2e0_0x12d2e0");
#endif

    switch (ctx->pc) {
        case 0x12d2e8u: goto label_12d2e8;
        case 0x12d30cu: goto label_12d30c;
        default: break;
    }

    ctx->pc = 0x12d2e0u;

label_12d2e0:
    // 0x12d2e0: 0xc04b362  jal         func_12CD88
label_12d2e4:
    if (ctx->pc == 0x12D2E4u) {
        ctx->pc = 0x12D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2E0u;
        // 0x12d2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2E8u;
        goto label_12d2e8;
    }
    ctx->pc = 0x12D2E0u;
    SET_GPR_U32(ctx, 31, 0x12D2E8u);
    ctx->pc = 0x12D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2E0u;
    // 0x12d2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CD88u, 0x12D2E0u, 0x12D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2E8u;
label_12d2e8:
    // 0x12d2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d2ec:
    // 0x12d2ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_12d2f0:
    if (ctx->pc == 0x12D2F0u) {
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2F4u;
        goto label_12d2f4;
    }
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12D318u;
            return;
        }
    }
    ctx->pc = 0x12D2F4u;
label_12d2f4:
    // 0x12d2f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12d2f8:
    // 0x12d2f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_12d2fc:
    // 0x12d2fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12d300:
    // 0x12d300: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12d304:
    // 0x12d304: 0x60f809  jalr        $v1
label_12d308:
    if (ctx->pc == 0x12D308u) {
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D30Cu;
        goto label_12d30c;
    }
    ctx->pc = 0x12D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12D30Cu);
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D304u, 0x12D30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D30Cu;
label_12d30c:
    // 0x12d30c: 0x10000005  b           . + 4 + (0x5 << 2)
label_12d310:
    if (ctx->pc == 0x12D310u) {
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D314u;
        goto label_12d314;
    }
    ctx->pc = 0x12D30Cu;
    {
        const bool branch_taken_0x12d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d30c) {
            ctx->pc = 0x12D324u;
            return;
        }
    }
    ctx->pc = 0x12D314u;
label_12d314:
    // 0x12d314: 0x0  nop
    ctx->pc = 0x12d314u;
    // NOP
    ctx->pc = 0x12d318u;
}
