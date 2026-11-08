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

// Function: entry_0013a530
// Address: 0x13a530 - 0x13a598
void entry_0013a530_0x13a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a530_0x13a530");
#endif

    switch (ctx->pc) {
        case 0x13a548u: goto label_13a548;
        case 0x13a55cu: goto label_13a55c;
        case 0x13a570u: goto label_13a570;
        default: break;
    }

    ctx->pc = 0x13a530u;

    // 0x13a530: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x13a534: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x13a534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13a538: 0x2610a400  addiu       $s0, $s0, -0x5C00
    ctx->pc = 0x13a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943744));
    // 0x13a53c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a540: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13A540u;
    SET_GPR_U32(ctx, 31, 0x13A548u);
    ctx->pc = 0x13A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A540u;
    // 0x13a544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13A540u, 0x13A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A548u;
label_13a548:
    // 0x13a548: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13a54c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x13a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13a550: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a554: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A554u;
    SET_GPR_U32(ctx, 31, 0x13A55Cu);
    ctx->pc = 0x13A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A554u;
    // 0x13a558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A554u, 0x13A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A55Cu;
label_13a55c:
    // 0x13a55c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a568: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A568u;
    SET_GPR_U32(ctx, 31, 0x13A570u);
    ctx->pc = 0x13A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A568u;
    // 0x13a56c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A568u, 0x13A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A570u;
label_13a570:
    // 0x13a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a57c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13a580: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a584: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a588: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A588u;
    {
        const bool branch_taken_0x13a588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A588u;
        // 0x13a58c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a588) {
            ctx->pc = 0x13A598u;
            return;
        }
    }
    ctx->pc = 0x13A590u;
    // 0x13a590: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13a594: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13a594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13a598u;
}
