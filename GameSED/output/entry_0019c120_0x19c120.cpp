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

// Function: entry_0019c120
// Address: 0x19c120 - 0x19c150
void entry_0019c120_0x19c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c120_0x19c120");
#endif

    ctx->pc = 0x19c120u;

label_19c120:
    // 0x19c120: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c124: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c128: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c12c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c134: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c138: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C138u;
    {
        const bool branch_taken_0x19c138 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C138u;
        // 0x19c13c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c138) {
            ctx->pc = 0x19C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c120;
        }
    }
    ctx->pc = 0x19C140u;
    // 0x19c140: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c144: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c148: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c14c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    ctx->pc = 0x19c150u;
}
