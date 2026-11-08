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

// Function: entry_0019c0f0
// Address: 0x19c0f0 - 0x19c120
void entry_0019c0f0_0x19c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c0f0_0x19c0f0");
#endif

    ctx->pc = 0x19c0f0u;

    // 0x19c0f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c0f4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x19c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c0f8: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c0fc: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x19c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x19c100: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c104: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C104u;
    {
        const bool branch_taken_0x19c104 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C104u;
        // 0x19c108: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c104) {
            ctx->pc = 0x19C150u;
            return;
        }
    }
    ctx->pc = 0x19C10Cu;
    // 0x19c10c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c110: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c114: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c11c: 0x0  nop
    ctx->pc = 0x19c11cu;
    // NOP
    ctx->pc = 0x19c120u;
}
