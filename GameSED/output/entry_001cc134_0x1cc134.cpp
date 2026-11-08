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

// Function: entry_001cc134
// Address: 0x1cc134 - 0x1cc170
void entry_001cc134_0x1cc134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc134_0x1cc134");
#endif

    switch (ctx->pc) {
        case 0x1cc13cu: goto label_1cc13c;
        default: break;
    }

    ctx->pc = 0x1cc134u;

    // 0x1cc134: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC134u;
    SET_GPR_U32(ctx, 31, 0x1CC13Cu);
    ctx->pc = 0x1CC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC134u;
    // 0x1cc138: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC134u, 0x1CC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC13Cu;
label_1cc13c:
    // 0x1cc13c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC13Cu;
    {
        const bool branch_taken_0x1cc13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc13c) {
            ctx->pc = 0x1CC140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC13Cu;
            // 0x1cc140: 0x8e8c0008  lw          $t4, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC188u;
            return;
        }
    }
    ctx->pc = 0x1CC144u;
    // 0x1cc144: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1cc144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1cc148: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC148u;
    {
        const bool branch_taken_0x1cc148 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC148u;
        // 0x1cc14c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc148) {
            ctx->pc = 0x1CC170u;
            return;
        }
    }
    ctx->pc = 0x1CC150u;
    // 0x1cc150: 0x2b31023  subu        $v0, $s5, $s3
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1cc154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc158: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1cc158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x1cc15c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc160: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1cc160u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1cc164: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CC164u;
    {
        const bool branch_taken_0x1cc164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC164u;
        // 0x1cc168: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc164) {
            ctx->pc = 0x1CC128u;
            return;
        }
    }
    ctx->pc = 0x1CC16Cu;
    // 0x1cc16c: 0x0  nop
    ctx->pc = 0x1cc16cu;
    // NOP
    ctx->pc = 0x1cc170u;
}
