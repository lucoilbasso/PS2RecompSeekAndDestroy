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

// Function: entry_001900d8
// Address: 0x1900d8 - 0x190118
void entry_001900d8_0x1900d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001900d8_0x1900d8");
#endif

    ctx->pc = 0x1900d8u;

    // 0x1900d8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1900dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1900dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1900e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1900e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1900e4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1900e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1900e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1900ec: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1900ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1900f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1900f4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1900f8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1900f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1900fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1900fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190100: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x190100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x190104: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x190104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x190108: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x190108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x19010c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19010Cu;
    {
        const bool branch_taken_0x19010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19010Cu;
        // 0x190110: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19010c) {
            ctx->pc = 0x190184u;
            return;
        }
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0x0  nop
    ctx->pc = 0x190114u;
    // NOP
    ctx->pc = 0x190118u;
}
