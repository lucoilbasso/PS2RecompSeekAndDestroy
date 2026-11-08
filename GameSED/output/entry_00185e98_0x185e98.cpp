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

// Function: entry_00185e98
// Address: 0x185e98 - 0x185ef8
void entry_00185e98_0x185e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e98_0x185e98");
#endif

    ctx->pc = 0x185e98u;

    // 0x185e98: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185e9c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x185ea0: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185ea4: 0x24476350  addiu       $a3, $v0, 0x6350
    ctx->pc = 0x185ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x185ea8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x185ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x185eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185eb0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x185eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eb4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x185eb8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x185eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x185ebc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x185ec0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x185ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x185ec4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x185ec8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x185ecc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x185eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x185ed0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x185ed4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x185ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x185ed8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x185edc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x185ee0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x185EE0u;
    {
        const bool branch_taken_0x185ee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EE0u;
        // 0x185ee4: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ee0) {
            ctx->pc = 0x185EF8u;
            return;
        }
    }
    ctx->pc = 0x185EE8u;
    // 0x185ee8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x185ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185EECu;
    {
        const bool branch_taken_0x185eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EECu;
        // 0x185ef0: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eec) {
            ctx->pc = 0x185EFCu;
            return;
        }
    }
    ctx->pc = 0x185EF4u;
    // 0x185ef4: 0x0  nop
    ctx->pc = 0x185ef4u;
    // NOP
    ctx->pc = 0x185ef8u;
}
