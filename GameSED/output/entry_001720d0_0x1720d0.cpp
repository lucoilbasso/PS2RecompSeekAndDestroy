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

// Function: entry_001720d0
// Address: 0x1720d0 - 0x172130
void entry_001720d0_0x1720d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001720d0_0x1720d0");
#endif

    ctx->pc = 0x1720d0u;

    // 0x1720d0: 0x1ac0015b  blez        $s6, . + 4 + (0x15B << 2)
    ctx->pc = 0x1720D0u;
    {
        const bool branch_taken_0x1720d0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1720D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720D0u;
        // 0x1720d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720d0) {
            ctx->pc = 0x172640u;
            return;
        }
    }
    ctx->pc = 0x1720D8u;
    // 0x1720d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1720d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720e0: 0x961818  mult        $v1, $a0, $s6
    ctx->pc = 0x1720e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1720e4: 0x3c047200  lui         $a0, 0x7200
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29184 << 16));
    // 0x1720e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1720ec: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1720ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1720f0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1720f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1720f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1720fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172100: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x172100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x172104: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17210c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172110: 0x3c037200  lui         $v1, 0x7200
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29184 << 16));
    // 0x172114: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x172114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x172118: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x172118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x17211c: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x17211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x172120: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172124: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x172124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x172128: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x172128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x17212c: 0x57a021  addu        $s4, $v0, $s7
    ctx->pc = 0x17212cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->pc = 0x172130u;
}
