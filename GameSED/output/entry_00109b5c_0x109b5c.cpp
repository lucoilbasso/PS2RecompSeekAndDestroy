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

// Function: entry_00109b5c
// Address: 0x109b5c - 0x109b88
void entry_00109b5c_0x109b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109b5c_0x109b5c");
#endif

    ctx->pc = 0x109b5cu;

    // 0x109b5c: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x109b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956592)));
    // 0x109b60: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x109b64: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109b68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x109b6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109b70: 0x5044001a  beql        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109B70u;
    {
        const bool branch_taken_0x109b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x109b70) {
            ctx->pc = 0x109B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B70u;
            // 0x109b74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109BDCu;
            return;
        }
    }
    ctx->pc = 0x109B78u;
    // 0x109b78: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x109b7c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x109b80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109b84: 0x0  nop
    ctx->pc = 0x109b84u;
    // NOP
    ctx->pc = 0x109b88u;
}
