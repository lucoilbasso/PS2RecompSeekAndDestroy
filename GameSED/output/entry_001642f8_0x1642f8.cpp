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

// Function: entry_001642f8
// Address: 0x1642f8 - 0x164320
void entry_001642f8_0x1642f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642f8_0x1642f8");
#endif

    ctx->pc = 0x1642f8u;

label_1642f8:
    // 0x1642f8: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1642fc:
    // 0x1642fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_164300:
    if (ctx->pc == 0x164300u) {
        ctx->pc = 0x164300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642FCu;
        // 0x164300: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164304u;
        goto label_164304;
    }
    ctx->pc = 0x1642FCu;
    {
        const bool branch_taken_0x1642fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642FCu;
        // 0x164300: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642fc) {
            ctx->pc = 0x16434Cu;
            return;
        }
    }
    ctx->pc = 0x164304u;
label_164304:
    // 0x164304: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x164304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_164308:
    // 0x164308: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16430c:
    // 0x16430c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164310:
    // 0x164310: 0x8c636fb0  lw          $v1, 0x6FB0($v1)
    ctx->pc = 0x164310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28592)));
label_164314:
    // 0x164314: 0x600008  jr          $v1
label_164318:
    if (ctx->pc == 0x164318u) {
        ctx->pc = 0x16431Cu;
        goto label_16431c;
    }
    ctx->pc = 0x164314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16431Cu;
label_16431c:
    // 0x16431c: 0x0  nop
    ctx->pc = 0x16431cu;
    // NOP
    ctx->pc = 0x164320u;
}
