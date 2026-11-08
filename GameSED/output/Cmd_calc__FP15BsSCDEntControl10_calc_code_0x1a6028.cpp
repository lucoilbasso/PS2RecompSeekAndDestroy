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

// Function: Cmd_calc__FP15BsSCDEntControl10_calc_code
// Address: 0x1a6028 - 0x1a6200
void Cmd_calc__FP15BsSCDEntControl10_calc_code_0x1a6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_calc__FP15BsSCDEntControl10_calc_code_0x1a6028");
#endif

    switch (ctx->pc) {
        case 0x1a6064u: goto label_1a6064;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61dcu: goto label_1a61dc;
        default: break;
    }

    ctx->pc = 0x1a6028u;

    // 0x1a6028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a602c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6038: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a6038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a603c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a6040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a6040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6048: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1a604c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6050: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6058: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a605c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A605Cu;
    SET_GPR_U32(ctx, 31, 0x1A6064u);
    ctx->pc = 0x1A6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A605Cu;
    // 0x1a6060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A605Cu, 0x1A6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6064u;
label_1a6064:
    // 0x1a6064: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1a6064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a6068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a606c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6070: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6070u;
            // 0x1a6074: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A60A8u;
            goto label_1a60a8;
        }
    }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a607c: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6084: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a6088: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a608c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6090: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6094: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A6094u;
    {
        const bool branch_taken_0x1a6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6094u;
        // 0x1a6098: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6094) {
            ctx->pc = 0x1A6104u;
            goto label_1a6104;
        }
    }
    ctx->pc = 0x1A609Cu;
    // 0x1a609c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A609Cu;
    {
        const bool branch_taken_0x1a609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a609c) {
            ctx->pc = 0x1A60F8u;
            goto label_1a60f8;
        }
    }
    ctx->pc = 0x1A60A4u;
    // 0x1a60a4: 0x0  nop
    ctx->pc = 0x1a60a4u;
    // NOP
label_1a60a8:
    // 0x1a60a8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a60ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a60acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a60b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a60b8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a60bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A60BCu;
    {
        const bool branch_taken_0x1a60bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60bc) {
            ctx->pc = 0x1A60D0u;
            goto label_1a60d0;
        }
    }
    ctx->pc = 0x1A60C4u;
    // 0x1a60c4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A60C4u;
    SET_GPR_U32(ctx, 31, 0x1A60CCu);
    ctx->pc = 0x1A60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60C4u;
    // 0x1a60c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A60C4u, 0x1A60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a60d0:
    // 0x1a60d0: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1a60d4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a60d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a60dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a60e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a60ec: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a60ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a60f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A60F0u;
    {
        const bool branch_taken_0x1a60f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60F0u;
        // 0x1a60f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60f0) {
            ctx->pc = 0x1A6104u;
            goto label_1a6104;
        }
    }
    ctx->pc = 0x1A60F8u;
label_1a60f8:
    // 0x1a60f8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A60F8u;
    SET_GPR_U32(ctx, 31, 0x1A6100u);
    ctx->pc = 0x1A60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60F8u;
    // 0x1a60fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A60F8u, 0x1A6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6100u;
label_1a6100:
    // 0x1a6100: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6104:
    // 0x1a6104: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x1a6104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a6108: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A6108u;
    {
        const bool branch_taken_0x1a6108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6108) {
            ctx->pc = 0x1A610Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6108u;
            // 0x1a610c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            goto label_1a61e4;
        }
    }
    ctx->pc = 0x1A6110u;
    // 0x1a6110: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1a6110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a6114: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a6118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a611c: 0x8c639450  lw          $v1, -0x6BB0($v1)
    ctx->pc = 0x1a611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939728)));
    // 0x1a6120: 0x600008  jr          $v1
    ctx->pc = 0x1A6120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6128u: goto label_1a6128;
            case 0x1A6130u: goto label_1a6130;
            case 0x1A6138u: goto label_1a6138;
            case 0x1A6140u: goto label_1a6140;
            case 0x1A6188u: goto label_1a6188;
            case 0x1A61B8u: goto label_1a61b8;
            case 0x1A61C0u: goto label_1a61c0;
            case 0x1A61D0u: goto label_1a61d0;
            case 0x1A61D8u: goto label_1a61d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A6128u;
label_1a6128:
    // 0x1a6128: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A6128u;
    {
        const bool branch_taken_0x1a6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6128) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A6130u;
    {
        const bool branch_taken_0x1a6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6130u;
        // 0x1a6134: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6130) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A6138u;
label_1a6138:
    // 0x1a6138: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6138u;
    {
        const bool branch_taken_0x1a6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6138u;
        // 0x1a613c: 0x2051018  mult        $v0, $s0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6138) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A6140u;
label_1a6140:
    // 0x1a6140: 0x50a00028  beql        $a1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6140u;
    {
        const bool branch_taken_0x1a6140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6140) {
            ctx->pc = 0x1A6144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6140u;
            // 0x1a6144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            goto label_1a61e4;
        }
    }
    ctx->pc = 0x1A6148u;
    // 0x1a6148: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6148u;
    {
        const bool branch_taken_0x1a6148 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6148u;
        // 0x1a614c: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6148) {
            ctx->pc = 0x1A6168u;
            goto label_1a6168;
        }
    }
    ctx->pc = 0x1A6150u;
    // 0x1a6150: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x1a6150u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6154: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6154u;
    {
        const bool branch_taken_0x1a6154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6154) {
            ctx->pc = 0x1A6158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6154u;
            // 0x1a6158: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A615Cu;
            goto label_1a615c;
        }
    }
    ctx->pc = 0x1A615Cu;
label_1a615c:
    // 0x1a615c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A615Cu;
    {
        const bool branch_taken_0x1a615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a615c) {
            ctx->pc = 0x1A6178u;
            goto label_1a6178;
        }
    }
    ctx->pc = 0x1A6164u;
    // 0x1a6164: 0x0  nop
    ctx->pc = 0x1a6164u;
    // NOP
label_1a6168:
    // 0x1a6168: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6168u;
    {
        const bool branch_taken_0x1a6168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6168) {
            ctx->pc = 0x1A616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6168u;
            // 0x1a616c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6170u;
            goto label_1a6170;
        }
    }
    ctx->pc = 0x1A6170u;
label_1a6170:
    // 0x1a6170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6174: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1a6174u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a6178:
    // 0x1a6178: 0x1012  mflo        $v0
    ctx->pc = 0x1a6178u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a617c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A617Cu;
    {
        const bool branch_taken_0x1a617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A617Cu;
        // 0x1a6180: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a617c) {
            ctx->pc = 0x1A61E0u;
            goto label_1a61e0;
        }
    }
    ctx->pc = 0x1A6184u;
    // 0x1a6184: 0x0  nop
    ctx->pc = 0x1a6184u;
    // NOP
label_1a6188:
    // 0x1a6188: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6188u;
    {
        const bool branch_taken_0x1a6188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6188) {
            ctx->pc = 0x1A618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6188u;
            // 0x1a618c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            goto label_1a61e4;
        }
    }
    ctx->pc = 0x1A6190u;
    // 0x1a6190: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x1a6190u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6194: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A6198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6194u;
            // 0x1a6198: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A619Cu;
            goto label_1a619c;
        }
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a619cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a61a0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1a61a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a61a4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1a61a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a61a8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a61ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A61ACu;
    {
        const bool branch_taken_0x1a61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61ACu;
        // 0x1a61b0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61ac) {
            ctx->pc = 0x1A61E0u;
            goto label_1a61e0;
        }
    }
    ctx->pc = 0x1A61B4u;
    // 0x1a61b4: 0x0  nop
    ctx->pc = 0x1a61b4u;
    // NOP
label_1a61b8:
    // 0x1a61b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A61B8u;
    {
        const bool branch_taken_0x1a61b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61B8u;
        // 0x1a61bc: 0x2051024  and         $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61b8) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A61C0u;
label_1a61c0:
    // 0x1a61c0: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1a61c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x2021024  and         $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A61CCu;
    // 0x1a61cc: 0x0  nop
    ctx->pc = 0x1a61ccu;
    // NOP
label_1a61d0:
    // 0x1a61d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A61D0u;
    {
        const bool branch_taken_0x1a61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61D0u;
        // 0x1a61d4: 0x2051025  or          $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61d0) {
            ctx->pc = 0x1A61DCu;
            goto label_1a61dc;
        }
    }
    ctx->pc = 0x1A61D8u;
label_1a61d8:
    // 0x1a61d8: 0x2051026  xor         $v0, $s0, $a1
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
label_1a61dc:
    // 0x1a61dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a61e0:
    // 0x1a61e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a61e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a61e4:
    // 0x1a61e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a61e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a61e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a61e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a61ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a61ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a61f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a61f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a61f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a61f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a61f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A61F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F8u;
        // 0x1a61fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6200u;
}
