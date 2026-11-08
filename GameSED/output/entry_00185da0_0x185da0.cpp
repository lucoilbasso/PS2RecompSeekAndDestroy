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

// Function: entry_00185da0
// Address: 0x185da0 - 0x185df8
void entry_00185da0_0x185da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185da0_0x185da0");
#endif

    ctx->pc = 0x185da0u;

    // 0x185da0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185da4: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185da8: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185dac: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185dacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185db0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db4: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185db4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185db8: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185db8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185dbc: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185dc0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185dc4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185dc8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185dcc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185dd0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185dd4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185dd8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185ddc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185de0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185de4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x185DE4u;
    {
        const bool branch_taken_0x185de4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE4u;
        // 0x185de8: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de4) {
            ctx->pc = 0x185DF8u;
            return;
        }
    }
    ctx->pc = 0x185DECu;
    // 0x185dec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185DF0u;
    {
        const bool branch_taken_0x185df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF0u;
        // 0x185df4: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df0) {
            ctx->pc = 0x185DFCu;
            return;
        }
    }
    ctx->pc = 0x185DF8u;
}
