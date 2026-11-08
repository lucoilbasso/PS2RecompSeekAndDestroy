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

// Function: entry_001b5b34
// Address: 0x1b5b34 - 0x1b5b7c
void entry_001b5b34_0x1b5b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5b34_0x1b5b34");
#endif

    switch (ctx->pc) {
        case 0x1b5b6cu: goto label_1b5b6c;
        default: break;
    }

    ctx->pc = 0x1b5b34u;

    // 0x1b5b34: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b5b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b5b38: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b5b3c: 0xace5b2c0  sw          $a1, -0x4D40($a3)
    ctx->pc = 0x1b5b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40B2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40B2C0u, _value); } while (0);
    // 0x1b5b40: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5b40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5b44: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b5b48: 0x24e7b2c0  addiu       $a3, $a3, -0x4D40
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947520));
    // 0x1b5b4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5b50: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b5b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b58: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b5b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5b5c: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5b60: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5b64: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5B64u;
    SET_GPR_U32(ctx, 31, 0x1B5B6Cu);
    ctx->pc = 0x1B5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B64u;
    // 0x1b5b68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5B64u, 0x1B5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B6Cu;
label_1b5b6c:
    // 0x1b5b6c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5B6Cu;
    {
        const bool branch_taken_0x1b5b6c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5b6c) {
            ctx->pc = 0x1B5B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5B6Cu;
            // 0x1b5b70: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B7Cu;
            return;
        }
    }
    ctx->pc = 0x1B5B74u;
    // 0x1b5b74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5b78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b5b7cu;
}
