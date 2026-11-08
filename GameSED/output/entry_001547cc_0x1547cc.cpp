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

// Function: entry_001547cc
// Address: 0x1547cc - 0x1547f0
void entry_001547cc_0x1547cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547cc_0x1547cc");
#endif

    ctx->pc = 0x1547ccu;

    // 0x1547cc: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1547d0: 0x108002d3  beqz        $a0, . + 4 + (0x2D3 << 2)
    ctx->pc = 0x1547D0u;
    {
        const bool branch_taken_0x1547d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D0u;
        // 0x1547d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547d0) {
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x1547D8u;
    // 0x1547d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1547d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1547dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1547dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1547e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1547e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1547e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1547e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1547e8: 0x8058ab0  j           func_162AC0
    ctx->pc = 0x1547E8u;
    ctx->pc = 0x1547ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547E8u;
    // 0x1547ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162AC0u;
    FarTrackChange__9ApcCqtanki_0x162ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1547F0u;
}
