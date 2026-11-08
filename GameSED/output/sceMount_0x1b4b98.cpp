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

// Function: sceMount
// Address: 0x1b4b98 - 0x1b4e04
void sceMount_0x1b4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMount_0x1b4b98");
#endif

    switch (ctx->pc) {
        case 0x1b4be8u: goto label_1b4be8;
        case 0x1b4c00u: goto label_1b4c00;
        case 0x1b4c20u: goto label_1b4c20;
        case 0x1b4c78u: goto label_1b4c78;
        case 0x1b4cb8u: goto label_1b4cb8;
        case 0x1b4cd8u: goto label_1b4cd8;
        case 0x1b4d34u: goto label_1b4d34;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d7cu: goto label_1b4d7c;
        case 0x1b4d8cu: goto label_1b4d8c;
        case 0x1b4d94u: goto label_1b4d94;
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4db8u: goto label_1b4db8;
        case 0x1b4dc8u: goto label_1b4dc8;
        case 0x1b4dd0u: goto label_1b4dd0;
        default: break;
    }

    ctx->pc = 0x1b4b98u;

    // 0x1b4b98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b4b9c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b4ba0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b4ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b4ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ba8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b4bac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b4bacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bb0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b4bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b4bb4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b4bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bb8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b4bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b4bbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b4bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bc0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1b4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1b4bc4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b4bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bc8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b4bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b4bcc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1b4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4bd0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1b4bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1b4bd4: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b4bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b4bd8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b4bdc: 0x27d29a80  addiu       $s2, $fp, -0x6580
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b4be0: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B4BE0u;
    SET_GPR_U32(ctx, 31, 0x1B4BE8u);
    ctx->pc = 0x1B4BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BE0u;
    // 0x1b4be4: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B4BE0u, 0x1B4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BE8u;
label_1b4be8:
    // 0x1b4be8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b4bec: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b4becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4bf0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4BF0u;
    {
        const bool branch_taken_0x1b4bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bf0) {
            ctx->pc = 0x1B4BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4BF0u;
            // 0x1b4bf4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C04u;
            goto label_1b4c04;
        }
    }
    ctx->pc = 0x1B4BF8u;
    // 0x1b4bf8: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B4BF8u;
    SET_GPR_U32(ctx, 31, 0x1B4C00u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B4BF8u, 0x1B4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C00u;
label_1b4c00:
    // 0x1b4c00: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b4c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4c04:
    // 0x1b4c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c08: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4c0c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4C0Cu;
    {
        const bool branch_taken_0x1b4c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C0Cu;
        // 0x1b4c10: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c0c) {
            ctx->pc = 0x1B4C4Cu;
            goto label_1b4c4c;
        }
    }
    ctx->pc = 0x1B4C14u;
    // 0x1b4c14: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b4c14u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b4c18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b4c1c: 0x0  nop
    ctx->pc = 0x1b4c1cu;
    // NOP
label_1b4c20:
    // 0x1b4c20: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4c24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4C24u;
    {
        const bool branch_taken_0x1b4c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C24u;
        // 0x1b4c28: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c24) {
            ctx->pc = 0x1B4C50u;
            goto label_1b4c50;
        }
    }
    ctx->pc = 0x1B4C2Cu;
    // 0x1b4c2c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b4c30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4c34: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b4c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4c38: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4c3c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4C3Cu;
    {
        const bool branch_taken_0x1b4c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c3c) {
            ctx->pc = 0x1B4C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C3Cu;
            // 0x1b4c40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4c20;
        }
    }
    ctx->pc = 0x1B4C44u;
    // 0x1b4c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4C44u;
    {
        const bool branch_taken_0x1b4c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C44u;
        // 0x1b4c48: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c44) {
            ctx->pc = 0x1B4C54u;
            goto label_1b4c54;
        }
    }
    ctx->pc = 0x1B4C4Cu;
label_1b4c4c:
    // 0x1b4c4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b4c4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1b4c50:
    // 0x1b4c50: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b4c54:
    // 0x1b4c54: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4C54u;
    {
        const bool branch_taken_0x1b4c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4c54) {
            ctx->pc = 0x1B4C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C54u;
            // 0x1b4c58: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C5Cu;
            goto label_1b4c5c;
        }
    }
    ctx->pc = 0x1B4C5Cu;
label_1b4c5c:
    // 0x1b4c5c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1b4c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c64: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4c68: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4C68u;
    {
        const bool branch_taken_0x1b4c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C68u;
        // 0x1b4c6c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c68) {
            ctx->pc = 0x1B4C9Cu;
            goto label_1b4c9c;
        }
    }
    ctx->pc = 0x1B4C70u;
    // 0x1b4c70: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b4c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b4c74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b4c78:
    // 0x1b4c78: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4c7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4C7Cu;
    {
        const bool branch_taken_0x1b4c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C7Cu;
        // 0x1b4c80: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c7c) {
            ctx->pc = 0x1B4C9Cu;
            goto label_1b4c9c;
        }
    }
    ctx->pc = 0x1B4C84u;
    // 0x1b4c84: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b4c88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4c8c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b4c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4c90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4c94: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4C94u;
    {
        const bool branch_taken_0x1b4c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c94) {
            ctx->pc = 0x1B4C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C94u;
            // 0x1b4c98: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4c78;
        }
    }
    ctx->pc = 0x1B4C9Cu;
label_1b4c9c:
    // 0x1b4c9c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b4ca0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4CA0u;
    {
        const bool branch_taken_0x1b4ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ca0) {
            ctx->pc = 0x1B4CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4CA0u;
            // 0x1b4ca4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4CA8u;
            goto label_1b4ca8;
        }
    }
    ctx->pc = 0x1B4CA8u;
label_1b4ca8:
    // 0x1b4ca8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CA8u;
    {
        const bool branch_taken_0x1b4ca8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ca8) {
            ctx->pc = 0x1B4CC0u;
            goto label_1b4cc0;
        }
    }
    ctx->pc = 0x1B4CB0u;
    // 0x1b4cb0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4CB0u;
    SET_GPR_U32(ctx, 31, 0x1B4CB8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4CB0u, 0x1B4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CB8u;
label_1b4cb8:
    // 0x1b4cb8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1B4CB8u;
    {
        const bool branch_taken_0x1b4cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CB8u;
        // 0x1b4cbc: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cb8) {
            ctx->pc = 0x1B4DD4u;
            goto label_1b4dd4;
        }
    }
    ctx->pc = 0x1B4CC0u;
label_1b4cc0:
    // 0x1b4cc0: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4CC0u;
    {
        const bool branch_taken_0x1b4cc0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CC0u;
        // 0x1b4cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cc0) {
            ctx->pc = 0x1B4D00u;
            goto label_1b4d00;
        }
    }
    ctx->pc = 0x1B4CC8u;
    // 0x1b4cc8: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x1b4ccc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4cd0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4cd4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b4cd8:
    // 0x1b4cd8: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1b4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1b4cdc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b4ce0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b4ce8: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1b4ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b4cec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b4cecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4cf0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B4CF0u;
    {
        const bool branch_taken_0x1b4cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cf0) {
            ctx->pc = 0x1B4CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4cd8;
        }
    }
    ctx->pc = 0x1B4CF8u;
    // 0x1b4cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CF8u;
    {
        const bool branch_taken_0x1b4cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CF8u;
        // 0x1b4cfc: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cf8) {
            ctx->pc = 0x1B4D10u;
            goto label_1b4d10;
        }
    }
    ctx->pc = 0x1B4D00u;
label_1b4d00:
    // 0x1b4d00: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4d04: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4d08: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4d0c: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1b4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_1b4d10:
    // 0x1b4d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d14: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1b4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1b4d18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4d1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4d20: 0x27d09a80  addiu       $s0, $fp, -0x6580
    ctx->pc = 0x1b4d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b4d24: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4d28: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b4d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b4d2c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D34u);
    ctx->pc = 0x1B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D2Cu;
    // 0x1b4d30: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4D2Cu, 0x1B4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D34u;
label_1b4d34:
    // 0x1b4d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d40: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b4d44: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4d48: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1b4d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1b4d4c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D54u);
    ctx->pc = 0x1B4D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D4Cu;
    // 0x1b4d50: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B4D4Cu, 0x1B4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D54u;
label_1b4d54:
    // 0x1b4d54: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b4d58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4d60: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d68: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1b4d6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d74: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4D74u;
    SET_GPR_U32(ctx, 31, 0x1B4D7Cu);
    ctx->pc = 0x1B4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D74u;
    // 0x1b4d78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4D74u, 0x1B4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D7Cu;
label_1b4d7c:
    // 0x1b4d7c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4D7Cu;
    {
        const bool branch_taken_0x1b4d7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D7Cu;
        // 0x1b4d80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d7c) {
            ctx->pc = 0x1B4D9Cu;
            goto label_1b4d9c;
        }
    }
    ctx->pc = 0x1B4D84u;
    // 0x1b4d84: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4D84u;
    SET_GPR_U32(ctx, 31, 0x1B4D8Cu);
    ctx->pc = 0x1B4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D84u;
    // 0x1b4d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4D84u, 0x1B4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D8Cu;
label_1b4d8c:
    // 0x1b4d8c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D94u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4D8Cu, 0x1B4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D94u;
label_1b4d94:
    // 0x1b4d94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4D94u;
    {
        const bool branch_taken_0x1b4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D94u;
        // 0x1b4d98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d94) {
            ctx->pc = 0x1B4DD4u;
            goto label_1b4dd4;
        }
    }
    ctx->pc = 0x1B4D9Cu;
label_1b4d9c:
    // 0x1b4d9c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b4da0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4DA0u;
    SET_GPR_U32(ctx, 31, 0x1B4DA8u);
    ctx->pc = 0x1B4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DA0u;
    // 0x1b4da4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4DA0u, 0x1B4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DA8u;
label_1b4da8:
    // 0x1b4da8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4DA8u;
    {
        const bool branch_taken_0x1b4da8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4da8) {
            ctx->pc = 0x1B4DC0u;
            goto label_1b4dc0;
        }
    }
    ctx->pc = 0x1B4DB0u;
    // 0x1b4db0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4DB0u;
    SET_GPR_U32(ctx, 31, 0x1B4DB8u);
    ctx->pc = 0x1B4DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DB0u;
    // 0x1b4db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4DB0u, 0x1B4DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DB8u;
label_1b4db8:
    // 0x1b4db8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4DB8u;
    {
        const bool branch_taken_0x1b4db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DB8u;
        // 0x1b4dbc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4db8) {
            ctx->pc = 0x1B4DD4u;
            goto label_1b4dd4;
        }
    }
    ctx->pc = 0x1B4DC0u;
label_1b4dc0:
    // 0x1b4dc0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4DC0u;
    SET_GPR_U32(ctx, 31, 0x1B4DC8u);
    ctx->pc = 0x1B4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DC0u;
    // 0x1b4dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4DC0u, 0x1B4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DC8u;
label_1b4dc8:
    // 0x1b4dc8: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4DC8u;
    SET_GPR_U32(ctx, 31, 0x1B4DD0u);
    ctx->pc = 0x1B4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DC8u;
    // 0x1b4dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4DC8u, 0x1B4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DD0u;
label_1b4dd0:
    // 0x1b4dd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4dd4:
    // 0x1b4dd4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b4dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b4dd8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1b4dd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b4ddc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b4ddcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b4de0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b4de0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4de4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4de8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b4de8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4dec: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b4decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4df0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b4df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4df4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b4df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4df8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b4df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DFCu;
        // 0x1b4e00: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4E04u;
}
