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

// Function: entry_00185d14
// Address: 0x185d14 - 0x185d70
void entry_00185d14_0x185d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d14_0x185d14");
#endif

    ctx->pc = 0x185d14u;

    // 0x185d14: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185d18: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185d1c: 0x244763b0  addiu       $a3, $v0, 0x63B0
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x185d20: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185d20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x185d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d28: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x185d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d30: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185d30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d34: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185d34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185d38: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185d3c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185d40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185d44: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185d48: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185d4c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185d50: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185d54: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185d58: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185d5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x185D5Cu;
    {
        const bool branch_taken_0x185d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D5Cu;
        // 0x185d60: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d5c) {
            ctx->pc = 0x185D70u;
            return;
        }
    }
    ctx->pc = 0x185D64u;
    // 0x185d64: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185D68u;
    {
        const bool branch_taken_0x185d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D68u;
        // 0x185d6c: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d68) {
            ctx->pc = 0x185D74u;
            return;
        }
    }
    ctx->pc = 0x185D70u;
}
