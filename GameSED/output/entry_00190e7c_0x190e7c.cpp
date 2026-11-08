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

// Function: entry_00190e7c
// Address: 0x190e7c - 0x190ee0
void entry_00190e7c_0x190e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e7c_0x190e7c");
#endif

    ctx->pc = 0x190e7cu;

    // 0x190e7c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x190e7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190e84: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x190e88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190e8c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x190e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x190e90: 0xaea70008  sw          $a3, 0x8($s5)
    ctx->pc = 0x190e90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 7));
    // 0x190e94: 0x24ea0010  addiu       $t2, $a3, 0x10
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190e98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190E98u;
    {
        const bool branch_taken_0x190e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E98u;
        // 0x190e9c: 0x24f80020  addiu       $t8, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e98) {
            ctx->pc = 0x190EE0u;
            return;
        }
    }
    ctx->pc = 0x190EA0u;
    // 0x190ea0: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x190ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190ea4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x190ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x190ea8: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x190ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190eac: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x190eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190eb4: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x190eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x190eb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190ebc: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x190ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190ec0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x190ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x190ec4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190ec8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x190ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190ecc: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x190eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x190ed0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x190ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x190ed4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190ed8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190ED8u;
    {
        const bool branch_taken_0x190ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED8u;
        // 0x190edc: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed8) {
            ctx->pc = 0x190F10u;
            return;
        }
    }
    ctx->pc = 0x190EE0u;
}
