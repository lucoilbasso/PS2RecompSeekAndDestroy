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

// Function: entry_001317f0
// Address: 0x1317f0 - 0x131850
void entry_001317f0_0x1317f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001317f0_0x1317f0");
#endif

    switch (ctx->pc) {
        case 0x131804u: goto label_131804;
        case 0x131818u: goto label_131818;
        default: break;
    }

    ctx->pc = 0x1317f0u;

    // 0x1317f0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1317f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1317f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1317f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317fc: 0xc041682  jal         func_105A08
    ctx->pc = 0x1317FCu;
    SET_GPR_U32(ctx, 31, 0x131804u);
    ctx->pc = 0x131800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317FCu;
    // 0x131800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x1317FCu, 0x131804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131804u;
label_131804:
    // 0x131804: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x131804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131808: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x131808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13180c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131810: 0xc041682  jal         func_105A08
    ctx->pc = 0x131810u;
    SET_GPR_U32(ctx, 31, 0x131818u);
    ctx->pc = 0x131814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131810u;
    // 0x131814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x131810u, 0x131818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131818u;
label_131818:
    // 0x131818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13181c: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x13181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x131820: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x131824: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x131824u;
    {
        const bool branch_taken_0x131824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131824u;
        // 0x131828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131824) {
            ctx->pc = 0x13185Cu;
            return;
        }
    }
    ctx->pc = 0x13182Cu;
    // 0x13182c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13182cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131830: 0x8e840150  lw          $a0, 0x150($s4)
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x131834: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x131838: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131838u;
    {
        const bool branch_taken_0x131838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131838u;
        // 0x13183c: 0xae820154  sw          $v0, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131838) {
            ctx->pc = 0x131850u;
            return;
        }
    }
    ctx->pc = 0x131840u;
    // 0x131840: 0xae830150  sw          $v1, 0x150($s4)
    ctx->pc = 0x131840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
    // 0x131844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131844u;
    {
        const bool branch_taken_0x131844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131844u;
        // 0x131848: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131844) {
            ctx->pc = 0x131858u;
            return;
        }
    }
    ctx->pc = 0x13184Cu;
    // 0x13184c: 0x0  nop
    ctx->pc = 0x13184cu;
    // NOP
    ctx->pc = 0x131850u;
}
