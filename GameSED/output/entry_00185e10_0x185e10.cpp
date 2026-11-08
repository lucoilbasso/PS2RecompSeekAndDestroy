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

// Function: entry_00185e10
// Address: 0x185e10 - 0x185e70
void entry_00185e10_0x185e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e10_0x185e10");
#endif

    ctx->pc = 0x185e10u;

    // 0x185e10: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185e14: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185e18: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185e1c: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185e20: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185e20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e28: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e2c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e30: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185e30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e34: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185e38: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185e3c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185e40: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185e44: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185e48: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185e4c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185e50: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185e54: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185e58: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185E58u;
    {
        const bool branch_taken_0x185e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E58u;
        // 0x185e5c: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e58) {
            ctx->pc = 0x185E70u;
            return;
        }
    }
    ctx->pc = 0x185E60u;
    // 0x185e60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185E64u;
    {
        const bool branch_taken_0x185e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E64u;
        // 0x185e68: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e64) {
            ctx->pc = 0x185E74u;
            return;
        }
    }
    ctx->pc = 0x185E6Cu;
    // 0x185e6c: 0x0  nop
    ctx->pc = 0x185e6cu;
    // NOP
    ctx->pc = 0x185e70u;
}
