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

// Function: entry_00108484
// Address: 0x108484 - 0x1084d0
void entry_00108484_0x108484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108484_0x108484");
#endif

    ctx->pc = 0x108484u;

    // 0x108484: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108484u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108488: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10848c: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x10848cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108490: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108490u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x108494: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x108494u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108498: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10849c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x10849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1084a0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1084a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1084a4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1084a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1084a8: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x1084ac: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1084acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1084b0: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1084b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1084b4: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1084b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1084b8: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1084b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1084bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1084BCu;
    {
        const bool branch_taken_0x1084bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084bc) {
            ctx->pc = 0x1084D0u;
            return;
        }
    }
    ctx->pc = 0x1084C4u;
    // 0x1084c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1084c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1084C8u;
    {
        const bool branch_taken_0x1084c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084C8u;
        // 0x1084cc: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084c8) {
            ctx->pc = 0x1084D4u;
            return;
        }
    }
    ctx->pc = 0x1084D0u;
}
