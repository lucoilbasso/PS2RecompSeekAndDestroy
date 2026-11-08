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

// Function: _mbAddressIncrement
// Address: 0x1c0cc8 - 0x1c0dd8
void _mbAddressIncrement_0x1c0cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mbAddressIncrement_0x1c0cc8");
#endif

    switch (ctx->pc) {
        case 0x1c0d10u: goto label_1c0d10;
        case 0x1c0d18u: goto label_1c0d18;
        case 0x1c0d58u: goto label_1c0d58;
        case 0x1c0d7cu: goto label_1c0d7c;
        case 0x1c0d90u: goto label_1c0d90;
        default: break;
    }

    ctx->pc = 0x1c0cc8u;

    // 0x1c0cc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c0cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c0ccc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1c0cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1c0cd0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1c0cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1c0cd4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0cd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1c0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1c0cdc: 0x24160022  addiu       $s6, $zero, 0x22
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c0ce0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c0ce4: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c0ce8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c0ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c0cec: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1c0cf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c0cf4: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x1c0cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0cf8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c0cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c0cfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c0d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c0d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d10:
    // 0x1c0d10: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C0D10u;
    SET_GPR_U32(ctx, 31, 0x1C0D18u);
    ctx->pc = 0x1C0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D10u;
    // 0x1c0d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C0D10u, 0x1C0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D18u;
label_1c0d18:
    // 0x1c0d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d1c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D1Cu;
    {
        const bool branch_taken_0x1c0d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D1Cu;
        // 0x1c0d20: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d1c) {
            ctx->pc = 0x1C0D7Cu;
            goto label_1c0d7c;
        }
    }
    ctx->pc = 0x1C0D24u;
    // 0x1c0d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D24u;
    {
        const bool branch_taken_0x1c0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d24) {
            ctx->pc = 0x1C0D3Cu;
            goto label_1c0d3c;
        }
    }
    ctx->pc = 0x1C0D2Cu;
    // 0x1c0d2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D2Cu;
    {
        const bool branch_taken_0x1c0d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D2Cu;
        // 0x1c0d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d2c) {
            ctx->pc = 0x1C0D50u;
            goto label_1c0d50;
        }
    }
    ctx->pc = 0x1C0D34u;
    // 0x1c0d34: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0D34u;
    {
        const bool branch_taken_0x1c0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D34u;
        // 0x1c0d38: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d34) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D3Cu;
label_1c0d3c:
    // 0x1c0d3c: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D3Cu;
    {
        const bool branch_taken_0x1c0d3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x1c0d3c) {
            ctx->pc = 0x1C0D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0D3Cu;
            // 0x1c0d40: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D44u;
    // 0x1c0d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0D48u;
    {
        const bool branch_taken_0x1c0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D48u;
        // 0x1c0d4c: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d48) {
            ctx->pc = 0x1C0DA0u;
            goto label_1c0da0;
        }
    }
    ctx->pc = 0x1C0D50u;
label_1c0d50:
    // 0x1c0d50: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C0D50u;
    SET_GPR_U32(ctx, 31, 0x1C0D58u);
    ctx->pc = 0x1C0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D50u;
    // 0x1c0d54: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C0D50u, 0x1C0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D58u;
label_1c0d58:
    // 0x1c0d58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c0d58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d5c: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x1c0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x1c0d60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D60u;
    {
        const bool branch_taken_0x1c0d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D60u;
        // 0x1c0d64: 0x2685b510  addiu       $a1, $s4, -0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d60) {
            ctx->pc = 0x1C0D84u;
            goto label_1c0d84;
        }
    }
    ctx->pc = 0x1C0D68u;
    // 0x1c0d68: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0D68u;
    {
        const bool branch_taken_0x1c0d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D68u;
        // 0x1c0d6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d68) {
            ctx->pc = 0x1C0D88u;
            goto label_1c0d88;
        }
    }
    ctx->pc = 0x1C0D70u;
    // 0x1c0d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d74: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C0D74u;
    SET_GPR_U32(ctx, 31, 0x1C0D7Cu);
    ctx->pc = 0x1C0D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D74u;
    // 0x1c0d78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C0D74u, 0x1C0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D7Cu;
label_1c0d7c:
    // 0x1c0d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D7Cu;
    {
        const bool branch_taken_0x1c0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D7Cu;
        // 0x1c0d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d7c) {
            ctx->pc = 0x1C0DA0u;
            goto label_1c0da0;
        }
    }
    ctx->pc = 0x1C0D84u;
label_1c0d84:
    // 0x1c0d84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d88:
    // 0x1c0d88: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1C0D88u;
    SET_GPR_U32(ctx, 31, 0x1C0D90u);
    ctx->pc = 0x1C0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D88u;
    // 0x1c0d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1C0D88u, 0x1C0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x1c0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x1c0d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D94u;
    {
        const bool branch_taken_0x1c0d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D94u;
        // 0x1c0d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d94) {
            ctx->pc = 0x1C0DACu;
            goto label_1c0dac;
        }
    }
    ctx->pc = 0x1C0D9Cu;
label_1c0d9c:
    // 0x1c0d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0da0:
    // 0x1c0da0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C0DA0u;
    {
        const bool branch_taken_0x1c0da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA0u;
        // 0x1c0da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da0) {
            ctx->pc = 0x1C0D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0d10;
        }
    }
    ctx->pc = 0x1C0DA8u;
    // 0x1c0da8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0dac:
    // 0x1c0dac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c0dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0db0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1c0db0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0db4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c0db4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0db8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c0db8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0dbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c0dbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0dc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0dc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c0dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0dc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c0dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD0u;
        // 0x1c0dd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0DD8u;
}
