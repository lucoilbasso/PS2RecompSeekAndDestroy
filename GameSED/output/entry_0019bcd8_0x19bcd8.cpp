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

// Function: entry_0019bcd8
// Address: 0x19bcd8 - 0x19bd10
void entry_0019bcd8_0x19bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bcd8_0x19bcd8");
#endif

    ctx->pc = 0x19bcd8u;

label_19bcd8:
    // 0x19bcd8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19bcdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bce0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bce4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19bce8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bcec: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bcf0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BCF0u;
    {
        const bool branch_taken_0x19bcf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCF0u;
        // 0x19bcf4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcf0) {
            ctx->pc = 0x19BCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bcd8;
        }
    }
    ctx->pc = 0x19BCF8u;
    // 0x19bcf8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bcfc: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bd00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19bd00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F00Cu, _value); } while (0);
    // 0x19bd04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bd04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F008u, _value); } while (0);
    // 0x19bd08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bd0c: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    ctx->pc = 0x19bd10u;
}
