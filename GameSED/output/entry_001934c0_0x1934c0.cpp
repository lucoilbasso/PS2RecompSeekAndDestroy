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

// Function: entry_001934c0
// Address: 0x1934c0 - 0x193540
void entry_001934c0_0x1934c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001934c0_0x1934c0");
#endif

    switch (ctx->pc) {
        case 0x1934d8u: goto label_1934d8;
        case 0x193500u: goto label_193500;
        case 0x193518u: goto label_193518;
        default: break;
    }

    ctx->pc = 0x1934c0u;

    // 0x1934c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1934c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1934c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1934c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1934c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1934c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1934cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1934ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1934d0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1934D0u;
    SET_GPR_U32(ctx, 31, 0x1934D8u);
    ctx->pc = 0x1934D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934D0u;
    // 0x1934d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1934D0u, 0x1934D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1934D8u;
label_1934d8:
    // 0x1934d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1934d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1934dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1934e0: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x1934e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x1934e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1934e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1934e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1934ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1934f0: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1934F0u;
    {
        const bool branch_taken_0x1934f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1934f0) {
            ctx->pc = 0x1934F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1934F0u;
            // 0x1934f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193540u;
            return;
        }
    }
    ctx->pc = 0x1934F8u;
    // 0x1934f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1934F8u;
    SET_GPR_U32(ctx, 31, 0x193500u);
    ctx->pc = 0x1934FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1934F8u;
    // 0x1934fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1934F8u, 0x193500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193500u;
label_193500:
    // 0x193500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19350c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19350cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x193510: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x193510u;
    SET_GPR_U32(ctx, 31, 0x193518u);
    ctx->pc = 0x193514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193510u;
    // 0x193514: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x193510u, 0x193518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193518u;
label_193518:
    // 0x193518: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19351c: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x19351cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193520: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x193524: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x193524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x193528: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x193528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x19352c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x193530: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x193530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x193534: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193534u;
        // 0x193538: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193534) {
            ctx->pc = 0x1935CCu;
            return;
        }
    }
    ctx->pc = 0x19353Cu;
    // 0x19353c: 0x0  nop
    ctx->pc = 0x19353cu;
    // NOP
    ctx->pc = 0x193540u;
}
