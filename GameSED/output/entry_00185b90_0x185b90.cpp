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

// Function: entry_00185b90
// Address: 0x185b90 - 0x185be8
void entry_00185b90_0x185b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b90_0x185b90");
#endif

    ctx->pc = 0x185b90u;

    // 0x185b90: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185b94: 0x244662f0  addiu       $a2, $v0, 0x62F0
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x185b98: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185b98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185b9c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ba0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ba4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ba8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185bac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185bb0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185bb4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185bb8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185bbc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185bc0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185bc4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185bc8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185bcc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185bd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x185BD0u;
    {
        const bool branch_taken_0x185bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BD0u;
        // 0x185bd4: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bd0) {
            ctx->pc = 0x185BE8u;
            return;
        }
    }
    ctx->pc = 0x185BD8u;
    // 0x185bd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BDCu;
        // 0x185be0: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185BECu;
            return;
        }
    }
    ctx->pc = 0x185BE4u;
    // 0x185be4: 0x0  nop
    ctx->pc = 0x185be4u;
    // NOP
    ctx->pc = 0x185be8u;
}
