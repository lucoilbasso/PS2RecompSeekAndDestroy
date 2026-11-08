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

// Function: entry_00185c70
// Address: 0x185c70 - 0x185cd0
void entry_00185c70_0x185c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c70_0x185c70");
#endif

    ctx->pc = 0x185c70u;

    // 0x185c70: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185c74: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185c78: 0x24486350  addiu       $t0, $v0, 0x6350
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185c7c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c84: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185c84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c88: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x185c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c8c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c90: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185c90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c94: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185c98: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185c9c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185ca0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185ca4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185ca8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185cac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185cb0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185cb4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185cb8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185CB8u;
    {
        const bool branch_taken_0x185cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CB8u;
        // 0x185cbc: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cb8) {
            ctx->pc = 0x185CD0u;
            return;
        }
    }
    ctx->pc = 0x185CC0u;
    // 0x185cc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185CC4u;
    {
        const bool branch_taken_0x185cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CC4u;
        // 0x185cc8: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cc4) {
            ctx->pc = 0x185CD4u;
            return;
        }
    }
    ctx->pc = 0x185CCCu;
    // 0x185ccc: 0x0  nop
    ctx->pc = 0x185cccu;
    // NOP
    ctx->pc = 0x185cd0u;
}
