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

// Function: entry_0019bef8
// Address: 0x19bef8 - 0x19bf30
void entry_0019bef8_0x19bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bef8_0x19bef8");
#endif

    ctx->pc = 0x19bef8u;

label_19bef8:
    // 0x19bef8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19befc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19befcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bf00: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bf04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19bf08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bf0c: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19bf0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bf10: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BF10u;
    {
        const bool branch_taken_0x19bf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF10u;
        // 0x19bf14: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf10) {
            ctx->pc = 0x19BEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bef8;
        }
    }
    ctx->pc = 0x19BF18u;
    // 0x19bf18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bf1c: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19bf20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19bf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19bf24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    // 0x19bf28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bf2c: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    ctx->pc = 0x19bf30u;
}
