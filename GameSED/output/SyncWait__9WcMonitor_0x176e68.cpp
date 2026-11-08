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

// Function: SyncWait__9WcMonitor
// Address: 0x176e68 - 0x177028
void SyncWait__9WcMonitor_0x176e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyncWait__9WcMonitor_0x176e68");
#endif

    switch (ctx->pc) {
        case 0x176ec8u: goto label_176ec8;
        case 0x176ee4u: goto label_176ee4;
        case 0x176f04u: goto label_176f04;
        case 0x176f58u: goto label_176f58;
        case 0x176f74u: goto label_176f74;
        case 0x176f8cu: goto label_176f8c;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fe4u: goto label_176fe4;
        case 0x176fecu: goto label_176fec;
        case 0x177008u: goto label_177008;
        case 0x177010u: goto label_177010;
        default: break;
    }

    ctx->pc = 0x176e68u;

    // 0x176e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176e6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x176e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x176e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x176e78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x176e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176e7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x176e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x176e80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x176e84: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x176e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x176e88: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x176E88u;
    {
        const bool branch_taken_0x176e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E88u;
        // 0x176e8c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e88) {
            ctx->pc = 0x176FE4u;
            goto label_176fe4;
        }
    }
    ctx->pc = 0x176E90u;
    // 0x176e90: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x176e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x176e94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x176e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e98: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x176e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176e9c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176ea0: 0x94860020  lhu         $a2, 0x20($a0)
    ctx->pc = 0x176ea0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x176ea4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x176ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x176ea8: 0x30c40020  andi        $a0, $a2, 0x20
    ctx->pc = 0x176ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x176eac: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x176eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x176eb0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x176EB0u;
    {
        const bool branch_taken_0x176eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EB0u;
        // 0x176eb4: 0xa7a60000  sh          $a2, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176eb0) {
            ctx->pc = 0x176F3Cu;
            goto label_176f3c;
        }
    }
    ctx->pc = 0x176EB8u;
    // 0x176eb8: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x176eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x176ebc: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x176EBCu;
    {
        const bool branch_taken_0x176ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ebc) {
            ctx->pc = 0x176EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176EBCu;
            // 0x176ec0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176F2Cu;
            goto label_176f2c;
        }
    }
    ctx->pc = 0x176EC4u;
    // 0x176ec4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x176ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_176ec8:
    // 0x176ec8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x176ecc: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176ed0: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x176ed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x176ed4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176ed8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x176edc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176EDCu;
    SET_GPR_U32(ctx, 31, 0x176EE4u);
    ctx->pc = 0x176EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EDCu;
    // 0x176ee0: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176EDCu, 0x176EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EE4u;
label_176ee4:
    // 0x176ee4: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176ee8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x176eec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x176eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176ef0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176ef4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x176ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x176ef8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176efc: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176EFCu;
    SET_GPR_U32(ctx, 31, 0x176F04u);
    ctx->pc = 0x176F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EFCu;
    // 0x176f00: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176EFCu, 0x176F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F04u;
label_176f04:
    // 0x176f04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x176f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f08: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176f0c: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x176f0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f10: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x176f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x176f14: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x176f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x176f18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176F18u;
    {
        const bool branch_taken_0x176f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F18u;
        // 0x176f1c: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f18) {
            ctx->pc = 0x176F3Cu;
            goto label_176f3c;
        }
    }
    ctx->pc = 0x176F20u;
    // 0x176f20: 0x1060ffe9  beqz        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x176F20u;
    {
        const bool branch_taken_0x176f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F20u;
        // 0x176f24: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f20) {
            ctx->pc = 0x176EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176ec8;
        }
    }
    ctx->pc = 0x176F28u;
    // 0x176f28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_176f2c:
    // 0x176f2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x176f30: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x176f34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176f38: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x176f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_176f3c:
    // 0x176f3c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x176f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f40: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x176f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x176f44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x176F44u;
    {
        const bool branch_taken_0x176f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f44) {
            ctx->pc = 0x176FA4u;
            goto label_176fa4;
        }
    }
    ctx->pc = 0x176F4Cu;
    // 0x176f4c: 0x3c10ff7f  lui         $s0, 0xFF7F
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65407 << 16));
    // 0x176f50: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
    // 0x176f54: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x176f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_176f58:
    // 0x176f58: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f5c: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x176f5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x176f60: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176f64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176f68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x176f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x176f6c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176F6Cu;
    SET_GPR_U32(ctx, 31, 0x176F74u);
    ctx->pc = 0x176F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F6Cu;
    // 0x176f70: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176F6Cu, 0x176F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F74u;
label_176f74:
    // 0x176f74: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f78: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176f7c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x176f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x176f84: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176F84u;
    SET_GPR_U32(ctx, 31, 0x176F8Cu);
    ctx->pc = 0x176F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F84u;
    // 0x176f88: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176F84u, 0x176F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F8Cu;
label_176f8c:
    // 0x176f8c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f90: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176f94: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x176f94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f98: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x176f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x176f9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x176F9Cu;
    {
        const bool branch_taken_0x176f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F9Cu;
        // 0x176fa0: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f9c) {
            ctx->pc = 0x176F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f58;
        }
    }
    ctx->pc = 0x176FA4u;
label_176fa4:
    // 0x176fa4: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x176FA4u;
    {
        const bool branch_taken_0x176fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA4u;
        // 0x176fa8: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fa4) {
            ctx->pc = 0x176FE4u;
            goto label_176fe4;
        }
    }
    ctx->pc = 0x176FACu;
    // 0x176fac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x176facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x176fb0: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176fb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x176fbc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FBCu;
    // 0x176fc0: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176FBCu, 0x176FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176fc8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x176fcc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x176fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176fd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176fd4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x176fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x176fd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176fdc: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176FDCu;
    SET_GPR_U32(ctx, 31, 0x176FE4u);
    ctx->pc = 0x176FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FDCu;
    // 0x176fe0: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176FDCu, 0x176FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FE4u;
label_176fe4:
    // 0x176fe4: 0xc05d92a  jal         func_1764A8
    ctx->pc = 0x176FE4u;
    SET_GPR_U32(ctx, 31, 0x176FECu);
    ctx->pc = 0x1764A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1764A8u, 0x176FE4u, 0x176FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FECu;
label_176fec:
    // 0x176fec: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176ff0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x176ff4: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176ff8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x176ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177000: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177000u;
    SET_GPR_U32(ctx, 31, 0x177008u);
    ctx->pc = 0x177004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177000u;
    // 0x177004: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177000u, 0x177008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177008u;
label_177008:
    // 0x177008: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177008u;
    SET_GPR_U32(ctx, 31, 0x177010u);
    ctx->pc = 0x17700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177008u;
    // 0x17700c: 0x8f848d0c  lw          $a0, -0x72F4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177008u, 0x177010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177010u;
label_177010:
    // 0x177010: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x177010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177014: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177018: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x177018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17701c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177020: 0x3e00008  jr          $ra
    ctx->pc = 0x177020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177020u;
        // 0x177024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177028u;
}
