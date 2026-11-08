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

// Function: entry_0013dfe8
// Address: 0x13dfe8 - 0x13e028
void entry_0013dfe8_0x13dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dfe8_0x13dfe8");
#endif

    ctx->pc = 0x13dfe8u;

    // 0x13dfe8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13dfec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13dff0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dff4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13dff8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dffc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13e000: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13e004: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13e004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13e008: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13e008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13e00c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13e010: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13e010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13e014: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x13e014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x13e018: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x13e018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x13e01c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13E01Cu;
    {
        const bool branch_taken_0x13e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E01Cu;
        // 0x13e020: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e01c) {
            ctx->pc = 0x13E09Cu;
            return;
        }
    }
    ctx->pc = 0x13E024u;
    // 0x13e024: 0x0  nop
    ctx->pc = 0x13e024u;
    // NOP
    ctx->pc = 0x13e028u;
}
