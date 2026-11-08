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

// Function: entry_001b57dc
// Address: 0x1b57dc - 0x1b5820
void entry_001b57dc_0x1b57dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b57dc_0x1b57dc");
#endif

    switch (ctx->pc) {
        case 0x1b5814u: goto label_1b5814;
        default: break;
    }

    ctx->pc = 0x1b57dcu;

    // 0x1b57dc: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b57dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b57e0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b57e4: 0xace5b2c0  sw          $a1, -0x4D40($a3)
    ctx->pc = 0x1b57e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40B2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40B2C0u, _value); } while (0);
    // 0x1b57e8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b57ec: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b57f0: 0x24e7b2c0  addiu       $a3, $a3, -0x4D40
    ctx->pc = 0x1b57f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947520));
    // 0x1b57f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b57f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b57fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b57fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5800: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5804: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5808: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b580c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B580Cu;
    SET_GPR_U32(ctx, 31, 0x1B5814u);
    ctx->pc = 0x1B5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B580Cu;
    // 0x1b5810: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B580Cu, 0x1B5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5814u;
label_1b5814:
    // 0x1b5814: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5814u;
    {
        const bool branch_taken_0x1b5814 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5814u;
        // 0x1b5818: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5814) {
            ctx->pc = 0x1B5820u;
            return;
        }
    }
    ctx->pc = 0x1B581Cu;
    // 0x1b581c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1b5820u;
}
