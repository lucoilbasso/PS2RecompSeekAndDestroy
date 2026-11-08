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

// Function: Cmd_PERCENT_Entry__FP15BsSCDEntControl
// Address: 0x1a6970 - 0x1a6a88
void Cmd_PERCENT_Entry__FP15BsSCDEntControl_0x1a6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PERCENT_Entry__FP15BsSCDEntControl_0x1a6970");
#endif

    switch (ctx->pc) {
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a60u: goto label_1a6a60;
        default: break;
    }

    ctx->pc = 0x1a6970u;

    // 0x1a6970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a697c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a697cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6980: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6984: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a6984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a698c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6994: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6998: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a699c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A699Cu;
    SET_GPR_U32(ctx, 31, 0x1A69A4u);
    ctx->pc = 0x1A69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A699Cu;
    // 0x1a69a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A699Cu, 0x1A69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69A4u;
label_1a69a4:
    // 0x1a69a4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a69a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a69a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a69b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a69b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a69b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a69bc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a69bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a69c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A69C0u;
    {
        const bool branch_taken_0x1a69c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c0) {
            ctx->pc = 0x1A69D4u;
            goto label_1a69d4;
        }
    }
    ctx->pc = 0x1A69C8u;
    // 0x1a69c8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A69C8u;
    SET_GPR_U32(ctx, 31, 0x1A69D0u);
    ctx->pc = 0x1A69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69C8u;
    // 0x1a69cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A69C8u, 0x1A69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69D0u;
label_1a69d0:
    // 0x1a69d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a69d4:
    // 0x1a69d4: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a69d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a69dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a69e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a69e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a69e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a69e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a69ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a69f0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a69f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a69f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A69F4u;
    {
        const bool branch_taken_0x1a69f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69F4u;
        // 0x1a69f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69f4) {
            ctx->pc = 0x1A6A08u;
            goto label_1a6a08;
        }
    }
    ctx->pc = 0x1A69FCu;
    // 0x1a69fc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A69FCu;
    SET_GPR_U32(ctx, 31, 0x1A6A04u);
    ctx->pc = 0x1A6A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69FCu;
    // 0x1a6a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A69FCu, 0x1A6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A04u;
label_1a6a04:
    // 0x1a6a04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6a08:
    // 0x1a6a08: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6a0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a14: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6A14u;
    {
        const bool branch_taken_0x1a6a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a14) {
            ctx->pc = 0x1A6A4Cu;
            goto label_1a6a4c;
        }
    }
    ctx->pc = 0x1A6A1Cu;
    // 0x1a6a1c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6a20: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6a24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6a28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6a2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6a30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6a34: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6a34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6a38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A38u;
    {
        const bool branch_taken_0x1a6a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A38u;
        // 0x1a6a3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a38) {
            ctx->pc = 0x1A6A4Cu;
            goto label_1a6a4c;
        }
    }
    ctx->pc = 0x1A6A40u;
    // 0x1a6a40: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6A40u;
    SET_GPR_U32(ctx, 31, 0x1A6A48u);
    ctx->pc = 0x1A6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A40u;
    // 0x1a6a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6A40u, 0x1A6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A48u;
label_1a6a48:
    // 0x1a6a48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6a4c:
    // 0x1a6a4c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A54u);
    ctx->pc = 0x1A6A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A4Cu;
    // 0x1a6a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6A4Cu, 0x1A6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A54u;
label_1a6a54:
    // 0x1a6a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a58: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1A6A58u;
    SET_GPR_U32(ctx, 31, 0x1A6A60u);
    ctx->pc = 0x1A6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A58u;
    // 0x1a6a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1A6A58u, 0x1A6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A60u;
label_1a6a60:
    // 0x1a6a60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6a64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6a6c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a6a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6a78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A80u;
        // 0x1a6a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A88u;
}
