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

// Function: sceFormat
// Address: 0x1b3cd8 - 0x1b3f44
void sceFormat_0x1b3cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceFormat_0x1b3cd8");
#endif

    switch (ctx->pc) {
        case 0x1b3d20u: goto label_1b3d20;
        case 0x1b3d38u: goto label_1b3d38;
        case 0x1b3d58u: goto label_1b3d58;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3e00u: goto label_1b3e00;
        case 0x1b3e20u: goto label_1b3e20;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f14u: goto label_1b3f14;
        default: break;
    }

    ctx->pc = 0x1b3cd8u;

    // 0x1b3cd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b3cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b3cdc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b3ce0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b3ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b3ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ce8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b3ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b3cec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b3cecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cf0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b3cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b3cf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b3cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cf8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b3cfc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b3cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d00: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b3d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b3d04: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1b3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3d08: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b3d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b3d0c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b3d0cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b3d10: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b3d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b3d14: 0x26f39a80  addiu       $s3, $s7, -0x6580
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3d18: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B3D18u;
    SET_GPR_U32(ctx, 31, 0x1B3D20u);
    ctx->pc = 0x1B3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D18u;
    // 0x1b3d1c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B3D18u, 0x1B3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D20u;
label_1b3d20:
    // 0x1b3d20: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b3d24: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b3d28: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3D28u;
    {
        const bool branch_taken_0x1b3d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d28) {
            ctx->pc = 0x1B3D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D28u;
            // 0x1b3d2c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D3Cu;
            goto label_1b3d3c;
        }
    }
    ctx->pc = 0x1B3D30u;
    // 0x1b3d30: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B3D30u;
    SET_GPR_U32(ctx, 31, 0x1B3D38u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B3D30u, 0x1B3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D38u;
label_1b3d38:
    // 0x1b3d38: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b3d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b3d3c:
    // 0x1b3d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d40: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3d44: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B3D44u;
    {
        const bool branch_taken_0x1b3d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D44u;
        // 0x1b3d48: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d44) {
            ctx->pc = 0x1B3D84u;
            goto label_1b3d84;
        }
    }
    ctx->pc = 0x1B3D4Cu;
    // 0x1b3d4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b3d4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b3d50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3d54: 0x0  nop
    ctx->pc = 0x1b3d54u;
    // NOP
label_1b3d58:
    // 0x1b3d58: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b3d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b3d5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B3D5Cu;
    {
        const bool branch_taken_0x1b3d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D5Cu;
        // 0x1b3d60: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d5c) {
            ctx->pc = 0x1B3D88u;
            goto label_1b3d88;
        }
    }
    ctx->pc = 0x1B3D64u;
    // 0x1b3d64: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b3d68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3d6c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b3d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3d70: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b3d74: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3D74u;
    {
        const bool branch_taken_0x1b3d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d74) {
            ctx->pc = 0x1B3D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D74u;
            // 0x1b3d78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d58;
        }
    }
    ctx->pc = 0x1B3D7Cu;
    // 0x1b3d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D7Cu;
    {
        const bool branch_taken_0x1b3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D7Cu;
        // 0x1b3d80: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d7c) {
            ctx->pc = 0x1B3D8Cu;
            goto label_1b3d8c;
        }
    }
    ctx->pc = 0x1B3D84u;
label_1b3d84:
    // 0x1b3d84: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b3d84u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1b3d88:
    // 0x1b3d88: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b3d8c:
    // 0x1b3d8c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3D8Cu;
    {
        const bool branch_taken_0x1b3d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d8c) {
            ctx->pc = 0x1B3D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D8Cu;
            // 0x1b3d90: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D94u;
            goto label_1b3d94;
        }
    }
    ctx->pc = 0x1B3D94u;
label_1b3d94:
    // 0x1b3d94: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D94u;
    {
        const bool branch_taken_0x1b3d94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d94) {
            ctx->pc = 0x1B3D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3D94u;
            // 0x1b3d98: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3DA4u;
            goto label_1b3da4;
        }
    }
    ctx->pc = 0x1B3D9Cu;
    // 0x1b3d9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3D9Cu;
    {
        const bool branch_taken_0x1b3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D9Cu;
        // 0x1b3da0: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d9c) {
            ctx->pc = 0x1B3DF0u;
            goto label_1b3df0;
        }
    }
    ctx->pc = 0x1B3DA4u;
label_1b3da4:
    // 0x1b3da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3da8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3dac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3DACu;
    {
        const bool branch_taken_0x1b3dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dac) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3DB4u;
    // 0x1b3db4: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1b3db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1b3db8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3dbc: 0x0  nop
    ctx->pc = 0x1b3dbcu;
    // NOP
label_1b3dc0:
    // 0x1b3dc0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b3dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b3dc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3DC4u;
    {
        const bool branch_taken_0x1b3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DC4u;
        // 0x1b3dc8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dc4) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3DCCu;
    // 0x1b3dcc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3dd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3dd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b3dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3dd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b3ddc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3DDCu;
    {
        const bool branch_taken_0x1b3ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ddc) {
            ctx->pc = 0x1B3DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3DDCu;
            // 0x1b3de0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3dc0;
        }
    }
    ctx->pc = 0x1B3DE4u;
label_1b3de4:
    // 0x1b3de4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b3de8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3DE8u;
    {
        const bool branch_taken_0x1b3de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3de8) {
            ctx->pc = 0x1B3DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3DE8u;
            // 0x1b3dec: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3DF0u;
            goto label_1b3df0;
        }
    }
    ctx->pc = 0x1B3DF0u;
label_1b3df0:
    // 0x1b3df0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3DF0u;
    {
        const bool branch_taken_0x1b3df0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3df0) {
            ctx->pc = 0x1B3E08u;
            goto label_1b3e08;
        }
    }
    ctx->pc = 0x1B3DF8u;
    // 0x1b3df8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3DF8u;
    SET_GPR_U32(ctx, 31, 0x1B3E00u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3DF8u, 0x1B3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E00u;
label_1b3e00:
    // 0x1b3e00: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B3E00u;
    {
        const bool branch_taken_0x1b3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E00u;
        // 0x1b3e04: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e00) {
            ctx->pc = 0x1B3F18u;
            goto label_1b3f18;
        }
    }
    ctx->pc = 0x1B3E08u;
label_1b3e08:
    // 0x1b3e08: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B3E08u;
    {
        const bool branch_taken_0x1b3e08 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E08u;
        // 0x1b3e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e08) {
            ctx->pc = 0x1B3E48u;
            goto label_1b3e48;
        }
    }
    ctx->pc = 0x1B3E10u;
    // 0x1b3e10: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x1b3e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x1b3e14: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b3e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3e18: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3e18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3e1c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3e1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b3e20:
    // 0x1b3e20: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1b3e24: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3e28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3e2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3e30: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1b3e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3e34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3e38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3E38u;
    {
        const bool branch_taken_0x1b3e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e38) {
            ctx->pc = 0x1B3E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e20;
        }
    }
    ctx->pc = 0x1B3E40u;
    // 0x1b3e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3E40u;
    {
        const bool branch_taken_0x1b3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E40u;
        // 0x1b3e44: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e40) {
            ctx->pc = 0x1B3E58u;
            goto label_1b3e58;
        }
    }
    ctx->pc = 0x1B3E48u;
label_1b3e48:
    // 0x1b3e48: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b3e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3e4c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3e50: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b3e54: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x1b3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_1b3e58:
    // 0x1b3e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3e5c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3e60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3e64: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3e68: 0x26f09a80  addiu       $s0, $s7, -0x6580
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3e6c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b3e70: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3E70u;
    SET_GPR_U32(ctx, 31, 0x1B3E78u);
    ctx->pc = 0x1B3E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E70u;
    // 0x1b3e74: 0x2694a6c0  addiu       $s4, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3E70u, 0x1B3E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E78u;
label_1b3e78:
    // 0x1b3e78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3e84: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1b3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1b3e88: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b3e8c: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1b3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1b3e90: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B3E90u;
    SET_GPR_U32(ctx, 31, 0x1B3E98u);
    ctx->pc = 0x1B3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E90u;
    // 0x1b3e94: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B3E90u, 0x1B3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E98u;
label_1b3e98:
    // 0x1b3e98: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ea0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3ea4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eac: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1b3eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eb4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3eb8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3EB8u;
    SET_GPR_U32(ctx, 31, 0x1B3EC0u);
    ctx->pc = 0x1B3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EB8u;
    // 0x1b3ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3EB8u, 0x1B3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EC0u;
label_1b3ec0:
    // 0x1b3ec0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3EC0u;
    {
        const bool branch_taken_0x1b3ec0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EC0u;
        // 0x1b3ec4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ec0) {
            ctx->pc = 0x1B3EE0u;
            goto label_1b3ee0;
        }
    }
    ctx->pc = 0x1B3EC8u;
    // 0x1b3ec8: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3EC8u;
    SET_GPR_U32(ctx, 31, 0x1B3ED0u);
    ctx->pc = 0x1B3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EC8u;
    // 0x1b3ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3EC8u, 0x1B3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED0u;
label_1b3ed0:
    // 0x1b3ed0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3ED0u;
    SET_GPR_U32(ctx, 31, 0x1B3ED8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3ED0u, 0x1B3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED8u;
label_1b3ed8:
    // 0x1b3ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3ED8u;
    {
        const bool branch_taken_0x1b3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3ED8u;
        // 0x1b3edc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ed8) {
            ctx->pc = 0x1B3F18u;
            goto label_1b3f18;
        }
    }
    ctx->pc = 0x1B3EE0u;
label_1b3ee0:
    // 0x1b3ee0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b3ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3ee4: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3EE4u;
    SET_GPR_U32(ctx, 31, 0x1B3EECu);
    ctx->pc = 0x1B3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EE4u;
    // 0x1b3ee8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3EE4u, 0x1B3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EECu;
label_1b3eec:
    // 0x1b3eec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3EECu;
    {
        const bool branch_taken_0x1b3eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3eec) {
            ctx->pc = 0x1B3F04u;
            goto label_1b3f04;
        }
    }
    ctx->pc = 0x1B3EF4u;
    // 0x1b3ef4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3EF4u;
    SET_GPR_U32(ctx, 31, 0x1B3EFCu);
    ctx->pc = 0x1B3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EF4u;
    // 0x1b3ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3EF4u, 0x1B3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EFCu;
label_1b3efc:
    // 0x1b3efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3EFCu;
    {
        const bool branch_taken_0x1b3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EFCu;
        // 0x1b3f00: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3efc) {
            ctx->pc = 0x1B3F18u;
            goto label_1b3f18;
        }
    }
    ctx->pc = 0x1B3F04u;
label_1b3f04:
    // 0x1b3f04: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B3F04u;
    SET_GPR_U32(ctx, 31, 0x1B3F0Cu);
    ctx->pc = 0x1B3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F04u;
    // 0x1b3f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B3F04u, 0x1B3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F0Cu;
label_1b3f0c:
    // 0x1b3f0c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F14u);
    ctx->pc = 0x1B3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F0Cu;
    // 0x1b3f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3F0Cu, 0x1B3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F14u;
label_1b3f14:
    // 0x1b3f14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3f18:
    // 0x1b3f18: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b3f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3f1c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b3f1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3f20: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b3f20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b3f24: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3f28: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b3f28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3f2c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b3f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f30: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b3f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3f34: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b3f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3f38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F3Cu;
        // 0x1b3f40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3F44u;
}
