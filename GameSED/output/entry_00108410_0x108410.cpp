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

// Function: entry_00108410
// Address: 0x108410 - 0x108460
void entry_00108410_0x108410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108410_0x108410");
#endif

    ctx->pc = 0x108410u;

    // 0x108410: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x108414: 0x24634448  addiu       $v1, $v1, 0x4448
    ctx->pc = 0x108414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17480));
    // 0x108418: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x108418u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10841c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10841cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108420: 0xa4c40008  sh          $a0, 0x8($a2)
    ctx->pc = 0x108420u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x108424: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x108424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x108428: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x108428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x10842c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x10842cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108430: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108430u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108434: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x108434u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108438: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x108438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x10843c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x10843cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108440: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108444: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x108448: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x108448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x10844c: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x10844cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108450: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x108450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x108454: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x108454u;
    {
        const bool branch_taken_0x108454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xacc00014  sw          $zero, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108454) {
            ctx->pc = 0x1084F8u;
            return;
        }
    }
    ctx->pc = 0x10845Cu;
    // 0x10845c: 0x0  nop
    ctx->pc = 0x10845cu;
    // NOP
    ctx->pc = 0x108460u;
}
