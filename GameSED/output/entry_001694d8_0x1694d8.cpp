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

// Function: entry_001694d8
// Address: 0x1694d8 - 0x169578
void entry_001694d8_0x1694d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001694d8_0x1694d8");
#endif

    switch (ctx->pc) {
        case 0x169528u: goto label_169528;
        case 0x169548u: goto label_169548;
        case 0x169568u: goto label_169568;
        default: break;
    }

    ctx->pc = 0x1694d8u;

label_1694d8:
    // 0x1694d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1694d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1694dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1694dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1694e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1694e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1694e8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1694e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1694ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1694ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1694f0: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1694f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1694f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1694F4u;
    {
        const bool branch_taken_0x1694f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694F4u;
        // 0x1694f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f4) {
            ctx->pc = 0x1694D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1694d8;
        }
    }
    ctx->pc = 0x1694FCu;
    // 0x1694fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1694fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169500: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x169500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x169504: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169508: 0x24a5d390  addiu       $a1, $a1, -0x2C70
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    // 0x16950c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16950cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169518: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x16951c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169520: 0xc0618c2  jal         func_186308
    ctx->pc = 0x169520u;
    SET_GPR_U32(ctx, 31, 0x169528u);
    ctx->pc = 0x169524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169520u;
    // 0x169524: 0x2610d3b0  addiu       $s0, $s0, -0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x169520u, 0x169528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169528u;
label_169528:
    // 0x169528: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x169528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16952c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169534: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x169534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16953c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169540: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x169540u;
    SET_GPR_U32(ctx, 31, 0x169548u);
    ctx->pc = 0x169544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169540u;
    // 0x169544: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x169540u, 0x169548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169548u;
label_169548:
    // 0x169548: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16954c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x169554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16955c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169560: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x169560u;
    SET_GPR_U32(ctx, 31, 0x169568u);
    ctx->pc = 0x169564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169560u;
    // 0x169564: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x169560u, 0x169568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169568u;
label_169568:
    // 0x169568: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x169568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x16956c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x16956Cu;
    {
        const bool branch_taken_0x16956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16956Cu;
        // 0x169570: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16956c) {
            ctx->pc = 0x1697B0u;
            return;
        }
    }
    ctx->pc = 0x169574u;
    // 0x169574: 0x0  nop
    ctx->pc = 0x169574u;
    // NOP
    ctx->pc = 0x169578u;
}
