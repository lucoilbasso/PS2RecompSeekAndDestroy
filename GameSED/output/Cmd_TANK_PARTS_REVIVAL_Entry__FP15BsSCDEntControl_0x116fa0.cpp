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

// Function: Cmd_TANK_PARTS_REVIVAL_Entry__FP15BsSCDEntControl
// Address: 0x116fa0 - 0x117168
void Cmd_TANK_PARTS_REVIVAL_Entry__FP15BsSCDEntControl_0x116fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_REVIVAL_Entry__FP15BsSCDEntControl_0x116fa0");
#endif

    switch (ctx->pc) {
        case 0x116fd0u: goto label_116fd0;
        case 0x117010u: goto label_117010;
        case 0x117048u: goto label_117048;
        case 0x117058u: goto label_117058;
        case 0x1170fcu: goto label_1170fc;
        default: break;
    }

    ctx->pc = 0x116fa0u;

    // 0x116fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116fa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116fa8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x116fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x116fac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x116facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x116fb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x116fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x116fb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x116fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x116fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116fc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x116fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x116fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x116fc8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116FC8u;
    SET_GPR_U32(ctx, 31, 0x116FD0u);
    ctx->pc = 0x116FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FC8u;
    // 0x116fcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116FC8u, 0x116FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FD0u;
label_116fd0:
    // 0x116fd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fd4: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116fd8: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x116fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x116fdc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116fe0: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x116fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x116fe4: 0x24620ff0  addiu       $v0, $v1, 0xFF0
    ctx->pc = 0x116fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x116fe8: 0x246511c0  addiu       $a1, $v1, 0x11C0
    ctx->pc = 0x116fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4544));
    // 0x116fec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x116fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116ff0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x116ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116ff4: 0x8c760fe8  lw          $s6, 0xFE8($v1)
    ctx->pc = 0x116ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x116ff8: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x116ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x116ffc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x116ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x117000: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117004: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x117004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x117008: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x117008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11700c: 0x0  nop
    ctx->pc = 0x11700cu;
    // NOP
label_117010:
    // 0x117010: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x117010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x117014: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117018: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x117018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11701c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x117020: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x117020u;
    {
        const bool branch_taken_0x117020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x117024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117020u;
        // 0x117024: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117020) {
            ctx->pc = 0x1170F8u;
            goto label_1170f8;
        }
    }
    ctx->pc = 0x117028u;
    // 0x117028: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x117028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11702c: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x11702cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x117030: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x117030u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x117034: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x117034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117038: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x117038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x11703c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117040: 0xc045360  jal         func_114D80
    ctx->pc = 0x117040u;
    SET_GPR_U32(ctx, 31, 0x117048u);
    ctx->pc = 0x117044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117040u;
    // 0x117044: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117040u, 0x117048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117048u;
label_117048:
    // 0x117048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11704c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117050: 0xc045360  jal         func_114D80
    ctx->pc = 0x117050u;
    SET_GPR_U32(ctx, 31, 0x117058u);
    ctx->pc = 0x117054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117050u;
    // 0x117054: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117050u, 0x117058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117058u;
label_117058:
    // 0x117058: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x117058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x11705c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117060: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x117060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x117064: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x117064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x117068: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x117068u;
    {
        const bool branch_taken_0x117068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117068u;
        // 0x11706c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117068) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x117070u;
    // 0x117070: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x117074: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x117074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x117078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11707c: 0x8c6345f0  lw          $v1, 0x45F0($v1)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17904)));
    // 0x117080: 0x600008  jr          $v1
    ctx->pc = 0x117080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117088u: goto label_117088;
            case 0x117090u: goto label_117090;
            case 0x117098u: goto label_117098;
            case 0x1170A0u: goto label_1170a0;
            case 0x1170A8u: goto label_1170a8;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170B8u: goto label_1170b8;
            case 0x1170C0u: goto label_1170c0;
            case 0x1170C8u: goto label_1170c8;
            case 0x1170D0u: goto label_1170d0;
            case 0x1170D8u: goto label_1170d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x117088u;
label_117088:
    // 0x117088: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x117088u;
    {
        const bool branch_taken_0x117088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117088u;
        // 0x11708c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117088) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x117090u;
label_117090:
    // 0x117090: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x117090u;
    {
        const bool branch_taken_0x117090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117090u;
        // 0x117094: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117090) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x117098u;
label_117098:
    // 0x117098: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x117098u;
    {
        const bool branch_taken_0x117098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117098u;
        // 0x11709c: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117098) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170A0u;
label_1170a0:
    // 0x1170a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1170A0u;
    {
        const bool branch_taken_0x1170a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A0u;
        // 0x1170a4: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170A8u;
label_1170a8:
    // 0x1170a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1170A8u;
    {
        const bool branch_taken_0x1170a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A8u;
        // 0x1170ac: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170B0u;
label_1170b0:
    // 0x1170b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1170B0u;
    {
        const bool branch_taken_0x1170b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B0u;
        // 0x1170b4: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170b0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170B8u;
label_1170b8:
    // 0x1170b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1170B8u;
    {
        const bool branch_taken_0x1170b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B8u;
        // 0x1170bc: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170b8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170C0u;
label_1170c0:
    // 0x1170c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1170C0u;
    {
        const bool branch_taken_0x1170c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C0u;
        // 0x1170c4: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170C8u;
label_1170c8:
    // 0x1170c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1170C8u;
    {
        const bool branch_taken_0x1170c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C8u;
        // 0x1170cc: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170D0u;
label_1170d0:
    // 0x1170d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1170D0u;
    {
        const bool branch_taken_0x1170d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170D0u;
        // 0x1170d4: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170d0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170D8u;
label_1170d8:
    // 0x1170d8: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x1170d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1170dc:
    // 0x1170dc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1170e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1170e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1170e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170e8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1170E8u;
    {
        const bool branch_taken_0x1170e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1170e8) {
            ctx->pc = 0x1170ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1170E8u;
            // 0x1170ec: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1170FCu;
            goto label_1170fc;
        }
    }
    ctx->pc = 0x1170F0u;
    // 0x1170f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1170f4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1170f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_1170f8:
    // 0x1170f8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1170fc:
    // 0x1170fc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x117100: 0x2ae2000c  slti        $v0, $s7, 0xC
    ctx->pc = 0x117100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117104: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x117104u;
    {
        const bool branch_taken_0x117104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117104u;
        // 0x117108: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117104) {
            ctx->pc = 0x117010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117010;
        }
    }
    ctx->pc = 0x11710Cu;
    // 0x11710c: 0x24020934  addiu       $v0, $zero, 0x934
    ctx->pc = 0x11710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x117110: 0x240524d0  addiu       $a1, $zero, 0x24D0
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x117114: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x117114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x117118: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x117118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11711c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11711cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x117124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117128: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x117128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x11712c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117130: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x117130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x117134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11713c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11713cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117140: 0x8c441008  lw          $a0, 0x1008($v0)
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4104)));
    // 0x117144: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x117144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x117148: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x117148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11714c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11714cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117150: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x117150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117154: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x117154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x117158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11715c: 0xaca40fec  sw          $a0, 0xFEC($a1)
    ctx->pc = 0x11715cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4076), GPR_U32(ctx, 4));
    // 0x117160: 0x3e00008  jr          $ra
    ctx->pc = 0x117160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117160u;
        // 0x117164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117168u;
}
