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

// Function: vsprintf__FPcT0Pv
// Address: 0x19b098 - 0x19b470
void vsprintf__FPcT0Pv_0x19b098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vsprintf__FPcT0Pv_0x19b098");
#endif

    switch (ctx->pc) {
        case 0x19b0c0u: goto label_19b0c0;
        case 0x19b100u: goto label_19b100;
        case 0x19b160u: goto label_19b160;
        case 0x19b1d8u: goto label_19b1d8;
        case 0x19b208u: goto label_19b208;
        case 0x19b24cu: goto label_19b24c;
        case 0x19b254u: goto label_19b254;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b294u: goto label_19b294;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2f4u: goto label_19b2f4;
        case 0x19b330u: goto label_19b330;
        case 0x19b348u: goto label_19b348;
        case 0x19b368u: goto label_19b368;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b400u: goto label_19b400;
        case 0x19b448u: goto label_19b448;
        default: break;
    }

    ctx->pc = 0x19b098u;

    // 0x19b098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19b09c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x19b0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0a4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x19b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x19b0a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x19b0b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x19B0B4u;
    {
        const bool branch_taken_0x19b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B4u;
        // 0x19b0b8: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0b4) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B0BCu;
    // 0x19b0bc: 0x0  nop
    ctx->pc = 0x19b0bcu;
    // NOP
label_19b0c0:
    // 0x19b0c0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x19b0c4: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b0c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b0cc: 0x544300dc  bnel        $v0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x19B0CCu;
    {
        const bool branch_taken_0x19b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b0cc) {
            ctx->pc = 0x19B0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B0CCu;
            // 0x19b0d0: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b0d8: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19b0dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19b0e0: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19b0e4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19b0e8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19b0e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ec: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19b0ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b0f0: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19b0f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19b0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b0f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B0F8u;
    {
        const bool branch_taken_0x19b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0F8u;
        // 0x19b0fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0f8) {
            ctx->pc = 0x19B130u;
            goto label_19b130;
        }
    }
    ctx->pc = 0x19B100u;
label_19b100:
    // 0x19b100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b104: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x19b108: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19b10c: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19b10cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b110: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19b114: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b118: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19b11c: 0x24c4ffd0  addiu       $a0, $a2, -0x30
    ctx->pc = 0x19b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19b120: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19b124: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19b124u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b128: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19B128u;
    {
        const bool branch_taken_0x19b128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x2447ffd0  addiu       $a3, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b128) {
            ctx->pc = 0x19B100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b100;
        }
    }
    ctx->pc = 0x19B130u;
label_19b130:
    // 0x19b130: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x19b130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x19b134: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19b138: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b13c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B13Cu;
    {
        const bool branch_taken_0x19b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B13Cu;
        // 0x19b140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b13c) {
            ctx->pc = 0x19B198u;
            goto label_19b198;
        }
    }
    ctx->pc = 0x19B144u;
    // 0x19b144: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b148: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x19b148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b14c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19b14cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b150: 0x24e2ffd0  addiu       $v0, $a3, -0x30
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x19b154: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19b154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b158: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B158u;
    {
        const bool branch_taken_0x19b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B158u;
        // 0x19b15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b158) {
            ctx->pc = 0x19B190u;
            goto label_19b190;
        }
    }
    ctx->pc = 0x19B160u;
label_19b160:
    // 0x19b160: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b164: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x19b168: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19b16c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19b16cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b170: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19b174: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b178: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19b17c: 0x24e4ffd0  addiu       $a0, $a3, -0x30
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x19b180: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19b184: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19b184u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b188: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19B188u;
    {
        const bool branch_taken_0x19b188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B188u;
        // 0x19b18c: 0x2446ffd0  addiu       $a2, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b188) {
            ctx->pc = 0x19B160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b160;
        }
    }
    ctx->pc = 0x19B190u;
label_19b190:
    // 0x19b190: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x19b190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x19b194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b198:
    // 0x19b198: 0x82470000  lb          $a3, 0x0($s2)
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19b19c: 0x24e3ffdb  addiu       $v1, $a3, -0x25
    ctx->pc = 0x19b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967259));
    // 0x19b1a0: 0x2c620054  sltiu       $v0, $v1, 0x54
    ctx->pc = 0x19b1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x19b1a4: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x19B1A4u;
    {
        const bool branch_taken_0x19b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1A4u;
        // 0x19b1a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1a4) {
            ctx->pc = 0x19B428u;
            goto label_19b428;
        }
    }
    ctx->pc = 0x19B1ACu;
    // 0x19b1ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b1b0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x19b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x19b1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b1b8: 0x8c638520  lw          $v1, -0x7AE0($v1)
    ctx->pc = 0x19b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935840)));
    // 0x19b1bc: 0x600008  jr          $v1
    ctx->pc = 0x19B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B1C8u: goto label_19b1c8;
            case 0x19B1E8u: goto label_19b1e8;
            case 0x19B230u: goto label_19b230;
            case 0x19B268u: goto label_19b268;
            case 0x19B2A0u: goto label_19b2a0;
            case 0x19B2D0u: goto label_19b2d0;
            case 0x19B300u: goto label_19b300;
            case 0x19B320u: goto label_19b320;
            case 0x19B390u: goto label_19b390;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B428u: goto label_19b428;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B1BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19B1C4u;
    // 0x19b1c4: 0x0  nop
    ctx->pc = 0x19b1c4u;
    // NOP
label_19b1c8:
    // 0x19b1c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1cc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x19b1ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b1d0: 0xc072978  jal         func_1CA5E0
    ctx->pc = 0x19B1D0u;
    SET_GPR_U32(ctx, 31, 0x19B1D8u);
    ctx->pc = 0x19B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1D0u;
    // 0x19b1d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA5E0u, 0x19B1D0u, 0x19B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1D8u;
label_19b1d8:
    // 0x19b1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b1e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19B1E0u;
    {
        const bool branch_taken_0x19b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1E0u;
        // 0x19b1e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1e0) {
            ctx->pc = 0x19B254u;
            goto label_19b254;
        }
    }
    ctx->pc = 0x19B1E8u;
label_19b1e8:
    // 0x19b1e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b1ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x19b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b1f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19b1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19b1f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19B1F8u;
    {
        const bool branch_taken_0x19b1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1F8u;
        // 0x19b1fc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f8) {
            ctx->pc = 0x19B24Cu;
            goto label_19b24c;
        }
    }
    ctx->pc = 0x19B200u;
    // 0x19b200: 0xc78085d0  lwc1        $f0, -0x7A30($gp)
    ctx->pc = 0x19b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b204: 0x0  nop
    ctx->pc = 0x19b204u;
    // NOP
label_19b208:
    // 0x19b208: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19b20c: 0x0  nop
    ctx->pc = 0x19b20cu;
    // NOP
    // 0x19b210: 0x0  nop
    ctx->pc = 0x19b210u;
    // NOP
    // 0x19b214: 0x0  nop
    ctx->pc = 0x19b214u;
    // NOP
    // 0x19b218: 0x0  nop
    ctx->pc = 0x19b218u;
    // NOP
    // 0x19b21c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B21Cu;
    {
        const bool branch_taken_0x19b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B21Cu;
        // 0x19b220: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b21c) {
            ctx->pc = 0x19B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b208;
        }
    }
    ctx->pc = 0x19B224u;
    // 0x19b224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B224u;
    {
        const bool branch_taken_0x19b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B224u;
        // 0x19b228: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b224) {
            ctx->pc = 0x19B250u;
            goto label_19b250;
        }
    }
    ctx->pc = 0x19B22Cu;
    // 0x19b22c: 0x0  nop
    ctx->pc = 0x19b22cu;
    // NOP
label_19b230:
    // 0x19b230: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x19b230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b234: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b238: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b23c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x19b23cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19b240: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x19b240u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19b244: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19b244u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19b248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19b24c:
    // 0x19b24c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19b250:
    // 0x19b250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b254:
    // 0x19b254: 0xc066a7c  jal         func_19A9F0
    ctx->pc = 0x19B254u;
    SET_GPR_U32(ctx, 31, 0x19B25Cu);
    ctx->pc = 0x19B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B254u;
    // 0x19b258: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9F0u, 0x19B254u, 0x19B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B25Cu;
label_19b25c:
    // 0x19b25c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x19B25Cu;
    {
        const bool branch_taken_0x19b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B25Cu;
        // 0x19b260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b25c) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x0  nop
    ctx->pc = 0x19b264u;
    // NOP
label_19b268:
    // 0x19b268: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b26c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b270: 0x38e70075  xori        $a3, $a3, 0x75
    ctx->pc = 0x19b270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)117);
    // 0x19b274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b278: 0x84027  nor         $t0, $zero, $t0
    ctx->pc = 0x19b278u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x19b27c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b284: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x19b284u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19b288: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x19b288u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x19b28c: 0xc066b00  jal         func_19AC00
    ctx->pc = 0x19B28Cu;
    SET_GPR_U32(ctx, 31, 0x19B294u);
    ctx->pc = 0x19B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B28Cu;
    // 0x19b290: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AC00u, 0x19B28Cu, 0x19B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B294u;
label_19b294:
    // 0x19b294: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x19B294u;
    {
        const bool branch_taken_0x19b294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B294u;
        // 0x19b298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b294) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B29Cu;
    // 0x19b29c: 0x0  nop
    ctx->pc = 0x19b29cu;
    // NOP
label_19b2a0:
    // 0x19b2a0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b2a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2b0: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x19b2b0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x19b2b4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b2b8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x19b2bc: 0xc066b7e  jal         func_19ADF8
    ctx->pc = 0x19B2BCu;
    SET_GPR_U32(ctx, 31, 0x19B2C4u);
    ctx->pc = 0x19B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2BCu;
    // 0x19b2c0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ADF8u, 0x19B2BCu, 0x19B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2C4u;
label_19b2c4:
    // 0x19b2c4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x19B2C4u;
    {
        const bool branch_taken_0x19b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2C4u;
        // 0x19b2c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2c4) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B2CCu;
    // 0x19b2cc: 0x0  nop
    ctx->pc = 0x19b2ccu;
    // NOP
label_19b2d0:
    // 0x19b2d0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b2d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b2dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2e0: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x19b2e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x19b2e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b2e8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x19b2ec: 0xc066bd4  jal         func_19AF50
    ctx->pc = 0x19B2ECu;
    SET_GPR_U32(ctx, 31, 0x19B2F4u);
    ctx->pc = 0x19B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2ECu;
    // 0x19b2f0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AF50u, 0x19B2ECu, 0x19B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F4u;
label_19b2f4:
    // 0x19b2f4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19B2F4u;
    {
        const bool branch_taken_0x19b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F4u;
        // 0x19b2f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2f4) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B2FCu;
    // 0x19b2fc: 0x0  nop
    ctx->pc = 0x19b2fcu;
    // NOP
label_19b300:
    // 0x19b300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b304: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b308: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x19b308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b30c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x19b30cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b314: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x19B314u;
    {
        const bool branch_taken_0x19b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B314u;
        // 0x19b318: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b314) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B31Cu;
    // 0x19b31c: 0x0  nop
    ctx->pc = 0x19b31cu;
    // NOP
label_19b320:
    // 0x19b320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b324: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B328u;
    {
        const bool branch_taken_0x19b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B328u;
        // 0x19b32c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b328) {
            ctx->pc = 0x19B348u;
            goto label_19b348;
        }
    }
    ctx->pc = 0x19B330u;
label_19b330:
    // 0x19b330: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b334: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b338: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b33c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b344: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19b344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19b348:
    // 0x19b348: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b34c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B34Cu;
    {
        const bool branch_taken_0x19b34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B34Cu;
        // 0x19b350: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b34c) {
            ctx->pc = 0x19B330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b330;
        }
    }
    ctx->pc = 0x19B354u;
    // 0x19b354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b358: 0x5840003c  blezl       $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19B358u;
    {
        const bool branch_taken_0x19b358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b358) {
            ctx->pc = 0x19B35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B358u;
            // 0x19b35c: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B44Cu;
            goto label_19b44c;
        }
    }
    ctx->pc = 0x19B360u;
    // 0x19b360: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b364: 0x0  nop
    ctx->pc = 0x19b364u;
    // NOP
label_19b368:
    // 0x19b368: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b36c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b370: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b378: 0x0  nop
    ctx->pc = 0x19b378u;
    // NOP
    // 0x19b37c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B37Cu;
    {
        const bool branch_taken_0x19b37c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B37Cu;
        // 0x19b380: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b37c) {
            ctx->pc = 0x19B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b368;
        }
    }
    ctx->pc = 0x19B384u;
    // 0x19b384: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19B384u;
    {
        const bool branch_taken_0x19b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B384u;
        // 0x19b388: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b384) {
            ctx->pc = 0x19B44Cu;
            goto label_19b44c;
        }
    }
    ctx->pc = 0x19B38Cu;
    // 0x19b38c: 0x0  nop
    ctx->pc = 0x19b38cu;
    // NOP
label_19b390:
    // 0x19b390: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x19b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b394: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b398: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19B398u;
    {
        const bool branch_taken_0x19b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B398u;
        // 0x19b39c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b398) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B3A0u;
label_19b3a0:
    // 0x19b3a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3a4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b3a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b3ac: 0xc066d74  jal         func_19B5D0
    ctx->pc = 0x19B3ACu;
    SET_GPR_U32(ctx, 31, 0x19B3B4u);
    ctx->pc = 0x19B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3ACu;
    // 0x19b3b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5D0u, 0x19B3ACu, 0x19B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x19b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x19b3b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b3bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B3BCu;
    {
        const bool branch_taken_0x19b3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3BCu;
        // 0x19b3c0: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3bc) {
            ctx->pc = 0x19B3ECu;
            goto label_19b3ec;
        }
    }
    ctx->pc = 0x19B3C4u;
    // 0x19b3c4: 0x0  nop
    ctx->pc = 0x19b3c4u;
    // NOP
label_19b3c8:
    // 0x19b3c8: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x19b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19b3cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b3d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b3d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b3dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19b3e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19b3e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b3e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B3E4u;
    {
        const bool branch_taken_0x19b3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3E4u;
        // 0x19b3e8: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3e4) {
            ctx->pc = 0x19B3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b3c8;
        }
    }
    ctx->pc = 0x19B3ECu;
label_19b3ec:
    // 0x19b3ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3f0: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19B3F0u;
    {
        const bool branch_taken_0x19b3f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b3f0) {
            ctx->pc = 0x19B3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B3F0u;
            // 0x19b3f4: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B44Cu;
            goto label_19b44c;
        }
    }
    ctx->pc = 0x19B3F8u;
    // 0x19b3f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b3fc: 0x0  nop
    ctx->pc = 0x19b3fcu;
    // NOP
label_19b400:
    // 0x19b400: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19b400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b408: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b40c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b410: 0x0  nop
    ctx->pc = 0x19b410u;
    // NOP
    // 0x19b414: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B414u;
    {
        const bool branch_taken_0x19b414 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B414u;
        // 0x19b418: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b414) {
            ctx->pc = 0x19B400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b400;
        }
    }
    ctx->pc = 0x19B41Cu;
    // 0x19b41c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19B41Cu;
    {
        const bool branch_taken_0x19b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b41c) {
            ctx->pc = 0x19B44Cu;
            goto label_19b44c;
        }
    }
    ctx->pc = 0x19B424u;
    // 0x19b424: 0x0  nop
    ctx->pc = 0x19b424u;
    // NOP
label_19b428:
    // 0x19b428: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x19b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b42c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b434: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x19b434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19b438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B438u;
    {
        const bool branch_taken_0x19b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B438u;
        // 0x19b43c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b438) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B440u;
label_19b440:
    // 0x19b440: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b444: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19b448:
    // 0x19b448: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_19b44c:
    // 0x19b44c: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x19B44Cu;
    {
        const bool branch_taken_0x19b44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B44Cu;
        // 0x19b450: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b44c) {
            ctx->pc = 0x19B0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b0c0;
        }
    }
    ctx->pc = 0x19B454u;
    // 0x19b454: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x19b454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b458: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x19b458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19b45c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19b45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b460: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19b460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b464: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19b468: 0x3e00008  jr          $ra
    ctx->pc = 0x19B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B468u;
        // 0x19b46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B470u;
}
