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

// Function: entry_00185c18
// Address: 0x185c18 - 0x185c70
void entry_00185c18_0x185c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c18_0x185c18");
#endif

    ctx->pc = 0x185c18u;

    // 0x185c18: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185c1c: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185c20: 0x24486350  addiu       $t0, $v0, 0x6350
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185c24: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c2c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c34: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185c34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c38: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185c38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185c3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185c40: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185c44: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185c48: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185c4c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185c50: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185c54: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185c58: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185c5c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185c60: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x185C60u;
    {
        const bool branch_taken_0x185c60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C60u;
        // 0x185c64: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c60) {
            ctx->pc = 0x185CD0u;
            return;
        }
    }
    ctx->pc = 0x185C68u;
    // 0x185c68: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x185C68u;
    {
        const bool branch_taken_0x185c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C68u;
        // 0x185c6c: 0xa4830008  sh          $v1, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c68) {
            ctx->pc = 0x185CD4u;
            return;
        }
    }
    ctx->pc = 0x185C70u;
}
