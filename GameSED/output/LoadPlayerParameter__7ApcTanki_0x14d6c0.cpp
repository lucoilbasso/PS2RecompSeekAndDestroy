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

// Function: LoadPlayerParameter__7ApcTanki
// Address: 0x14d6c0 - 0x14d854
void LoadPlayerParameter__7ApcTanki_0x14d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPlayerParameter__7ApcTanki_0x14d6c0");
#endif

    switch (ctx->pc) {
        case 0x14d720u: goto label_14d720;
        case 0x14d728u: goto label_14d728;
        case 0x14d744u: goto label_14d744;
        case 0x14d778u: goto label_14d778;
        case 0x14d790u: goto label_14d790;
        case 0x14d7a8u: goto label_14d7a8;
        default: break;
    }

    ctx->pc = 0x14d6c0u;

    // 0x14d6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d6c4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x14d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x14d6c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14d6cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14d6d4: 0x26420188  addiu       $v0, $s2, 0x188
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
    // 0x14d6d8: 0x3484eb85  ori         $a0, $a0, 0xEB85
    ctx->pc = 0x14d6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)60293);
    // 0x14d6dc: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x14d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x14d6e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d6e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d6ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14d6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d6f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14d6fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14d700: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14d700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14d704: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14d704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14d708: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14D708u;
    {
        const bool branch_taken_0x14d708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d708) {
            ctx->pc = 0x14D70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D708u;
            // 0x14d70c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D710u;
            goto label_14d710;
        }
    }
    ctx->pc = 0x14D710u;
label_14d710:
    // 0x14d710: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x14d710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x14d714: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x14d714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x14d718: 0xc056bf0  jal         func_15AFC0
    ctx->pc = 0x14D718u;
    SET_GPR_U32(ctx, 31, 0x14D720u);
    ctx->pc = 0x14D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D718u;
    // 0x14d71c: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFC0u, 0x14D718u, 0x14D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D720u;
label_14d720:
    // 0x14d720: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14D720u;
    SET_GPR_U32(ctx, 31, 0x14D728u);
    ctx->pc = 0x14D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D720u;
    // 0x14d724: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14D720u, 0x14D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D73Cu;
            goto label_14d73c;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x14d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x14d734: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x14d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14d738: 0xae420180  sw          $v0, 0x180($s2)
    ctx->pc = 0x14d738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
label_14d73c:
    // 0x14d73c: 0xc053780  jal         func_14DE00
    ctx->pc = 0x14D73Cu;
    SET_GPR_U32(ctx, 31, 0x14D744u);
    ctx->pc = 0x14D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D73Cu;
    // 0x14d740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE00u, 0x14D73Cu, 0x14D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D744u;
label_14d744:
    // 0x14d744: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x14d748: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x14d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x14d74c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14D74Cu;
    {
        const bool branch_taken_0x14d74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D74Cu;
        // 0x14d750: 0x240324d0  addiu       $v1, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d74c) {
            ctx->pc = 0x14D838u;
            goto label_14d838;
        }
    }
    ctx->pc = 0x14D754u;
    // 0x14d754: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x14d758: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x14d758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14d75c: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x14d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x14d760: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d764: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d768: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14d768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d76c: 0x8c930fe8  lw          $s3, 0xFE8($a0)
    ctx->pc = 0x14d76cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x14d770: 0x24700ff2  addiu       $s0, $v1, 0xFF2
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4082));
    // 0x14d774: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14d778:
    // 0x14d778: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x14d778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14d77c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d788: 0xc0538fe  jal         func_14E3F8
    ctx->pc = 0x14D788u;
    SET_GPR_U32(ctx, 31, 0x14D790u);
    ctx->pc = 0x14D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D788u;
    // 0x14d78c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x14D788u, 0x14D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D790u;
label_14d790:
    // 0x14d790: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x14d790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x14d794: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14D794u;
    {
        const bool branch_taken_0x14d794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d794) {
            ctx->pc = 0x14D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D794u;
            // 0x14d798: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d778;
        }
    }
    ctx->pc = 0x14D79Cu;
    // 0x14d79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14d79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7a0: 0xc053616  jal         func_14D858
    ctx->pc = 0x14D7A0u;
    SET_GPR_U32(ctx, 31, 0x14D7A8u);
    ctx->pc = 0x14D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7A0u;
    // 0x14d7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D858u, 0x14D7A0u, 0x14D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7A8u;
label_14d7a8:
    // 0x14d7a8: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x14d7ac: 0x2407bfff  addiu       $a3, $zero, -0x4001
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14d7b0: 0x2645071c  addiu       $a1, $s2, 0x71C
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x14d7b4: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x14d7b8: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14d7bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x14d7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d7c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d7c4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x14d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x14d7c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x14d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x14d7cc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D7CCu;
    {
        const bool branch_taken_0x14d7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7CCu;
        // 0x14d7d0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7cc) {
            ctx->pc = 0x14D7ECu;
            goto label_14d7ec;
        }
    }
    ctx->pc = 0x14D7D4u;
    // 0x14d7d4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d7d8: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d7dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d7e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d7e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d7e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_14d7ec:
    // 0x14d7ec: 0x2643075c  addiu       $v1, $s2, 0x75C
    ctx->pc = 0x14d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1884));
    // 0x14d7f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d7f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D7F4u;
    {
        const bool branch_taken_0x14d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7F4u;
        // 0x14d7f8: 0x2644079c  addiu       $a0, $s2, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7f4) {
            ctx->pc = 0x14D814u;
            goto label_14d814;
        }
    }
    ctx->pc = 0x14D7FCu;
    // 0x14d7fc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14d800: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d804: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d808: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d80c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d810: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d810u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_14d814:
    // 0x14d814: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D818u;
    {
        const bool branch_taken_0x14d818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D818u;
        // 0x14d81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d818) {
            ctx->pc = 0x14D83Cu;
            goto label_14d83c;
        }
    }
    ctx->pc = 0x14D820u;
    // 0x14d820: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d824: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d828: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d82c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d830: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d834: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_14d838:
    // 0x14d838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d83c:
    // 0x14d83c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14d840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d844: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14d844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d84c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D84Cu;
        // 0x14d850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D854u;
}
