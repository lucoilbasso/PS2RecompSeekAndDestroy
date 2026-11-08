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

// Function: entry_0016bc10
// Address: 0x16bc10 - 0x16bc50
void entry_0016bc10_0x16bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc10_0x16bc10");
#endif

    ctx->pc = 0x16bc10u;

    // 0x16bc10: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x16bc14: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x16bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x16bc18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16bc1c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x16bc20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bc24: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x16bc28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16bc2c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16bc30: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x16bc34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16bc38: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x16bc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x16bc3c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x16bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x16bc40: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x16bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x16bc44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16BC44u;
    {
        const bool branch_taken_0x16bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC44u;
        // 0x16bc48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc44) {
            ctx->pc = 0x16BCBCu;
            return;
        }
    }
    ctx->pc = 0x16BC4Cu;
    // 0x16bc4c: 0x0  nop
    ctx->pc = 0x16bc4cu;
    // NOP
    ctx->pc = 0x16bc50u;
}
