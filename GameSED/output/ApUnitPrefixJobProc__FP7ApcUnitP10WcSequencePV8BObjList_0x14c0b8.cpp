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

// Function: ApUnitPrefixJobProc__FP7ApcUnitP10WcSequencePV8BObjList
// Address: 0x14c0b8 - 0x14c240
void ApUnitPrefixJobProc__FP7ApcUnitP10WcSequencePV8BObjList_0x14c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitPrefixJobProc__FP7ApcUnitP10WcSequencePV8BObjList_0x14c0b8");
#endif

    switch (ctx->pc) {
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        default: break;
    }

    ctx->pc = 0x14c0b8u;

label_14c0b8:
    // 0x14c0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14c0bc:
    // 0x14c0bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14c0c0:
    // 0x14c0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c0c4:
    // 0x14c0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14c0c8:
    // 0x14c0c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14c0cc:
    // 0x14c0cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14c0d0:
    // 0x14c0d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_14c0d4:
    // 0x14c0d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14c0d8:
    // 0x14c0d8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_14c0dc:
    if (ctx->pc == 0x14C0DCu) {
        ctx->pc = 0x14C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0D8u;
        // 0x14c0dc: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0E0u;
        goto label_14c0e0;
    }
    ctx->pc = 0x14C0D8u;
    {
        const bool branch_taken_0x14c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0d8) {
            ctx->pc = 0x14C0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C0D8u;
            // 0x14c0dc: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C160u;
            goto label_14c160;
        }
    }
    ctx->pc = 0x14C0E0u;
label_14c0e0:
    // 0x14c0e0: 0xc053106  jal         func_14C418
label_14c0e4:
    if (ctx->pc == 0x14C0E4u) {
        ctx->pc = 0x14C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0E0u;
        // 0x14c0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0E8u;
        goto label_14c0e8;
    }
    ctx->pc = 0x14C0E0u;
    SET_GPR_U32(ctx, 31, 0x14C0E8u);
    ctx->pc = 0x14C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0E0u;
    // 0x14c0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C418u, 0x14C0E0u, 0x14C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0E8u;
label_14c0e8:
    // 0x14c0e8: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14c0ec:
    // 0x14c0ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_14c0f0:
    // 0x14c0f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14c0f4:
    if (ctx->pc == 0x14C0F4u) {
        ctx->pc = 0x14C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0F0u;
        // 0x14c0f4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C0F8u;
        goto label_14c0f8;
    }
    ctx->pc = 0x14C0F0u;
    {
        const bool branch_taken_0x14c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0f0) {
            ctx->pc = 0x14C0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C0F0u;
            // 0x14c0f4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C104u;
            goto label_14c104;
        }
    }
    ctx->pc = 0x14C0F8u;
label_14c0f8:
    // 0x14c0f8: 0xc05bcee  jal         func_16F3B8
label_14c0fc:
    if (ctx->pc == 0x14C0FCu) {
        ctx->pc = 0x14C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0F8u;
        // 0x14c0fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C100u;
        goto label_14c100;
    }
    ctx->pc = 0x14C0F8u;
    SET_GPR_U32(ctx, 31, 0x14C100u);
    ctx->pc = 0x14C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0F8u;
    // 0x14c0fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3B8u, 0x14C0F8u, 0x14C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C100u;
label_14c100:
    // 0x14c100: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_14c104:
    // 0x14c104: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x14c104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14c108:
    // 0x14c108: 0x8c503584  lw          $s0, 0x3584($v0)
    ctx->pc = 0x14c108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13700)));
label_14c10c:
    // 0x14c10c: 0x0  nop
    ctx->pc = 0x14c10cu;
    // NOP
label_14c110:
    // 0x14c110: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c114:
    // 0x14c114: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c118:
    // 0x14c118: 0x10d20007  beq         $a2, $s2, . + 4 + (0x7 << 2)
label_14c11c:
    if (ctx->pc == 0x14C11Cu) {
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C120u;
        goto label_14c120;
    }
    ctx->pc = 0x14C118u;
    {
        const bool branch_taken_0x14c118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c118) {
            ctx->pc = 0x14C138u;
            goto label_14c138;
        }
    }
    ctx->pc = 0x14C120u;
label_14c120:
    // 0x14c120: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14c124:
    // 0x14c124: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_14c128:
    // 0x14c128: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c12c:
    // 0x14c12c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c130:
    // 0x14c130: 0x60f809  jalr        $v1
label_14c134:
    if (ctx->pc == 0x14C134u) {
        ctx->pc = 0x14C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C130u;
        // 0x14c134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C138u;
        goto label_14c138;
    }
    ctx->pc = 0x14C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C138u);
        ctx->pc = 0x14C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C130u;
        // 0x14c134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C130u, 0x14C138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C138u;
label_14c138:
    // 0x14c138: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_14c13c:
    if (ctx->pc == 0x14C13Cu) {
        ctx->pc = 0x14C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C138u;
        // 0x14c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C140u;
        goto label_14c140;
    }
    ctx->pc = 0x14C138u;
    {
        const bool branch_taken_0x14c138 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C138u;
        // 0x14c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c138) {
            ctx->pc = 0x14C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c110;
        }
    }
    ctx->pc = 0x14C140u;
label_14c140:
    // 0x14c140: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14c144:
    // 0x14c144: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14c148:
    // 0x14c148: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c14c:
    // 0x14c14c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c150:
    // 0x14c150: 0x60f809  jalr        $v1
label_14c154:
    if (ctx->pc == 0x14C154u) {
        ctx->pc = 0x14C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C150u;
        // 0x14c154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C158u;
        goto label_14c158;
    }
    ctx->pc = 0x14C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C158u);
        ctx->pc = 0x14C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C150u;
        // 0x14c154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C150u, 0x14C158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C158u;
label_14c158:
    // 0x14c158: 0x10000034  b           . + 4 + (0x34 << 2)
label_14c15c:
    if (ctx->pc == 0x14C15Cu) {
        ctx->pc = 0x14C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C158u;
        // 0x14c15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C160u;
        goto label_14c160;
    }
    ctx->pc = 0x14C158u;
    {
        const bool branch_taken_0x14c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C158u;
        // 0x14c15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c158) {
            ctx->pc = 0x14C22Cu;
            goto label_14c22c;
        }
    }
    ctx->pc = 0x14C160u;
label_14c160:
    // 0x14c160: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_14c164:
    // 0x14c164: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_14c168:
    // 0x14c168: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x14c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_14c16c:
    // 0x14c16c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x14c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_14c170:
    // 0x14c170: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_14c174:
    if (ctx->pc == 0x14C174u) {
        ctx->pc = 0x14C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C170u;
        // 0x14c174: 0x8e2201f8  lw          $v0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C178u;
        goto label_14c178;
    }
    ctx->pc = 0x14C170u;
    {
        const bool branch_taken_0x14c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c170) {
            ctx->pc = 0x14C174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C170u;
            // 0x14c174: 0x8e2201f8  lw          $v0, 0x1F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C1A8u;
            goto label_14c1a8;
        }
    }
    ctx->pc = 0x14C178u;
label_14c178:
    // 0x14c178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c17c:
    // 0x14c17c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14c180:
    // 0x14c180: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c184:
    // 0x14c184: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_14c188:
    // 0x14c188: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c18c:
    // 0x14c18c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c190:
    // 0x14c190: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c194:
    // 0x14c194: 0x60f809  jalr        $v1
label_14c198:
    if (ctx->pc == 0x14C198u) {
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C19Cu;
        goto label_14c19c;
    }
    ctx->pc = 0x14C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C19Cu);
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C194u, 0x14C19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C19Cu;
label_14c19c:
    // 0x14c19c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_14c1a0:
    if (ctx->pc == 0x14C1A0u) {
        ctx->pc = 0x14C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C19Cu;
        // 0x14c1a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1A4u;
        goto label_14c1a4;
    }
    ctx->pc = 0x14C19Cu;
    {
        const bool branch_taken_0x14c19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c19c) {
            ctx->pc = 0x14C1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C19Cu;
            // 0x14c1a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c180;
        }
    }
    ctx->pc = 0x14C1A4u;
label_14c1a4:
    // 0x14c1a4: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_14c1a8:
    // 0x14c1a8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_14c1ac:
    if (ctx->pc == 0x14C1ACu) {
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1B0u;
        goto label_14c1b0;
    }
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14C20Cu;
            goto label_14c20c;
        }
    }
    ctx->pc = 0x14C1B0u;
label_14c1b0:
    // 0x14c1b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_14c1b4:
    if (ctx->pc == 0x14C1B4u) {
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B0u;
        // 0x14c1b4: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1B8u;
        goto label_14c1b8;
    }
    ctx->pc = 0x14C1B0u;
    {
        const bool branch_taken_0x14c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B0u;
        // 0x14c1b4: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b0) {
            ctx->pc = 0x14C20Cu;
            goto label_14c20c;
        }
    }
    ctx->pc = 0x14C1B8u;
label_14c1b8:
    // 0x14c1b8: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_14c1bc:
    // 0x14c1bc: 0x26270210  addiu       $a3, $s1, 0x210
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_14c1c0:
    // 0x14c1c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_14c1c4:
    // 0x14c1c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14c1c8:
    // 0x14c1c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_14c1cc:
    // 0x14c1cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c1d0:
    // 0x14c1d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_14c1d4:
    // 0x14c1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c1d8:
    // 0x14c1d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14c1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14c1dc:
    // 0x14c1dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14c1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14c1e0:
    // 0x14c1e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14c1e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14c1e4:
    // 0x14c1e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14c1e8:
    // 0x14c1e8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14c1e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14c1ec:
    // 0x14c1ec: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14c1ecu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14c1f0:
    // 0x14c1f0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14c1f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14c1f4:
    // 0x14c1f4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14c1f8:
    // 0x14c1f8: 0x2626020c  addiu       $a2, $s1, 0x20C
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 524));
label_14c1fc:
    // 0x14c1fc: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_14c200:
    // 0x14c200: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14c200u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_14c204:
    // 0x14c204: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14c204u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_14c208:
    // 0x14c208: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14c208u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_14c20c:
    // 0x14c20c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_14c210:
    // 0x14c210: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_14c214:
    // 0x14c214: 0x8e240244  lw          $a0, 0x244($s1)
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
label_14c218:
    // 0x14c218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14c21c:
    // 0x14c21c: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x14c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_14c220:
    // 0x14c220: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x14c220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_14c224:
    // 0x14c224: 0xae240248  sw          $a0, 0x248($s1)
    ctx->pc = 0x14c224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
label_14c228:
    // 0x14c228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c22c:
    // 0x14c22c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c22cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14c230:
    // 0x14c230: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14c234:
    // 0x14c234: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14c238:
    // 0x14c238: 0x3e00008  jr          $ra
label_14c23c:
    if (ctx->pc == 0x14C23Cu) {
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C238u;
        // 0x14c23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C240u;
        goto label_fallthrough_0x14c238;
    }
    ctx->pc = 0x14C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C238u;
        // 0x14c23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c238:
    ctx->pc = 0x14C240u;
}
