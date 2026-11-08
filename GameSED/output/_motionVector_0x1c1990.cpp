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

// Function: _motionVector
// Address: 0x1c1990 - 0x1c1adc
void _motionVector_0x1c1990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVector_0x1c1990");
#endif

    switch (ctx->pc) {
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1aa8u: goto label_1c1aa8;
        default: break;
    }

    ctx->pc = 0x1c1990u;

    // 0x1c1990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c1990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c1994: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c1998: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c199c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19a0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1c19a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1c19a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c19a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19a8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1c19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1c19ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1c19acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1c19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1c19b4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1c19b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1c19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1c19bc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1c19bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c19c4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1c19c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c19cc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1c19ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c19d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c19d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c19d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c19dc: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C19DCu;
    SET_GPR_U32(ctx, 31, 0x1C19E4u);
    ctx->pc = 0x1C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19DCu;
    // 0x1c19e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C19DCu, 0x1C19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19E4u;
label_1c19e4:
    // 0x1c19e4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C19E4u;
    {
        const bool branch_taken_0x1c19e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19E4u;
        // 0x1c19e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19e4) {
            ctx->pc = 0x1C1A04u;
            goto label_1c1a04;
        }
    }
    ctx->pc = 0x1C19ECu;
    // 0x1c19ec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C19ECu;
    {
        const bool branch_taken_0x1c19ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19ECu;
        // 0x1c19f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19ec) {
            ctx->pc = 0x1C1A04u;
            goto label_1c1a04;
        }
    }
    ctx->pc = 0x1C19F4u;
    // 0x1c19f4: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C19F4u;
    SET_GPR_U32(ctx, 31, 0x1C19FCu);
    ctx->pc = 0x1C19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19F4u;
    // 0x1c19f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C19F4u, 0x1C19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19FCu;
label_1c19fc:
    // 0x1c19fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C19FCu;
    {
        const bool branch_taken_0x1c19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19FCu;
        // 0x1c1a00: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19fc) {
            ctx->pc = 0x1C1A08u;
            goto label_1c1a08;
        }
    }
    ctx->pc = 0x1C1A04u;
label_1c1a04:
    // 0x1c1a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a08:
    // 0x1c1a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a14: 0xc0705da  jal         func_1C1768
    ctx->pc = 0x1C1A14u;
    SET_GPR_U32(ctx, 31, 0x1C1A1Cu);
    ctx->pc = 0x1C1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A14u;
    // 0x1c1a18: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1768u, 0x1C1A14u, 0x1C1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A1Cu;
label_1c1a1c:
    // 0x1c1a1c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A1Cu;
        // 0x1c1a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1A34u;
            goto label_1c1a34;
        }
    }
    ctx->pc = 0x1C1A24u;
    // 0x1c1a24: 0xc0702c8  jal         func_1C0B20
    ctx->pc = 0x1C1A24u;
    SET_GPR_U32(ctx, 31, 0x1C1A2Cu);
    ctx->pc = 0x1C1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A24u;
    // 0x1c1a28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B20u, 0x1C1A24u, 0x1C1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A2Cu;
label_1c1a2c:
    // 0x1c1a2c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1c1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1c1a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a34:
    // 0x1c1a34: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C1A34u;
    SET_GPR_U32(ctx, 31, 0x1C1A3Cu);
    ctx->pc = 0x1C1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A34u;
    // 0x1c1a38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C1A34u, 0x1C1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A3Cu;
label_1c1a3c:
    // 0x1c1a3c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1A3Cu;
    {
        const bool branch_taken_0x1c1a3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A3Cu;
        // 0x1c1a40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a3c) {
            ctx->pc = 0x1C1A5Cu;
            goto label_1c1a5c;
        }
    }
    ctx->pc = 0x1C1A44u;
    // 0x1c1a44: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A44u;
        // 0x1c1a48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1A5Cu;
            goto label_1c1a5c;
        }
    }
    ctx->pc = 0x1C1A4Cu;
    // 0x1c1a4c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A54u);
    ctx->pc = 0x1C1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A4Cu;
    // 0x1c1a50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1A4Cu, 0x1C1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1A54u;
    {
        const bool branch_taken_0x1c1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A54u;
        // 0x1c1a58: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a54) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A5Cu;
label_1c1a5c:
    // 0x1c1a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a60:
    // 0x1c1a60: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A60u;
        // 0x1c1a64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A74u;
            goto label_1c1a74;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c1a6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c1a70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1c1a74:
    // 0x1c1a74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a78: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c1a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a7c: 0xc0705da  jal         func_1C1768
    ctx->pc = 0x1C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A84u);
    ctx->pc = 0x1C1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A7Cu;
    // 0x1c1a80: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1768u, 0x1C1A7Cu, 0x1C1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A84u;
label_1c1a84:
    // 0x1c1a84: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A84u;
    {
        const bool branch_taken_0x1c1a84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a84) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A8Cu;
    // 0x1c1a8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c1a90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c1a94: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1c1a98:
    // 0x1c1a98: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A98u;
    {
        const bool branch_taken_0x1c1a98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A98u;
        // 0x1c1a9c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a98) {
            ctx->pc = 0x1C1AB0u;
            goto label_1c1ab0;
        }
    }
    ctx->pc = 0x1C1AA0u;
    // 0x1c1aa0: 0xc0702c8  jal         func_1C0B20
    ctx->pc = 0x1C1AA0u;
    SET_GPR_U32(ctx, 31, 0x1C1AA8u);
    ctx->pc = 0x1C1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AA0u;
    // 0x1c1aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B20u, 0x1C1AA0u, 0x1C1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AA8u;
label_1c1aa8:
    // 0x1c1aa8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x1c1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1c1aac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1c1ab0:
    // 0x1c1ab0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1c1ab0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1ab4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1ab8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1abc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c1abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1ac0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c1ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1ac4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1acc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD4u;
        // 0x1c1ad8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1ADCu;
}
