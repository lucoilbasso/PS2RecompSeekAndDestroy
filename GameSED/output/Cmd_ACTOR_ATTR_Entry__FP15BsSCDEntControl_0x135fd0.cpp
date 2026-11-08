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

// Function: Cmd_ACTOR_ATTR_Entry__FP15BsSCDEntControl
// Address: 0x135fd0 - 0x1361c8
void Cmd_ACTOR_ATTR_Entry__FP15BsSCDEntControl_0x135fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_ATTR_Entry__FP15BsSCDEntControl_0x135fd0");
#endif

    switch (ctx->pc) {
        case 0x136000u: goto label_136000;
        case 0x136008u: goto label_136008;
        case 0x136158u: goto label_136158;
        case 0x136168u: goto label_136168;
        case 0x13619cu: goto label_13619c;
        default: break;
    }

    ctx->pc = 0x135fd0u;

    // 0x135fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135fd4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x135fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135fe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x135ff0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x135ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x135ff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x135ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x135ff8: 0x1840006d  blez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x135FF8u;
    {
        const bool branch_taken_0x135ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x135FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FF8u;
        // 0x135ffc: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ff8) {
            ctx->pc = 0x1361B0u;
            goto label_1361b0;
        }
    }
    ctx->pc = 0x136000u;
label_136000:
    // 0x136000: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136000u;
    SET_GPR_U32(ctx, 31, 0x136008u);
    ctx->pc = 0x136004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136000u;
    // 0x136004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136000u, 0x136008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136008u;
label_136008:
    // 0x136008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13600c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13600cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136014: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136014u;
    {
        const bool branch_taken_0x136014 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x136018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136014u;
        // 0x136018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136014) {
            ctx->pc = 0x136024u;
            goto label_136024;
        }
    }
    ctx->pc = 0x13601Cu;
    // 0x13601c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x13601cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x136020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136024:
    // 0x136024: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x136024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x136028: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x136028u;
    {
        const bool branch_taken_0x136028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136028u;
        // 0x13602c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136028) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136030u;
    // 0x136030: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x136034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136038: 0x8c6366b0  lw          $v1, 0x66B0($v1)
    ctx->pc = 0x136038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26288)));
    // 0x13603c: 0x600008  jr          $v1
    ctx->pc = 0x13603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136048u: goto label_136048;
            case 0x136060u: goto label_136060;
            case 0x136068u: goto label_136068;
            case 0x136070u: goto label_136070;
            case 0x136078u: goto label_136078;
            case 0x136080u: goto label_136080;
            case 0x136088u: goto label_136088;
            case 0x136090u: goto label_136090;
            case 0x136098u: goto label_136098;
            case 0x1360A0u: goto label_1360a0;
            case 0x1360A8u: goto label_1360a8;
            case 0x1360B0u: goto label_1360b0;
            case 0x1360B8u: goto label_1360b8;
            case 0x1360E8u: goto label_1360e8;
            case 0x1360F0u: goto label_1360f0;
            case 0x1360F8u: goto label_1360f8;
            case 0x136100u: goto label_136100;
            case 0x136108u: goto label_136108;
            case 0x136110u: goto label_136110;
            case 0x136118u: goto label_136118;
            case 0x136120u: goto label_136120;
            case 0x136128u: goto label_136128;
            case 0x136130u: goto label_136130;
            case 0x136138u: goto label_136138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13603Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136044u;
    // 0x136044: 0x0  nop
    ctx->pc = 0x136044u;
    // NOP
label_136048:
    // 0x136048: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x136048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x13604c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x13604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x136050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x136050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136054: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136058: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x136058u;
    {
        const bool branch_taken_0x136058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136058u;
        // 0x13605c: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136058) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136060u;
label_136060:
    // 0x136060: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x136060u;
    {
        const bool branch_taken_0x136060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136060u;
        // 0x136064: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136060) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136068u;
label_136068:
    // 0x136068: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x136068u;
    {
        const bool branch_taken_0x136068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136068u;
        // 0x13606c: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136068) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136070u;
label_136070:
    // 0x136070: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x136070u;
    {
        const bool branch_taken_0x136070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136070u;
        // 0x136074: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136070) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136078u;
label_136078:
    // 0x136078: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x136078u;
    {
        const bool branch_taken_0x136078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136078u;
        // 0x13607c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136078) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136080u;
label_136080:
    // 0x136080: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x136080u;
    {
        const bool branch_taken_0x136080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136080u;
        // 0x136084: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136080) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136088u;
label_136088:
    // 0x136088: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136088u;
    {
        const bool branch_taken_0x136088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136088u;
        // 0x13608c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136088) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136090u;
label_136090:
    // 0x136090: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x136090u;
    {
        const bool branch_taken_0x136090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136090u;
        // 0x136094: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136090) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136098u;
label_136098:
    // 0x136098: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x136098u;
    {
        const bool branch_taken_0x136098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136098u;
        // 0x13609c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136098) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360A0u;
label_1360a0:
    // 0x1360a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1360A0u;
    {
        const bool branch_taken_0x1360a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360A0u;
        // 0x1360a4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360a0) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360A8u;
label_1360a8:
    // 0x1360a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1360A8u;
    {
        const bool branch_taken_0x1360a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360A8u;
        // 0x1360ac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360a8) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360B0u;
label_1360b0:
    // 0x1360b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1360B0u;
    {
        const bool branch_taken_0x1360b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360B0u;
        // 0x1360b4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360b0) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360B8u;
label_1360b8:
    // 0x1360b8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1360bc: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1360c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1360c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1360c4: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1360c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1360c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1360cc: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x1360ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1360d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1360d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1360d4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1360d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1360d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1360d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1360dc: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x1360dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1360e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1360E0u;
    {
        const bool branch_taken_0x1360e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360E0u;
        // 0x1360e4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360e0) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360E8u;
label_1360e8:
    // 0x1360e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1360E8u;
    {
        const bool branch_taken_0x1360e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360E8u;
        // 0x1360ec: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360e8) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360F0u;
label_1360f0:
    // 0x1360f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1360F0u;
    {
        const bool branch_taken_0x1360f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F0u;
        // 0x1360f4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360f0) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x1360F8u;
label_1360f8:
    // 0x1360f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1360F8u;
    {
        const bool branch_taken_0x1360f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F8u;
        // 0x1360fc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360f8) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136100u;
label_136100:
    // 0x136100: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136100u;
    {
        const bool branch_taken_0x136100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136100u;
        // 0x136104: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136100) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136108u;
label_136108:
    // 0x136108: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x136108u;
    {
        const bool branch_taken_0x136108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136108u;
        // 0x13610c: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136108) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136110u;
label_136110:
    // 0x136110: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136110u;
    {
        const bool branch_taken_0x136110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136110u;
        // 0x136114: 0x3c060002  lui         $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136110) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136118u;
label_136118:
    // 0x136118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136118u;
    {
        const bool branch_taken_0x136118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136118u;
        // 0x13611c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136118) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136120u;
label_136120:
    // 0x136120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x136120u;
    {
        const bool branch_taken_0x136120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136120u;
        // 0x136124: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136120) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136128u;
label_136128:
    // 0x136128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136128u;
    {
        const bool branch_taken_0x136128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136128u;
        // 0x13612c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136128) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136130u;
label_136130:
    // 0x136130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136130u;
    {
        const bool branch_taken_0x136130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136130u;
        // 0x136134: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136130) {
            ctx->pc = 0x13613Cu;
            goto label_13613c;
        }
    }
    ctx->pc = 0x136138u;
label_136138:
    // 0x136138: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x136138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_13613c:
    // 0x13613c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13613Cu;
    {
        const bool branch_taken_0x13613c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13613c) {
            ctx->pc = 0x136168u;
            goto label_136168;
        }
    }
    ctx->pc = 0x136144u;
    // 0x136144: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x136144u;
    {
        const bool branch_taken_0x136144 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136144u;
        // 0x136148: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136144) {
            ctx->pc = 0x136158u;
            goto label_136158;
        }
    }
    ctx->pc = 0x13614Cu;
    // 0x13614c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x136150: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136150u;
    {
        const bool branch_taken_0x136150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136150u;
        // 0x136154: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136150) {
            ctx->pc = 0x13619Cu;
            goto label_13619c;
        }
    }
    ctx->pc = 0x136158u;
label_136158:
    // 0x136158: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x136158u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x13615c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x136160: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136160u;
    {
        const bool branch_taken_0x136160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136160u;
        // 0x136164: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136160) {
            ctx->pc = 0x13619Cu;
            goto label_13619c;
        }
    }
    ctx->pc = 0x136168u;
label_136168:
    // 0x136168: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x136168u;
    {
        const bool branch_taken_0x136168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136168u;
        // 0x13616c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136168) {
            ctx->pc = 0x13619Cu;
            goto label_13619c;
        }
    }
    ctx->pc = 0x136170u;
    // 0x136170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136174: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136178: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136178u;
    {
        const bool branch_taken_0x136178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x136178) {
            ctx->pc = 0x13617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136178u;
            // 0x13617c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1361A0u;
            goto label_1361a0;
        }
    }
    ctx->pc = 0x136180u;
    // 0x136180: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136180u;
    {
        const bool branch_taken_0x136180 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136180u;
        // 0x136184: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136180) {
            ctx->pc = 0x136190u;
            goto label_136190;
        }
    }
    ctx->pc = 0x136188u;
    // 0x136188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136188u;
    {
        const bool branch_taken_0x136188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136188u;
        // 0x13618c: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136188) {
            ctx->pc = 0x136198u;
            goto label_136198;
        }
    }
    ctx->pc = 0x136190u;
label_136190:
    // 0x136190: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x136190u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x136194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x136194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_136198:
    // 0x136198: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x136198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_13619c:
    // 0x13619c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1361a0:
    // 0x1361a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1361a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1361a8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x1361A8u;
    {
        const bool branch_taken_0x1361a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1361a8) {
            ctx->pc = 0x136000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136000;
        }
    }
    ctx->pc = 0x1361B0u;
label_1361b0:
    // 0x1361b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1361b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1361b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1361b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1361b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1361bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1361bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1361c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1361C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1361C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361C0u;
        // 0x1361c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1361C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1361C8u;
}
