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

// Function: entry_001bab8c
// Address: 0x1bab8c - 0x1babe4
void entry_001bab8c_0x1bab8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bab8c_0x1bab8c");
#endif

    switch (ctx->pc) {
        case 0x1baba4u: goto label_1baba4;
        case 0x1babd0u: goto label_1babd0;
        default: break;
    }

    ctx->pc = 0x1bab8cu;

    // 0x1bab8c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BAB8Cu;
    {
        const bool branch_taken_0x1bab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB8Cu;
        // 0x1bab90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab8c) {
            ctx->pc = 0x1BABE4u;
            return;
        }
    }
    ctx->pc = 0x1BAB94u;
    // 0x1bab94: 0xae13d900  sw          $s3, -0x2700($s0)
    ctx->pc = 0x1bab94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294957312), GPR_U32(ctx, 19));
    // 0x1bab98: 0xae80c0cc  sw          $zero, -0x3F34($s4)
    ctx->pc = 0x1bab98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294951116), GPR_U32(ctx, 0));
    // 0x1bab9c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BABA4u);
    ctx->pc = 0x1BABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB9Cu;
    // 0x1baba0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BAB9Cu, 0x1BABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABA4u;
label_1baba4:
    // 0x1baba4: 0x27d0d280  addiu       $s0, $fp, -0x2D80
    ctx->pc = 0x1baba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955648));
    // 0x1baba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1baba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1babacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babb0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1babb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1babb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1babb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1babb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babbc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1babbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1babc0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1babc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babc4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1babc8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BABC8u;
    SET_GPR_U32(ctx, 31, 0x1BABD0u);
    ctx->pc = 0x1BABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABC8u;
    // 0x1babcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BABC8u, 0x1BABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABD0u;
label_1babd0:
    // 0x1babd0: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BABD0u;
    {
        const bool branch_taken_0x1babd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABD0u;
        // 0x1babd4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babd0) {
            ctx->pc = 0x1BAC14u;
            return;
        }
    }
    ctx->pc = 0x1BABD8u;
    // 0x1babd8: 0xac40c0a4  sw          $zero, -0x3F5C($v0)
    ctx->pc = 0x1babd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951076), GPR_U32(ctx, 0));
    // 0x1babdc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1BABDCu;
    {
        const bool branch_taken_0x1babdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABDCu;
        // 0x1babe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babdc) {
            ctx->pc = 0x1BAD10u;
            return;
        }
    }
    ctx->pc = 0x1BABE4u;
}
