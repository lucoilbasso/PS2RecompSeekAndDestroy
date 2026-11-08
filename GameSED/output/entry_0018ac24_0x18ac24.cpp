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

// Function: entry_0018ac24
// Address: 0x18ac24 - 0x18ac90
void entry_0018ac24_0x18ac24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac24_0x18ac24");
#endif

    ctx->pc = 0x18ac24u;

    // 0x18ac24: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x18ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x18ac28: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x18ac2c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x18ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x18ac30: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x18ac30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ac34: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac38: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18ac3c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18ac40: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x18ac44: 0x24f40020  addiu       $s4, $a3, 0x20
    ctx->pc = 0x18ac44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x18ac48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18AC48u;
    {
        const bool branch_taken_0x18ac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC48u;
        // 0x18ac4c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac48) {
            ctx->pc = 0x18AC90u;
            return;
        }
    }
    ctx->pc = 0x18AC50u;
    // 0x18ac50: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x18ac50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x18ac54: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18ac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18ac58: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18ac5c: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x18ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18ac60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18ac64: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x18ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x18ac68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18ac6c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18ac70: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x18ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x18ac74: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18ac74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ac78: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x18ac78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x18ac7c: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x18ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18ac80: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18ac84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18ac88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18AC88u;
    {
        const bool branch_taken_0x18ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC88u;
        // 0x18ac8c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac88) {
            ctx->pc = 0x18ACC0u;
            return;
        }
    }
    ctx->pc = 0x18AC90u;
}
