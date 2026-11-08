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

// Function: entry_001cab80
// Address: 0x1cab80 - 0x1cabb0
void entry_001cab80_0x1cab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cab80_0x1cab80");
#endif

    ctx->pc = 0x1cab80u;

    // 0x1cab80: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cab84: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cab88: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cab8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cab90: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cab94: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cab98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cab9c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAB9Cu;
    {
        const bool branch_taken_0x1cab9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB9Cu;
        // 0x1caba0: 0x2da20002  sltiu       $v0, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab9c) {
            ctx->pc = 0x1CABCCu;
            return;
        }
    }
    ctx->pc = 0x1CABA4u;
    // 0x1caba4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1caba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1caba8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1caba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1cabac: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x1cabb0u;
}
