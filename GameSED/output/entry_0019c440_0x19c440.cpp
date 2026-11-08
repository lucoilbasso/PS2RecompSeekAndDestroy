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

// Function: entry_0019c440
// Address: 0x19c440 - 0x19c470
void entry_0019c440_0x19c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c440_0x19c440");
#endif

    ctx->pc = 0x19c440u;

    // 0x19c440: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c444: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x19c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c448: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c44c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x19c450: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c454: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C454u;
    {
        const bool branch_taken_0x19c454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c454) {
            ctx->pc = 0x19C4A0u;
            return;
        }
    }
    ctx->pc = 0x19C45Cu;
    // 0x19c45c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c460: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c464: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c46c: 0x0  nop
    ctx->pc = 0x19c46cu;
    // NOP
    ctx->pc = 0x19c470u;
}
