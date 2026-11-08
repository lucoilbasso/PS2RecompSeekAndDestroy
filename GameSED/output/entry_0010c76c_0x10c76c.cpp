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

// Function: entry_0010c76c
// Address: 0x10c76c - 0x10c790
void entry_0010c76c_0x10c76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c76c_0x10c76c");
#endif

    ctx->pc = 0x10c76cu;

    // 0x10c76c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10c770: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x10c770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10c774: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C774u;
    {
        const bool branch_taken_0x10c774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C774u;
        // 0x10c778: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c774) {
            ctx->pc = 0x10C790u;
            return;
        }
    }
    ctx->pc = 0x10C77Cu;
    // 0x10c77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c788: 0x8062d46  j           func_18B518
    ctx->pc = 0x10C788u;
    ctx->pc = 0x10C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C788u;
    // 0x10c78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B518u;
    WSpriteStopSequence__FP8WcSpritei_0x18b518(rdram, ctx, runtime); return;
    ctx->pc = 0x10C790u;
}
