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

// Function: Cmd_STO_Entry__FP15BsSCDEntControl
// Address: 0x1a5e90 - 0x1a6028
void Cmd_STO_Entry__FP15BsSCDEntControl_0x1a5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STO_Entry__FP15BsSCDEntControl_0x1a5e90");
#endif

    switch (ctx->pc) {
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a6010u: goto label_1a6010;
        default: break;
    }

    ctx->pc = 0x1a5e90u;

    // 0x1a5e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5e98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ea0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5ea4: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a5ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a5ea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a5eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5eb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5eb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5eb8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5EB8u;
    SET_GPR_U32(ctx, 31, 0x1A5EC0u);
    ctx->pc = 0x1A5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EB8u;
    // 0x1a5ebc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5EB8u, 0x1A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5ed0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5ed4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5ed8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5EDCu;
    {
        const bool branch_taken_0x1a5edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EDCu;
        // 0x1a5ee0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5edc) {
            ctx->pc = 0x1A5EF0u;
            goto label_1a5ef0;
        }
    }
    ctx->pc = 0x1A5EE4u;
    // 0x1a5ee4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5EE4u;
    SET_GPR_U32(ctx, 31, 0x1A5EECu);
    ctx->pc = 0x1A5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EE4u;
    // 0x1a5ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5EE4u, 0x1A5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EECu;
label_1a5eec:
    // 0x1a5eec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5ef0:
    // 0x1a5ef0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a5ef4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5ef8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5efc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a5efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5f04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5f08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5f0c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a5f0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5f10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F10u;
    {
        const bool branch_taken_0x1a5f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F10u;
        // 0x1a5f14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f10) {
            ctx->pc = 0x1A5F24u;
            goto label_1a5f24;
        }
    }
    ctx->pc = 0x1A5F18u;
    // 0x1a5f18: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5F18u;
    SET_GPR_U32(ctx, 31, 0x1A5F20u);
    ctx->pc = 0x1A5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F18u;
    // 0x1a5f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5F18u, 0x1A5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F20u;
label_1a5f20:
    // 0x1a5f20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5f24:
    // 0x1a5f24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F24u;
    {
        const bool branch_taken_0x1a5f24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F24u;
        // 0x1a5f28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f24) {
            ctx->pc = 0x1A5F40u;
            goto label_1a5f40;
        }
    }
    ctx->pc = 0x1A5F2Cu;
    // 0x1a5f2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5f30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5f34: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A5F34u;
    {
        const bool branch_taken_0x1a5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F34u;
        // 0x1a5f38: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f34) {
            ctx->pc = 0x1A6010u;
            goto label_1a6010;
        }
    }
    ctx->pc = 0x1A5F3Cu;
    // 0x1a5f3c: 0x0  nop
    ctx->pc = 0x1a5f3cu;
    // NOP
label_1a5f40:
    // 0x1a5f40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5f44: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5f4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a5f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5f50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A5F50u;
    {
        const bool branch_taken_0x1a5f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F50u;
        // 0x1a5f54: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f50) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5F58u;
    // 0x1a5f58: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x1a5f5c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5f60: 0x28a30200  slti        $v1, $a1, 0x200
    ctx->pc = 0x1a5f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a5f64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5F64u;
    {
        const bool branch_taken_0x1a5f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F64u;
        // 0x1a5f68: 0x28a20300  slti        $v0, $a1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f64) {
            ctx->pc = 0x1A5F88u;
            goto label_1a5f88;
        }
    }
    ctx->pc = 0x1A5F6Cu;
    // 0x1a5f6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5f70: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5f74: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1a5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1a5f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5f7c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5F7Cu;
    {
        const bool branch_taken_0x1a5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F7Cu;
        // 0x1a5f80: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f7c) {
            ctx->pc = 0x1A6010u;
            goto label_1a6010;
        }
    }
    ctx->pc = 0x1A5F84u;
    // 0x1a5f84: 0x0  nop
    ctx->pc = 0x1a5f84u;
    // NOP
label_1a5f88:
    // 0x1a5f88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5F88u;
    {
        const bool branch_taken_0x1a5f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F88u;
        // 0x1a5f8c: 0x28a20400  slti        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f88) {
            ctx->pc = 0x1A5FB8u;
            goto label_1a5fb8;
        }
    }
    ctx->pc = 0x1A5F90u;
    // 0x1a5f90: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5f94: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x1a5f98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5f9c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5fa0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5FA0u;
    {
        const bool branch_taken_0x1a5fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA0u;
        // 0x1a5fa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa0) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FA8u;
    // 0x1a5fa8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5fac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5fb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5FB0u;
    {
        const bool branch_taken_0x1a5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fb0) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FB8u;
label_1a5fb8:
    // 0x1a5fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5FB8u;
    {
        const bool branch_taken_0x1a5fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB8u;
        // 0x1a5fbc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fb8) {
            ctx->pc = 0x1A5FE8u;
            goto label_1a5fe8;
        }
    }
    ctx->pc = 0x1A5FC0u;
    // 0x1a5fc0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5fc4: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x1a5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x1a5fc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5fcc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5fd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5FD0u;
    {
        const bool branch_taken_0x1a5fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD0u;
        // 0x1a5fd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd0) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FD8u;
    // 0x1a5fd8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5fdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5FE0u;
    {
        const bool branch_taken_0x1a5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FE0u;
        // 0x1a5fe4: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fe0) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FE8u;
label_1a5fe8:
    // 0x1a5fe8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5fec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5ff0: 0x8c63f4b0  lw          $v1, -0xB50($v1)
    ctx->pc = 0x1a5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964400)));
label_1a5ff4:
    // 0x1a5ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5FF4u;
    {
        const bool branch_taken_0x1a5ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF4u;
        // 0x1a5ff8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff4) {
            ctx->pc = 0x1A6010u;
            goto label_1a6010;
        }
    }
    ctx->pc = 0x1A5FFCu;
    // 0x1a5ffc: 0x0  nop
    ctx->pc = 0x1a5ffcu;
    // NOP
label_1a6000:
    // 0x1a6000: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a6004: 0x24a59438  addiu       $a1, $a1, -0x6BC8
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939704));
    // 0x1a6008: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6008u;
    SET_GPR_U32(ctx, 31, 0x1A6010u);
    ctx->pc = 0x1A600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6008u;
    // 0x1a600c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6008u, 0x1A6010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6010u;
label_1a6010:
    // 0x1a6010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a601c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6020: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6020u;
        // 0x1a6024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6028u;
}
