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

// Function: entry_00190a7c
// Address: 0x190a7c - 0x190ae8
void entry_00190a7c_0x190a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190a7c_0x190a7c");
#endif

    ctx->pc = 0x190a7cu;

    // 0x190a7c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190a80: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x190a80u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a84: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x190a88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190a8c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x190a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x190a90: 0x2682b  sltu        $t5, $zero, $v0
    ctx->pc = 0x190a90u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190a94: 0xade70008  sw          $a3, 0x8($t7)
    ctx->pc = 0x190a94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 7));
    // 0x190a98: 0x24ee0010  addiu       $t6, $a3, 0x10
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190a9c: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x190A9Cu;
    {
        const bool branch_taken_0x190a9c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A9Cu;
        // 0x190aa0: 0x24eb0020  addiu       $t3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a9c) {
            ctx->pc = 0x190AE8u;
            return;
        }
    }
    ctx->pc = 0x190AA4u;
    // 0x190aa4: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x190aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190aa8: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x190aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x190aac: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190ab0: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190ab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190ab8: 0xfd640008  sd          $a0, 0x8($t3)
    ctx->pc = 0x190ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 4));
    // 0x190abc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190ac0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190ac4: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x190ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x190ac8: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190acc: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x190accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190ad0: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x190ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x190ad4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x190ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x190ad8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190adc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x190ADCu;
    {
        const bool branch_taken_0x190adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ADCu;
        // 0x190ae0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190adc) {
            ctx->pc = 0x190B18u;
            return;
        }
    }
    ctx->pc = 0x190AE4u;
    // 0x190ae4: 0x0  nop
    ctx->pc = 0x190ae4u;
    // NOP
    ctx->pc = 0x190ae8u;
}
