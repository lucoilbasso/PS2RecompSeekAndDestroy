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

// Function: entry_00189ce8
// Address: 0x189ce8 - 0x189d28
void entry_00189ce8_0x189ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ce8_0x189ce8");
#endif

    ctx->pc = 0x189ce8u;

    // 0x189ce8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x189cec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x189cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x189cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x189cf4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189cf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189cfc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x189cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x189d00: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x189d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x189d04: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x189d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x189d08: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x189d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x189d0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x189d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x189d10: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x189d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x189d14: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x189d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x189d18: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x189d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x189d1c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x189D1Cu;
    {
        const bool branch_taken_0x189d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D1Cu;
        // 0x189d20: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d1c) {
            ctx->pc = 0x189D9Cu;
            return;
        }
    }
    ctx->pc = 0x189D24u;
    // 0x189d24: 0x0  nop
    ctx->pc = 0x189d24u;
    // NOP
    ctx->pc = 0x189d28u;
}
