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

// Function: entry_001aa040
// Address: 0x1aa040 - 0x1aa068
void entry_001aa040_0x1aa040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa040_0x1aa040");
#endif

    ctx->pc = 0x1aa040u;

    // 0x1aa040: 0x55400009  bnel        $t2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA040u;
    {
        const bool branch_taken_0x1aa040 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa040) {
            ctx->pc = 0x1AA044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA040u;
            // 0x1aa044: 0x8d04003c  lw          $a0, 0x3C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA068u;
            return;
        }
    }
    ctx->pc = 0x1AA048u;
    // 0x1aa048: 0x8d03003c  lw          $v1, 0x3C($t0)
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1aa04c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1aa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1aa050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa054: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aa058: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1aa058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa05c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1aa05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1aa060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AA060u;
    {
        const bool branch_taken_0x1aa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA060u;
        // 0x1aa064: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa060) {
            ctx->pc = 0x1AA090u;
            return;
        }
    }
    ctx->pc = 0x1AA068u;
}
