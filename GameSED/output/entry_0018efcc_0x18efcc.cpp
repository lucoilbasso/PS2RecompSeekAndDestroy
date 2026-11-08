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

// Function: entry_0018efcc
// Address: 0x18efcc - 0x18f000
void entry_0018efcc_0x18efcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018efcc_0x18efcc");
#endif

    ctx->pc = 0x18efccu;

    // 0x18efcc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18efd0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18efd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18efd8: 0x24421b88  addiu       $v0, $v0, 0x1B88
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7048));
    // 0x18efdc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x18efe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18efe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18efe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18efec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EFECu;
    {
        const bool branch_taken_0x18efec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFECu;
        // 0x18eff0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efec) {
            ctx->pc = 0x18F000u;
            return;
        }
    }
    ctx->pc = 0x18EFF4u;
    // 0x18eff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFF4u;
        // 0x18eff8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18F018u;
            return;
        }
    }
    ctx->pc = 0x18EFFCu;
    // 0x18effc: 0x0  nop
    ctx->pc = 0x18effcu;
    // NOP
    ctx->pc = 0x18f000u;
}
