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

// Function: entry_0019c020
// Address: 0x19c020 - 0x19c050
void entry_0019c020_0x19c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c020_0x19c020");
#endif

    ctx->pc = 0x19c020u;

label_19c020:
    // 0x19c020: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c024: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c028: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c02c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c034: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c038: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C038u;
    {
        const bool branch_taken_0x19c038 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c038) {
            ctx->pc = 0x19C020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c020;
        }
    }
    ctx->pc = 0x19C040u;
    // 0x19c040: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c044: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c048: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c04c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c04cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    ctx->pc = 0x19c050u;
}
