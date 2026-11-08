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

// Function: entry_001724f0
// Address: 0x1724f0 - 0x172578
void entry_001724f0_0x1724f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724f0_0x1724f0");
#endif

    switch (ctx->pc) {
        case 0x172524u: goto label_172524;
        case 0x172564u: goto label_172564;
        default: break;
    }

    ctx->pc = 0x1724f0u;

    // 0x1724f0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1724f4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1724f8: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1724fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1724fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172500: 0x3c38021  addu        $s0, $fp, $v1
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172508: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17250c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172510: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172514: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172518: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17251c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x17251Cu;
    SET_GPR_U32(ctx, 31, 0x172524u);
    ctx->pc = 0x172520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17251Cu;
    // 0x172520: 0x24e70063  addiu       $a3, $a3, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x17251Cu, 0x172524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172524u;
label_172524:
    // 0x172524: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x172524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172528: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17252c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172530: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172534: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172538: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17253c: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x172540: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172544: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172548: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17254c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x17254cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172550: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172554: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172558: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x172558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x17255c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x17255Cu;
    SET_GPR_U32(ctx, 31, 0x172564u);
    ctx->pc = 0x172560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17255Cu;
    // 0x172560: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x17255Cu, 0x172564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172564u;
label_172564:
    // 0x172564: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x172564u;
    {
        const bool branch_taken_0x172564 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x172568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172564u;
        // 0x172568: 0x26920140  addiu       $s2, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172564) {
            ctx->pc = 0x172578u;
            return;
        }
    }
    ctx->pc = 0x17256Cu;
    // 0x17256c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17256Cu;
    {
        const bool branch_taken_0x17256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17256Cu;
        // 0x172570: 0x2691fff0  addiu       $s1, $s4, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17256c) {
            ctx->pc = 0x17257Cu;
            return;
        }
    }
    ctx->pc = 0x172574u;
    // 0x172574: 0x0  nop
    ctx->pc = 0x172574u;
    // NOP
    ctx->pc = 0x172578u;
}
