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

// Function: entry_00185f2c
// Address: 0x185f2c - 0x185f78
void entry_00185f2c_0x185f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f2c_0x185f2c");
#endif

    ctx->pc = 0x185f2cu;

    // 0x185f2c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f34: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f38: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185f38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f3c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185f40: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185f44: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185f48: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185f4c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185f50: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185f54: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185f58: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185f5c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185f60: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185f64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x185F64u;
    {
        const bool branch_taken_0x185f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F64u;
        // 0x185f68: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f64) {
            ctx->pc = 0x185F78u;
            return;
        }
    }
    ctx->pc = 0x185F6Cu;
    // 0x185f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185F70u;
    {
        const bool branch_taken_0x185f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F70u;
        // 0x185f74: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f70) {
            ctx->pc = 0x185F7Cu;
            return;
        }
    }
    ctx->pc = 0x185F78u;
}
