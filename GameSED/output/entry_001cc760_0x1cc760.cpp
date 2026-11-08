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

// Function: entry_001cc760
// Address: 0x1cc760 - 0x1cc790
void entry_001cc760_0x1cc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc760_0x1cc760");
#endif

    ctx->pc = 0x1cc760u;

    // 0x1cc760: 0x1e00001b  bgtz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CC760u;
    {
        const bool branch_taken_0x1cc760 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC760u;
        // 0x1cc764: 0x32220005  andi        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc760) {
            ctx->pc = 0x1CC7D0u;
            return;
        }
    }
    ctx->pc = 0x1CC768u;
    // 0x1cc768: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1cc76c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC76Cu;
    {
        const bool branch_taken_0x1cc76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC76Cu;
        // 0x1cc770: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc76c) {
            ctx->pc = 0x1CC7D0u;
            return;
        }
    }
    ctx->pc = 0x1CC774u;
    // 0x1cc774: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC774u;
    {
        const bool branch_taken_0x1cc774 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC774u;
        // 0x1cc778: 0x2c71023  subu        $v0, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc774) {
            ctx->pc = 0x1CC790u;
            return;
        }
    }
    ctx->pc = 0x1CC77Cu;
    // 0x1cc77c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc780: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x1cc784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc788: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CC788u;
    {
        const bool branch_taken_0x1cc788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC788u;
        // 0x1cc78c: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc788) {
            ctx->pc = 0x1CC7CCu;
            return;
        }
    }
    ctx->pc = 0x1CC790u;
}
