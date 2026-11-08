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

// Function: entry_001d3ae8
// Address: 0x1d3ae8 - 0x1d3b1c
void entry_001d3ae8_0x1d3ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ae8_0x1d3ae8");
#endif

    ctx->pc = 0x1d3ae8u;

    // 0x1d3ae8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1d3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3aec: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1d3aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3af0: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1d3af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d3af4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3AF4u;
    {
        const bool branch_taken_0x1d3af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AF4u;
        // 0x1d3af8: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3af4) {
            ctx->pc = 0x1D3B1Cu;
            return;
        }
    }
    ctx->pc = 0x1D3AFCu;
    // 0x1d3afc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d3b08: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d3b0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d3b10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d3b14: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1d3b18: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    ctx->pc = 0x1d3b1cu;
}
