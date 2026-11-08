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

// Function: entry_00191e30
// Address: 0x191e30 - 0x191e90
void entry_00191e30_0x191e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191e30_0x191e30");
#endif

    ctx->pc = 0x191e30u;

    // 0x191e30: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191e34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x191e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e38: 0x24680150  addiu       $t0, $v1, 0x150
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x191e3c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x191e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x191e40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x191e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x191e44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x191E44u;
    {
        const bool branch_taken_0x191e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E44u;
        // 0x191e48: 0x24f00020  addiu       $s0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e44) {
            ctx->pc = 0x191E90u;
            return;
        }
    }
    ctx->pc = 0x191E4Cu;
    // 0x191e4c: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x191e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x191e50: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x191e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x191e54: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x191e58: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x191e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x191e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191e60: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x191e60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x191e64: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x191e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x191e68: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191e6c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x191e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x191e70: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x191e74: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x191e74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x191e78: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x191e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x191e7c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x191e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x191e80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x191e84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x191E84u;
    {
        const bool branch_taken_0x191e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E84u;
        // 0x191e88: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e84) {
            ctx->pc = 0x191EC0u;
            return;
        }
    }
    ctx->pc = 0x191E8Cu;
    // 0x191e8c: 0x0  nop
    ctx->pc = 0x191e8cu;
    // NOP
    ctx->pc = 0x191e90u;
}
