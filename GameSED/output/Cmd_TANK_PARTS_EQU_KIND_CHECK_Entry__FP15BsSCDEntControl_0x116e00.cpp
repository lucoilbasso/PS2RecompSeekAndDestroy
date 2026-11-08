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

// Function: Cmd_TANK_PARTS_EQU_KIND_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x116e00 - 0x116fa0
void Cmd_TANK_PARTS_EQU_KIND_CHECK_Entry__FP15BsSCDEntControl_0x116e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_EQU_KIND_CHECK_Entry__FP15BsSCDEntControl_0x116e00");
#endif

    switch (ctx->pc) {
        case 0x116e2cu: goto label_116e2c;
        case 0x116e38u: goto label_116e38;
        case 0x116e44u: goto label_116e44;
        case 0x116e88u: goto label_116e88;
        case 0x116ea0u: goto label_116ea0;
        case 0x116f44u: goto label_116f44;
        case 0x116f60u: goto label_116f60;
        case 0x116f7cu: goto label_116f7c;
        default: break;
    }

    ctx->pc = 0x116e00u;

    // 0x116e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116e10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116e14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x116e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x116e18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x116e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x116e1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x116e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x116e20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116e24: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E24u;
    SET_GPR_U32(ctx, 31, 0x116E2Cu);
    ctx->pc = 0x116E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E24u;
    // 0x116e28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E24u, 0x116E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E2Cu;
label_116e2c:
    // 0x116e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E30u;
    SET_GPR_U32(ctx, 31, 0x116E38u);
    ctx->pc = 0x116E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E30u;
    // 0x116e34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E30u, 0x116E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E38u;
label_116e38:
    // 0x116e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116E3Cu;
    SET_GPR_U32(ctx, 31, 0x116E44u);
    ctx->pc = 0x116E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E3Cu;
    // 0x116e40: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116E3Cu, 0x116E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E44u;
label_116e44:
    // 0x116e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e48: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116e4c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x116e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x116e50: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116e54: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x116e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x116e58: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x116e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x116e5c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x116e60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x116e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x116e64: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x116e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x116e68: 0x264202a  slt         $a0, $s3, $a0
    ctx->pc = 0x116e68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x116e6c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x116e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x116e70: 0x2694d190  addiu       $s4, $s4, -0x2E70
    ctx->pc = 0x116e70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955408));
    // 0x116e74: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x116e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x116e78: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E78u;
        // 0x116e7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116F80u;
            goto label_116f80;
        }
    }
    ctx->pc = 0x116E80u;
    // 0x116e80: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x116e80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x116e84: 0x0  nop
    ctx->pc = 0x116e84u;
    // NOP
label_116e88:
    // 0x116e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e8c: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x116e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x116e90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x116e94: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x116e98: 0xc045360  jal         func_114D80
    ctx->pc = 0x116E98u;
    SET_GPR_U32(ctx, 31, 0x116EA0u);
    ctx->pc = 0x116E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E98u;
    // 0x116e9c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116E98u, 0x116EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x116ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x116ea4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x116EA4u;
    {
        const bool branch_taken_0x116ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA4u;
        // 0x116ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea4) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116EACu;
    // 0x116eac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x116eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116eb0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x116eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x116eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116eb8: 0x8c6345c0  lw          $v1, 0x45C0($v1)
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17856)));
    // 0x116ebc: 0x600008  jr          $v1
    ctx->pc = 0x116EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116EC8u: goto label_116ec8;
            case 0x116ED0u: goto label_116ed0;
            case 0x116ED8u: goto label_116ed8;
            case 0x116EE0u: goto label_116ee0;
            case 0x116EE8u: goto label_116ee8;
            case 0x116EF0u: goto label_116ef0;
            case 0x116EF8u: goto label_116ef8;
            case 0x116F00u: goto label_116f00;
            case 0x116F08u: goto label_116f08;
            case 0x116F10u: goto label_116f10;
            case 0x116F18u: goto label_116f18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x116EC4u;
    // 0x116ec4: 0x0  nop
    ctx->pc = 0x116ec4u;
    // NOP
label_116ec8:
    // 0x116ec8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116EC8u;
    {
        const bool branch_taken_0x116ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EC8u;
        // 0x116ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ec8) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116ED0u;
label_116ed0:
    // 0x116ed0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x116ED0u;
    {
        const bool branch_taken_0x116ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED0u;
        // 0x116ed4: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed0) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116ED8u;
label_116ed8:
    // 0x116ed8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116ED8u;
    {
        const bool branch_taken_0x116ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED8u;
        // 0x116edc: 0x2624007c  addiu       $a0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed8) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116EE0u;
label_116ee0:
    // 0x116ee0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x116EE0u;
    {
        const bool branch_taken_0x116ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE0u;
        // 0x116ee4: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee0) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116EE8u;
label_116ee8:
    // 0x116ee8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116EE8u;
    {
        const bool branch_taken_0x116ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee8) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116EF0u;
label_116ef0:
    // 0x116ef0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116EF0u;
    {
        const bool branch_taken_0x116ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EF0u;
        // 0x116ef4: 0x2624011c  addiu       $a0, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ef0) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116EF8u;
label_116ef8:
    // 0x116ef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116EF8u;
    {
        const bool branch_taken_0x116ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EF8u;
        // 0x116efc: 0x2624014c  addiu       $a0, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ef8) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116F00u;
label_116f00:
    // 0x116f00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116F00u;
    {
        const bool branch_taken_0x116f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F00u;
        // 0x116f04: 0x2624015c  addiu       $a0, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f00) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116F08u;
label_116f08:
    // 0x116f08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116F08u;
    {
        const bool branch_taken_0x116f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F08u;
        // 0x116f0c: 0x26240180  addiu       $a0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f08) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116F10u;
label_116f10:
    // 0x116f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116F10u;
    {
        const bool branch_taken_0x116f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F10u;
        // 0x116f14: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f10) {
            ctx->pc = 0x116F1Cu;
            goto label_116f1c;
        }
    }
    ctx->pc = 0x116F18u;
label_116f18:
    // 0x116f18: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x116f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_116f1c:
    // 0x116f1c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x116f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x116f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116f28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x116f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116f2c: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x116F2Cu;
    {
        const bool branch_taken_0x116f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x116F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F2Cu;
        // 0x116f30: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f2c) {
            ctx->pc = 0x116F60u;
            goto label_116f60;
        }
    }
    ctx->pc = 0x116F34u;
    // 0x116f34: 0x122a00  sll         $a1, $s2, 8
    ctx->pc = 0x116f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x116f38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x116f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f3c: 0xc0458fc  jal         func_1163F0
    ctx->pc = 0x116F3Cu;
    SET_GPR_U32(ctx, 31, 0x116F44u);
    ctx->pc = 0x116F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F3Cu;
    // 0x116f40: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163F0u, 0x116F3Cu, 0x116F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f48: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116F48u;
    {
        const bool branch_taken_0x116f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x116f48) {
            ctx->pc = 0x116F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F48u;
            // 0x116f4c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F60u;
            goto label_116f60;
        }
    }
    ctx->pc = 0x116F50u;
    // 0x116f50: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116f54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F54u;
        // 0x116f58: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F7Cu;
            goto label_116f7c;
        }
    }
    ctx->pc = 0x116F5Cu;
    // 0x116f5c: 0x0  nop
    ctx->pc = 0x116f5cu;
    // NOP
label_116f60:
    // 0x116f60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x116f64: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116f6c: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x116f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x116f70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x116f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116f74: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x116F74u;
    {
        const bool branch_taken_0x116f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F74u;
        // 0x116f78: 0x3250ffff  andi        $s0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f74) {
            ctx->pc = 0x116E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e88;
        }
    }
    ctx->pc = 0x116F7Cu;
label_116f7c:
    // 0x116f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116f80:
    // 0x116f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116f84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116f88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x116f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116f8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x116f8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116f90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x116f90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116f94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116f98: 0x3e00008  jr          $ra
    ctx->pc = 0x116F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F98u;
        // 0x116f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116FA0u;
}
