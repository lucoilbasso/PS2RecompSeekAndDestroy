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

// Function: Cmd_LOD_Entry__FP15BsSCDEntControl
// Address: 0x1a5d08 - 0x1a5e8c
void Cmd_LOD_Entry__FP15BsSCDEntControl_0x1a5d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOD_Entry__FP15BsSCDEntControl_0x1a5d08");
#endif

    switch (ctx->pc) {
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5e70u: goto label_1a5e70;
        default: break;
    }

    ctx->pc = 0x1a5d08u;

    // 0x1a5d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5d1c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a5d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a5d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D34u;
    SET_GPR_U32(ctx, 31, 0x1A5D3Cu);
    ctx->pc = 0x1A5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D34u;
    // 0x1a5d38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D34u, 0x1A5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D3Cu;
label_1a5d3c:
    // 0x1a5d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d50: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D50u;
    SET_GPR_U32(ctx, 31, 0x1A5D58u);
    ctx->pc = 0x1A5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D50u;
    // 0x1a5d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D50u, 0x1A5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D58u;
label_1a5d58:
    // 0x1a5d58: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5d5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5d68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d70: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a5d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5d74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5D74u;
    {
        const bool branch_taken_0x1a5d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D74u;
        // 0x1a5d78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d74) {
            ctx->pc = 0x1A5D88u;
            goto label_1a5d88;
        }
    }
    ctx->pc = 0x1A5D7Cu;
    // 0x1a5d7c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D7Cu;
    // 0x1a5d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D7Cu, 0x1A5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5d88:
    // 0x1a5d88: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5D88u;
    {
        const bool branch_taken_0x1a5d88 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D88u;
        // 0x1a5d8c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d88) {
            ctx->pc = 0x1A5DA0u;
            goto label_1a5da0;
        }
    }
    ctx->pc = 0x1A5D90u;
    // 0x1a5d90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5d94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A5D98u;
    {
        const bool branch_taken_0x1a5d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D98u;
        // 0x1a5d9c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d98) {
            ctx->pc = 0x1A5E70u;
            goto label_1a5e70;
        }
    }
    ctx->pc = 0x1A5DA0u;
label_1a5da0:
    // 0x1a5da0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5da4: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5da8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5dac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a5dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5db0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A5DB0u;
    {
        const bool branch_taken_0x1a5db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB0u;
        // 0x1a5db4: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5db0) {
            ctx->pc = 0x1A5E60u;
            goto label_1a5e60;
        }
    }
    ctx->pc = 0x1A5DB8u;
    // 0x1a5db8: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x1a5dbc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5dc0: 0x28a30200  slti        $v1, $a1, 0x200
    ctx->pc = 0x1a5dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a5dc4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5DC4u;
    {
        const bool branch_taken_0x1a5dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5dc4) {
            ctx->pc = 0x1A5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5DC4u;
            // 0x1a5dc8: 0x28a20300  slti        $v0, $a1, 0x300 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)768) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DE8u;
            goto label_1a5de8;
        }
    }
    ctx->pc = 0x1A5DCCu;
    // 0x1a5dcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5dd0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5dd4: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1a5dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5ddc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5DDCu;
    {
        const bool branch_taken_0x1a5ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DDCu;
        // 0x1a5de0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ddc) {
            ctx->pc = 0x1A5E58u;
            goto label_1a5e58;
        }
    }
    ctx->pc = 0x1A5DE4u;
    // 0x1a5de4: 0x0  nop
    ctx->pc = 0x1a5de4u;
    // NOP
label_1a5de8:
    // 0x1a5de8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5DE8u;
    {
        const bool branch_taken_0x1a5de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x28a20400  slti        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5de8) {
            ctx->pc = 0x1A5E18u;
            goto label_1a5e18;
        }
    }
    ctx->pc = 0x1A5DF0u;
    // 0x1a5df0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5df4: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x1a5df8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5dfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5e00: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5E00u;
    {
        const bool branch_taken_0x1a5e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E00u;
        // 0x1a5e04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e00) {
            ctx->pc = 0x1A5E54u;
            goto label_1a5e54;
        }
    }
    ctx->pc = 0x1A5E08u;
    // 0x1a5e08: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5e0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5e10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5E10u;
    {
        const bool branch_taken_0x1a5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E10u;
        // 0x1a5e14: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e10) {
            ctx->pc = 0x1A5E54u;
            goto label_1a5e54;
        }
    }
    ctx->pc = 0x1A5E18u;
label_1a5e18:
    // 0x1a5e18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5E18u;
    {
        const bool branch_taken_0x1a5e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E18u;
        // 0x1a5e1c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e18) {
            ctx->pc = 0x1A5E48u;
            goto label_1a5e48;
        }
    }
    ctx->pc = 0x1A5E20u;
    // 0x1a5e20: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5e24: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x1a5e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x1a5e28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5e2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5e30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5E30u;
    {
        const bool branch_taken_0x1a5e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E30u;
        // 0x1a5e34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e30) {
            ctx->pc = 0x1A5E54u;
            goto label_1a5e54;
        }
    }
    ctx->pc = 0x1A5E38u;
    // 0x1a5e38: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5e3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5E40u;
    {
        const bool branch_taken_0x1a5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E40u;
        // 0x1a5e44: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e40) {
            ctx->pc = 0x1A5E54u;
            goto label_1a5e54;
        }
    }
    ctx->pc = 0x1A5E48u;
label_1a5e48:
    // 0x1a5e48: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5e4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5e50: 0x8c63f4b0  lw          $v1, -0xB50($v1)
    ctx->pc = 0x1a5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964400)));
label_1a5e54:
    // 0x1a5e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5e58:
    // 0x1a5e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5E58u;
    {
        const bool branch_taken_0x1a5e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E58u;
        // 0x1a5e5c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e58) {
            ctx->pc = 0x1A5E70u;
            goto label_1a5e70;
        }
    }
    ctx->pc = 0x1A5E60u;
label_1a5e60:
    // 0x1a5e60: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a5e64: 0x24a59428  addiu       $a1, $a1, -0x6BD8
    ctx->pc = 0x1a5e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939688));
    // 0x1a5e68: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5E68u;
    SET_GPR_U32(ctx, 31, 0x1A5E70u);
    ctx->pc = 0x1A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E68u;
    // 0x1a5e6c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5E68u, 0x1A5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E70u;
label_1a5e70:
    // 0x1a5e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E84u;
        // 0x1a5e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5E8Cu;
}
